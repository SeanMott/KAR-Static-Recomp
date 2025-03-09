//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSGetCurrentContext2.hpp"
#include "fn_OSSaveContext.hpp"
#include "OSSetCurrentContext.hpp"
#include "OSEnableInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSClearContext.hpp"
#include "OSSetCurrentContext.hpp"
#include "OSLoadContext.hpp"



void SelectThread(PPC::Runtime::GCContext* context)
{
/*803D9E78 003D6C78*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D9E7C 003D6C7C*/ PPC::Runtime::ASM::lis(context->r4, RunQueue_8056D958 @ Get_MemoryOffset_HighBit);
/*803D9E80 003D6C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D9E84 003D6C84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803D9E88 003D6C88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D9E8C 003D6C8C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, RunQueue_8056D958 @ Get_MemoryOffset_LowBit);
/*803D9E90 003D6C90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D9E94 003D6C94*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803D9E98 003D6C98*/ PPC::Runtime::ASM::lwz(context->r0, Reschedule_805DDF30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9E9C 003D6C9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803D9EA0 003D6CA0*/ PPC::Runtime::ASM::ble(.L_803D9EAC);
/*803D9EA4 003D6CA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D9EA8 003D6CA8*/ PPC::Runtime::ASM::b(.L_803DA088);
RUNTIME_PPC_JUMP_LABEL(.L_803D9EAC, 0x803D9EAC) //this is a jump label
/*803D9EAC 003D6CAC*/ PPC::Runtime::ASM::bl(fn_OSGetCurrentContext2);
/*803D9EB0 003D6CB0*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803D9EB4 003D6CB4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r4));
/*803D9EB8 003D6CB8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r6);
/*803D9EBC 003D6CBC*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x0);
/*803D9EC0 003D6CC0*/ PPC::Runtime::ASM::beq(.L_803D9ECC);
/*803D9EC4 003D6CC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D9EC8 003D6CC8*/ PPC::Runtime::ASM::b(.L_803DA088);
RUNTIME_PPC_JUMP_LABEL(.L_803D9ECC, 0x803D9ECC) //this is a jump label
/*803D9ECC 003D6CCC*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*803D9ED0 003D6CD0*/ PPC::Runtime::ASM::beq(.L_803D9F8C);
/*803D9ED4 003D6CD4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r6));
/*803D9ED8 003D6CD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*803D9EDC 003D6CDC*/ PPC::Runtime::ASM::bne(.L_803D9F6C);
/*803D9EE0 003D6CE0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803D9EE4 003D6CE4*/ PPC::Runtime::ASM::bne(.L_803D9F04);
/*803D9EE8 003D6CE8*/ PPC::Runtime::ASM::lwz(context->r4, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9EEC 003D6CEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r6));
/*803D9EF0 003D6CF0*/ PPC::Runtime::ASM::cntlzw(context->r4, context->r4);
/*803D9EF4 003D6CF4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*803D9EF8 003D6CF8*/ PPC::Runtime::ASM::bgt(.L_803D9F04);
/*803D9EFC 003D6CFC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D9F00 003D6D00*/ PPC::Runtime::ASM::b(.L_803DA088);
RUNTIME_PPC_JUMP_LABEL(.L_803D9F04, 0x803D9F04) //this is a jump label
/*803D9F04 003D6D04*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803D9F08 003D6D08*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r6));
/*803D9F0C 003D6D0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r6));
/*803D9F10 003D6D10*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*803D9F14 003D6D14*/ PPC::Runtime::ASM::add(context->r0, context->r31, context->r0);
/*803D9F18 003D6D18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r6));
/*803D9F1C 003D6D1C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r6));
/*803D9F20 003D6D20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803D9F24 003D6D24*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803D9F28 003D6D28*/ PPC::Runtime::ASM::bne(.L_803D9F34);
/*803D9F2C 003D6D2C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D9F30 003D6D30*/ PPC::Runtime::ASM::b(.L_803D9F38);
RUNTIME_PPC_JUMP_LABEL(.L_803D9F34, 0x803D9F34) //this is a jump label
/*803D9F34 003D6D34*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803D9F38, 0x803D9F38) //this is a jump label
/*803D9F38 003D6D38*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r6));
/*803D9F3C 003D6D3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D9F40 003D6D40*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D9F44 003D6D44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r6));
/*803D9F48 003D6D48*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r6));
/*803D9F4C 003D6D4C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803D9F50 003D6D50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r6));
/*803D9F54 003D6D54*/ PPC::Runtime::ASM::lwz(context->r5, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9F58 003D6D58*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x1f);
/*803D9F5C 003D6D5C*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*803D9F60 003D6D60*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*803D9F64 003D6D64*/ PPC::Runtime::ASM::stw(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9F68 003D6D68*/ PPC::Runtime::ASM::stw(context->r4, RunQueueHint_805DDF2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803D9F6C, 0x803D9F6C) //this is a jump label
/*803D9F6C 003D6D6C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a2, context->r6));
/*803D9F70 003D6D70*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*803D9F74 003D6D74*/ PPC::Runtime::ASM::bne(.L_803D9F8C);
/*803D9F78 003D6D78*/ PPC::Runtime::ASM::bl(fn_OSSaveContext);
/*803D9F7C 003D6D7C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D9F80 003D6D80*/ PPC::Runtime::ASM::beq(.L_803D9F8C);
/*803D9F84 003D6D84*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D9F88 003D6D88*/ PPC::Runtime::ASM::b(.L_803DA088);
RUNTIME_PPC_JUMP_LABEL(.L_803D9F8C, 0x803D9F8C) //this is a jump label
/*803D9F8C 003D6D8C*/ PPC::Runtime::ASM::lwz(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9F90 003D6D90*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D9F94 003D6D94*/ PPC::Runtime::ASM::bne(.L_803D9FE8);
/*803D9F98 003D6D98*/ PPC::Runtime::ASM::lwz(context->r12, SwitchThreadCallback_805DC9A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9F9C 003D6D9C*/ PPC::Runtime::ASM::lis(context->r30, 0x8000);
/*803D9FA0 003D6DA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r30));
/*803D9FA4 003D6DA4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803D9FA8 003D6DA8*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803D9FAC 003D6DAC  4E 80 00 21 */ blrl
/*803D9FB0 003D6DB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D9FB4 003D6DB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r30));
/*803D9FB8 003D6DB8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x730);
/*803D9FBC 003D6DBC*/ PPC::Runtime::ASM::bl(OSSetCurrentContext);
RUNTIME_PPC_JUMP_LABEL(.L_803D9FC0, 0x803D9FC0) //this is a jump label
/*803D9FC0 003D6DC0*/ PPC::Runtime::ASM::bl(OSEnableInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_803D9FC4, 0x803D9FC4) //this is a jump label
/*803D9FC4 003D6DC4*/ PPC::Runtime::ASM::lwz(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9FC8 003D6DC8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D9FCC 003D6DCC*/ PPC::Runtime::ASM::beq(.L_803D9FC4);
/*803D9FD0 003D6DD0*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803D9FD4 003D6DD4*/ PPC::Runtime::ASM::lwz(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9FD8 003D6DD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D9FDC 003D6DDC*/ PPC::Runtime::ASM::beq(.L_803D9FC0);
/*803D9FE0 003D6DE0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x730);
/*803D9FE4 003D6DE4*/ PPC::Runtime::ASM::bl(OSClearContext);
RUNTIME_PPC_JUMP_LABEL(.L_803D9FE8, 0x803D9FE8) //this is a jump label
/*803D9FE8 003D6DE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D9FEC 003D6DEC*/ PPC::Runtime::ASM::stw(context->r3, RunQueueHint_805DDF2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9FF0 003D6DF0*/ PPC::Runtime::ASM::lwz(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9FF4 003D6DF4*/ PPC::Runtime::ASM::cntlzw(context->r7, context->r0);
/*803D9FF8 003D6DF8*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 3);
/*803D9FFC 003D6DFC*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*803DA000 003D6E00*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803DA004 003D6E04*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r5));
/*803DA008 003D6E08*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*803DA00C 003D6E0C*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*803DA010 003D6E10*/ PPC::Runtime::ASM::bne(.L_803DA01C);
/*803DA014 003D6E14*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803DA018 003D6E18*/ PPC::Runtime::ASM::b(.L_803DA020);
RUNTIME_PPC_JUMP_LABEL(.L_803DA01C, 0x803DA01C) //this is a jump label
/*803DA01C 003D6E1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_803DA020, 0x803DA020) //this is a jump label
/*803DA020 003D6E20*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803DA024 003D6E24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803DA028 003D6E28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803DA02C 003D6E2C*/ PPC::Runtime::ASM::bne(.L_803DA048);
/*803DA030 003D6E30*/ PPC::Runtime::ASM::subfic(context->r0, context->r7, 0x1f);
/*803DA034 003D6E34*/ PPC::Runtime::ASM::lwz(context->r4, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DA038 003D6E38*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803DA03C 003D6E3C*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*803DA040 003D6E40*/ PPC::Runtime::ASM::andc(context->r0, context->r4, context->r0);
/*803DA044 003D6E44*/ PPC::Runtime::ASM::stw(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803DA048, 0x803DA048) //this is a jump label
/*803DA048 003D6E48*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803DA04C 003D6E4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*803DA050 003D6E50*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803DA054 003D6E54*/ PPC::Runtime::ASM::lis(context->r31, 0x8000);
/*803DA058 003D6E58*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r30));
/*803DA05C 003D6E5C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803DA060 003D6E60*/ PPC::Runtime::ASM::lwz(context->r12, SwitchThreadCallback_805DC9A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DA064 003D6E64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*803DA068 003D6E68*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803DA06C 003D6E6C  4E 80 00 21 */ blrl
/*803DA070 003D6E70*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*803DA074 003D6E74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803DA078 003D6E78*/ PPC::Runtime::ASM::bl(OSSetCurrentContext);
/*803DA07C 003D6E7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803DA080 003D6E80*/ PPC::Runtime::ASM::bl(OSLoadContext);
/*803DA084 003D6E84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_803DA088, 0x803DA088) //this is a jump label
/*803DA088 003D6E88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DA08C 003D6E8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DA090 003D6E90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DA094 003D6E94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803DA098 003D6E98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DA09C 003D6E9C*/ PPC::Runtime::ASM::blr();
}