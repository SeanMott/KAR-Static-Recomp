//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7118.hpp"



void fn_8009EB30(PPC::Runtime::GCContext* context)
{
/*8009EB30 0009B930*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8009EB34 0009B934*/ PPC::Runtime::ASM::mflr(context->r0);
/*8009EB38 0009B938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8009EB3C 0009B93C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8009EB40 0009B940*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8009EB44 0009B944*/ PPC::Runtime::ASM::slwi(context->r30, context->r4, 6);
/*8009EB48 0009B948*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8009EB4C 0009B94C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8009EB50 0009B950*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009EB54 0009B954*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8009EB58 0009B958*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r6));
/*8009EB5C 0009B95C*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x3c);
/*8009EB60 0009B960*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x54);
/*8009EB64 0009B964*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*8009EB68 0009B968*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r30);
/*8009EB6C 0009B96C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*8009EB70 0009B970*/ PPC::Runtime::ASM::lbzx(context->r3, context->r3, context->r6);
/*8009EB74 0009B974*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r0, 0, 27, 29);
/*8009EB78 0009B978*/ PPC::Runtime::ASM::lwzx(context->r4, context->r5, context->r4);
/* 8009EB7C 0009B97C  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*8009EB80 0009B980*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8009EB84 0009B984*/ PPC::Runtime::ASM::bne(.L_8009ECE0);
/* 8009EB88 0009B988  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*8009EB8C 0009B98C*/ PPC::Runtime::ASM::bne(.L_8009EBAC);
/*8009EB90 0009B990*/ PPC::Runtime::ASM::li(context->r4, lbl_805D5B48 @ Get_MemoryOffset_SDA21);
/*8009EB94 0009B994*/ PPC::Runtime::ASM::lbz(context->r5, lbl_805D5B48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009EB98 0009B998*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8009EB9C 0009B99C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8009EBA0 0009B9A0*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8009EBA4 0009B9A4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r1));
/*8009EBA8 0009B9A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8009EBAC, 0x8009EBAC) //this is a jump label
/*8009EBAC 0009B9AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8009EBB0 0009B9B0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8009EBB4 0009B9B4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8009EBB8 0009B9B8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*8009EBBC 0009B9BC*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x2c);
/*8009EBC0 0009B9C0*/ PPC::Runtime::ASM::bl(fn_800D7118);
/*8009EBC4 0009B9C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8009EBC8 0009B9C8*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x3c);
/*8009EBCC 0009B9CC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/* 8009EBD0 0009B9D0  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*8009EBD4 0009B9D4*/ PPC::Runtime::ASM::beq(.L_8009EBF0);
/*8009EBD8 0009B9D8*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_634 @ Get_MemoryOffset_HighBit);
/*8009EBDC 0009B9DC*/ PPC::Runtime::ASM::lis(context->r5, StructWithFuncPtrs_18 @ Get_MemoryOffset_HighBit);
/*8009EBE0 0009B9E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_634 @ Get_MemoryOffset_LowBit);
/*8009EBE4 0009B9E4*/ PPC::Runtime::ASM::li(context->r4, 0xdd);
/*8009EBE8 0009B9E8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructWithFuncPtrs_18 @ Get_MemoryOffset_LowBit);
/*8009EBEC 0009B9EC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8009EBF0, 0x8009EBF0) //this is a jump label
/*8009EBF0 0009B9F0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*8009EBF4 0009B9F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8009EBF8 0009B9F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*8009EBFC 0009B9FC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc);
/*8009EC00 0009BA00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8009EC04 0009BA04*/ PPC::Runtime::ASM::add(context->r30, context->r4, context->r30);
/*8009EC08 0009BA08*/ PPC::Runtime::ASM::cmpw(context->r0, context->r29);
/*8009EC0C 0009BA0C*/ PPC::Runtime::ASM::bne(.L_8009EC28);
/*8009EC10 0009BA10*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DF078 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009EC14 0009BA14*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8009EC18 0009BA18*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8009EC1C 0009BA1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8009EC20 0009BA20*/ PPC::Runtime::ASM::bl(fn_GXSetChanMatColor);
/*8009EC24 0009BA24*/ PPC::Runtime::ASM::b(.L_8009EC3C);
RUNTIME_PPC_JUMP_LABEL(.L_8009EC28, 0x8009EC28) //this is a jump label
/*8009EC28 0009BA28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8009EC2C 0009BA2C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8009EC30 0009BA30*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8009EC34 0009BA34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8009EC38 0009BA38*/ PPC::Runtime::ASM::bl(fn_GXSetChanMatColor);
RUNTIME_PPC_JUMP_LABEL(.L_8009EC3C, 0x8009EC3C) //this is a jump label
/*8009EC3C 0009BA3C*/ PPC::Runtime::ASM::li(context->r3, 0x90);
/*8009EC40 0009BA40*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8009EC44 0009BA44*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8009EC48 0009BA48*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8009EC4C 0009BA4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8009EC50 0009BA50*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*8009EC54 0009BA54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC58 0009BA58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8009EC5C 0009BA5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC60 0009BA60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8009EC64 0009BA64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC68 0009BA68*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8009EC6C 0009BA6C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8009EC70 0009BA70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8009EC74 0009BA74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC78 0009BA78*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC7C 0009BA7C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC80 0009BA80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8009EC84 0009BA84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC88 0009BA88*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8009EC8C 0009BA8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC90 0009BA90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8009EC94 0009BA94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009EC98 0009BA98*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8009EC9C 0009BA9C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8009ECA0 0009BAA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8009ECA4 0009BAA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECA8 0009BAA8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECAC 0009BAAC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECB0 0009BAB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8009ECB4 0009BAB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECB8 0009BAB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8009ECBC 0009BABC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECC0 0009BAC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8009ECC4 0009BAC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECC8 0009BAC8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8009ECCC 0009BACC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8009ECD0 0009BAD0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8009ECD4 0009BAD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECD8 0009BAD8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*8009ECDC 0009BADC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8009ECE0, 0x8009ECE0) //this is a jump label
/*8009ECE0 0009BAE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8009ECE4 0009BAE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8009ECE8 0009BAE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8009ECEC 0009BAEC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8009ECF0 0009BAF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8009ECF4 0009BAF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8009ECF8 0009BAF8*/ PPC::Runtime::ASM::blr();
}