//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_80112058.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_renderPauseHUD_renderStatChart.hpp"
#include "fn_getTrialFlag.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_80125E7C(PPC::Runtime::GCContext* context)
{
/*80125E7C 00122C7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80125E80 00122C80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80125E84 00122C84*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1091 @ Get_MemoryOffset_HighBit);
/*80125E88 00122C88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80125E8C 00122C8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80125E90 00122C90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80125E94 00122C94*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_1091 @ Get_MemoryOffset_LowBit);
/*80125E98 00122C98*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125E9C 00122C9C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125EA0 00122CA0*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125EA4 00122CA4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xb0c);
/*80125EA8 00122CA8*/ PPC::Runtime::ASM::bl(fn_80112058);
/*80125EAC 00122CAC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80125EB0 00122CB0*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80125EB4 00122CB4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80125EB8 00122CB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80125EBC 00122CBC*/ PPC::Runtime::ASM::beq(.L_80125ED0);
/*80125EC0 00122CC0*/ PPC::Runtime::ASM::bge(.L_80125EEC);
/*80125EC4 00122CC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80125EC8 00122CC8*/ PPC::Runtime::ASM::bge(.L_80125F04);
/*80125ECC 00122CCC*/ PPC::Runtime::ASM::b(.L_80125EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80125ED0, 0x80125ED0) //this is a jump label
/*80125ED0 00122CD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125ED4 00122CD4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80125ED8 00122CD8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*80125EDC 00122CDC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125EE0 00122CE0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80125EE4 00122CE4*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80125EE8 00122CE8*/ PPC::Runtime::ASM::b(.L_80125F04);
RUNTIME_PPC_JUMP_LABEL(.L_80125EEC, 0x80125EEC) //this is a jump label
/*80125EEC 00122CEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125EF0 00122CF0*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*80125EF4 00122CF4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*80125EF8 00122CF8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125EFC 00122CFC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80125F00 00122D00*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_80125F04, 0x80125F04) //this is a jump label
/*80125F04 00122D04*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80125F08 00122D08*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80125F0C 00122D0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*80125F10 00122D10*/ PPC::Runtime::ASM::bne(.L_80125F30);
/*80125F14 00122D14*/ PPC::Runtime::ASM::bl(fn_renderPauseHUD_renderStatChart);
/*80125F18 00122D18*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80125F1C 00122D1C*/ PPC::Runtime::ASM::bne(.L_80125F30);
/*80125F20 00122D20*/ PPC::Runtime::ASM::bl(fn_getTrialFlag);
/*80125F24 00122D24*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80125F28 00122D28*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80125F2C 00122D2C*/ PPC::Runtime::ASM::beq(.L_80125FB4);
RUNTIME_PPC_JUMP_LABEL(.L_80125F30, 0x80125F30) //this is a jump label
/*80125F30 00122D30*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80125F34 00122D34*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80125F38 00122D38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80125F3C 00122D3C*/ PPC::Runtime::ASM::beq(.L_80125F50);
/*80125F40 00122D40*/ PPC::Runtime::ASM::bge(.L_80125F84);
/*80125F44 00122D44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80125F48 00122D48*/ PPC::Runtime::ASM::bge(.L_80125FB4);
/*80125F4C 00122D4C*/ PPC::Runtime::ASM::b(.L_80125F84);
RUNTIME_PPC_JUMP_LABEL(.L_80125F50, 0x80125F50) //this is a jump label
/*80125F50 00122D50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125F54 00122D54*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x8);
/*80125F58 00122D58*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x38);
/*80125F5C 00122D5C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125F60 00122D60*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80125F64 00122D64*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80125F68 00122D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125F6C 00122D6C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x10);
/*80125F70 00122D70*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x54);
/*80125F74 00122D74*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125F78 00122D78*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80125F7C 00122D7C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80125F80 00122D80*/ PPC::Runtime::ASM::b(.L_80125FB4);
RUNTIME_PPC_JUMP_LABEL(.L_80125F84, 0x80125F84) //this is a jump label
/*80125F84 00122D84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125F88 00122D88*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*80125F8C 00122D8C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x70);
/*80125F90 00122D90*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125F94 00122D94*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80125F98 00122D98*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80125F9C 00122D9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125FA0 00122DA0*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x14);
/*80125FA4 00122DA4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x8c);
/*80125FA8 00122DA8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125FAC 00122DAC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80125FB0 00122DB0*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_80125FB4, 0x80125FB4) //this is a jump label
/*80125FB4 00122DB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80125FB8 00122DB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80125FBC 00122DBC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80125FC0 00122DC0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125FC4 00122DC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80125FC8 00122DC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80125FCC 00122DCC*/ PPC::Runtime::ASM::blr();
}