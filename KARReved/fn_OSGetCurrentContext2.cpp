//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_OSGetCurrentContext2(PPC::Runtime::GCContext* context)
{
/*803D45CC 003D13CC*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803D45D0 003D13D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r3));
/*803D45D4 003D13D4*/ PPC::Runtime::ASM::blr();
}