//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80420FBC(PPC::Runtime::GCContext* context)
{
/*80420FBC 0041DDBC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80420FC0 0041DDC0*/ PPC::Runtime::ASM::andc(context->r0, context->r6, context->r5);
/*80420FC4 0041DDC4*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*80420FC8 0041DDC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80420FCC 0041DDCC*/ PPC::Runtime::ASM::blr();
}