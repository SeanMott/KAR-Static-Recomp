//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80185DE0.hpp"
#include "fn_80185DE0.hpp"
#include "fn_801388A8.hpp"
#include "fn_801389D8.hpp"
#include "fn_80185C88.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_80185E08(PPC::Runtime::GCContext* context)
{
/*80185E08 00182C08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80185E0C 00182C0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80185E10 00182C10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80185E14 00182C14*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80185E18 00182C18*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80185E1C 00182C1C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80185E20 00182C20*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x11b0);
/*80185E24 00182C24*/ PPC::Runtime::ASM::lis(context->r3, fn_80185DE0 @ Get_MemoryOffset_HighBit);
/*80185E28 00182C28*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*80185E2C 00182C2C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80185E30 00182C30*/ PPC::Runtime::ASM::addi(context->r27, context->r3, fn_80185DE0 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80185E34, 0x80185E34) //this is a jump label
/*80185E34 00182C34*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x9);
/*80185E38 00182C38*/ PPC::Runtime::ASM::blt(.L_80185E48);
/*80185E3C 00182C3C*/ PPC::Runtime::ASM::subi(context->r25, context->r28, 0x9);
/*80185E40 00182C40*/ PPC::Runtime::ASM::li(context->r24, 0x1);
/*80185E44 00182C44*/ PPC::Runtime::ASM::b(.L_80185E50);
RUNTIME_PPC_JUMP_LABEL(.L_80185E48, 0x80185E48) //this is a jump label
/*80185E48 00182C48*/ PPC::Runtime::ASM::mr(context->r25, context->r28);
/*80185E4C 00182C4C*/ PPC::Runtime::ASM::li(context->r24, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80185E50, 0x80185E50) //this is a jump label
/*80185E50 00182C50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80185E54 00182C54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80185E58 00182C58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80185E5C 00182C5C*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80185E60 00182C60*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0EE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80185E64 00182C64*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80185E68 00182C68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80185E6C 00182C6C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80185E70 00182C70*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80185E74 00182C74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80185E78 00182C78*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80185E7C 00182C7C*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80185E80 00182C80*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*80185E84 00182C84*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r25, 24);
/*80185E88 00182C88*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80185E8C 00182C8C*/ PPC::Runtime::ASM::bl(fn_80185C88);
/*80185E90 00182C90*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80185E94 00182C94*/ PPC::Runtime::ASM::bne(.L_80185EA8);
/*80185E98 00182C98*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E68 @ Get_MemoryOffset_SDA21);
/*80185E9C 00182C9C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80185EA0 00182CA0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E70 @ Get_MemoryOffset_SDA21);
/*80185EA4 00182CA4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80185EA8, 0x80185EA8) //this is a jump label
/*80185EA8 00182CA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80185EAC 00182CAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80185EB0 00182CB0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*80185EB4 00182CB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r26));
/*80185EB8 00182CB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80185EBC 00182CBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r26));
/*80185EC0 00182CC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80185EC4 00182CC4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80185EC8 00182CC8*/ PPC::Runtime::ASM::bne(.L_80185F14);
/*80185ECC 00182CCC*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80185ED0 00182CD0*/ PPC::Runtime::ASM::beq(.L_80185F14);
/*80185ED4 00182CD4*/ PPC::Runtime::ASM::bne(.L_80185EE8);
/*80185ED8 00182CD8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E68 @ Get_MemoryOffset_SDA21);
/*80185EDC 00182CDC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80185EE0 00182CE0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E70 @ Get_MemoryOffset_SDA21);
/*80185EE4 00182CE4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80185EE8, 0x80185EE8) //this is a jump label
/*80185EE8 00182CE8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80185EEC 00182CEC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80185EF0 00182CF0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80185EF4 00182CF4*/ PPC::Runtime::ASM::bne(.L_80185F04);
/*80185EF8 00182CF8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80185EFC 00182CFC*/ PPC::Runtime::ASM::beq(.L_80185F04);
/*80185F00 00182D00*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80185F04, 0x80185F04) //this is a jump label
/*80185F04 00182D04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80185F08 00182D08*/ PPC::Runtime::ASM::bne(.L_80185F14);
/*80185F0C 00182D0C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80185F10 00182D10*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80185F14, 0x80185F14) //this is a jump label
/*80185F14 00182D14*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F18 00182D18*/ PPC::Runtime::ASM::li(context->r4, 0xc5);
/*80185F1C 00182D1C*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80185F20 00182D20*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*80185F24 00182D24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F28 00182D28*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80185F2C 00182D2C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185F30 00182D30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*80185F34 00182D34*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F38 00182D38*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80185F3C 00182D3C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185F40 00182D40*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*80185F44 00182D44*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F48 00182D48*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80185F4C 00182D4C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185F50 00182D50*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80185F54 00182D54*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F58 00182D58*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80185F5C 00182D5C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185F60 00182D60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*80185F64 00182D64*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F68 00182D68*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80185F6C 00182D6C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185F70 00182D70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*80185F74 00182D74*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F78 00182D78*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80185F7C 00182D7C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185F80 00182D80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*80185F84 00182D84*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F88 00182D88*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80185F8C 00182D8C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185F90 00182D90*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*80185F94 00182D94*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185F98 00182D98*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*80185F9C 00182D9C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185FA0 00182DA0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*80185FA4 00182DA4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185FA8 00182DA8*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*80185FAC 00182DAC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185FB0 00182DB0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*80185FB4 00182DB4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185FB8 00182DB8*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*80185FBC 00182DBC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185FC0 00182DC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*80185FC4 00182DC4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80185FC8 00182DC8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80185FCC 00182DCC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80185FD0 00182DD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*80185FD4 00182DD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*80185FD8 00182DD8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80185FDC 00182DDC*/ PPC::Runtime::ASM::beq(.L_80186038);
/*80185FE0 00182DE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80185FE4 00182DE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80185FE8 00182DE8*/ PPC::Runtime::ASM::beq(.L_80186038);
/*80185FEC 00182DEC*/ PPC::Runtime::ASM::lis(context->r4, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*80185FF0 00182DF0*/ PPC::Runtime::ASM::lis(context->r5, 0x1);
/*80185FF4 00182DF4*/ PPC::Runtime::ASM::addi(context->r6, context->r4, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*80185FF8 00182DF8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0EF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80185FFC 00182DFC*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x1);
/*80186000 00182E00*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80186004 00182E04*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 80186008 00182E08  4C C6 32 42 */ crset context->cr1eq
/*8018600C 00182E0C*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*80186010 00182E10*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*80186014 00182E14*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80186018 00182E18*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*8018601C 00182E1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*80186020 00182E20*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*80186024 00182E24*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80186028 00182E28*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*8018602C 00182E2C*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*80186030 00182E30*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80186034 00182E34*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
RUNTIME_PPC_JUMP_LABEL(.L_80186038, 0x80186038) //this is a jump label
/*80186038 00182E38*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8018603C 00182E3C*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80186040 00182E40*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80186044 00182E44*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80186048 00182E48*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8018604C 00182E4C*/ PPC::Runtime::ASM::stwu(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80186050 00182E50*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x12);
/*80186054 00182E54*/ PPC::Runtime::ASM::blt(.L_80185E34);
/*80186058 00182E58*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8018605C 00182E5C*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*80186060 00182E60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80186064 00182E64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80186068 00182E68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8018606C 00182E6C*/ PPC::Runtime::ASM::blr();
}