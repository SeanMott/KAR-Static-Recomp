//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_8016A8E8.hpp"
#include "fn_8016A8E8.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138C1C.hpp"
#include "fn_80138BA4.hpp"
#include "fn_8016936C.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_8016AB34(PPC::Runtime::GCContext* context)
{
/*8016AB34 00167934*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8016AB38 00167938*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016AB3C 0016793C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8016AB40 00167940*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8016AB44 00167944*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*8016AB48 00167948*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8016AB4C 0016794C*/ PPC::Runtime::ASM::mr(context->r24, context->r4);
/*8016AB50 00167950*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*8016AB54 00167954*/ PPC::Runtime::ASM::mr(context->r25, context->r6);
/*8016AB58 00167958*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016AB5C 0016795C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xac4);
/*8016AB60 00167960*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8016AB64 00167964*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac4, context->r3));
/*8016AB68 00167968*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8016AB6C 0016796C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016AB70 00167970*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016AB74 00167974*/ PPC::Runtime::ASM::bl(fn_80138934);
/*8016AB78 00167978*/ PPC::Runtime::ASM::lis(context->r4, fn_8016A8E8 @ Get_MemoryOffset_HighBit);
/*8016AB7C 0016797C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016AB80 00167980*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016AB84 00167984*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8016AB88 00167988*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8016A8E8 @ Get_MemoryOffset_LowBit);
/*8016AB8C 0016798C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8016AB90 00167990*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016AB94 00167994*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016AB98 00167998*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8016AB9C 0016799C*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8016ABA0 001679A0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016ABA4 001679A4*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8016ABA8 001679A8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016ABAC 001679AC*/ PPC::Runtime::ASM::li(context->r4, 0x7b);
/*8016ABB0 001679B0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8016ABB4 001679B4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8016ABB8 001679B8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016ABBC 001679BC*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*8016ABC0 001679C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016ABC4 001679C4*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8016ABC8 001679C8*/ PPC::Runtime::ASM::stb(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r27));
/*8016ABCC 001679CC*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4e, context->r27));
/*8016ABD0 001679D0*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f, context->r27));
/*8016ABD4 001679D4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r27));
/*8016ABD8 001679D8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8016ABDC 001679DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8016ABE0 001679E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016ABE4 001679E4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8016ABE8 001679E8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8016ABEC 001679EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8016ABF0 001679F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016ABF4 001679F4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8016ABF8 001679F8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8016ABFC 001679FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8016AC00 00167A00*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016AC04 00167A04*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8016AC08 00167A08*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8016AC0C 00167A0C*/ PPC::Runtime::ASM::extsb(context->r0, context->r24);
/*8016AC10 00167A10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*8016AC14 00167A14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8016AC18 00167A18*/ PPC::Runtime::ASM::bge(.L_8016AC30);
/*8016AC1C 00167A1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8016AC20 00167A20*/ PPC::Runtime::ASM::extsb(context->r4, context->r26);
/*8016AC24 00167A24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016AC28 00167A28*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*8016AC2C 00167A2C*/ PPC::Runtime::ASM::b(.L_8016AC40);
RUNTIME_PPC_JUMP_LABEL(.L_8016AC30, 0x8016AC30) //this is a jump label
/*8016AC30 00167A30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8016AC34 00167A34*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8016AC38 00167A38*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016AC3C 00167A3C*/ PPC::Runtime::ASM::bl(fn_80138C90);
RUNTIME_PPC_JUMP_LABEL(.L_8016AC40, 0x8016AC40) //this is a jump label
/*8016AC40 00167A40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8016AC44 00167A44*/ PPC::Runtime::ASM::extsb(context->r4, context->r24);
/*8016AC48 00167A48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016AC4C 00167A4C*/ PPC::Runtime::ASM::bl(fn_80138C1C);
/*8016AC50 00167A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*8016AC54 00167A54*/ PPC::Runtime::ASM::extsb(context->r4, context->r25);
/*8016AC58 00167A58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016AC5C 00167A5C*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8016AC60 00167A60*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016AC64 00167A64*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016AC68 00167A68*/ PPC::Runtime::ASM::bl(fn_8016936C);
/*8016AC6C 00167A6C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8016AC70 00167A70*/ PPC::Runtime::ASM::bne(.L_8016AC84);
/*8016AC74 00167A74*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016AC78 00167A78*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8016AC7C 00167A7C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016AC80 00167A80*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016AC84, 0x8016AC84) //this is a jump label
/*8016AC84 00167A84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016AC88 00167A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016AC8C 00167A8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8016AC90 00167A90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8016AC94 00167A94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016AC98 00167A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8016AC9C 00167A9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8016ACA0 00167AA0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8016ACA4 00167AA4*/ PPC::Runtime::ASM::bne(.L_8016ACF0);
/*8016ACA8 00167AA8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8016ACAC 00167AAC*/ PPC::Runtime::ASM::beq(.L_8016ACF0);
/*8016ACB0 00167AB0*/ PPC::Runtime::ASM::bne(.L_8016ACC4);
/*8016ACB4 00167AB4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016ACB8 00167AB8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8016ACBC 00167ABC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016ACC0 00167AC0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016ACC4, 0x8016ACC4) //this is a jump label
/*8016ACC4 00167AC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8016ACC8 00167AC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016ACCC 00167ACC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8016ACD0 00167AD0*/ PPC::Runtime::ASM::bne(.L_8016ACE0);
/*8016ACD4 00167AD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8016ACD8 00167AD8*/ PPC::Runtime::ASM::beq(.L_8016ACE0);
/*8016ACDC 00167ADC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8016ACE0, 0x8016ACE0) //this is a jump label
/*8016ACE0 00167AE0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8016ACE4 00167AE4*/ PPC::Runtime::ASM::bne(.L_8016ACF0);
/*8016ACE8 00167AE8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016ACEC 00167AEC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8016ACF0, 0x8016ACF0) //this is a jump label
/*8016ACF0 00167AF0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8016ACF4 00167AF4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016ACF8 00167AF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8016ACFC 00167AFC*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x1c);
/*8016AD00 00167B00*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016AD04 00167B04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8016AD08 00167B08*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x28);
/*8016AD0C 00167B0C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016AD10 00167B10*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016AD14 00167B14*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8016AD18 00167B18*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8016AD1C 00167B1C*/ PPC::Runtime::ASM::addi(context->r26, context->r27, 0x34);
/*8016AD20 00167B20*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8016AD24 00167B24*/ PPC::Runtime::ASM::bne(.L_8016AD38);
/*8016AD28 00167B28*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016AD2C 00167B2C*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*8016AD30 00167B30*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016AD34 00167B34*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016AD38, 0x8016AD38) //this is a jump label
/*8016AD38 00167B38*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8016AD3C 00167B3C*/ PPC::Runtime::ASM::bne(.L_8016AD50);
/*8016AD40 00167B40*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016AD44 00167B44*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*8016AD48 00167B48*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B88 @ Get_MemoryOffset_SDA21);
/*8016AD4C 00167B4C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016AD50, 0x8016AD50) //this is a jump label
/*8016AD50 00167B50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8016AD54 00167B54*/ PPC::Runtime::ASM::addi(context->r25, context->r27, 0x40);
/*8016AD58 00167B58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8016AD5C 00167B5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8016AD60 00167B60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8016AD64 00167B64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8016AD68 00167B68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8016AD6C 00167B6C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8016AD70 00167B70*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8016AD74 00167B74*/ PPC::Runtime::ASM::bne(.L_8016AD88);
/*8016AD78 00167B78*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016AD7C 00167B7C*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*8016AD80 00167B80*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B80 @ Get_MemoryOffset_SDA21);
/*8016AD84 00167B84*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016AD88, 0x8016AD88) //this is a jump label
/*8016AD88 00167B88*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8016AD8C 00167B8C*/ PPC::Runtime::ASM::bne(.L_8016ADA0);
/*8016AD90 00167B90*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B78 @ Get_MemoryOffset_SDA21);
/*8016AD94 00167B94*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*8016AD98 00167B98*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B88 @ Get_MemoryOffset_SDA21);
/*8016AD9C 00167B9C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016ADA0, 0x8016ADA0) //this is a jump label
/*8016ADA0 00167BA0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8016ADA4 00167BA4*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8016ADA8 00167BA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*8016ADAC 00167BAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016ADB0 00167BB0*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8016ADB4 00167BB4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8016ADB8 00167BB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*8016ADBC 00167BBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*8016ADC0 00167BC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*8016ADC4 00167BC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8016ADC8 00167BC8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8016ADCC 00167BCC*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*8016ADD0 00167BD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8016ADD4 00167BD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016ADD8 00167BD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8016ADDC 00167BDC*/ PPC::Runtime::ASM::blr();
}