//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80165D44.hpp"
#include "fn_80165D44.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80166AA8.hpp"
#include "fn_801669D0.hpp"



void fn_80165E5C(PPC::Runtime::GCContext* context)
{
/*80165E5C 00162C5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80165E60 00162C60*/ PPC::Runtime::ASM::mflr(context->r0);
/*80165E64 00162C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80165E68 00162C68*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80165E6C 00162C6C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80165E70 00162C70*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80165E74 00162C74*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80165E78 00162C78*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80165E7C 00162C7C*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80165E80 00162C80*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x9e8);
/*80165E84 00162C84*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80165E88 00162C88*/ PPC::Runtime::ASM::beq(.L_80166034);
/*80165E8C 00162C8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80165E90 00162C90*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80165E94 00162C94*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80165E98 00162C98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80165E9C 00162C9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80165EA0 00162CA0*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80165EA4 00162CA4*/ PPC::Runtime::ASM::lis(context->r4, fn_80165D44 @ Get_MemoryOffset_HighBit);
/*80165EA8 00162CA8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80165EAC 00162CAC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80165EB0 00162CB0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80165EB4 00162CB4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80165D44 @ Get_MemoryOffset_LowBit);
/*80165EB8 00162CB8*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80165EBC 00162CBC*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*80165EC0 00162CC0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80165EC4 00162CC4*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80165EC8 00162CC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80165ECC 00162CCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80165ED0 00162CD0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80165ED4 00162CD4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0A58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80165ED8 00162CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80165EDC 00162CDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80165EE0 00162CE0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80165EE4 00162CE4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0A50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80165EE8 00162CE8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80165EEC 00162CEC*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80165EF0 00162CF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80165EF4 00162CF4*/ PPC::Runtime::ASM::li(context->r4, 0x6d);
/*80165EF8 00162CF8*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80165EFC 00162CFC*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80165F00 00162D00*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80165F04 00162D04*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80165F08 00162D08*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80165F0C 00162D0C*/ PPC::Runtime::ASM::bl(fn_80166AA8);
/*80165F10 00162D10*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80165F14 00162D14*/ PPC::Runtime::ASM::bne(.L_80165F28);
/*80165F18 00162D18*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AB0 @ Get_MemoryOffset_SDA21);
/*80165F1C 00162D1C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80165F20 00162D20*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AB8 @ Get_MemoryOffset_SDA21);
/*80165F24 00162D24*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80165F28, 0x80165F28) //this is a jump label
/*80165F28 00162D28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80165F2C 00162D2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80165F30 00162D30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80165F34 00162D34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80165F38 00162D38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80165F3C 00162D3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80165F40 00162D40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80165F44 00162D44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80165F48 00162D48*/ PPC::Runtime::ASM::bne(.L_80165F94);
/*80165F4C 00162D4C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80165F50 00162D50*/ PPC::Runtime::ASM::beq(.L_80165F94);
/*80165F54 00162D54*/ PPC::Runtime::ASM::bne(.L_80165F68);
/*80165F58 00162D58*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AB0 @ Get_MemoryOffset_SDA21);
/*80165F5C 00162D5C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80165F60 00162D60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AB8 @ Get_MemoryOffset_SDA21);
/*80165F64 00162D64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80165F68, 0x80165F68) //this is a jump label
/*80165F68 00162D68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80165F6C 00162D6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80165F70 00162D70*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80165F74 00162D74*/ PPC::Runtime::ASM::bne(.L_80165F84);
/*80165F78 00162D78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80165F7C 00162D7C*/ PPC::Runtime::ASM::beq(.L_80165F84);
/*80165F80 00162D80*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80165F84, 0x80165F84) //this is a jump label
/*80165F84 00162D84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80165F88 00162D88*/ PPC::Runtime::ASM::bne(.L_80165F94);
/*80165F8C 00162D8C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80165F90 00162D90*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80165F94, 0x80165F94) //this is a jump label
/*80165F94 00162D94*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80165F98 00162D98*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80165F9C 00162D9C*/ PPC::Runtime::ASM::bl(fn_801669D0);
/*80165FA0 00162DA0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80165FA4 00162DA4*/ PPC::Runtime::ASM::bne(.L_80165FB8);
/*80165FA8 00162DA8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AB0 @ Get_MemoryOffset_SDA21);
/*80165FAC 00162DAC*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*80165FB0 00162DB0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AB8 @ Get_MemoryOffset_SDA21);
/*80165FB4 00162DB4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80165FB8, 0x80165FB8) //this is a jump label
/*80165FB8 00162DB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80165FBC 00162DBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165FC0 00162DC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80165FC4 00162DC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80165FC8 00162DC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80165FCC 00162DCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*80165FD0 00162DD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80165FD4 00162DD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80165FD8 00162DD8*/ PPC::Runtime::ASM::bne(.L_80166024);
/*80165FDC 00162DDC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80165FE0 00162DE0*/ PPC::Runtime::ASM::beq(.L_80166024);
/*80165FE4 00162DE4*/ PPC::Runtime::ASM::bne(.L_80165FF8);
/*80165FE8 00162DE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AB0 @ Get_MemoryOffset_SDA21);
/*80165FEC 00162DEC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80165FF0 00162DF0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AB8 @ Get_MemoryOffset_SDA21);
/*80165FF4 00162DF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80165FF8, 0x80165FF8) //this is a jump label
/*80165FF8 00162DF8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80165FFC 00162DFC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80166000 00162E00*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80166004 00162E04*/ PPC::Runtime::ASM::bne(.L_80166014);
/*80166008 00162E08*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8016600C 00162E0C*/ PPC::Runtime::ASM::beq(.L_80166014);
/*80166010 00162E10*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80166014, 0x80166014) //this is a jump label
/*80166014 00162E14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80166018 00162E18*/ PPC::Runtime::ASM::bne(.L_80166024);
/*8016601C 00162E1C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80166020 00162E20*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80166024, 0x80166024) //this is a jump label
/*80166024 00162E24*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80166028 00162E28*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016602C 00162E2C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80166030 00162E30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80166034, 0x80166034) //this is a jump label
/*80166034 00162E34*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80166038 00162E38*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8016603C 00162E3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80166040 00162E40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80166044 00162E44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80166048 00162E48*/ PPC::Runtime::ASM::blr();
}