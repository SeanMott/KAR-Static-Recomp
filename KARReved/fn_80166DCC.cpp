//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80166B80.hpp"
#include "fn_80166B80.hpp"
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
#include "fn_8016583C.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_80166DCC(PPC::Runtime::GCContext* context)
{
/*80166DCC 00163BCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80166DD0 00163BD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80166DD4 00163BD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80166DD8 00163BD8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80166DDC 00163BDC*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80166DE0 00163BE0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80166DE4 00163BE4*/ PPC::Runtime::ASM::mr(context->r24, context->r4);
/*80166DE8 00163BE8*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*80166DEC 00163BEC*/ PPC::Runtime::ASM::mr(context->r25, context->r6);
/*80166DF0 00163BF0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80166DF4 00163BF4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xa1c);
/*80166DF8 00163BF8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80166DFC 00163BFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa1c, context->r3));
/*80166E00 00163C00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80166E04 00163C04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80166E08 00163C08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80166E0C 00163C0C*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80166E10 00163C10*/ PPC::Runtime::ASM::lis(context->r4, fn_80166B80 @ Get_MemoryOffset_HighBit);
/*80166E14 00163C14*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80166E18 00163C18*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80166E1C 00163C1C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80166E20 00163C20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80166B80 @ Get_MemoryOffset_LowBit);
/*80166E24 00163C24*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80166E28 00163C28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80166E2C 00163C2C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80166E30 00163C30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80166E34 00163C34*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80166E38 00163C38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80166E3C 00163C3C*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80166E40 00163C40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80166E44 00163C44*/ PPC::Runtime::ASM::li(context->r4, 0x70);
/*80166E48 00163C48*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80166E4C 00163C4C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80166E50 00163C50*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80166E54 00163C54*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80166E58 00163C58*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80166E5C 00163C5C*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80166E60 00163C60*/ PPC::Runtime::ASM::stb(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r27));
/*80166E64 00163C64*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4e, context->r27));
/*80166E68 00163C68*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f, context->r27));
/*80166E6C 00163C6C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r27));
/*80166E70 00163C70*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r27));
/*80166E74 00163C74*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80166E78 00163C78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80166E7C 00163C7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80166E80 00163C80*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80166E84 00163C84*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80166E88 00163C88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*80166E8C 00163C8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80166E90 00163C90*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80166E94 00163C94*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80166E98 00163C98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80166E9C 00163C9C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80166EA0 00163CA0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80166EA4 00163CA4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80166EA8 00163CA8*/ PPC::Runtime::ASM::extsb(context->r0, context->r24);
/*80166EAC 00163CAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80166EB0 00163CB0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80166EB4 00163CB4*/ PPC::Runtime::ASM::bge(.L_80166ECC);
/*80166EB8 00163CB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80166EBC 00163CBC*/ PPC::Runtime::ASM::extsb(context->r4, context->r26);
/*80166EC0 00163CC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80166EC4 00163CC4*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*80166EC8 00163CC8*/ PPC::Runtime::ASM::b(.L_80166EDC);
RUNTIME_PPC_JUMP_LABEL(.L_80166ECC, 0x80166ECC) //this is a jump label
/*80166ECC 00163CCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80166ED0 00163CD0*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80166ED4 00163CD4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80166ED8 00163CD8*/ PPC::Runtime::ASM::bl(fn_80138C90);
RUNTIME_PPC_JUMP_LABEL(.L_80166EDC, 0x80166EDC) //this is a jump label
/*80166EDC 00163CDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80166EE0 00163CE0*/ PPC::Runtime::ASM::extsb(context->r4, context->r24);
/*80166EE4 00163CE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80166EE8 00163CE8*/ PPC::Runtime::ASM::bl(fn_80138C1C);
/*80166EEC 00163CEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80166EF0 00163CF0*/ PPC::Runtime::ASM::extsb(context->r4, context->r25);
/*80166EF4 00163CF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80166EF8 00163CF8*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*80166EFC 00163CFC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80166F00 00163D00*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80166F04 00163D04*/ PPC::Runtime::ASM::bl(fn_8016583C);
/*80166F08 00163D08*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80166F0C 00163D0C*/ PPC::Runtime::ASM::bne(.L_80166F20);
/*80166F10 00163D10*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166F14 00163D14*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80166F18 00163D18*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*80166F1C 00163D1C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80166F20, 0x80166F20) //this is a jump label
/*80166F20 00163D20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80166F24 00163D24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80166F28 00163D28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80166F2C 00163D2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80166F30 00163D30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80166F34 00163D34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80166F38 00163D38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80166F3C 00163D3C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80166F40 00163D40*/ PPC::Runtime::ASM::bne(.L_80166F8C);
/*80166F44 00163D44*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80166F48 00163D48*/ PPC::Runtime::ASM::beq(.L_80166F8C);
/*80166F4C 00163D4C*/ PPC::Runtime::ASM::bne(.L_80166F60);
/*80166F50 00163D50*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166F54 00163D54*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80166F58 00163D58*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*80166F5C 00163D5C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80166F60, 0x80166F60) //this is a jump label
/*80166F60 00163D60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80166F64 00163D64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80166F68 00163D68*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80166F6C 00163D6C*/ PPC::Runtime::ASM::bne(.L_80166F7C);
/*80166F70 00163D70*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80166F74 00163D74*/ PPC::Runtime::ASM::beq(.L_80166F7C);
/*80166F78 00163D78*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80166F7C, 0x80166F7C) //this is a jump label
/*80166F7C 00163D7C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80166F80 00163D80*/ PPC::Runtime::ASM::bne(.L_80166F8C);
/*80166F84 00163D84*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80166F88 00163D88*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80166F8C, 0x80166F8C) //this is a jump label
/*80166F8C 00163D8C*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80166F90 00163D90*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80166F94 00163D94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80166F98 00163D98*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x1c);
/*80166F9C 00163D9C*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80166FA0 00163DA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*80166FA4 00163DA4*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x28);
/*80166FA8 00163DA8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80166FAC 00163DAC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80166FB0 00163DB0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80166FB4 00163DB4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80166FB8 00163DB8*/ PPC::Runtime::ASM::addi(context->r26, context->r27, 0x34);
/*80166FBC 00163DBC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80166FC0 00163DC0*/ PPC::Runtime::ASM::bne(.L_80166FD4);
/*80166FC4 00163DC4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166FC8 00163DC8*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*80166FCC 00163DCC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*80166FD0 00163DD0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80166FD4, 0x80166FD4) //this is a jump label
/*80166FD4 00163DD4*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80166FD8 00163DD8*/ PPC::Runtime::ASM::bne(.L_80166FEC);
/*80166FDC 00163DDC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166FE0 00163DE0*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*80166FE4 00163DE4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AE0 @ Get_MemoryOffset_SDA21);
/*80166FE8 00163DE8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80166FEC, 0x80166FEC) //this is a jump label
/*80166FEC 00163DEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80166FF0 00163DF0*/ PPC::Runtime::ASM::addi(context->r25, context->r27, 0x40);
/*80166FF4 00163DF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80166FF8 00163DF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80166FFC 00163DFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*80167000 00163E00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*80167004 00163E04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80167008 00163E08*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8016700C 00163E0C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80167010 00163E10*/ PPC::Runtime::ASM::bne(.L_80167024);
/*80167014 00163E14*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80167018 00163E18*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*8016701C 00163E1C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*80167020 00163E20*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80167024, 0x80167024) //this is a jump label
/*80167024 00163E24*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80167028 00163E28*/ PPC::Runtime::ASM::bne(.L_8016703C);
/*8016702C 00163E2C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80167030 00163E30*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*80167034 00163E34*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AE0 @ Get_MemoryOffset_SDA21);
/*80167038 00163E38*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016703C, 0x8016703C) //this is a jump label
/*8016703C 00163E3C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*80167040 00163E40*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80167044 00163E44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*80167048 00163E48*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016704C 00163E4C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80167050 00163E50*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*80167054 00163E54*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*80167058 00163E58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*8016705C 00163E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*80167060 00163E60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80167064 00163E64*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80167068 00163E68*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*8016706C 00163E6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80167070 00163E70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80167074 00163E74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80167078 00163E78*/ PPC::Runtime::ASM::blr();
}