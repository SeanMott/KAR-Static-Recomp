//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80114F04(PPC::Runtime::GCContext* context)
{
/*80114F04 00111D04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80114F08 00111D08*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80114F0C 00111D0C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80114F10 00111D10*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*80114F14 00111D14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80114F18 00111D18*/ PPC::Runtime::ASM::blr();
}