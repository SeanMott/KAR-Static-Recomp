//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_80048548(PPC::Runtime::GCContext* context)
{
/*80048548 00045348*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004854C 0004534C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80048550 00045350*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048554 00045354*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80048558 00045358*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*8004855C 0004535C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80048560 00045360*/ PPC::Runtime::ASM::beq(.L_8004856C);
/*80048564 00045364*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*80048568 00045368*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
RUNTIME_PPC_JUMP_LABEL(.L_8004856C, 0x8004856C) //this is a jump label
/*8004856C 0004536C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048570 00045370*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048574 00045374*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048578 00045378*/ PPC::Runtime::ASM::blr();
}