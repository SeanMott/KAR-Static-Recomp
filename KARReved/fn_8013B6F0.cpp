//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013B6F0(PPC::Runtime::GCContext* context)
{
/*8013B6F0 001384F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8013B6F4 001384F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013B6F8 001384F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013B6FC 001384FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013B700 00138500*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013B704 00138504*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013B708 00138508*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013B70C 0013850C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013B710 00138510*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x28);
/*8013B714 00138514*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8013B718 00138518*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B71C 0013851C*/ PPC::Runtime::ASM::beq(.L_8013B72C);
/*8013B720 00138520*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B724 00138524*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013B728 00138528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013B72C, 0x8013B72C) //this is a jump label
/*8013B72C 0013852C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8013B730 00138530*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B734 00138534*/ PPC::Runtime::ASM::beq(.L_8013B744);
/*8013B738 00138538*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B73C 0013853C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013B740 00138540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013B744, 0x8013B744) //this is a jump label
/*8013B744 00138544*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8013B748 00138548*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B74C 0013854C*/ PPC::Runtime::ASM::beq(.L_8013B75C);
/*8013B750 00138550*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B754 00138554*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013B758 00138558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013B75C, 0x8013B75C) //this is a jump label
/*8013B75C 0013855C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8013B760 00138560*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B764 00138564*/ PPC::Runtime::ASM::beq(.L_8013B774);
/*8013B768 00138568*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B76C 0013856C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013B770 00138570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013B774, 0x8013B774) //this is a jump label
/*8013B774 00138574*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8013B778 00138578*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B77C 0013857C*/ PPC::Runtime::ASM::beq(.L_8013B78C);
/*8013B780 00138580*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B784 00138584*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013B788 00138588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013B78C, 0x8013B78C) //this is a jump label
/*8013B78C 0013858C*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*8013B790 00138590*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8013B794 00138594*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8013B798, 0x8013B798) //this is a jump label
/*8013B798 00138598*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8013B79C 0013859C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B7A0 001385A0*/ PPC::Runtime::ASM::beq(.L_8013B7AC);
/*8013B7A4 001385A4*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B7A8 001385A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8013B7AC, 0x8013B7AC) //this is a jump label
/*8013B7AC 001385AC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8013B7B0 001385B0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8013B7B4 001385B4*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x8);
/*8013B7B8 001385B8*/ PPC::Runtime::ASM::blt(.L_8013B798);
/*8013B7BC 001385BC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8013B7C0 001385C0*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*8013B7C4 001385C4*/ PPC::Runtime::ASM::mr(context->r30, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_8013B7C8, 0x8013B7C8) //this is a jump label
/*8013B7C8 001385C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8013B7CC 001385CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B7D0 001385D0*/ PPC::Runtime::ASM::beq(.L_8013B7DC);
/*8013B7D4 001385D4*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B7D8 001385D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8013B7DC, 0x8013B7DC) //this is a jump label
/*8013B7DC 001385DC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8013B7E0 001385E0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8013B7E4 001385E4*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*8013B7E8 001385E8*/ PPC::Runtime::ASM::blt(.L_8013B7C8);
/*8013B7EC 001385EC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8013B7F0 001385F0*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*8013B7F4 001385F4*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8013B7F8, 0x8013B7F8) //this is a jump label
/*8013B7F8 001385F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*8013B7FC 001385FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013B800 00138600*/ PPC::Runtime::ASM::beq(.L_8013B80C);
/*8013B804 00138604*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013B808 00138608*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8013B80C, 0x8013B80C) //this is a jump label
/*8013B80C 0013860C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8013B810 00138610*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8013B814 00138614*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x8);
/*8013B818 00138618*/ PPC::Runtime::ASM::blt(.L_8013B7F8);
/*8013B81C 0013861C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013B820 00138620*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013B824 00138624*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013B828 00138628*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013B82C 0013862C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013B830 00138630*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013B834 00138634*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8013B838 00138638*/ PPC::Runtime::ASM::blr();
}