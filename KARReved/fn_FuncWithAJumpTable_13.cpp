//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000A4EC.hpp"
#include "fn_8000ED10.hpp"
#include "fn_8000ECF0.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80061620.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_playSoundFX_errorNoise.hpp"
#include "fn_FuncWithAJumpTable_11.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_playSoundFX_menuSound.hpp"



void fn_FuncWithAJumpTable_13(PPC::Runtime::GCContext* context)
{
/*80047B4C 0004494C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80047B50 00044950*/ PPC::Runtime::ASM::mflr(context->r0);
/*80047B54 00044954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80047B58 00044958*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80047B5C 0004495C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80047B60 00044960*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80047B64 00044964*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80047B68 00044968*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80047B6C 0004496C*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80047B70 00044970*/ PPC::Runtime::ASM::bl(fn_8000A4EC);
/*80047B74 00044974*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80047B78 00044978*/ PPC::Runtime::ASM::beq(.L_80047D48);
/*80047B7C 0004497C*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*80047B80 00044980*/ PPC::Runtime::ASM::bl(fn_8000ED10);
/*80047B84 00044984*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80047B88 00044988*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80047B8C 0004498C*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*80047B90 00044990*/ PPC::Runtime::ASM::bl(fn_8000ECF0);
/*80047B94 00044994*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r27));
/*80047B98 00044998*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80047B9C 0004499C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80047BA0 000449A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80047BA4 000449A4*/ PPC::Runtime::ASM::beq(.L_80047C00);
/*80047BA8 000449A8*/ PPC::Runtime::ASM::lis(context->r3, 0xc);
/*80047BAC 000449AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80047BB0 000449B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x3);
/*80047BB4 000449B4*/ PPC::Runtime::ASM::and(context->r3, context->r28, context->r0);
/*80047BB8 000449B8*/ PPC::Runtime::ASM::and(context->r0, context->r29, context->r4);
/*80047BBC 000449BC*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r4);
/*80047BC0 000449C0*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*80047BC4 000449C4*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80047BC8 000449C8*/ PPC::Runtime::ASM::beq(.L_80047C00);
/*80047BCC 000449CC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80047BD0 000449D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80047BD4 000449D4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80047BD8 000449D8*/ PPC::Runtime::ASM::beq(.L_80047BE0);
/*80047BDC 000449DC*/ PPC::Runtime::ASM::bl(fn_80061620);
RUNTIME_PPC_JUMP_LABEL(.L_80047BE0, 0x80047BE0) //this is a jump label
/*80047BE0 000449E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r27));
/*80047BE4 000449E4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80047BE8 000449E8*/ PPC::Runtime::ASM::bne(.L_80047BF8);
/*80047BEC 000449EC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80047BF0 000449F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r27));
/*80047BF4 000449F4*/ PPC::Runtime::ASM::b(.L_80047C00);
RUNTIME_PPC_JUMP_LABEL(.L_80047BF8, 0x80047BF8) //this is a jump label
/*80047BF8 000449F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80047BFC 000449FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80047C00, 0x80047C00) //this is a jump label
/*80047C00 00044A00*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1DbLevel @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80047C04 00044A04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80047C08 00044A08*/ PPC::Runtime::ASM::blt(.L_80047C4C);
/*80047C0C 00044A0C*/ PPC::Runtime::ASM::li(context->r0, 0x400);
/*80047C10 00044A10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80047C14 00044A14*/ PPC::Runtime::ASM::and(context->r3, context->r28, context->r0);
/*80047C18 00044A18*/ PPC::Runtime::ASM::and(context->r0, context->r29, context->r4);
/*80047C1C 00044A1C*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r4);
/*80047C20 00044A20*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*80047C24 00044A24*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80047C28 00044A28*/ PPC::Runtime::ASM::beq(.L_80047C4C);
/*80047C2C 00044A2C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80047C30 00044A30*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80047C34 00044A34*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80047C38 00044A38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80047C3C 00044A3C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80047C40 00044A40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x20);
/*80047C44 00044A44*/ PPC::Runtime::ASM::ble(.L_80047C4C);
/*80047C48 00044A48*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80047C4C, 0x80047C4C) //this is a jump label
/*80047C4C 00044A4C*/ PPC::Runtime::ASM::li(context->r0, 0x1100);
/*80047C50 00044A50*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80047C54 00044A54*/ PPC::Runtime::ASM::and(context->r3, context->r30, context->r0);
/*80047C58 00044A58*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*80047C5C 00044A5C*/ PPC::Runtime::ASM::and(context->r0, context->r31, context->r4);
/*80047C60 00044A60*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r27));
/*80047C64 00044A64*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r4);
/*80047C68 00044A68*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*80047C6C 00044A6C*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*80047C70 00044A70*/ PPC::Runtime::ASM::beq(.L_80047D48);
/*80047C74 00044A74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r27));
/*80047C78 00044A78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80047C7C 00044A7C*/ PPC::Runtime::ASM::bne(.L_80047CFC);
/*80047C80 00044A80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r27));
/*80047C84 00044A84*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80047C88 00044A88*/ PPC::Runtime::ASM::beq(.L_80047CAC);
/*80047C8C 00044A8C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80047C90 00044A90*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r3));
/*80047C94 00044A94*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80047C98 00044A98*/ PPC::Runtime::ASM::beq(.L_80047CAC);
/*80047C9C 00044A9C*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
/*80047CA0 00044AA0*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*80047CA4 00044AA4*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_11);
/*80047CA8 00044AA8*/ PPC::Runtime::ASM::b(.L_80047D48);
RUNTIME_PPC_JUMP_LABEL(.L_80047CAC, 0x80047CAC) //this is a jump label
/*80047CAC 00044AAC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80047CB0 00044AB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*80047CB4 00044AB4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80047CB8 00044AB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1c);
/*80047CBC 00044ABC*/ PPC::Runtime::ASM::bgt(.L_80047CE0);
/*80047CC0 00044AC0*/ PPC::Runtime::ASM::lis(context->r3, FuncWithAJumpTable_13_JumpTable_2_804970A4 @ Get_MemoryOffset_HighBit);
/*80047CC4 00044AC4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80047CC8 00044AC8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, FuncWithAJumpTable_13_JumpTable_2_804970A4 @ Get_MemoryOffset_LowBit);
/*80047CCC 00044ACC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80047CD0 00044AD0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80047CD4 00044AD4*/ PPC::Runtime::ASM::bctr();
/*80047CD8 00044AD8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80047CDC 00044ADC*/ PPC::Runtime::ASM::b(.L_80047CE4);
RUNTIME_PPC_JUMP_LABEL(.L_80047CE0, 0x80047CE0) //this is a jump label
/*80047CE0 00044AE0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80047CE4, 0x80047CE4) //this is a jump label
/*80047CE4 00044AE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80047CE8 00044AE8*/ PPC::Runtime::ASM::beq(.L_80047CF0);
/*80047CEC 00044AEC*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
RUNTIME_PPC_JUMP_LABEL(.L_80047CF0, 0x80047CF0) //this is a jump label
/*80047CF0 00044AF0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80047CF4 00044AF4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r27));
/*80047CF8 00044AF8*/ PPC::Runtime::ASM::b(.L_80047D48);
RUNTIME_PPC_JUMP_LABEL(.L_80047CFC, 0x80047CFC) //this is a jump label
/*80047CFC 00044AFC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80047D00 00044B00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*80047D04 00044B04*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80047D08 00044B08*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1c);
/*80047D0C 00044B0C*/ PPC::Runtime::ASM::bgt(.L_80047D30);
/*80047D10 00044B10*/ PPC::Runtime::ASM::lis(context->r3, FuncWithAJumpTable_13_JumpTable_80497030 @ Get_MemoryOffset_HighBit);
/*80047D14 00044B14*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80047D18 00044B18*/ PPC::Runtime::ASM::addi(context->r3, context->r3, FuncWithAJumpTable_13_JumpTable_80497030 @ Get_MemoryOffset_LowBit);
/*80047D1C 00044B1C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80047D20 00044B20*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80047D24 00044B24*/ PPC::Runtime::ASM::bctr();
/*80047D28 00044B28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80047D2C 00044B2C*/ PPC::Runtime::ASM::b(.L_80047D34);
RUNTIME_PPC_JUMP_LABEL(.L_80047D30, 0x80047D30) //this is a jump label
/*80047D30 00044B30*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80047D34, 0x80047D34) //this is a jump label
/*80047D34 00044B34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80047D38 00044B38*/ PPC::Runtime::ASM::beq(.L_80047D40);
/*80047D3C 00044B3C*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
RUNTIME_PPC_JUMP_LABEL(.L_80047D40, 0x80047D40) //this is a jump label
/*80047D40 00044B40*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80047D44 00044B44*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80047D48, 0x80047D48) //this is a jump label
/*80047D48 00044B48*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80047D4C 00044B4C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80047D50 00044B50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80047D54 00044B54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80047D58 00044B58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80047D5C 00044B5C*/ PPC::Runtime::ASM::blr();
}