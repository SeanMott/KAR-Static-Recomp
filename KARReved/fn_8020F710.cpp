//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205884.hpp"



void fn_8020F710(PPC::Runtime::GCContext* context)
{
/*8020F710 0020C510*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F714 0020C514*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F718 0020C518*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020F71C 0020C51C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F720 0020C520*/ PPC::Runtime::ASM::bl(fn_80205884);
/*8020F724 0020C524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F728 0020C528*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F72C 0020C52C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F730 0020C530*/ PPC::Runtime::ASM::blr();
}