//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025B760.hpp"
#include "fn_8025B7E0.hpp"



void fn_8025B6FC(PPC::Runtime::GCContext* context)
{
/*8025B6FC 002584FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B700 00258500*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B704 00258504*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B708 00258508*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B70C 0025850C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B710 00258510*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025B714 00258514*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025B718 00258518*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B71C 0025851C*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025B720 00258520*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025B724 00258524  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025B728 00258528*/ PPC::Runtime::ASM::bne(.L_8025B738);
/*8025B72C 0025852C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025B730 00258530*/ PPC::Runtime::ASM::bl(fn_8025B760);
/*8025B734 00258534*/ PPC::Runtime::ASM::b(.L_8025B740);
RUNTIME_PPC_JUMP_LABEL(.L_8025B738, 0x8025B738) //this is a jump label
/*8025B738 00258538*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025B73C 0025853C*/ PPC::Runtime::ASM::bl(fn_8025B7E0);
RUNTIME_PPC_JUMP_LABEL(.L_8025B740, 0x8025B740) //this is a jump label
/*8025B740 00258540*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B744 00258544*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B748 00258548*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B74C 0025854C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B750 00258550*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B754 00258554*/ PPC::Runtime::ASM::blr();
}