//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A5D34.hpp"
#include "fn_802A5D34.hpp"
#include "fn_802A6E6C.hpp"



void fn_802A6BD4(PPC::Runtime::GCContext* context)
{
/*802A6BD4 002A39D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A6BD8 002A39D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A6BDC 002A39DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A6BE0 002A39E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A6BE4 002A39E4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A6BE8 002A39E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A6BEC 002A39EC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A6BF0 002A39F0*/ PPC::Runtime::ASM::beq(.L_802A6E50);
/*802A6BF4 002A39F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C2DC4 @ Get_MemoryOffset_HighBit);
/*802A6BF8 002A39F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa7c);
/*802A6BFC 002A39FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C2DC4 @ Get_MemoryOffset_LowBit);
/*802A6C00 002A3A00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A6C04 002A3A04*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A6C08 002A3A08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6C0C 002A3A0C*/ PPC::Runtime::ASM::beq(.L_802A6C30);
/*802A6C10 002A3A10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa7c, context->r30));
/*802A6C14 002A3A14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A6C18 002A3A18*/ PPC::Runtime::ASM::beq(.L_802A6C30);
/*802A6C1C 002A3A1C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A6C20 002A3A20*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A6C24 002A3A24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A6C28 002A3A28*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A6C2C 002A3A2C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A6C30, 0x802A6C30) //this is a jump label
/*802A6C30 002A3A30*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa78);
/*802A6C34 002A3A34*/ PPC::Runtime::ASM::beq(.L_802A6C58);
/*802A6C38 002A3A38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa78, context->r30));
/*802A6C3C 002A3A3C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A6C40 002A3A40*/ PPC::Runtime::ASM::beq(.L_802A6C58);
/*802A6C44 002A3A44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A6C48 002A3A48*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A6C4C 002A3A4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A6C50 002A3A50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A6C54 002A3A54*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A6C58, 0x802A6C58) //this is a jump label
/*802A6C58 002A3A58*/ PPC::Runtime::ASM::lis(context->r4, fn_802A5D34 @ Get_MemoryOffset_HighBit);
/*802A6C5C 002A3A5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa68);
/*802A6C60 002A3A60*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802A5D34 @ Get_MemoryOffset_LowBit);
/*802A6C64 002A3A64*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802A6C68 002A3A68*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802A6C6C 002A3A6C*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802A6C70 002A3A70*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A6C74 002A3A74*/ PPC::Runtime::ASM::beq(.L_802A6D64);
/*802A6C78 002A3A78*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC4A4 @ Get_MemoryOffset_HighBit);
/*802A6C7C 002A3A7C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa5c);
/*802A6C80 002A3A80*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BC4A4 @ Get_MemoryOffset_LowBit);
/*802A6C84 002A3A84*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6C88 002A3A88*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802A6C8C 002A3A8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r30));
/*802A6C90 002A3A90*/ PPC::Runtime::ASM::beq(.L_802A6CA0);
/*802A6C94 002A3A94*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A6C98 002A3A98*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A6C9C 002A3A9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6CA0, 0x802A6CA0) //this is a jump label
/*802A6CA0 002A3AA0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A6CA4 002A3AA4*/ PPC::Runtime::ASM::beq(.L_802A6D64);
/*802A6CA8 002A3AA8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802A6CAC 002A3AAC*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xa48);
/*802A6CB0 002A3AB0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802A6CB4 002A3AB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6CB8 002A3AB8*/ PPC::Runtime::ASM::beq(.L_802A6CEC);
/*802A6CBC 002A3ABC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802A6CC0 002A3AC0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A6CC4 002A3AC4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802A6CC8 002A3AC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
/*802A6CCC 002A3ACC*/ PPC::Runtime::ASM::beq(.L_802A6CEC);
/*802A6CD0 002A3AD0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802A6CD4 002A3AD4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802A6CD8 002A3AD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
/*802A6CDC 002A3ADC*/ PPC::Runtime::ASM::beq(.L_802A6CEC);
/*802A6CE0 002A3AE0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802A6CE4 002A3AE4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802A6CE8 002A3AE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6CEC, 0x802A6CEC) //this is a jump label
/*802A6CEC 002A3AEC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A6CF0 002A3AF0*/ PPC::Runtime::ASM::beq(.L_802A6D64);
/*802A6CF4 002A3AF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A6CF8 002A3AF8*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xa40);
/*802A6CFC 002A3AFC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A6D00 002A3B00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6D04 002A3B04*/ PPC::Runtime::ASM::beq(.L_802A6D28);
/*802A6D08 002A3B08*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A6D0C 002A3B0C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A6D10 002A3B10*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A6D14 002A3B14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r30));
/*802A6D18 002A3B18*/ PPC::Runtime::ASM::beq(.L_802A6D28);
/*802A6D1C 002A3B1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A6D20 002A3B20*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A6D24 002A3B24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6D28, 0x802A6D28) //this is a jump label
/*802A6D28 002A3B28*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A6D2C 002A3B2C*/ PPC::Runtime::ASM::beq(.L_802A6D64);
/*802A6D30 002A3B30*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A6D34 002A3B34*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A6D38 002A3B38*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A6D3C 002A3B3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6D40 002A3B40*/ PPC::Runtime::ASM::beq(.L_802A6D64);
/*802A6D44 002A3B44*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A6D48 002A3B48*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa18);
/*802A6D4C 002A3B4C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A6D50 002A3B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6D54 002A3B54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6D58 002A3B58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A6D5C 002A3B5C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A6D60 002A3B60*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A6D64, 0x802A6D64) //this is a jump label
/*802A6D64 002A3B64*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*802A6D68 002A3B68*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6D6C 002A3B6C*/ PPC::Runtime::ASM::bl(fn_802A6E6C);
/*802A6D70 002A3B70*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A6D74 002A3B74*/ PPC::Runtime::ASM::beq(.L_802A6E40);
/*802A6D78 002A3B78*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802A6D7C 002A3B7C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A6D80 002A3B80*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802A6D84 002A3B84*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A6D88 002A3B88*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A6D8C 002A3B8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6D90 002A3B90*/ PPC::Runtime::ASM::beq(.L_802A6DB4);
/*802A6D94 002A3B94*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A6D98 002A3B98*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A6D9C 002A3B9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A6DA0 002A3BA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802A6DA4 002A3BA4*/ PPC::Runtime::ASM::beq(.L_802A6DB4);
/*802A6DA8 002A3BA8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A6DAC 002A3BAC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A6DB0 002A3BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6DB4, 0x802A6DB4) //this is a jump label
/*802A6DB4 002A3BB4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A6DB8 002A3BB8*/ PPC::Runtime::ASM::beq(.L_802A6E2C);
/*802A6DBC 002A3BBC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A6DC0 002A3BC0*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802A6DC4 002A3BC4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A6DC8 002A3BC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6DCC 002A3BCC*/ PPC::Runtime::ASM::beq(.L_802A6DF0);
/*802A6DD0 002A3BD0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A6DD4 002A3BD4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A6DD8 002A3BD8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A6DDC 002A3BDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802A6DE0 002A3BE0*/ PPC::Runtime::ASM::beq(.L_802A6DF0);
/*802A6DE4 002A3BE4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A6DE8 002A3BE8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A6DEC 002A3BEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6DF0, 0x802A6DF0) //this is a jump label
/*802A6DF0 002A3BF0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A6DF4 002A3BF4*/ PPC::Runtime::ASM::beq(.L_802A6E2C);
/*802A6DF8 002A3BF8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A6DFC 002A3BFC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A6E00 002A3C00*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A6E04 002A3C04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6E08 002A3C08*/ PPC::Runtime::ASM::beq(.L_802A6E2C);
/*802A6E0C 002A3C0C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A6E10 002A3C10*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802A6E14 002A3C14*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A6E18 002A3C18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6E1C 002A3C1C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6E20 002A3C20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A6E24 002A3C24*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A6E28 002A3C28*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A6E2C, 0x802A6E2C) //this is a jump label
/*802A6E2C 002A3C2C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A6E30 002A3C30*/ PPC::Runtime::ASM::beq(.L_802A6E40);
/*802A6E34 002A3C34*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A6E38 002A3C38*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A6E3C 002A3C3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6E40, 0x802A6E40) //this is a jump label
/*802A6E40 002A3C40*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A6E44 002A3C44*/ PPC::Runtime::ASM::ble(.L_802A6E50);
/*802A6E48 002A3C48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6E4C 002A3C4C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A6E50, 0x802A6E50) //this is a jump label
/*802A6E50 002A3C50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A6E54 002A3C54*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6E58 002A3C58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A6E5C 002A3C5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A6E60 002A3C60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A6E64 002A3C64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A6E68 002A3C68*/ PPC::Runtime::ASM::blr();
}