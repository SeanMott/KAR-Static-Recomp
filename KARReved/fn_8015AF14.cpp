//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_8015AB94.hpp"
#include "fn_8015AB94.hpp"
#include "fn_801389D8.hpp"
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
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_8015AF14(PPC::Runtime::GCContext* context)
{
/*8015AF14 00157D14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8015AF18 00157D18*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015AF1C 00157D1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8015AF20 00157D20*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8015AF24 00157D24*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8015AF28 00157D28*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015AF2C 00157D2C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8015AF30 00157D30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x870, context->r3));
/*8015AF34 00157D34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015AF38 00157D38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015AF3C 00157D3C*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8015AF40 00157D40*/ PPC::Runtime::ASM::lis(context->r4, fn_8015AB94 @ Get_MemoryOffset_HighBit);
/*8015AF44 00157D44*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8015AF48 00157D48*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8015AF4C 00157D4C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8015AF50 00157D50*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8015AB94 @ Get_MemoryOffset_LowBit);
/*8015AF54 00157D54*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8015AF58 00157D58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0864 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015AF5C 00157D5C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8015AF60 00157D60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x870, context->r30));
/*8015AF64 00157D64*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8015AF68 00157D68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8015AF6C 00157D6C*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8015AF70 00157D70*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AF74 00157D74*/ PPC::Runtime::ASM::li(context->r4, 0x59);
/*8015AF78 00157D78*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8015AF7C 00157D7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8015AF80 00157D80*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AF84 00157D84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8015AF88 00157D88*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AF8C 00157D8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8015AF90 00157D90*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AF94 00157D94*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8015AF98 00157D98*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AF9C 00157D9C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8015AFA0 00157DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AFA4 00157DA4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8015AFA8 00157DA8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AFAC 00157DAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8015AFB0 00157DB0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AFB4 00157DB4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8015AFB8 00157DB8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AFBC 00157DBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8015AFC0 00157DC0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AFC4 00157DC4*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8015AFC8 00157DC8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AFCC 00157DCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8015AFD0 00157DD0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AFD4 00157DD4*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8015AFD8 00157DD8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AFDC 00157DDC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8015AFE0 00157DE0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AFE4 00157DE4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8015AFE8 00157DE8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AFEC 00157DEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8015AFF0 00157DF0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015AFF4 00157DF4*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8015AFF8 00157DF8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015AFFC 00157DFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8015B000 00157E00*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B004 00157E04*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8015B008 00157E08*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B00C 00157E0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8015B010 00157E10*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B014 00157E14*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8015B018 00157E18*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B01C 00157E1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8015B020 00157E20*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B024 00157E24*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8015B028 00157E28*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B02C 00157E2C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8015B030 00157E30*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B034 00157E34*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8015B038 00157E38*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B03C 00157E3C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8015B040 00157E40*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B044 00157E44*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*8015B048 00157E48*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B04C 00157E4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8015B050 00157E50*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B054 00157E54*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8015B058 00157E58*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B05C 00157E5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8015B060 00157E60*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B064 00157E64*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8015B068 00157E68*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B06C 00157E6C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8015B070 00157E70*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8015B074 00157E74*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8015B078 00157E78*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015B07C 00157E7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8015B080 00157E80*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8015B084 00157E84*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r25));
/*8015B088 00157E88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8015B08C 00157E8C*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x4c);
/*8015B090 00157E90*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8015B094 00157E94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8015B098 00157E98*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x58);
/*8015B09C 00157E9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8015B0A0 00157EA0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8015B0A4 00157EA4*/ PPC::Runtime::ASM::mr(context->r26, context->r27);
/*8015B0A8 00157EA8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015B0AC, 0x8015B0AC) //this is a jump label
/*8015B0AC 00157EAC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8015B0B0 00157EB0*/ PPC::Runtime::ASM::addi(context->r28, context->r27, 0x64);
/*8015B0B4 00157EB4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8015B0B8 00157EB8*/ PPC::Runtime::ASM::bne(.L_8015B0CC);
/*8015B0BC 00157EBC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6920 @ Get_MemoryOffset_SDA21);
/*8015B0C0 00157EC0*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8015B0C4 00157EC4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6928 @ Get_MemoryOffset_SDA21);
/*8015B0C8 00157EC8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015B0CC, 0x8015B0CC) //this is a jump label
/*8015B0CC 00157ECC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8015B0D0 00157ED0*/ PPC::Runtime::ASM::bne(.L_8015B0E8);
/*8015B0D4 00157ED4*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1250 @ Get_MemoryOffset_HighBit);
/*8015B0D8 00157ED8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6920 @ Get_MemoryOffset_SDA21);
/*8015B0DC 00157EDC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1250 @ Get_MemoryOffset_LowBit);
/*8015B0E0 00157EE0*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8015B0E4 00157EE4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015B0E8, 0x8015B0E8) //this is a jump label
/*8015B0E8 00157EE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8015B0EC 00157EEC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8015B0F0 00157EF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8015B0F4 00157EF4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0xd);
/*8015B0F8 00157EF8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0xc);
/*8015B0FC 00157EFC*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*8015B100 00157F00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8015B104 00157F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8015B108 00157F08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8015B10C 00157F0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8015B110 00157F10*/ PPC::Runtime::ASM::ble(.L_8015B0AC);
/*8015B114 00157F14*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x874, context->r30));
/*8015B118 00157F18*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8015B11C 00157F1C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8015B120 00157F20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8015B124 00157F24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015B128 00157F28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8015B12C 00157F2C*/ PPC::Runtime::ASM::blr();
}