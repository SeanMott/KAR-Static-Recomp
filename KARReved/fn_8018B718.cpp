//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018BD74.hpp"
#include "fn_80189784.hpp"



void fn_8018B718(PPC::Runtime::GCContext* context)
{
/*8018B718 00188518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8018B71C 0018851C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018B720 00188520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018B724 00188524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8018B728 00188528*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8018B72C 0018852C*/ PPC::Runtime::ASM::bne(.L_8018B738);
/*8018B730 00188530*/ PPC::Runtime::ASM::bl(fn_8018BD74);
/*8018B734 00188534*/ PPC::Runtime::ASM::b(.L_8018B74C);
RUNTIME_PPC_JUMP_LABEL(.L_8018B738, 0x8018B738) //this is a jump label
/*8018B738 00188538*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*8018B73C 0018853C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8018B740 00188540*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*8018B744 00188544*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*8018B748 00188548*/ PPC::Runtime::ASM::bl(fn_80189784);
RUNTIME_PPC_JUMP_LABEL(.L_8018B74C, 0x8018B74C) //this is a jump label
/*8018B74C 0018854C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018B750 00188550*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018B754 00188554*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8018B758 00188558*/ PPC::Runtime::ASM::blr();
}