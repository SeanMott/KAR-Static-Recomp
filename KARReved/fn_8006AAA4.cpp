//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005729C.hpp"
#include "fn_8005729C.hpp"
#include "fn_800572CC.hpp"
#include "fn_800572CC.hpp"
#include "fn_800572E0.hpp"
#include "fn_800572E0.hpp"
#include "fn_800572F4.hpp"
#include "fn_80057308.hpp"



void fn_8006AAA4(PPC::Runtime::GCContext* context)
{
/*8006AAA4 000678A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x180, context->r1));
/*8006AAA8 000678A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006AAAC 000678AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r1));
/*8006AAB0 000678B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x180);
/*8006AAB4 000678B4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8006AAB8 000678B8*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8006AABC 000678BC*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_2 @ Get_MemoryOffset_HighBit);
/*8006AAC0 000678C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x235, context->r27));
/*8006AAC4 000678C4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, StructWithFuncPtrs_2 @ Get_MemoryOffset_LowBit);
/*8006AAC8 000678C8*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8006AACC 000678CC*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/* 8006AAD0 000678D0  54 03 CF FF */ extrwi. context->r3 , context->r0 , 1 , 24
/*8006AAD4 000678D4*/ PPC::Runtime::ASM::bne(.L_8006AAE4);
/*8006AAD8 000678D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r27));
/*8006AADC 000678DC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8006AAE0 000678E0*/ PPC::Runtime::ASM::beq(.L_8006AD08);
RUNTIME_PPC_JUMP_LABEL(.L_8006AAE4, 0x8006AAE4) //this is a jump label
/*8006AAE4 000678E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8006AAE8 000678E8*/ PPC::Runtime::ASM::beq(.L_8006AAF4);
/*8006AAEC 000678EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r27));
/*8006AAF0 000678F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006AAF4, 0x8006AAF4) //this is a jump label
/*8006AAF4 000678F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8006AAF8 000678F8*/ PPC::Runtime::ASM::bne(.L_8006AB10);
/*8006AAFC 000678FC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006AB00 00067900*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r1));
/*8006AB04 00067904*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*8006AB08 00067908*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*8006AB0C 0006790C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006AB10, 0x8006AB10) //this is a jump label
/*8006AB10 00067910*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r31));
/*8006AB14 00067914*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8006AB18 00067918*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r31));
/*8006AB1C 0006791C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8006AB20 00067920*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*8006AB24 00067924*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8006AB28 00067928*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r31));
/*8006AB2C 0006792C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
/*8006AB30 00067930*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*8006AB34 00067934*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8006AB38 00067938*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*8006AB3C 0006793C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r1));
/*8006AB40 00067940*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*8006AB44 00067944*/ PPC::Runtime::ASM::bl(fn_8005729C);
/*8006AB48 00067948*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8006AB4C 0006794C*/ PPC::Runtime::ASM::cmpwi(context->r30, -0x1);
/*8006AB50 00067950*/ PPC::Runtime::ASM::bne(.L_8006AB70);
/*8006AB54 00067954*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x124);
/*8006AB58 00067958*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8006AB5C 0006795C*/ PPC::Runtime::ASM::bl(OSReport);
/*8006AB60 00067960*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x148);
/*8006AB64 00067964*/ PPC::Runtime::ASM::li(context->r4, 0x160);
/*8006AB68 00067968*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5360 @ Get_MemoryOffset_SDA21);
/*8006AB6C 0006796C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8006AB70, 0x8006AB70) //this is a jump label
/*8006AB70 00067970*/ PPC::Runtime::ASM::addi(context->r0, context->r1, 0xc);
/*8006AB74 00067974*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfe, context->r1));
/*8006AB78 00067978*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xf0);
/*8006AB7C 0006797C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*8006AB80 00067980*/ PPC::Runtime::ASM::bl(fn_HSD_TExpSetReg);
/*8006AB84 00067984*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8006AB88 00067988*/ PPC::Runtime::ASM::srwi(context->r0, context->r30, 31);
/*8006AB8C 0006798C*/ PPC::Runtime::ASM::subfc(context->r3, context->r6, context->r30);
/*8006AB90 00067990*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8006AB94 00067994*/ PPC::Runtime::ASM::srwi(context->r3, context->r6, 31);
/*8006AB98 00067998*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8006AB9C 0006799C*/ PPC::Runtime::ASM::subfe(context->r0, context->r0, context->r3);
/*8006ABA0 000679A0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xf0);
/*8006ABA4 000679A4*/ PPC::Runtime::ASM::and(context->r3, context->r6, context->r0);
/*8006ABA8 000679A8*/ PPC::Runtime::ASM::bl(fn_8005729C);
/*8006ABAC 000679AC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8006ABB0 000679B0*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*8006ABB4 000679B4*/ PPC::Runtime::ASM::bne(.L_8006ABD4);
/*8006ABB8 000679B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x154);
/*8006ABBC 000679BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8006ABC0 000679C0*/ PPC::Runtime::ASM::bl(OSReport);
/*8006ABC4 000679C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x148);
/*8006ABC8 000679C8*/ PPC::Runtime::ASM::li(context->r4, 0x16e);
/*8006ABCC 000679CC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5360 @ Get_MemoryOffset_SDA21);
/*8006ABD0 000679D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8006ABD4, 0x8006ABD4) //this is a jump label
/*8006ABD4 000679D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r27));
/*8006ABD8 000679D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8006ABDC 000679DC*/ PPC::Runtime::ASM::beq(.L_8006AC30);
/*8006ABE0 000679E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*8006ABE4 000679E4*/ PPC::Runtime::ASM::addi(context->r0, context->r1, 0x84);
/*8006ABE8 000679E8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r31));
/*8006ABEC 000679EC*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x234);
/*8006ABF0 000679F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8006ABF4 000679F4*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8006ABF8 000679F8*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r31));
/*8006ABFC 000679FC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8006AC00 00067A00*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8006AC04 00067A04*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r31));
/*8006AC08 00067A08*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
/*8006AC0C 00067A0C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8006AC10 00067A10*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8006AC14 00067A14*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8006AC18 00067A18*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x92, context->r1));
/*8006AC1C 00067A1C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8006AC20 00067A20*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93, context->r1));
/*8006AC24 00067A24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8006AC28 00067A28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8006AC2C 00067A2C*/ PPC::Runtime::ASM::b(.L_8006AC38);
RUNTIME_PPC_JUMP_LABEL(.L_8006AC30, 0x8006AC30) //this is a jump label
/*8006AC30 00067A30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006AC34 00067A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006AC38, 0x8006AC38) //this is a jump label
/*8006AC38 00067A38*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r1));
/*8006AC3C 00067A3C*/ PPC::Runtime::ASM::addi(context->r0, context->r1, 0x8);
/*8006AC40 00067A40*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfe, context->r1));
/*8006AC44 00067A44*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xf0);
/*8006AC48 00067A48*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8006AC4C 00067A4C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8006AC50 00067A50*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006AC54 00067A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*8006AC58 00067A58*/ PPC::Runtime::ASM::bl(fn_HSD_TExpSetReg);
/*8006AC5C 00067A5C*/ PPC::Runtime::ASM::li(context->r0, 0xe);
/*8006AC60 00067A60*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*8006AC64 00067A64*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x50);
/*8006AC68 00067A68*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8006AC6C, 0x8006AC6C) //this is a jump label
/*8006AC6C 00067A6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8006AC70 00067A70*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8006AC74 00067A74*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8006AC78 00067A78*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8006AC7C 00067A7C*/ PPC::Runtime::ASM::bdnz(.L_8006AC6C);
/*8006AC80 00067A80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8006AC84 00067A84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8006AC88 00067A88*/ PPC::Runtime::ASM::bl(fn_HSD_StateAssignTev);
/*8006AC8C 00067A8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8006AC90 00067A90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8006AC94 00067A94*/ PPC::Runtime::ASM::bl(fn_800572CC);
/*8006AC98 00067A98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8006AC9C 00067A9C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8006ACA0 00067AA0*/ PPC::Runtime::ASM::bl(fn_800572CC);
/*8006ACA4 00067AA4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8006ACA8 00067AA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8006ACAC 00067AAC*/ PPC::Runtime::ASM::bge(.L_8006ACC0);
/*8006ACB0 00067AB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8006ACB4 00067AB4*/ PPC::Runtime::ASM::bl(fn_800572E0);
/*8006ACB8 00067AB8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8006ACBC 00067ABC*/ PPC::Runtime::ASM::b(.L_8006ACD4);
RUNTIME_PPC_JUMP_LABEL(.L_8006ACC0, 0x8006ACC0) //this is a jump label
/*8006ACC0 00067AC0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8006ACC4 00067AC4*/ PPC::Runtime::ASM::bge(.L_8006ACD4);
/*8006ACC8 00067AC8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8006ACCC 00067ACC*/ PPC::Runtime::ASM::bl(fn_800572E0);
/*8006ACD0 00067AD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006ACD4, 0x8006ACD4) //this is a jump label
/*8006ACD4 00067AD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r27));
/*8006ACD8 00067AD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8006ACDC 00067ADC*/ PPC::Runtime::ASM::beq(.L_8006AD00);
/*8006ACE0 00067AE0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8006ACE4 00067AE4*/ PPC::Runtime::ASM::bl(fn_800572F4);
/*8006ACE8 00067AE8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8006ACEC 00067AEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8006ACF0 00067AF0*/ PPC::Runtime::ASM::bge(.L_8006AD00);
/*8006ACF4 00067AF4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8006ACF8 00067AF8*/ PPC::Runtime::ASM::bl(fn_80057308);
/*8006ACFC 00067AFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8006AD00, 0x8006AD00) //this is a jump label
/*8006AD00 00067B00*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8006AD04 00067B04*/ PPC::Runtime::ASM::bl(fn_HSD_SetupTevStage?);
RUNTIME_PPC_JUMP_LABEL(.L_8006AD08, 0x8006AD08) //this is a jump label
/*8006AD08 00067B08*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x180);
/*8006AD0C 00067B0C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8006AD10 00067B10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r1));
/*8006AD14 00067B14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006AD18 00067B18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x180);
/*8006AD1C 00067B1C*/ PPC::Runtime::ASM::blr();
}