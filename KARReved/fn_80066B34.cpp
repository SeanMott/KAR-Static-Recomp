//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006580C.hpp"



void fn_80066B34(PPC::Runtime::GCContext* context)
{
/*80066B34 00063934*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80066B38 00063938*/ PPC::Runtime::ASM::mflr(context->r0);
/*80066B3C 0006393C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80066B40 00063940*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80066B44 00063944*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 80066B48 00063948  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80066B4C 0006394C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_217 @ Get_MemoryOffset_HighBit);
/*80066B50 00063950*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80066B54 00063954*/ PPC::Runtime::ASM::addi(context->r29, context->r3, MemoryOffset_217 @ Get_MemoryOffset_LowBit);
/*80066B58 00063958*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80066B5C 0006395C*/ PPC::Runtime::ASM::bne(.L_80066B68);
/*80066B60 00063960*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80066B64 00063964*/ PPC::Runtime::ASM::b(.L_80066CD4);
RUNTIME_PPC_JUMP_LABEL(.L_80066B68, 0x80066B68) //this is a jump label
/*80066B68 00063968*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80066B6C 0006396C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*80066B70 00063970*/ PPC::Runtime::ASM::b(.L_80066B88);
RUNTIME_PPC_JUMP_LABEL(.L_80066B74, 0x80066B74) //this is a jump label
/*80066B74 00063974*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80066B78 00063978*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80066B7C 0006397C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*80066B80 00063980*/ PPC::Runtime::ASM::beq(.L_80066B90);
/*80066B84 00063984*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80066B88, 0x80066B88) //this is a jump label
/*80066B88 00063988*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80066B8C 0006398C*/ PPC::Runtime::ASM::bne(.L_80066B74);
RUNTIME_PPC_JUMP_LABEL(.L_80066B90, 0x80066B90) //this is a jump label
/*80066B90 00063990*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80066B94 00063994*/ PPC::Runtime::ASM::beq(.L_80066B9C);
/*80066B98 00063998*/ PPC::Runtime::ASM::b(.L_80066CD4);
RUNTIME_PPC_JUMP_LABEL(.L_80066B9C, 0x80066B9C) //this is a jump label
/*80066B9C 0006399C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*80066BA0 000639A0*/ PPC::Runtime::ASM::bge(.L_80066CD4);
/*80066BA4 000639A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80066BA8 000639A8*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*80066BAC 000639AC*/ PPC::Runtime::ASM::bl(fn_8006580C);
/* 80066BB0 000639B0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80066BB4 000639B4*/ PPC::Runtime::ASM::bne(.L_80066CD4);
/*80066BB8 000639B8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80066BBC 000639BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80066BC0 000639C0*/ PPC::Runtime::ASM::ble(.L_80066BD0);
/*80066BC4 000639C4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*80066BC8 000639C8*/ PPC::Runtime::ASM::bge(.L_80066BD0);
/*80066BCC 000639CC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80066BD0, 0x80066BD0) //this is a jump label
/*80066BD0 000639D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80066BD4 000639D4*/ PPC::Runtime::ASM::bne(.L_80066BE8);
/*80066BD8 000639D8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x78);
/*80066BDC 000639DC*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x84);
/*80066BE0 000639E0*/ PPC::Runtime::ASM::li(context->r4, 0x171);
/*80066BE4 000639E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80066BE8, 0x80066BE8) //this is a jump label
/*80066BE8 000639E8*/ PPC::Runtime::ASM::addi(context->r28, context->r29, 0x60);
/*80066BEC 000639EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80066BF0 000639F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80066BF4 000639F4*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*80066BF8 000639F8*/ PPC::Runtime::ASM::bne(.L_80066C0C);
/*80066BFC 000639FC*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x18);
/*80066C00 00063A00*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*80066C04 00063A04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80066C08 00063A08*/ PPC::Runtime::ASM::b(.L_80066C30);
RUNTIME_PPC_JUMP_LABEL(.L_80066C0C, 0x80066C0C) //this is a jump label
/*80066C0C 00063A0C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80066C10 00063A10*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xb4);
/*80066C14 00063A14*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80066C18 00063A18*/ PPC::Runtime::ASM::bl(OSReport);
/*80066C1C 00063A1C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x78);
/*80066C20 00063A20*/ PPC::Runtime::ASM::li(context->r4, 0x177);
/*80066C24 00063A24*/ PPC::Runtime::ASM::li(context->r5, lbl_805D52EC @ Get_MemoryOffset_SDA21);
/*80066C28 00063A28*/ PPC::Runtime::ASM::bl(fn___assert);
/*80066C2C 00063A2C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80066C30, 0x80066C30) //this is a jump label
/*80066C30 00063A30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80066C34 00063A34*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80066C38 00063A38*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80066C3C 00063A3C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80066C40 00063A40*/ PPC::Runtime::ASM::ble(.L_80066C50);
/*80066C44 00063A44*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*80066C48 00063A48*/ PPC::Runtime::ASM::bge(.L_80066C50);
/*80066C4C 00063A4C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80066C50, 0x80066C50) //this is a jump label
/*80066C50 00063A50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80066C54 00063A54*/ PPC::Runtime::ASM::bne(.L_80066C68);
/*80066C58 00063A58*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x78);
/*80066C5C 00063A5C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x84);
/*80066C60 00063A60*/ PPC::Runtime::ASM::li(context->r4, 0x181);
/*80066C64 00063A64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80066C68, 0x80066C68) //this is a jump label
/*80066C68 00063A68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80066C6C 00063A6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80066C70 00063A70*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*80066C74 00063A74*/ PPC::Runtime::ASM::bne(.L_80066C8C);
/*80066C78 00063A78*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x18);
/*80066C7C 00063A7C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x60);
/*80066C80 00063A80*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x8);
/*80066C84 00063A84*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*80066C88 00063A88*/ PPC::Runtime::ASM::b(.L_80066CB0);
RUNTIME_PPC_JUMP_LABEL(.L_80066C8C, 0x80066C8C) //this is a jump label
/*80066C8C 00063A8C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80066C90 00063A90*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xb4);
/*80066C94 00063A94*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80066C98 00063A98*/ PPC::Runtime::ASM::bl(OSReport);
/*80066C9C 00063A9C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x78);
/*80066CA0 00063AA0*/ PPC::Runtime::ASM::li(context->r4, 0x187);
/*80066CA4 00063AA4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D52EC @ Get_MemoryOffset_SDA21);
/*80066CA8 00063AA8*/ PPC::Runtime::ASM::bl(fn___assert);
/*80066CAC 00063AAC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80066CB0, 0x80066CB0) //this is a jump label
/*80066CB0 00063AB0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80066CB4 00063AB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80066CB8 00063AB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80066CBC 00063ABC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80066CC0 00063AC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80066CC4 00063AC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80066CC8 00063AC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80066CCC 00063ACC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80066CD0 00063AD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80066CD4, 0x80066CD4) //this is a jump label
/*80066CD4 00063AD4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80066CD8 00063AD8*/ PPC::Runtime::ASM::beq(.L_80066CF8);
/*80066CDC 00063ADC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80066CE0 00063AE0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r3));
/*80066CE4 00063AE4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 24);
/*80066CE8 00063AE8*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80066CEC 00063AEC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*80066CF0 00063AF0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80066CF4 00063AF4*/ PPC::Runtime::ASM::b(.L_80066CFC);
RUNTIME_PPC_JUMP_LABEL(.L_80066CF8, 0x80066CF8) //this is a jump label
/*80066CF8 00063AF8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80066CFC, 0x80066CFC) //this is a jump label
/*80066CFC 00063AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80066D00 00063B00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80066D04 00063B04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80066D08 00063B08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80066D0C 00063B0C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80066D10 00063B10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80066D14 00063B14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80066D18 00063B18*/ PPC::Runtime::ASM::blr();
}