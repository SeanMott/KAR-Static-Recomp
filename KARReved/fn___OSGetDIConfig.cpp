//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___OSGetDIConfig(PPC::Runtime::GCContext* context)
{
/*803D2DF4 003CFBF4*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803D2DF8 003CFBF8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x6000);
/*803D2DFC 003CFBFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803D2E00 003CFC00*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 24);
/*803D2E04 003CFC04*/ PPC::Runtime::ASM::blr();
}