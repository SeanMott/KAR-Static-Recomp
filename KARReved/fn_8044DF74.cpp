//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80448C24.hpp"
#include "fn_80448C24.hpp"
#include "fn_803EC308.hpp"
#include "fn___assert.hpp"
#include "fn_80448C24.hpp"
#include "fn_80448C24.hpp"
#include "fn_803EC308.hpp"
#include "fn___cvt_fp2unsigned.hpp"
#include "fn_803EECCC.hpp"
#include "fn_803EEF24.hpp"
#include "fn_803EECCC.hpp"
#include "fn_803EEF24.hpp"
#include "fn___assert.hpp"
#include "fn_8044DE74.hpp"
#include "fn_8044DE74.hpp"
#include "fn_80446ACC.hpp"



void fn_8044DF74(PPC::Runtime::GCContext* context)
{
/*8044DF74 0044AD74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8044DF78 0044AD78*/ PPC::Runtime::ASM::mflr(context->r0);
/*8044DF7C 0044AD7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8044DF80 0044AD80*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8044DF84 0044AD84*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8044DF88 0044AD88*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8044DF8C 0044AD8C*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*8044DF90 0044AD90*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 26);
/*8044DF94 0044AD94*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_HighBit);
/*8044DF98 0044AD98*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/* 8044DF9C 0044AD9C  7C 9B 23 79 */ mr. context->r27 , context->r4
/*8044DFA0 0044ADA0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_LowBit);
/*8044DFA4 0044ADA4*/ PPC::Runtime::ASM::lis(context->r4, lbl_80508D58 @ Get_MemoryOffset_HighBit);
/*8044DFA8 0044ADA8*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0x8c0);
/*8044DFAC 0044ADAC*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8044DFB0 0044ADB0*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_80508D58 @ Get_MemoryOffset_LowBit);
/*8044DFB4 0044ADB4*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r0);
/*8044DFB8 0044ADB8*/ PPC::Runtime::ASM::ble(.L_8044DFCC);
/*8044DFBC 0044ADBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8044DFC0 0044ADC0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*8044DFC4 0044ADC4*/ PPC::Runtime::ASM::bne(.L_8044DFCC);
/*8044DFC8 0044ADC8*/ PPC::Runtime::ASM::b(.L_8044DFD0);
RUNTIME_PPC_JUMP_LABEL(.L_8044DFCC, 0x8044DFCC) //this is a jump label
/*8044DFCC 0044ADCC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8044DFD0, 0x8044DFD0) //this is a jump label
/*8044DFD0 0044ADD0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8044DFD4 0044ADD4*/ PPC::Runtime::ASM::beq(.L_8044E220);
/*8044DFD8 0044ADD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044DFDC 0044ADDC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r29));
/*8044DFE0 0044ADE0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r29));
/*8044DFE4 0044ADE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*8044DFE8 0044ADE8*/ PPC::Runtime::ASM::bne(.L_8044E098);
/*8044DFEC 0044ADEC*/ PPC::Runtime::ASM::lis(context->r4, fn_80448C24 @ Get_MemoryOffset_HighBit);
/*8044DFF0 0044ADF0*/ PPC::Runtime::ASM::li(context->r3, 0x1f);
/*8044DFF4 0044ADF4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80448C24 @ Get_MemoryOffset_LowBit);
/*8044DFF8 0044ADF8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8044DFFC 0044ADFC*/ PPC::Runtime::ASM::bl(fn_803EC308);
/*8044E000 0044AE00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8044E004 0044AE04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8044E008 0044AE08*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8044E00C 0044AE0C*/ PPC::Runtime::ASM::bne(.L_8044E020);
/*8044E010 0044AE10*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x800);
/*8044E014 0044AE14*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044E018 0044AE18*/ PPC::Runtime::ASM::li(context->r4, 0xe3d);
/*8044E01C 0044AE1C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044E020, 0x8044E020) //this is a jump label
/*8044E020 0044AE20*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8044E024 0044AE24*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8044E028 0044AE28*/ PPC::Runtime::ASM::beq(.L_8044E098);
/*8044E02C 0044AE2C*/ PPC::Runtime::ASM::lis(context->r4, fn_80448C24 @ Get_MemoryOffset_HighBit);
/*8044E030 0044AE30*/ PPC::Runtime::ASM::li(context->r3, 0x1f);
/*8044E034 0044AE34*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80448C24 @ Get_MemoryOffset_LowBit);
/*8044E038 0044AE38*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8044E03C 0044AE3C*/ PPC::Runtime::ASM::bl(fn_803EC308);
/*8044E040 0044AE40*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8044E044 0044AE44*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x8c0);
/*8044E048 0044AE48*/ PPC::Runtime::ASM::li(context->r0, -0x3);
/*8044E04C 0044AE4C*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0x98);
/*8044E050 0044AE50*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*8044E054 0044AE54*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8044E058 0044AE58*/ PPC::Runtime::ASM::add(context->r7, context->r7, context->r5);
/*8044E05C 0044AE5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8044E060 0044AE60*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8044E064 0044AE64*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*8044E068 0044AE68*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r0);
/*8044E06C 0044AE6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8044E070 0044AE70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*8044E074 0044AE74*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8044E078 0044AE78*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*8044E07C 0044AE7C*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r0);
/*8044E080 0044AE80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*8044E084 0044AE84*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8044E088 0044AE88*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*8044E08C 0044AE8C*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r0);
/*8044E090 0044AE90*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*8044E094 0044AE94*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8044E098, 0x8044E098) //this is a jump label
/*8044E098 0044AE98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8044E09C 0044AE9C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8044E0A0 0044AEA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8044E0A4 0044AEA4*/ PPC::Runtime::ASM::mr(context->r24, context->r29);
/*8044E0A8 0044AEA8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E6208 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E0AC 0044AEAC*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*8044E0B0 0044AEB0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8044E0B4 0044AEB4*/ PPC::Runtime::ASM::li(context->r25, 0x10);
/*8044E0B8 0044AEB8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E6200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E0BC 0044AEBC*/ PPC::Runtime::ASM::li(context->r26, 0x20);
/*8044E0C0 0044AEC0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8044E0C4 0044AEC4*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E61B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E0C8 0044AEC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8044E0CC 0044AECC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8044E0D0 0044AED0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8044E0D4 0044AED4*/ PPC::Runtime::ASM::b(.L_8044E110);
RUNTIME_PPC_JUMP_LABEL(.L_8044E0D8, 0x8044E0D8) //this is a jump label
/*8044E0D8 0044AED8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8044E0DC 0044AEDC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f0);
/*8044E0E0 0044AEE0*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8044E0E4 0044AEE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r30));
/*8044E0E8 0044AEE8*/ PPC::Runtime::ASM::add(context->r4, context->r28, context->r25);
/*8044E0EC 0044AEEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*8044E0F0 0044AEF0*/ PPC::Runtime::ASM::bl(fn_803EECCC);
/*8044E0F4 0044AEF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*8044E0F8 0044AEF8*/ PPC::Runtime::ASM::add(context->r4, context->r28, context->r26);
/*8044E0FC 0044AEFC*/ PPC::Runtime::ASM::bl(fn_803EEF24);
/*8044E100 0044AF00*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x38);
/*8044E104 0044AF04*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x4);
/*8044E108 0044AF08*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x38);
/*8044E10C 0044AF0C*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044E110, 0x8044E110) //this is a jump label
/*8044E110 0044AF10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r29));
/*8044E114 0044AF14*/ PPC::Runtime::ASM::cmpw(context->r23, context->r0);
/*8044E118 0044AF18*/ PPC::Runtime::ASM::blt(.L_8044E0D8);
/*8044E11C 0044AF1C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8044E120 0044AF20*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8044E124 0044AF24*/ PPC::Runtime::ASM::beq(.L_8044E178);
/*8044E128 0044AF28*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*8044E12C 0044AF2C*/ PPC::Runtime::ASM::addi(context->r24, context->r31, 0x8c0);
/*8044E130 0044AF30*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*8044E134 0044AF34*/ PPC::Runtime::ASM::li(context->r26, 0x10);
/*8044E138 0044AF38*/ PPC::Runtime::ASM::add(context->r24, context->r24, context->r0);
/*8044E13C 0044AF3C*/ PPC::Runtime::ASM::li(context->r25, 0x20);
/*8044E140 0044AF40*/ PPC::Runtime::ASM::b(.L_8044E16C);
RUNTIME_PPC_JUMP_LABEL(.L_8044E144, 0x8044E144) //this is a jump label
/*8044E144 0044AF44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*8044E148 0044AF48*/ PPC::Runtime::ASM::add(context->r4, context->r28, context->r26);
/*8044E14C 0044AF4C*/ PPC::Runtime::ASM::bl(fn_803EECCC);
/*8044E150 0044AF50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*8044E154 0044AF54*/ PPC::Runtime::ASM::add(context->r4, context->r28, context->r25);
/*8044E158 0044AF58*/ PPC::Runtime::ASM::bl(fn_803EEF24);
/*8044E15C 0044AF5C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x38);
/*8044E160 0044AF60*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x4);
/*8044E164 0044AF64*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x38);
/*8044E168 0044AF68*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044E16C, 0x8044E16C) //this is a jump label
/*8044E16C 0044AF6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r29));
/*8044E170 0044AF70*/ PPC::Runtime::ASM::cmpw(context->r23, context->r0);
/*8044E174 0044AF74*/ PPC::Runtime::ASM::blt(.L_8044E144);
RUNTIME_PPC_JUMP_LABEL(.L_8044E178, 0x8044E178) //this is a jump label
/*8044E178 0044AF78*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE53C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E17C 0044AF7C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x424);
/*8044E180 0044AF80*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E184 0044AF84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8044E188 0044AF88*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8044E18C 0044AF8C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8044E190 0044AF90*/ PPC::Runtime::ASM::ble(.L_8044E1B8);
RUNTIME_PPC_JUMP_LABEL(.L_8044E194, 0x8044E194) //this is a jump label
/*8044E194 0044AF94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8044E198 0044AF98*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8044E19C 0044AF9C*/ PPC::Runtime::ASM::bne(.L_8044E1AC);
/*8044E1A0 0044AFA0*/ PPC::Runtime::ASM::cmpw(context->r4, context->r3);
/*8044E1A4 0044AFA4*/ PPC::Runtime::ASM::beq(.L_8044E1AC);
/*8044E1A8 0044AFA8*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044E1AC, 0x8044E1AC) //this is a jump label
/*8044E1AC 0044AFAC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*8044E1B0 0044AFB0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8044E1B4 0044AFB4*/ PPC::Runtime::ASM::bdnz(.L_8044E194);
RUNTIME_PPC_JUMP_LABEL(.L_8044E1B8, 0x8044E1B8) //this is a jump label
/*8044E1B8 0044AFB8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E1BC 0044AFBC*/ PPC::Runtime::ASM::li(context->r25, -0x1);
/*8044E1C0 0044AFC0*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8044E1C4 0044AFC4*/ PPC::Runtime::ASM::beq(.L_8044E1CC);
/*8044E1C8 0044AFC8*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8044E1CC, 0x8044E1CC) //this is a jump label
/*8044E1CC 0044AFCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044E1D0 0044AFD0*/ PPC::Runtime::ASM::cmpwi(context->r25, -0x1);
/*8044E1D4 0044AFD4*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8044E1D8 0044AFD8*/ PPC::Runtime::ASM::bne(.L_8044E1EC);
/*8044E1DC 0044AFDC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x810);
/*8044E1E0 0044AFE0*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044E1E4 0044AFE4*/ PPC::Runtime::ASM::li(context->r4, 0xe5d);
/*8044E1E8 0044AFE8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044E1EC, 0x8044E1EC) //this is a jump label
/*8044E1EC 0044AFEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044E1F0 0044AFF0*/ PPC::Runtime::ASM::lis(context->r3, fn_8044DE74 @ Get_MemoryOffset_HighBit);
/*8044E1F4 0044AFF4*/ PPC::Runtime::ASM::addi(context->r9, context->r3, fn_8044DE74 @ Get_MemoryOffset_LowBit);
/*8044E1F8 0044AFF8*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 6);
/*8044E1FC 0044AFFC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x480);
/*8044E200 0044B000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8044E204 0044B004*/ PPC::Runtime::ASM::mr(context->r10, context->r27);
/*8044E208 0044B008*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*8044E20C 0044B00C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*8044E210 0044B010*/ PPC::Runtime::ASM::li(context->r6, 0x20);
/*8044E214 0044B014*/ PPC::Runtime::ASM::li(context->r7, 0x21);
/*8044E218 0044B018*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8044E21C 0044B01C*/ PPC::Runtime::ASM::bl(fn_80446ACC);
RUNTIME_PPC_JUMP_LABEL(.L_8044E220, 0x8044E220) //this is a jump label
/*8044E220 0044B020*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8044E224 0044B024*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8044E228 0044B028*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8044E22C 0044B02C*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*8044E230 0044B030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8044E234 0044B034*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044E238 0044B038*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8044E23C 0044B03C*/ PPC::Runtime::ASM::blr();
}