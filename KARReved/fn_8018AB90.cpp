//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8018AB90(PPC::Runtime::GCContext* context)
{
/*8018AB90 00187990*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8018AB94 00187994*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018AB98 00187998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8018AB9C 0018799C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8018ABA0 001879A0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8018ABA4 001879A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018ABA8 001879A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8018ABAC 001879AC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0FF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018ABB0 001879B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8018ABB4 001879B4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8018ABB8 001879B8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f4);
/*8018ABBC 001879BC*/ PPC::Runtime::ASM::beq(.L_8018ACC4);
/*8018ABC0 001879C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/* 8018ABC4 001879C4  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*8018ABC8 001879C8*/ PPC::Runtime::ASM::beq(.L_8018ABD8);
/*8018ABCC 001879CC*/ PPC::Runtime::ASM::fmr(context->f5, context->f4);
/*8018ABD0 001879D0*/ PPC::Runtime::ASM::fmr(context->f6, context->f4);
/*8018ABD4 001879D4*/ PPC::Runtime::ASM::b(.L_8018AC2C);
RUNTIME_PPC_JUMP_LABEL(.L_8018ABD8, 0x8018ABD8) //this is a jump label
/*8018ABD8 001879D8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8018ABDC 001879DC*/ PPC::Runtime::ASM::beq(.L_8018AC08);
/*8018ABE0 001879E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8018ABE4 001879E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8018ABE8 001879E8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8018ABEC 001879EC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8018ABF0 001879F0*/ PPC::Runtime::ASM::fsubs(context->f6, context->f1, context->f0);
/*8018ABF4 001879F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8018ABF8 001879F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8018ABFC 001879FC*/ PPC::Runtime::ASM::fsubs(context->f5, context->f3, context->f2);
/*8018AC00 00187A00*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*8018AC04 00187A04*/ PPC::Runtime::ASM::b(.L_8018AC2C);
RUNTIME_PPC_JUMP_LABEL(.L_8018AC08, 0x8018AC08) //this is a jump label
/*8018AC08 00187A08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8018AC0C 00187A0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8018AC10 00187A10*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8018AC14 00187A14*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8018AC18 00187A18*/ PPC::Runtime::ASM::fsubs(context->f6, context->f1, context->f0);
/*8018AC1C 00187A1C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8018AC20 00187A20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8018AC24 00187A24*/ PPC::Runtime::ASM::fsubs(context->f5, context->f3, context->f2);
/*8018AC28 00187A28*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8018AC2C, 0x8018AC2C) //this is a jump label
/*8018AC2C 00187A2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/* 8018AC30 00187A30  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*8018AC34 00187A34*/ PPC::Runtime::ASM::beq(.L_8018AC48);
/*8018AC38 00187A38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018AC3C 00187A3C*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*8018AC40 00187A40*/ PPC::Runtime::ASM::fmr(context->f7, context->f0);
/*8018AC44 00187A44*/ PPC::Runtime::ASM::b(.L_8018AC9C);
RUNTIME_PPC_JUMP_LABEL(.L_8018AC48, 0x8018AC48) //this is a jump label
/*8018AC48 00187A48*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*8018AC4C 00187A4C*/ PPC::Runtime::ASM::beq(.L_8018AC78);
/*8018AC50 00187A50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8018AC54 00187A54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*8018AC58 00187A58*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8018AC5C 00187A5C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*8018AC60 00187A60*/ PPC::Runtime::ASM::fsubs(context->f7, context->f1, context->f0);
/*8018AC64 00187A64*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8018AC68 00187A68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*8018AC6C 00187A6C*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f2);
/*8018AC70 00187A70*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8018AC74 00187A74*/ PPC::Runtime::ASM::b(.L_8018AC9C);
RUNTIME_PPC_JUMP_LABEL(.L_8018AC78, 0x8018AC78) //this is a jump label
/*8018AC78 00187A78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8018AC7C 00187A7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*8018AC80 00187A80*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*8018AC84 00187A84*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*8018AC88 00187A88*/ PPC::Runtime::ASM::fsubs(context->f7, context->f1, context->f0);
/*8018AC8C 00187A8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*8018AC90 00187A90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r5));
/*8018AC94 00187A94*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f2);
/*8018AC98 00187A98*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8018AC9C, 0x8018AC9C) //this is a jump label
/*8018AC9C 00187A9C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f6, context->f7);
/*8018ACA0 00187AA0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8018ACA4 00187AA4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f5, context->f3);
/*8018ACA8 00187AA8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8018ACAC 00187AAC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8018ACB0 00187AB0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018ACB4 00187AB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018ACB8 00187AB8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8018ACBC 00187ABC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8018ACC0 00187AC0*/ PPC::Runtime::ASM::fmadds(context->f31, context->f0, context->f1, context->f31);
RUNTIME_PPC_JUMP_LABEL(.L_8018ACC4, 0x8018ACC4) //this is a jump label
/*8018ACC4 00187AC4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8018ACC8 00187AC8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8018ACCC 00187ACC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8018ACD0 00187AD0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8018ACD4 00187AD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018ACD8 00187AD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018ACDC 00187ADC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8018ACE0 00187AE0*/ PPC::Runtime::ASM::blr();
}