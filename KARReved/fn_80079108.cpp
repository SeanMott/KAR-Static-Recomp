//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059CFC.hpp"
#include "fn_80059CFC.hpp"



void fn_80079108(PPC::Runtime::GCContext* context)
{
/*80079108 00075F08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007910C 00075F0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80079110 00075F10*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80079114 00075F14*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_553 @ Get_MemoryOffset_HighBit);
/*80079118 00075F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007911C 00075F1C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80079120 00075F20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80079124 00075F24*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80079128 00075F28*/ PPC::Runtime::ASM::addi(context->r30, context->r4, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*8007912C 00075F2C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_553 @ Get_MemoryOffset_LowBit);
/*80079130 00075F30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80079134 00075F34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80079138 00075F38*/ PPC::Runtime::ASM::bl(fn_80459C40);
RUNTIME_PPC_JUMP_LABEL(.L_8007913C, 0x8007913C) //this is a jump label
/*8007913C 00075F3C*/ PPC::Runtime::ASM::bl(fn_readMemCardSaveBoolForIfWeSkipTheIntroVideo);
/*80079140 00075F40*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xb);
/*80079144 00075F44*/ PPC::Runtime::ASM::bne(.L_80079154);
/*80079148 00075F48*/ PPC::Runtime::ASM::bl(fn_VIWaitForRetrace);
/*8007914C 00075F4C*/ PPC::Runtime::ASM::bl(fn_80059CFC);
/*80079150 00075F50*/ PPC::Runtime::ASM::b(.L_8007913C);
RUNTIME_PPC_JUMP_LABEL(.L_80079154, 0x80079154) //this is a jump label
/*80079154 00075F54*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80079158 00075F58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007915C 00075F5C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*80079160 00075F60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80079164 00075F64*/ PPC::Runtime::ASM::bne(.L_8007919C);
/*80079168 00075F68*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8007916C 00075F6C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_553 @ Get_MemoryOffset_HighBit);
/*80079170 00075F70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80079174 00075F74*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_553 @ Get_MemoryOffset_LowBit);
/*80079178 00075F78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8007917C 00075F7C*/ PPC::Runtime::ASM::bl(fn_8045A238);
RUNTIME_PPC_JUMP_LABEL(.L_80079180, 0x80079180) //this is a jump label
/*80079180 00075F80*/ PPC::Runtime::ASM::bl(fn_readMemCardSaveBoolForIfWeSkipTheIntroVideo);
/*80079184 00075F84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xb);
/*80079188 00075F88*/ PPC::Runtime::ASM::bne(.L_80079198);
/*8007918C 00075F8C*/ PPC::Runtime::ASM::bl(fn_VIWaitForRetrace);
/*80079190 00075F90*/ PPC::Runtime::ASM::bl(fn_80059CFC);
/*80079194 00075F94*/ PPC::Runtime::ASM::b(.L_80079180);
RUNTIME_PPC_JUMP_LABEL(.L_80079198, 0x80079198) //this is a jump label
/*80079198 00075F98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8007919C, 0x8007919C) //this is a jump label
/*8007919C 00075F9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800791A0 00075FA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800791A4 00075FA4*/ PPC::Runtime::ASM::bne(.L_800791DC);
/*800791A8 00075FA8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*800791AC 00075FAC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800791B0 00075FB0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*800791B4 00075FB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800791B8 00075FB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800791BC 00075FBC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800791C0 00075FC0*/ PPC::Runtime::ASM::bl(fn_8045B7F8);
/*800791C4 00075FC4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*800791C8 00075FC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800791CC 00075FCC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*800791D0 00075FD0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800791D4 00075FD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800791D8 00075FD8*/ PPC::Runtime::ASM::b(.L_800791E0);
RUNTIME_PPC_JUMP_LABEL(.L_800791DC, 0x800791DC) //this is a jump label
/*800791DC 00075FDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800791E0, 0x800791E0) //this is a jump label
/*800791E0 00075FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800791E4 00075FE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800791E8 00075FE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800791EC 00075FEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800791F0 00075FF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800791F4 00075FF4*/ PPC::Runtime::ASM::blr();
}