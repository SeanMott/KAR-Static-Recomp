//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_80048748(PPC::Runtime::GCContext* context)
{
/*80048748 00045548*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004874C 0004554C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048750 00045550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048754 00045554*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80048758 00045558*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*8004875C 0004555C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80048760 00045560*/ PPC::Runtime::ASM::beq(.L_8004876C);
/*80048764 00045564*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*80048768 00045568*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
RUNTIME_PPC_JUMP_LABEL(.L_8004876C, 0x8004876C) //this is a jump label
/*8004876C 0004556C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048770 00045570*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048774 00045574*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048778 00045578*/ PPC::Runtime::ASM::blr();
}