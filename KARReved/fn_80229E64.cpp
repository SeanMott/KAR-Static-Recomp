//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80220ADC.hpp"
#include "fn_80222ED8.hpp"
#include "fn_802361A0.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_802361A0.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_8021F7DC.hpp"
#include "fn_80220230.hpp"
#include "fn_80229470.hpp"
#include "fn_80229470.hpp"
#include "fn_80236C40.hpp"
#include "fn_800E7108.hpp"
#include "fn_800E72B4.hpp"
#include "fn_800E774C.hpp"
#include "fn_800E751C.hpp"
#include "fn_80236C40.hpp"
#include "fn_8007A5B8.hpp"
#include "fn_8007A920.hpp"
#include "fn_80228D68.hpp"
#include "fn_80228D68.hpp"
#include "fn_8018CB04.hpp"



void fn_80229E64(PPC::Runtime::GCContext* context)
{
/*80229E64 00226C64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80229E68 00226C68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80229E6C 00226C6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80229E70 00226C70*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80229E74 00226C74*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80229E78 00226C78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80229E7C 00226C7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80229E80 00226C80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80229E84 00226C84*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80229E88 00226C88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r3));
/*80229E8C 00226C8C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80229E90 00226C90*/ PPC::Runtime::ASM::beq(.L_8022A220);
/*80229E94 00226C94*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80229E98 00226C98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
/*80229E9C 00226C9C*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r31));
/*80229EA0 00226CA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80229EA4 00226CA4*/ PPC::Runtime::ASM::beq(.L_80229F94);
/*80229EA8 00226CA8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80229EAC 00226CAC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r31));
/*80229EB0 00226CB0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r31));
/*80229EB4 00226CB4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80229EB8 00226CB8*/ PPC::Runtime::ASM::bne(.L_80229F94);
/*80229EBC 00226CBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*80229EC0 00226CC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80229EC4 00226CC4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80229EC8 00226CC8*/ PPC::Runtime::ASM::bne(.L_80229EDC);
/*80229ECC 00226CCC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7248 @ Get_MemoryOffset_SDA21);
/*80229ED0 00226CD0*/ PPC::Runtime::ASM::li(context->r4, 0x308);
/*80229ED4 00226CD4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7250 @ Get_MemoryOffset_SDA21);
/*80229ED8 00226CD8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80229EDC, 0x80229EDC) //this is a jump label
/*80229EDC 00226CDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229EE0 00226CE0*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80229EE4 00226CE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80229EE8 00226CE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*80229EEC 00226CEC*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r0);
/*80229EF0 00226CF0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r31));
/*80229EF4 00226CF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*80229EF8 00226CF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r31));
/*80229EFC 00226CFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80229F00 00226D00*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*80229F04 00226D04*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80229F08 00226D08*/ PPC::Runtime::ASM::bne(.L_80229F1C);
/*80229F0C 00226D0C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7248 @ Get_MemoryOffset_SDA21);
/*80229F10 00226D10*/ PPC::Runtime::ASM::li(context->r4, 0x2cc);
/*80229F14 00226D14*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7250 @ Get_MemoryOffset_SDA21);
/*80229F18 00226D18*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80229F1C, 0x80229F1C) //this is a jump label
/*80229F1C 00226D1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80229F20 00226D20*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*80229F24 00226D24*/ PPC::Runtime::ASM::beq(.L_80229F3C);
/*80229F28 00226D28*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4B24 @ Get_MemoryOffset_HighBit);
/*80229F2C 00226D2C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7248 @ Get_MemoryOffset_SDA21);
/*80229F30 00226D30*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B4B24 @ Get_MemoryOffset_LowBit);
/*80229F34 00226D34*/ PPC::Runtime::ASM::li(context->r4, 0x2cd);
/*80229F38 00226D38*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80229F3C, 0x80229F3C) //this is a jump label
/*80229F3C 00226D3C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80229F40 00226D40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80229F44 00226D44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80229F48 00226D48*/ PPC::Runtime::ASM::bne(.L_80229F94);
/*80229F4C 00226D4C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80229F50 00226D50*/ PPC::Runtime::ASM::beq(.L_80229F94);
/*80229F54 00226D54*/ PPC::Runtime::ASM::bne(.L_80229F68);
/*80229F58 00226D58*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7248 @ Get_MemoryOffset_SDA21);
/*80229F5C 00226D5C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80229F60 00226D60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7250 @ Get_MemoryOffset_SDA21);
/*80229F64 00226D64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80229F68, 0x80229F68) //this is a jump label
/*80229F68 00226D68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80229F6C 00226D6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80229F70 00226D70*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80229F74 00226D74*/ PPC::Runtime::ASM::bne(.L_80229F84);
/*80229F78 00226D78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80229F7C 00226D7C*/ PPC::Runtime::ASM::beq(.L_80229F84);
/*80229F80 00226D80*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80229F84, 0x80229F84) //this is a jump label
/*80229F84 00226D84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80229F88 00226D88*/ PPC::Runtime::ASM::bne(.L_80229F94);
/*80229F8C 00226D8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80229F90 00226D90*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80229F94, 0x80229F94) //this is a jump label
/*80229F94 00226D94*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80229F98 00226D98*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*80229F9C 00226D9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
/*80229FA0 00226DA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80229FA4 00226DA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r6));
/*80229FA8 00226DA8*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*80229FAC 00226DAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80229FB0 00226DB0*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*80229FB4 00226DB4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80229FB8 00226DB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80229FBC 00226DBC*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E29F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229FC0 00226DC0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80229FC4 00226DC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80229FC8 00226DC8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f3);
/*80229FCC 00226DCC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80229FD0 00226DD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80229FD4 00226DD4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80229FD8 00226DD8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*80229FDC 00226DDC*/ PPC::Runtime::ASM::fdivs(context->f2, context->f2, context->f1);
/*80229FE0 00226DE0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80229FE4 00226DE4*/ PPC::Runtime::ASM::ble(.L_80229FEC);
/*80229FE8 00226DE8*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80229FEC, 0x80229FEC) //this is a jump label
/*80229FEC 00226DEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r6));
/*80229FF0 00226DF0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80229FF4 00226DF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r6));
/*80229FF8 00226DF8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80229FFC 00226DFC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f0, context->f1);
/*8022A000 00226E00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8022A004 00226E04*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8022A008 00226E08*/ PPC::Runtime::ASM::bl(fn_80220ADC);
/*8022A00C 00226E0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r31));
/*8022A010 00226E10*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8022A014 00226E14*/ PPC::Runtime::ASM::bne(.L_8022A220);
/*8022A018 00226E18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022A01C 00226E1C*/ PPC::Runtime::ASM::bl(fn_80222ED8);
/*8022A020 00226E20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*8022A024 00226E24*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*8022A028 00226E28*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*8022A02C 00226E2C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022A030 00226E30*/ PPC::Runtime::ASM::beq(.L_8022A040);
/*8022A034 00226E34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*8022A038 00226E38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*8022A03C 00226E3C*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
RUNTIME_PPC_JUMP_LABEL(.L_8022A040, 0x8022A040) //this is a jump label
/*8022A040 00226E40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8022A044 00226E44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*8022A048 00226E48*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*8022A04C 00226E4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022A050 00226E50*/ PPC::Runtime::ASM::beq(.L_8022A060);
/*8022A054 00226E54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8022A058 00226E58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*8022A05C 00226E5C*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
RUNTIME_PPC_JUMP_LABEL(.L_8022A060, 0x8022A060) //this is a jump label
/*8022A060 00226E60*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022A064 00226E64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022A068 00226E68*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E29E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022A06C 00226E6C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8022A070 00226E70*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8022A074 00226E74*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8022A078 00226E78*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*8022A07C 00226E7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022A080 00226E80*/ PPC::Runtime::ASM::bl(fn_80220230);
/*8022A084 00226E84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*8022A088 00226E88*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022A08C 00226E8C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*8022A090 00226E90*/ PPC::Runtime::ASM::lis(context->r4, 0x5);
/*8022A094 00226E94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*8022A098 00226E98*/ PPC::Runtime::ASM::lis(context->r3, fn_80229470 @ Get_MemoryOffset_HighBit);
/*8022A09C 00226E9C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_80229470 @ Get_MemoryOffset_LowBit);
/*8022A0A0 00226EA0*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8022A0A4 00226EA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8022A0A8 00226EA8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x7e46);
/*8022A0AC 00226EAC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*8022A0B0 00226EB0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8022A0B4 00226EB4*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*8022A0B8 00226EB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*8022A0BC 00226EBC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022A0C0 00226EC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*8022A0C4 00226EC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8022A0C8 00226EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8022A0CC 00226ECC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8022A0D0 00226ED0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*8022A0D4 00226ED4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*8022A0D8 00226ED8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022A0DC 00226EDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8022A0E0 00226EE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*8022A0E4 00226EE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022A0E8 00226EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8022A0EC 00226EEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*8022A0F0 00226EF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8022A0F4 00226EF4*/ PPC::Runtime::ASM::bl(fn_800E7108);
/*8022A0F8 00226EF8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8022A0FC 00226EFC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xac);
/*8022A100 00226F00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*8022A104 00226F04*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8022A108 00226F08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*8022A10C 00226F0C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*8022A110 00226F10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*8022A114 00226F14*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8022A118 00226F18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022A11C 00226F1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*8022A120 00226F20*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*8022A124 00226F24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022A128 00226F28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*8022A12C 00226F2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8022A130 00226F30*/ PPC::Runtime::ASM::bl(fn_800E72B4);
/*8022A134 00226F34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022A138 00226F38*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8022A13C 00226F3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8022A140 00226F40*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f0);
/*8022A144 00226F44*/ PPC::Runtime::ASM::bl(fn_800E774C);
/*8022A148 00226F48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022A14C 00226F4C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022A150 00226F50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8022A154 00226F54*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8022A158 00226F58*/ PPC::Runtime::ASM::bl(fn_800E751C);
/*8022A15C 00226F5C*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*8022A160 00226F60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8022A164 00226F64*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*8022A168 00226F68*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x5a5e);
/*8022A16C 00226F6C*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0xac);
/*8022A170 00226F70*/ PPC::Runtime::ASM::li(context->r6, 0x1fe);
/*8022A174 00226F74*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8022A178 00226F78*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8022A17C 00226F7C*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*8022A180 00226F80*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*8022A184 00226F84*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E29E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022A188 00226F88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*8022A18C 00226F8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*8022A190 00226F90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*8022A194 00226F94*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8022A198 00226F98*/ PPC::Runtime::ASM::bne(.L_8022A1EC);
/*8022A19C 00226F9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022A1A0 00226FA0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x50);
/*8022A1A4 00226FA4*/ PPC::Runtime::ASM::bl(fn_8007A5B8);
/*8022A1A8 00226FA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*8022A1AC 00226FAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*8022A1B0 00226FB0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8022A1B4 00226FB4*/ PPC::Runtime::ASM::beq(.L_8022A1EC);
/*8022A1B8 00226FB8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*8022A1BC 00226FBC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8022A1C0 00226FC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*8022A1C4 00226FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022A1C8 00226FC8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022A1CC 00226FCC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022A1D0 00226FD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*8022A1D4 00226FD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022A1D8 00226FD8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022A1DC 00226FDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r5));
/*8022A1E0 00226FE0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8022A1E4 00226FE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022A1E8 00226FE8*/ PPC::Runtime::ASM::bl(fn_8007A920);
RUNTIME_PPC_JUMP_LABEL(.L_8022A1EC, 0x8022A1EC) //this is a jump label
/*8022A1EC 00226FEC*/ PPC::Runtime::ASM::lis(context->r3, fn_80228D68 @ Get_MemoryOffset_HighBit);
/*8022A1F0 00226FF0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80228D68 @ Get_MemoryOffset_LowBit);
/*8022A1F4 00226FF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*8022A1F8 00226FF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8022A1FC 00226FFC*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*8022A200 00227000*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*8022A204 00227004*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022A208 00227008*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*8022A20C 0022700C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*8022A210 00227010*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*8022A214 00227014*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/*8022A218 00227018*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*8022A21C 0022701C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8022A220, 0x8022A220) //this is a jump label
/*8022A220 00227020*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8022A224 00227024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8022A228 00227028*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8022A22C 0022702C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8022A230 00227030*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8022A234 00227034*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8022A238 00227038*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022A23C 0022703C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8022A240 00227040*/ PPC::Runtime::ASM::blr();
}