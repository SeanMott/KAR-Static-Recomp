//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A5D34.hpp"
#include "fn_802A5D34.hpp"
#include "fn_802A6038.hpp"



void fn_802A5DA0(PPC::Runtime::GCContext* context)
{
/*802A5DA0 002A2BA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A5DA4 002A2BA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A5DA8 002A2BA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A5DAC 002A2BAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A5DB0 002A2BB0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A5DB4 002A2BB4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A5DB8 002A2BB8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A5DBC 002A2BBC*/ PPC::Runtime::ASM::beq(.L_802A601C);
/*802A5DC0 002A2BC0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C344C @ Get_MemoryOffset_HighBit);
/*802A5DC4 002A2BC4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf90);
/*802A5DC8 002A2BC8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C344C @ Get_MemoryOffset_LowBit);
/*802A5DCC 002A2BCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A5DD0 002A2BD0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A5DD4 002A2BD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5DD8 002A2BD8*/ PPC::Runtime::ASM::beq(.L_802A5DFC);
/*802A5DDC 002A2BDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf90, context->r30));
/*802A5DE0 002A2BE0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A5DE4 002A2BE4*/ PPC::Runtime::ASM::beq(.L_802A5DFC);
/*802A5DE8 002A2BE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A5DEC 002A2BEC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A5DF0 002A2BF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A5DF4 002A2BF4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A5DF8 002A2BF8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A5DFC, 0x802A5DFC) //this is a jump label
/*802A5DFC 002A2BFC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf8c);
/*802A5E00 002A2C00*/ PPC::Runtime::ASM::beq(.L_802A5E24);
/*802A5E04 002A2C04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8c, context->r30));
/*802A5E08 002A2C08*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A5E0C 002A2C0C*/ PPC::Runtime::ASM::beq(.L_802A5E24);
/*802A5E10 002A2C10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A5E14 002A2C14*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A5E18 002A2C18*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A5E1C 002A2C1C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A5E20 002A2C20*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A5E24, 0x802A5E24) //this is a jump label
/*802A5E24 002A2C24*/ PPC::Runtime::ASM::lis(context->r4, fn_802A5D34 @ Get_MemoryOffset_HighBit);
/*802A5E28 002A2C28*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xf7c);
/*802A5E2C 002A2C2C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802A5D34 @ Get_MemoryOffset_LowBit);
/*802A5E30 002A2C30*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802A5E34 002A2C34*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802A5E38 002A2C38*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802A5E3C 002A2C3C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf2c);
/*802A5E40 002A2C40*/ PPC::Runtime::ASM::beq(.L_802A5F30);
/*802A5E44 002A2C44*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC4A4 @ Get_MemoryOffset_HighBit);
/*802A5E48 002A2C48*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf70);
/*802A5E4C 002A2C4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BC4A4 @ Get_MemoryOffset_LowBit);
/*802A5E50 002A2C50*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf2c, context->r30));
/*802A5E54 002A2C54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802A5E58 002A2C58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf70, context->r30));
/*802A5E5C 002A2C5C*/ PPC::Runtime::ASM::beq(.L_802A5E6C);
/*802A5E60 002A2C60*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A5E64 002A2C64*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A5E68 002A2C68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf70, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A5E6C, 0x802A5E6C) //this is a jump label
/*802A5E6C 002A2C6C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf2c);
/*802A5E70 002A2C70*/ PPC::Runtime::ASM::beq(.L_802A5F30);
/*802A5E74 002A2C74*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802A5E78 002A2C78*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xf5c);
/*802A5E7C 002A2C7C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802A5E80 002A2C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf2c, context->r30));
/*802A5E84 002A2C84*/ PPC::Runtime::ASM::beq(.L_802A5EB8);
/*802A5E88 002A2C88*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802A5E8C 002A2C8C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A5E90 002A2C90*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802A5E94 002A2C94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf5c, context->r30));
/*802A5E98 002A2C98*/ PPC::Runtime::ASM::beq(.L_802A5EB8);
/*802A5E9C 002A2C9C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802A5EA0 002A2CA0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802A5EA4 002A2CA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf5c, context->r30));
/*802A5EA8 002A2CA8*/ PPC::Runtime::ASM::beq(.L_802A5EB8);
/*802A5EAC 002A2CAC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802A5EB0 002A2CB0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802A5EB4 002A2CB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf5c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A5EB8, 0x802A5EB8) //this is a jump label
/*802A5EB8 002A2CB8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf2c);
/*802A5EBC 002A2CBC*/ PPC::Runtime::ASM::beq(.L_802A5F30);
/*802A5EC0 002A2CC0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A5EC4 002A2CC4*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xf54);
/*802A5EC8 002A2CC8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A5ECC 002A2CCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf2c, context->r30));
/*802A5ED0 002A2CD0*/ PPC::Runtime::ASM::beq(.L_802A5EF4);
/*802A5ED4 002A2CD4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A5ED8 002A2CD8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A5EDC 002A2CDC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A5EE0 002A2CE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf54, context->r30));
/*802A5EE4 002A2CE4*/ PPC::Runtime::ASM::beq(.L_802A5EF4);
/*802A5EE8 002A2CE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A5EEC 002A2CEC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A5EF0 002A2CF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf54, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A5EF4, 0x802A5EF4) //this is a jump label
/*802A5EF4 002A2CF4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf2c);
/*802A5EF8 002A2CF8*/ PPC::Runtime::ASM::beq(.L_802A5F30);
/*802A5EFC 002A2CFC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A5F00 002A2D00*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf2c);
/*802A5F04 002A2D04*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A5F08 002A2D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf2c, context->r30));
/*802A5F0C 002A2D0C*/ PPC::Runtime::ASM::beq(.L_802A5F30);
/*802A5F10 002A2D10*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A5F14 002A2D14*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xf2c);
/*802A5F18 002A2D18*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A5F1C 002A2D1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf2c, context->r30));
/*802A5F20 002A2D20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf2c, context->r30));
/*802A5F24 002A2D24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A5F28 002A2D28*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A5F2C 002A2D2C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A5F30, 0x802A5F30) //this is a jump label
/*802A5F30 002A2D30*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*802A5F34 002A2D34*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5F38 002A2D38*/ PPC::Runtime::ASM::bl(fn_802A6038);
/*802A5F3C 002A2D3C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A5F40 002A2D40*/ PPC::Runtime::ASM::beq(.L_802A600C);
/*802A5F44 002A2D44*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802A5F48 002A2D48*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A5F4C 002A2D4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802A5F50 002A2D50*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A5F54 002A2D54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A5F58 002A2D58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5F5C 002A2D5C*/ PPC::Runtime::ASM::beq(.L_802A5F80);
/*802A5F60 002A2D60*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A5F64 002A2D64*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A5F68 002A2D68*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A5F6C 002A2D6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802A5F70 002A2D70*/ PPC::Runtime::ASM::beq(.L_802A5F80);
/*802A5F74 002A2D74*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A5F78 002A2D78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A5F7C 002A2D7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A5F80, 0x802A5F80) //this is a jump label
/*802A5F80 002A2D80*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A5F84 002A2D84*/ PPC::Runtime::ASM::beq(.L_802A5FF8);
/*802A5F88 002A2D88*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A5F8C 002A2D8C*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802A5F90 002A2D90*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A5F94 002A2D94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5F98 002A2D98*/ PPC::Runtime::ASM::beq(.L_802A5FBC);
/*802A5F9C 002A2D9C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A5FA0 002A2DA0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A5FA4 002A2DA4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A5FA8 002A2DA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802A5FAC 002A2DAC*/ PPC::Runtime::ASM::beq(.L_802A5FBC);
/*802A5FB0 002A2DB0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A5FB4 002A2DB4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A5FB8 002A2DB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A5FBC, 0x802A5FBC) //this is a jump label
/*802A5FBC 002A2DBC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A5FC0 002A2DC0*/ PPC::Runtime::ASM::beq(.L_802A5FF8);
/*802A5FC4 002A2DC4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A5FC8 002A2DC8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A5FCC 002A2DCC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A5FD0 002A2DD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5FD4 002A2DD4*/ PPC::Runtime::ASM::beq(.L_802A5FF8);
/*802A5FD8 002A2DD8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A5FDC 002A2DDC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802A5FE0 002A2DE0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A5FE4 002A2DE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5FE8 002A2DE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5FEC 002A2DEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A5FF0 002A2DF0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A5FF4 002A2DF4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A5FF8, 0x802A5FF8) //this is a jump label
/*802A5FF8 002A2DF8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A5FFC 002A2DFC*/ PPC::Runtime::ASM::beq(.L_802A600C);
/*802A6000 002A2E00*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A6004 002A2E04*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A6008 002A2E08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A600C, 0x802A600C) //this is a jump label
/*802A600C 002A2E0C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A6010 002A2E10*/ PPC::Runtime::ASM::ble(.L_802A601C);
/*802A6014 002A2E14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6018 002A2E18*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A601C, 0x802A601C) //this is a jump label
/*802A601C 002A2E1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A6020 002A2E20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6024 002A2E24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A6028 002A2E28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A602C 002A2E2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A6030 002A2E30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A6034 002A2E34*/ PPC::Runtime::ASM::blr();
}