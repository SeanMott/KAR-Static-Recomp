//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_assign_reg.hpp"
#include "fn_80424B30.hpp"
#include "fn_80424B30.hpp"



void fn_80424B30(PPC::Runtime::GCContext* context)
{
/*80424B30 00421930*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80424B34 00421934*/ PPC::Runtime::ASM::mflr(context->r0);
/*80424B38 00421938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80424B3C 0042193C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80424B40 00421940*/ PPC::Runtime::ASM::bl(_savegpr_20);
/*80424B44 00421944*/ PPC::Runtime::ASM::li(context->r21, 0x1);
/*80424B48 00421948*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
/*80424B4C 0042194C*/ PPC::Runtime::ASM::slw(context->r27, context->r21, context->r8);
/*80424B50 00421950*/ PPC::Runtime::ASM::addi(context->r26, context->r7, 0x1);
/*80424B54 00421954*/ PPC::Runtime::ASM::nor(context->r12, context->r27, context->r27);
/*80424B58 00421958*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80424B5C 0042195C*/ PPC::Runtime::ASM::cmpw(context->r26, context->r22);
/*80424B60 00421960*/ PPC::Runtime::ASM::clrlwi(context->r11, context->r8, 24);
/*80424B64 00421964*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*80424B68 00421968*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80424B6C 0042196C*/ PPC::Runtime::ASM::stwx(context->r11, context->r29, context->r0);
/*80424B70 00421970*/ PPC::Runtime::ASM::mr(context->r23, context->r4);
/*80424B74 00421974*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80424B78 00421978*/ PPC::Runtime::ASM::mr(context->r24, context->r5);
/*80424B7C 0042197C*/ PPC::Runtime::ASM::mr(context->r25, context->r6);
/*80424B80 00421980*/ PPC::Runtime::ASM::or(context->r27, context->r9, context->r27);
/*80424B84 00421984*/ PPC::Runtime::ASM::and(context->r28, context->r10, context->r12);
/*80424B88 00421988*/ PPC::Runtime::ASM::bne(.L_80424C60);
/*80424B8C 0042198C*/ PPC::Runtime::ASM::mr(context->r5, context->r25);
/*80424B90 00421990*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*80424B94 00421994*/ PPC::Runtime::ASM::bl(fn_assign_reg);
/*80424B98 00421998*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80424B9C 0042199C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80424BA0 004219A0*/ PPC::Runtime::ASM::bge(.L_80424D50);
/*80424BA4 004219A4*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x0);
/*80424BA8 004219A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80424BAC 004219AC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80424BB0 004219B0*/ PPC::Runtime::ASM::ble(.L_80424D50);
/*80424BB4 004219B4*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x8);
/*80424BB8 004219B8*/ PPC::Runtime::ASM::subi(context->r3, context->r22, 0x8);
/*80424BBC 004219BC*/ PPC::Runtime::ASM::ble(.L_80424C2C);
/*80424BC0 004219C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x7);
/*80424BC4 004219C4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80424BC8 004219C8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80424BCC 004219CC*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80424BD0 004219D0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80424BD4 004219D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80424BD8 004219D8*/ PPC::Runtime::ASM::ble(.L_80424C2C);
RUNTIME_PPC_JUMP_LABEL(.L_80424BDC, 0x80424BDC) //this is a jump label
/*80424BDC 004219DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80424BE0 004219E0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*80424BE4 004219E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80424BE8 004219E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80424BEC 004219EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80424BF0 004219F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80424BF4 004219F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80424BF8 004219F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80424BFC 004219FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80424C00 00421A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80424C04 00421A04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*80424C08 00421A08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80424C0C 00421A0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*80424C10 00421A10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80424C14 00421A14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*80424C18 00421A18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80424C1C 00421A1C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*80424C20 00421A20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*80424C24 00421A24*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x20);
/*80424C28 00421A28*/ PPC::Runtime::ASM::bdnz(.L_80424BDC);
RUNTIME_PPC_JUMP_LABEL(.L_80424C2C, 0x80424C2C) //this is a jump label
/*80424C2C 00421A2C*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 2);
/*80424C30 00421A30*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r22);
/*80424C34 00421A34*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r4);
/*80424C38 00421A38*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*80424C3C 00421A3C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80424C40 00421A40*/ PPC::Runtime::ASM::cmpw(context->r6, context->r22);
/*80424C44 00421A44*/ PPC::Runtime::ASM::bge(.L_80424D50);
RUNTIME_PPC_JUMP_LABEL(.L_80424C48, 0x80424C48) //this is a jump label
/*80424C48 00421A48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80424C4C 00421A4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80424C50 00421A50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80424C54 00421A54*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80424C58 00421A58*/ PPC::Runtime::ASM::bdnz(.L_80424C48);
/*80424C5C 00421A5C*/ PPC::Runtime::ASM::b(.L_80424D50);
RUNTIME_PPC_JUMP_LABEL(.L_80424C60, 0x80424C60) //this is a jump label
/*80424C60 00421A60*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 2);
/*80424C64 00421A64*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80424C68 00421A68*/ PPC::Runtime::ASM::lwzx(context->r4, context->r23, context->r0);
/*80424C6C 00421A6C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80424C70 00421A70*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80424C74 00421A74*/ PPC::Runtime::ASM::or(context->r6, context->r28, context->r4);
/*80424C78 00421A78*/ PPC::Runtime::ASM::mtctr(context->r22);
/*80424C7C 00421A7C*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x0);
/*80424C80 00421A80*/ PPC::Runtime::ASM::ble(.L_80424CA4);
RUNTIME_PPC_JUMP_LABEL(.L_80424C84, 0x80424C84) //this is a jump label
/*80424C84 00421A84*/ PPC::Runtime::ASM::slw(context->r0, context->r21, context->r5);
/*80424C88 00421A88*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*80424C8C 00421A8C*/ PPC::Runtime::ASM::beq(.L_80424C98);
/*80424C90 00421A90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80424C94 00421A94*/ PPC::Runtime::ASM::or(context->r7, context->r7, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80424C98, 0x80424C98) //this is a jump label
/*80424C98 00421A98*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80424C9C 00421A9C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80424CA0 00421AA0*/ PPC::Runtime::ASM::bdnz(.L_80424C84);
RUNTIME_PPC_JUMP_LABEL(.L_80424CA4, 0x80424CA4) //this is a jump label
/*80424CA4 00421AA4*/ PPC::Runtime::ASM::mulli(context->r0, context->r8, 0x28);
/*80424CA8 00421AA8*/ PPC::Runtime::ASM::andc(context->r28, context->r6, context->r7);
/*80424CAC 00421AAC*/ PPC::Runtime::ASM::add(context->r8, context->r25, context->r0);
/*80424CB0 00421AB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r8));
/*80424CB4 00421AB4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80424CB8 00421AB8*/ PPC::Runtime::ASM::bne(.L_80424CFC);
/*80424CBC 00421ABC*/ PPC::Runtime::ASM::and.(context->r0, context->r28, context->r4);
/*80424CC0 00421AC0*/ PPC::Runtime::ASM::beq(.L_80424CFC);
/*80424CC4 00421AC4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80424CC8 00421AC8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80424CCC 00421ACC*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*80424CD0 00421AD0*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80424CD4 00421AD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80424CD8 00421AD8*/ PPC::Runtime::ASM::mr(context->r6, context->r25);
/*80424CDC 00421ADC*/ PPC::Runtime::ASM::mr(context->r7, context->r26);
/*80424CE0 00421AE0*/ PPC::Runtime::ASM::mr(context->r9, context->r27);
/*80424CE4 00421AE4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80424CE8 00421AE8*/ PPC::Runtime::ASM::mr(context->r10, context->r28);
/*80424CEC 00421AEC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80424CF0 00421AF0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80424CF4 00421AF4*/ PPC::Runtime::ASM::bl(fn_80424B30);
/*80424CF8 00421AF8*/ PPC::Runtime::ASM::b(.L_80424D50);
RUNTIME_PPC_JUMP_LABEL(.L_80424CFC, 0x80424CFC) //this is a jump label
/*80424CFC 00421AFC*/ PPC::Runtime::ASM::li(context->r20, 0x0);
/*80424D00 00421B00*/ PPC::Runtime::ASM::li(context->r21, 0x1);
/*80424D04 00421B04*/ PPC::Runtime::ASM::b(.L_80424D48);
RUNTIME_PPC_JUMP_LABEL(.L_80424D08, 0x80424D08) //this is a jump label
/*80424D08 00421B08*/ PPC::Runtime::ASM::slw(context->r0, context->r21, context->r20);
/*80424D0C 00421B0C*/ PPC::Runtime::ASM::and.(context->r0, context->r28, context->r0);
/*80424D10 00421B10*/ PPC::Runtime::ASM::beq(.L_80424D44);
/*80424D14 00421B14*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80424D18 00421B18*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80424D1C 00421B1C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*80424D20 00421B20*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80424D24 00421B24*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80424D28 00421B28*/ PPC::Runtime::ASM::mr(context->r6, context->r25);
/*80424D2C 00421B2C*/ PPC::Runtime::ASM::mr(context->r7, context->r26);
/*80424D30 00421B30*/ PPC::Runtime::ASM::mr(context->r8, context->r20);
/*80424D34 00421B34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80424D38 00421B38*/ PPC::Runtime::ASM::mr(context->r9, context->r27);
/*80424D3C 00421B3C*/ PPC::Runtime::ASM::mr(context->r10, context->r28);
/*80424D40 00421B40*/ PPC::Runtime::ASM::bl(fn_80424B30);
RUNTIME_PPC_JUMP_LABEL(.L_80424D44, 0x80424D44) //this is a jump label
/*80424D44 00421B44*/ PPC::Runtime::ASM::addi(context->r20, context->r20, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80424D48, 0x80424D48) //this is a jump label
/*80424D48 00421B48*/ PPC::Runtime::ASM::cmpw(context->r20, context->r22);
/*80424D4C 00421B4C*/ PPC::Runtime::ASM::blt(.L_80424D08);
RUNTIME_PPC_JUMP_LABEL(.L_80424D50, 0x80424D50) //this is a jump label
/*80424D50 00421B50*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80424D54 00421B54*/ PPC::Runtime::ASM::bl(_restgpr_20);
/*80424D58 00421B58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80424D5C 00421B5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80424D60 00421B60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80424D64 00421B64*/ PPC::Runtime::ASM::blr();
}