//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"



void fn_80048644(PPC::Runtime::GCContext* context)
{
/*80048644 00045444*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80048648 00045448*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004864C 0004544C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80048650 00045450*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80048654 00045454*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*80048658 00045458*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8004865C 0004545C*/ PPC::Runtime::ASM::beq(.L_80048668);
/*80048660 00045460*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80048664 00045464*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
RUNTIME_PPC_JUMP_LABEL(.L_80048668, 0x80048668) //this is a jump label
/*80048668 00045468*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004866C 0004546C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80048670 00045470*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80048674 00045474*/ PPC::Runtime::ASM::blr();
}