//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013CAB4(PPC::Runtime::GCContext* context)
{
/*8013CAB4 001398B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8013CAB8 001398B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013CABC 001398BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013CAC0 001398C0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8013CAC4 001398C4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8013CAC8 001398C8*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8013CACC 001398CC*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8013CAD0 001398D0*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8013CAD4 001398D4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013CAD8 001398D8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8013CADC 001398DC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6304 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CAE0 001398E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8013CAE4 001398E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013CAE8 001398E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013CAEC 001398EC*/ PPC::Runtime::ASM::beq(.L_8013CAFC);
/*8013CAF0 001398F0*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013CAF4 001398F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013CAF8 001398F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8013CAFC, 0x8013CAFC) //this is a jump label
/*8013CAFC 001398FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8013CB00 00139900*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013CB04 00139904*/ PPC::Runtime::ASM::beq(.L_8013CB14);
/*8013CB08 00139908*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013CB0C 0013990C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013CB10 00139910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8013CB14, 0x8013CB14) //this is a jump label
/*8013CB14 00139914*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8013CB18 00139918*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013CB1C 0013991C*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*8013CB20 00139920*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8013CB24 00139924*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CB28 00139928*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8013CB2C 0013992C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013CB30 00139930*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CB34 00139934*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8013CB38 00139938*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CB3C 0013993C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8013CB40 00139940*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8013CB44 00139944*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8013CB48 00139948*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8013CB4C 0013994C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8013CB50 00139950*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*8013CB54 00139954*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8013CB58 00139958*/ PPC::Runtime::ASM::extsb.(context->r0, context->r26);
/*8013CB5C 0013995C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CB60 00139960*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8013CB64 00139964*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8013CB68 00139968*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013CB6C 0013996C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CB70 00139970*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8013CB74 00139974*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CB78 00139978*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8013CB7C 0013997C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013CB80 00139980*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8013CB84 00139984*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8013CB88 00139988*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8013CB8C 0013998C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*8013CB90 00139990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8013CB94 00139994*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r30));
/*8013CB98 00139998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8013CB9C 0013999C*/ PPC::Runtime::ASM::bne(.L_8013CD1C);
/*8013CBA0 001399A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E024C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CBA4 001399A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CBA8 001399A8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CBAC 001399AC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6600 @ Get_MemoryOffset_SDA21);
/* 8013CBB0 001399B0  4C C6 32 42 */ crset context->cr1eq
/*8013CBB4 001399B4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CBB8 001399B8*/ PPC::Runtime::ASM::extsb(context->r28, context->r27);
/*8013CBBC 001399BC*/ PPC::Runtime::ASM::cmpwi(context->r28, -0x1);
/*8013CBC0 001399C0*/ PPC::Runtime::ASM::bne(.L_8013CBE0);
/*8013CBC4 001399C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0254 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CBC8 001399C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CBCC 001399CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CBD0 001399D0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6608 @ Get_MemoryOffset_SDA21);
/* 8013CBD4 001399D4  4C C6 32 42 */ crset context->cr1eq
/*8013CBD8 001399D8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CBDC 001399DC*/ PPC::Runtime::ASM::b(.L_8013CC70);
RUNTIME_PPC_JUMP_LABEL(.L_8013CBE0, 0x8013CBE0) //this is a jump label
/*8013CBE0 001399E0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0xa);
/*8013CBE4 001399E4*/ PPC::Runtime::ASM::blt(.L_8013CC54);
/*8013CBE8 001399E8*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013CBEC 001399EC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0254 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CBF0 001399F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013CBF4 001399F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013CBF8 001399F8  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013CBFC 001399FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CC00 00139A00*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013CC04 00139A04*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013CC08 00139A08*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013CC0C 00139A0C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 8013CC10 00139A10  4C C6 32 42 */ crset context->cr1eq
/*8013CC14 00139A14*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CC18 00139A18*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013CC1C 00139A1C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0258 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CC20 00139A20*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013CC24 00139A24*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013CC28 00139A28  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013CC2C 00139A2C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CC30 00139A30*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013CC34 00139A34*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013CC38 00139A38*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013CC3C 00139A3C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8013CC40 00139A40*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8013CC44 00139A44*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r28);
/* 8013CC48 00139A48  4C C6 32 42 */ crset context->cr1eq
/*8013CC4C 00139A4C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CC50 00139A50*/ PPC::Runtime::ASM::b(.L_8013CC70);
RUNTIME_PPC_JUMP_LABEL(.L_8013CC54, 0x8013CC54) //this is a jump label
/*8013CC54 00139A54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0254 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CC58 00139A58*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CC5C 00139A5C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CC60 00139A60*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8013CC64 00139A64*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/* 8013CC68 00139A68  4C C6 32 42 */ crset context->cr1eq
/*8013CC6C 00139A6C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8013CC70, 0x8013CC70) //this is a jump label
/*8013CC70 00139A70*/ PPC::Runtime::ASM::extsb.(context->r0, context->r29);
/*8013CC74 00139A74*/ PPC::Runtime::ASM::beq(.L_8013CC98);
/*8013CC78 00139A78*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1156 @ Get_MemoryOffset_HighBit);
/*8013CC7C 00139A7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E025C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CC80 00139A80*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_1156 @ Get_MemoryOffset_LowBit);
/*8013CC84 00139A84*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CC88 00139A88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/* 8013CC8C 00139A8C  4C C6 32 42 */ crset context->cr1eq
/*8013CC90 00139A90*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CC94 00139A94*/ PPC::Runtime::ASM::b(.L_8013CCB4);
RUNTIME_PPC_JUMP_LABEL(.L_8013CC98, 0x8013CC98) //this is a jump label
/*8013CC98 00139A98*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1157 @ Get_MemoryOffset_HighBit);
/*8013CC9C 00139A9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E025C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCA0 00139AA0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_1157 @ Get_MemoryOffset_LowBit);
/*8013CCA4 00139AA4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCA8 00139AA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/* 8013CCAC 00139AAC  4C C6 32 42 */ crset context->cr1eq
/*8013CCB0 00139AB0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8013CCB4, 0x8013CCB4) //this is a jump label
/*8013CCB4 00139AB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCB8 00139AB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CCBC 00139ABC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCC0 00139AC0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8013CCC4 00139AC4*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CCC8 00139AC8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCCC 00139ACC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CCD0 00139AD0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCD4 00139AD4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8013CCD8 00139AD8*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CCDC 00139ADC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCE0 00139AE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CCE4 00139AE4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCE8 00139AE8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8013CCEC 00139AEC*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CCF0 00139AF0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCF4 00139AF4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CCF8 00139AF8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CCFC 00139AFC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8013CD00 00139B00*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CD04 00139B04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CD08 00139B08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CD0C 00139B0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CD10 00139B10*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8013CD14 00139B14*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CD18 00139B18*/ PPC::Runtime::ASM::b(.L_8013CEA0);
RUNTIME_PPC_JUMP_LABEL(.L_8013CD1C, 0x8013CD1C) //this is a jump label
/*8013CD1C 00139B1C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E024C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CD20 00139B20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CD24 00139B24*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CD28 00139B28*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6610 @ Get_MemoryOffset_SDA21);
/* 8013CD2C 00139B2C  4C C6 32 42 */ crset context->cr1eq
/*8013CD30 00139B30*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CD34 00139B34*/ PPC::Runtime::ASM::extsb(context->r28, context->r27);
/*8013CD38 00139B38*/ PPC::Runtime::ASM::cmpwi(context->r28, 0xa);
/*8013CD3C 00139B3C*/ PPC::Runtime::ASM::blt(.L_8013CDC4);
/*8013CD40 00139B40*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013CD44 00139B44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0260 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CD48 00139B48*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013CD4C 00139B4C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013CD50 00139B50  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013CD54 00139B54*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CD58 00139B58*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013CD5C 00139B5C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013CD60 00139B60*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013CD64 00139B64*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 8013CD68 00139B68  4C C6 32 42 */ crset context->cr1eq
/*8013CD6C 00139B6C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CD70 00139B70*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013CD74 00139B74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CD78 00139B78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013CD7C 00139B7C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013CD80 00139B80  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013CD84 00139B84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CD88 00139B88*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013CD8C 00139B8C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013CD90 00139B90*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013CD94 00139B94*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8013CD98 00139B98*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8013CD9C 00139B9C*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r28);
/* 8013CDA0 00139BA0  4C C6 32 42 */ crset context->cr1eq
/*8013CDA4 00139BA4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CDA8 00139BA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CDAC 00139BAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CDB0 00139BB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CDB4 00139BB4*/ PPC::Runtime::ASM::li(context->r4, String_ "mi" Get_MemoryOffset_SDA21);
/* 8013CDB8 00139BB8  4C C6 32 42 */ crset context->cr1eq
/*8013CDBC 00139BBC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CDC0 00139BC0*/ PPC::Runtime::ASM::b(.L_8013CDF8);
RUNTIME_PPC_JUMP_LABEL(.L_8013CDC4, 0x8013CDC4) //this is a jump label
/*8013CDC4 00139BC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0260 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CDC8 00139BC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CDCC 00139BCC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CDD0 00139BD0*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8013CDD4 00139BD4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/* 8013CDD8 00139BD8  4C C6 32 42 */ crset context->cr1eq
/*8013CDDC 00139BDC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CDE0 00139BE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E026C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CDE4 00139BE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CDE8 00139BE8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CDEC 00139BEC*/ PPC::Runtime::ASM::li(context->r4, String_ "mi" Get_MemoryOffset_SDA21);
/* 8013CDF0 00139BF0  4C C6 32 42 */ crset context->cr1eq
/*8013CDF4 00139BF4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8013CDF8, 0x8013CDF8) //this is a jump label
/*8013CDF8 00139BF8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r29);
/*8013CDFC 00139BFC*/ PPC::Runtime::ASM::beq(.L_8013CE20);
/*8013CE00 00139C00*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1156 @ Get_MemoryOffset_HighBit);
/*8013CE04 00139C04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E025C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE08 00139C08*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_1156 @ Get_MemoryOffset_LowBit);
/*8013CE0C 00139C0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE10 00139C10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/* 8013CE14 00139C14  4C C6 32 42 */ crset context->cr1eq
/*8013CE18 00139C18*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013CE1C 00139C1C*/ PPC::Runtime::ASM::b(.L_8013CE3C);
RUNTIME_PPC_JUMP_LABEL(.L_8013CE20, 0x8013CE20) //this is a jump label
/*8013CE20 00139C20*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1157 @ Get_MemoryOffset_HighBit);
/*8013CE24 00139C24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E025C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE28 00139C28*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_1157 @ Get_MemoryOffset_LowBit);
/*8013CE2C 00139C2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE30 00139C30*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/* 8013CE34 00139C34  4C C6 32 42 */ crset context->cr1eq
/*8013CE38 00139C38*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8013CE3C, 0x8013CE3C) //this is a jump label
/*8013CE3C 00139C3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE40 00139C40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CE44 00139C44*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE48 00139C48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8013CE4C 00139C4C*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CE50 00139C50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE54 00139C54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CE58 00139C58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE5C 00139C5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8013CE60 00139C60*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CE64 00139C64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE68 00139C68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8013CE6C 00139C6C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE70 00139C70*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8013CE74 00139C74*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CE78 00139C78*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE7C 00139C7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CE80 00139C80*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE84 00139C84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8013CE88 00139C88*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013CE8C 00139C8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE90 00139C90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013CE94 00139C94*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013CE98 00139C98*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8013CE9C 00139C9C*/ PPC::Runtime::ASM::bl(fn_80450774);
RUNTIME_PPC_JUMP_LABEL(.L_8013CEA0, 0x8013CEA0) //this is a jump label
/*8013CEA0 00139CA0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8013CEA4 00139CA4*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8013CEA8 00139CA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013CEAC 00139CAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013CEB0 00139CB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8013CEB4 00139CB4*/ PPC::Runtime::ASM::blr();
}