//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSGetTime.hpp"
#include "fn_80474B98.hpp"
#include "fn_80474B98.hpp"
#include "OSSetAlarm.hpp"



void fn_TCPStartRxmitTimer(PPC::Runtime::GCContext* context)
{
/*80474E60 00471C60*/ PPC::Runtime::ASM::mflr(context->r0);
/*80474E64 00471C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80474E68 00471C68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80474E6C 00471C6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80474E70 00471C70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80474E74 00471C74*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80474E78 00471C78*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80474E7C 00471C7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r3));
/*80474E80 00471C80*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80474E84 00471C84*/ PPC::Runtime::ASM::bne(.L_80474F4C);
/*80474E88 00471C88*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*80474E8C 00471C8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80474E90 00471C90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*80474E94 00471C94*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80474E98 00471C98*/ PPC::Runtime::ASM::slw(context->r6, context->r3, context->r4);
/*80474E9C 00471C9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80474EA0 00471CA0*/ PPC::Runtime::ASM::srawi(context->r3, context->r6, 31);
/*80474EA4 00471CA4*/ PPC::Runtime::ASM::srwi(context->r9, context->r0, 2);
/*80474EA8 00471CA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*80474EAC 00471CAC*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r5);
/*80474EB0 00471CB0*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r6, context->r5);
/*80474EB4 00471CB4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80474EB8 00471CB8*/ PPC::Runtime::ASM::mullw(context->r0, context->r6, context->r4);
/*80474EBC 00471CBC*/ PPC::Runtime::ASM::add(context->r10, context->r3, context->r0);
/*80474EC0 00471CC0*/ PPC::Runtime::ASM::mullw(context->r11, context->r6, context->r5);
/*80474EC4 00471CC4*/ PPC::Runtime::ASM::li(context->r7, 0xf0);
/*80474EC8 00471CC8*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80474ECC 00471CCC*/ PPC::Runtime::ASM::mullw(context->r0, context->r8, context->r7);
/*80474ED0 00471CD0*/ PPC::Runtime::ASM::mulhwu(context->r6, context->r9, context->r7);
/*80474ED4 00471CD4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r6);
/*80474ED8 00471CD8*/ PPC::Runtime::ASM::mullw(context->r6, context->r9, context->r8);
/*80474EDC 00471CDC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r6);
/*80474EE0 00471CE0*/ PPC::Runtime::ASM::mullw(context->r5, context->r9, context->r7);
/*80474EE4 00471CE4*/ PPC::Runtime::ASM::xoris(context->r4, context->r0, 0x8000);
/*80474EE8 00471CE8*/ PPC::Runtime::ASM::xoris(context->r3, context->r10, 0x8000);
/*80474EEC 00471CEC*/ PPC::Runtime::ASM::subfc(context->r0, context->r11, context->r5);
/*80474EF0 00471CF0*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r4);
/*80474EF4 00471CF4*/ PPC::Runtime::ASM::subfe(context->r3, context->r4, context->r4);
/*80474EF8 00471CF8*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*80474EFC 00471CFC*/ PPC::Runtime::ASM::addi(context->r29, context->r11, 0x0);
/*80474F00 00471D00*/ PPC::Runtime::ASM::addi(context->r30, context->r10, 0x0);
/*80474F04 00471D04*/ PPC::Runtime::ASM::beq(.L_80474F1C);
/*80474F08 00471D08*/ PPC::Runtime::ASM::mullw(context->r3, context->r8, context->r7);
/*80474F0C 00471D0C*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r9, context->r7);
/*80474F10 00471D10*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80474F14 00471D14*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x0);
/*80474F18 00471D18*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_80474F1C, 0x80474F1C) //this is a jump label
/*80474F1C 00471D1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80474F20 00471D20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80474F24 00471D24*/ PPC::Runtime::ASM::bne(.L_80474F34);
/*80474F28 00471D28*/ PPC::Runtime::ASM::bl(OSGetTime);
/*80474F2C 00471D2C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*80474F30 00471D30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80474F34, 0x80474F34) //this is a jump label
/*80474F34 00471D34*/ PPC::Runtime::ASM::lis(context->r3, fn_80474B98 @ Get_MemoryOffset_HighBit);
/*80474F38 00471D38*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_80474B98 @ Get_MemoryOffset_LowBit);
/*80474F3C 00471D3C*/ PPC::Runtime::ASM::addi(context->r6, context->r29, 0x0);
/*80474F40 00471D40*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*80474F44 00471D44*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1f8);
/*80474F48 00471D48*/ PPC::Runtime::ASM::bl(OSSetAlarm);
RUNTIME_PPC_JUMP_LABEL(.L_80474F4C, 0x80474F4C) //this is a jump label
/*80474F4C 00471D4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80474F50 00471D50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80474F54 00471D54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80474F58 00471D58*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80474F5C 00471D5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80474F60 00471D60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80474F64 00471D64*/ PPC::Runtime::ASM::blr();
}