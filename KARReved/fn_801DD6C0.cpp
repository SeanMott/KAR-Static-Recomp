//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CB968.hpp"
#include "fn_8005F600.hpp"
#include "fn_8005F6A8.hpp"
#include "fn_8005E7D8.hpp"



void fn_801DD6C0(PPC::Runtime::GCContext* context)
{
/*801DD6C0 001DA4C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801DD6C4 001DA4C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DD6C8 001DA4C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801DD6CC 001DA4CC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801DD6D0 001DA4D0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801DD6D4 001DA4D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801DD6D8 001DA4D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801DD6DC 001DA4DC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DD6E0 001DA4E0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801DD6E4 001DA4E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r3));
/*801DD6E8 001DA4E8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801DD6EC 001DA4EC*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801DD6F0 001DA4F0*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/* 801DD6F4 001DA4F4  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801DD6F8 001DA4F8*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*801DD6FC 001DA4FC*/ PPC::Runtime::ASM::beq(.L_801DD7CC);
/*801DD700 001DA500*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x36c);
/*801DD704 001DA504*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801DD708 001DA508*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801DD70C 001DA50C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801DD710 001DA510*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801DD714 001DA514*/ PPC::Runtime::ASM::bne(.L_801DD7CC);
/*801DD718 001DA518*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801DD71C 001DA51C*/ PPC::Runtime::ASM::bl(fn_801CB968);
/*801DD720 001DA520*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801DD724 001DA524*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DD728 001DA528*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*801DD72C 001DA52C*/ PPC::Runtime::ASM::beq(.L_801DD7CC);
/*801DD730 001DA530*/ PPC::Runtime::ASM::mr(context->r12, context->r31);
/*801DD734 001DA534*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801DD738 001DA538*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801DD73C 001DA53C*/ PPC::Runtime::ASM::bctrl();
/*801DD740 001DA540*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801DD744 001DA544*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801DD748 001DA548*/ PPC::Runtime::ASM::beq(.L_801DD7E4);
/*801DD74C 001DA54C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801DD750 001DA550*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DD754 001DA554*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f1);
/*801DD758 001DA558*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801DD75C 001DA55C*/ PPC::Runtime::ASM::ble(.L_801DD764);
/*801DD760 001DA560*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DD764, 0x801DD764) //this is a jump label
/*801DD764 001DA564*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DD768 001DA568*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801DD76C 001DA56C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801DD770 001DA570*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*801DD774 001DA574*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DD778 001DA578*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DD77C 001DA57C*/ PPC::Runtime::ASM::bl(fn_8005F600);
/*801DD780 001DA580*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801DD784 001DA584*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DD788 001DA588*/ PPC::Runtime::ASM::fmuls(context->f2, context->f31, context->f1);
/*801DD78C 001DA58C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801DD790 001DA590*/ PPC::Runtime::ASM::ble(.L_801DD798);
/*801DD794 001DA594*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DD798, 0x801DD798) //this is a jump label
/*801DD798 001DA598*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*801DD79C 001DA59C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801DD7A0 001DA5A0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801DD7A4 001DA5A4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f0, context->f1);
/*801DD7A8 001DA5A8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*801DD7AC 001DA5AC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801DD7B0 001DA5B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DD7B4 001DA5B4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x960);
/*801DD7B8 001DA5B8*/ PPC::Runtime::ASM::ble(.L_801DD7C0);
/*801DD7BC 001DA5BC*/ PPC::Runtime::ASM::li(context->r4, 0x960);
RUNTIME_PPC_JUMP_LABEL(.L_801DD7C0, 0x801DD7C0) //this is a jump label
/*801DD7C0 001DA5C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801DD7C4 001DA5C4*/ PPC::Runtime::ASM::bl(fn_8005F6A8);
/*801DD7C8 001DA5C8*/ PPC::Runtime::ASM::b(.L_801DD7E4);
RUNTIME_PPC_JUMP_LABEL(.L_801DD7CC, 0x801DD7CC) //this is a jump label
/*801DD7CC 001DA5CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a4, context->r28));
/*801DD7D0 001DA5D0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801DD7D4 001DA5D4*/ PPC::Runtime::ASM::beq(.L_801DD7E4);
/*801DD7D8 001DA5D8*/ PPC::Runtime::ASM::bl(fn_8005E7D8);
/*801DD7DC 001DA5DC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801DD7E0 001DA5E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a4, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_801DD7E4, 0x801DD7E4) //this is a jump label
/*801DD7E4 001DA5E4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801DD7E8 001DA5E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801DD7EC 001DA5EC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801DD7F0 001DA5F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801DD7F4 001DA5F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801DD7F8 001DA5F8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DD7FC 001DA5FC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801DD800 001DA600*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DD804 001DA604*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801DD808 001DA608*/ PPC::Runtime::ASM::blr();
}