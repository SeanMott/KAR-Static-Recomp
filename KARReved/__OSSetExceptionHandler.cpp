//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __OSSetExceptionHandler(PPC::Runtime::GCContext* context)
{
/*803D2C7C 003CFA7C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*803D2C80 003CFA80*/ PPC::Runtime::ASM::lwz(context->r3, OSExceptionTable_805DDE8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D2C84 003CFA84*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803D2C88 003CFA88*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*803D2C8C 003CFA8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D2C90 003CFA90*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D2C94 003CFA94*/ PPC::Runtime::ASM::blr();
}