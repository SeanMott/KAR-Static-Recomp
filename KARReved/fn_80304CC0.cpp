//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80304CC0(PPC::Runtime::GCContext* context)
{
/*80304CC0 00301AC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80304CC4 00301AC4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*80304CC8 00301AC8*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*80304CCC 00301ACC*/ PPC::Runtime::ASM::blr();
}