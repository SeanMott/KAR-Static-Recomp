//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80154DC8.hpp"
#include "fn_80154DC8.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80150208.hpp"
#include "fn_80150208.hpp"



void fn_80154EBC(PPC::Runtime::GCContext* context)
{
/*80154EBC 00151CBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80154EC0 00151CC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80154EC4 00151CC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80154EC8 00151CC8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80154ECC 00151CCC*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80154ED0 00151CD0*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80154ED4 00151CD4*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*80154ED8 00151CD8*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*80154EDC 00151CDC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80154EE0 00151CE0*/ PPC::Runtime::ASM::extsb(context->r4, context->r25);
/*80154EE4 00151CE4*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*80154EE8 00151CE8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x628);
/*80154EEC 00151CEC*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 3);
/*80154EF0 00151CF0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80154EF4 00151CF4*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r3);
/*80154EF8 00151CF8*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*80154EFC 00151CFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80154F00 00151D00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80154F04 00151D04*/ PPC::Runtime::ASM::beq(.L_80154F14);
/*80154F08 00151D08*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80154F0C 00151D0C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80154F10 00151D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80154F14, 0x80154F14) //this is a jump label
/*80154F14 00151D14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80154F18 00151D18*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80154F1C 00151D1C*/ PPC::Runtime::ASM::li(context->r5, 0x28);
/*80154F20 00151D20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80154F24 00151D24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80154F28 00151D28*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80154F2C 00151D2C*/ PPC::Runtime::ASM::lis(context->r4, fn_80154DC8 @ Get_MemoryOffset_HighBit);
/*80154F30 00151D30*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80154F34 00151D34*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80154F38 00151D38*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80154F3C 00151D3C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80154DC8 @ Get_MemoryOffset_LowBit);
/*80154F40 00151D40*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80154F44 00151D44*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*80154F48 00151D48*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80154F4C 00151D4C*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80154F50 00151D50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80154F54 00151D54*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80154F58 00151D58*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80154F5C 00151D5C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80154F60 00151D60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80154F64 00151D64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80154F68 00151D68*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80154F6C 00151D6C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0768 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80154F70 00151D70*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80154F74 00151D74*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80154F78 00151D78*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80154F7C 00151D7C*/ PPC::Runtime::ASM::li(context->r4, 0x50);
/*80154F80 00151D80*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80154F84 00151D84*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80154F88 00151D88*/ PPC::Runtime::ASM::extsb.(context->r0, context->r26);
/*80154F8C 00151D8C*/ PPC::Runtime::ASM::li(context->r0, 0x1e);
/*80154F90 00151D90*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80154F94 00151D94*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*80154F98 00151D98*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r3));
/*80154F9C 00151D9C*/ PPC::Runtime::ASM::bne(.L_80154FB4);
/*80154FA0 00151DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80154FA4 00151DA4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80154FA8 00151DA8*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80154FAC 00151DAC*/ PPC::Runtime::ASM::bl(fn_80150208);
/*80154FB0 00151DB0*/ PPC::Runtime::ASM::b(.L_80154FC4);
RUNTIME_PPC_JUMP_LABEL(.L_80154FB4, 0x80154FB4) //this is a jump label
/*80154FB4 00151DB4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80154FB8 00151DB8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80154FBC 00151DBC*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*80154FC0 00151DC0*/ PPC::Runtime::ASM::bl(fn_80150208);
RUNTIME_PPC_JUMP_LABEL(.L_80154FC4, 0x80154FC4) //this is a jump label
/*80154FC4 00151DC4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80154FC8 00151DC8*/ PPC::Runtime::ASM::bne(.L_80154FDC);
/*80154FCC 00151DCC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6828 @ Get_MemoryOffset_SDA21);
/*80154FD0 00151DD0*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80154FD4 00151DD4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6830 @ Get_MemoryOffset_SDA21);
/*80154FD8 00151DD8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80154FDC, 0x80154FDC) //this is a jump label
/*80154FDC 00151DDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80154FE0 00151DE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80154FE4 00151DE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80154FE8 00151DE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80154FEC 00151DEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80154FF0 00151DF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80154FF4 00151DF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80154FF8 00151DF8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80154FFC 00151DFC*/ PPC::Runtime::ASM::bne(.L_80155048);
/*80155000 00151E00*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80155004 00151E04*/ PPC::Runtime::ASM::beq(.L_80155048);
/*80155008 00151E08*/ PPC::Runtime::ASM::bne(.L_8015501C);
/*8015500C 00151E0C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6828 @ Get_MemoryOffset_SDA21);
/*80155010 00151E10*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80155014 00151E14*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6830 @ Get_MemoryOffset_SDA21);
/*80155018 00151E18*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015501C, 0x8015501C) //this is a jump label
/*8015501C 00151E1C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80155020 00151E20*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80155024 00151E24*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80155028 00151E28*/ PPC::Runtime::ASM::bne(.L_80155038);
/*8015502C 00151E2C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80155030 00151E30*/ PPC::Runtime::ASM::beq(.L_80155038);
/*80155034 00151E34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80155038, 0x80155038) //this is a jump label
/*80155038 00151E38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8015503C 00151E3C*/ PPC::Runtime::ASM::bne(.L_80155048);
/*80155040 00151E40*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80155044 00151E44*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80155048, 0x80155048) //this is a jump label
/*80155048 00151E48*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8015504C 00151E4C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80155050 00151E50*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80155054 00151E54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80155058 00151E58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015505C 00151E5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80155060 00151E60*/ PPC::Runtime::ASM::blr();
}