//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_80179BF0.hpp"
#include "fn_80179BF0.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80179414.hpp"
#include "fn_80179390.hpp"



void fn_80179DB0(PPC::Runtime::GCContext* context)
{
/*80179DB0 00176BB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80179DB4 00176BB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80179DB8 00176BB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80179DBC 00176BBC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80179DC0 00176BC0*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80179DC4 00176BC4*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80179DC8 00176BC8*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*80179DCC 00176BCC*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*80179DD0 00176BD0*/ PPC::Runtime::ASM::mr(context->r24, context->r6);
/*80179DD4 00176BD4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80179DD8 00176BD8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xdc4);
/*80179DDC 00176BDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc4, context->r3));
/*80179DE0 00176BE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80179DE4 00176BE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80179DE8 00176BE8*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80179DEC 00176BEC*/ PPC::Runtime::ASM::lis(context->r4, fn_80179BF0 @ Get_MemoryOffset_HighBit);
/*80179DF0 00176BF0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80179DF4 00176BF4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80179DF8 00176BF8*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*80179DFC 00176BFC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80179BF0 @ Get_MemoryOffset_LowBit);
/*80179E00 00176C00*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80179E04 00176C04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80179E08 00176C08*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80179E0C 00176C0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80179E10 00176C10*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80179E14 00176C14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80179E18 00176C18*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80179E1C 00176C1C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80179E20 00176C20*/ PPC::Runtime::ASM::li(context->r4, 0xa8);
/*80179E24 00176C24*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80179E28 00176C28*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80179E2C 00176C2C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r27);
/*80179E30 00176C30*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80179E34 00176C34*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80179E38 00176C38*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*80179E3C 00176C3C*/ PPC::Runtime::ASM::stb(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r3));
/*80179E40 00176C40*/ PPC::Runtime::ASM::bne(.L_80179E50);
/*80179E44 00176C44*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80179E48 00176C48*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80179E4C 00176C4C*/ PPC::Runtime::ASM::b(.L_80179E58);
RUNTIME_PPC_JUMP_LABEL(.L_80179E50, 0x80179E50) //this is a jump label
/*80179E50 00176C50*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80179E54 00176C54*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80179E58, 0x80179E58) //this is a jump label
/*80179E58 00176C58*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80179E5C 00176C5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80179E60 00176C60*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80179E64 00176C64*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80179E68 00176C68*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80179E6C 00176C6C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80179E70 00176C70*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80179E74 00176C74*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80179E78 00176C78*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80179E7C 00176C7C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80179E80 00176C80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80179E84 00176C84*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80179E88 00176C88*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*80179E8C 00176C8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80179E90 00176C90*/ PPC::Runtime::ASM::extsb(context->r4, context->r24);
/*80179E94 00176C94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80179E98 00176C98*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*80179E9C 00176C9C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80179EA0 00176CA0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80179EA4 00176CA4*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80179EA8 00176CA8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*80179EAC 00176CAC*/ PPC::Runtime::ASM::bl(fn_80179414);
/*80179EB0 00176CB0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80179EB4 00176CB4*/ PPC::Runtime::ASM::bne(.L_80179EC8);
/*80179EB8 00176CB8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D90 @ Get_MemoryOffset_SDA21);
/*80179EBC 00176CBC*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80179EC0 00176CC0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D98 @ Get_MemoryOffset_SDA21);
/*80179EC4 00176CC4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80179EC8, 0x80179EC8) //this is a jump label
/*80179EC8 00176CC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80179ECC 00176CCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80179ED0 00176CD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80179ED4 00176CD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80179ED8 00176CD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80179EDC 00176CDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80179EE0 00176CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80179EE4 00176CE4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80179EE8 00176CE8*/ PPC::Runtime::ASM::bne(.L_80179F34);
/*80179EEC 00176CEC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80179EF0 00176CF0*/ PPC::Runtime::ASM::beq(.L_80179F34);
/*80179EF4 00176CF4*/ PPC::Runtime::ASM::bne(.L_80179F08);
/*80179EF8 00176CF8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D90 @ Get_MemoryOffset_SDA21);
/*80179EFC 00176CFC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80179F00 00176D00*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D98 @ Get_MemoryOffset_SDA21);
/*80179F04 00176D04*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80179F08, 0x80179F08) //this is a jump label
/*80179F08 00176D08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80179F0C 00176D0C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80179F10 00176D10*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80179F14 00176D14*/ PPC::Runtime::ASM::bne(.L_80179F24);
/*80179F18 00176D18*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80179F1C 00176D1C*/ PPC::Runtime::ASM::beq(.L_80179F24);
/*80179F20 00176D20*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80179F24, 0x80179F24) //this is a jump label
/*80179F24 00176D24*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80179F28 00176D28*/ PPC::Runtime::ASM::bne(.L_80179F34);
/*80179F2C 00176D2C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80179F30 00176D30*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80179F34, 0x80179F34) //this is a jump label
/*80179F34 00176D34*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*80179F38 00176D38*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80179F3C 00176D3C*/ PPC::Runtime::ASM::beq(.L_80179FD4);
/*80179F40 00176D40*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80179F44 00176D44*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80179F48 00176D48*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*80179F4C 00176D4C*/ PPC::Runtime::ASM::bl(fn_80179390);
/*80179F50 00176D50*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80179F54 00176D54*/ PPC::Runtime::ASM::bne(.L_80179F68);
/*80179F58 00176D58*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D90 @ Get_MemoryOffset_SDA21);
/*80179F5C 00176D5C*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*80179F60 00176D60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D98 @ Get_MemoryOffset_SDA21);
/*80179F64 00176D64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80179F68, 0x80179F68) //this is a jump label
/*80179F68 00176D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80179F6C 00176D6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80179F70 00176D70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80179F74 00176D74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*80179F78 00176D78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80179F7C 00176D7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*80179F80 00176D80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80179F84 00176D84*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80179F88 00176D88*/ PPC::Runtime::ASM::bne(.L_80179FD4);
/*80179F8C 00176D8C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80179F90 00176D90*/ PPC::Runtime::ASM::beq(.L_80179FD4);
/*80179F94 00176D94*/ PPC::Runtime::ASM::bne(.L_80179FA8);
/*80179F98 00176D98*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D90 @ Get_MemoryOffset_SDA21);
/*80179F9C 00176D9C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80179FA0 00176DA0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D98 @ Get_MemoryOffset_SDA21);
/*80179FA4 00176DA4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80179FA8, 0x80179FA8) //this is a jump label
/*80179FA8 00176DA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80179FAC 00176DAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80179FB0 00176DB0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80179FB4 00176DB4*/ PPC::Runtime::ASM::bne(.L_80179FC4);
/*80179FB8 00176DB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80179FBC 00176DBC*/ PPC::Runtime::ASM::beq(.L_80179FC4);
/*80179FC0 00176DC0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80179FC4, 0x80179FC4) //this is a jump label
/*80179FC4 00176DC4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80179FC8 00176DC8*/ PPC::Runtime::ASM::bne(.L_80179FD4);
/*80179FCC 00176DCC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80179FD0 00176DD0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80179FD4, 0x80179FD4) //this is a jump label
/*80179FD4 00176DD4*/ PPC::Runtime::ASM::extsb(context->r0, context->r25);
/*80179FD8 00176DD8*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*80179FDC 00176DDC*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x64);
/*80179FE0 00176DE0*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80179FE4 00176DE4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80179FE8 00176DE8*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x14);
/*80179FEC 00176DEC*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r4);
/*80179FF0 00176DF0*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*80179FF4 00176DF4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80179FF8 00176DF8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80179FFC 00176DFC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8017A000 00176E00*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*8017A004 00176E04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8017A008 00176E08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017A00C 00176E0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8017A010 00176E10*/ PPC::Runtime::ASM::blr();
}