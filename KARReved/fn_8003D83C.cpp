//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003D83C(PPC::Runtime::GCContext* context)
{
/*8003D83C 0003A63C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003D840 0003A640*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003D844 0003A644*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D848 0003A648*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003D84C 0003A64C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35d, context->r3));
/*8003D850 0003A650*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8003D854 0003A654*/ PPC::Runtime::ASM::bne(.L_8003D86C);
/*8003D858 0003A658*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x362, context->r3));
/*8003D85C 0003A65C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8003D860 0003A660*/ PPC::Runtime::ASM::bne(.L_8003D86C);
/*8003D864 0003A664*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8003D868 0003A668*/ PPC::Runtime::ASM::b(.L_8003D870);
RUNTIME_PPC_JUMP_LABEL(.L_8003D86C, 0x8003D86C) //this is a jump label
/*8003D86C 0003A66C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8003D870, 0x8003D870) //this is a jump label
/*8003D870 0003A670*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D874 0003A674*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003D878 0003A678*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003D87C 0003A67C*/ PPC::Runtime::ASM::blr();
}