//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800528F0.hpp"
#include "fn_800528F0.hpp"



void fn_80197F28(PPC::Runtime::GCContext* context)
{
/*80197F28 00194D28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80197F2C 00194D2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80197F30 00194D30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80197F34 00194D34*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80197F38 00194D38*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*80197F3C 00194D3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80197F40 00194D40*/ PPC::Runtime::ASM::mr(context->r24, context->r5);
/*80197F44 00194D44*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80197F48 00194D48*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80197F4C 00194D4C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80197F50 00194D50*/ PPC::Runtime::ASM::mr(context->r23, context->r6);
/*80197F54 00194D54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80197F58 00194D58*/ PPC::Runtime::ASM::slwi(context->r26, context->r0, 4);
/*80197F5C 00194D5C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80197F60 00194D60*/ PPC::Runtime::ASM::b(.L_80197FA0);
RUNTIME_PPC_JUMP_LABEL(.L_80197F64, 0x80197F64) //this is a jump label
/*80197F64 00194D64*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r28));
/*80197F68 00194D68*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r26);
/*80197F6C 00194D6C*/ PPC::Runtime::ASM::b(.L_80197F78);
RUNTIME_PPC_JUMP_LABEL(.L_80197F70, 0x80197F70) //this is a jump label
/*80197F70 00194D70*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*80197F74 00194D74*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
RUNTIME_PPC_JUMP_LABEL(.L_80197F78, 0x80197F78) //this is a jump label
/*80197F78 00194D78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 80197F7C 00194D7C  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*80197F80 00194D80*/ PPC::Runtime::ASM::beq(.L_80197F70);
/*80197F84 00194D84*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r26);
/*80197F88 00194D88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80197F8C 00194D8C*/ PPC::Runtime::ASM::bl(fn_HSD_IDInsertToTable);
/*80197F90 00194D90*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
/*80197F94 00194D94*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*80197F98 00194D98*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80197F9C 00194D9C*/ PPC::Runtime::ASM::bl(fn_800528F0);
RUNTIME_PPC_JUMP_LABEL(.L_80197FA0, 0x80197FA0) //this is a jump label
/*80197FA0 00194DA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80197FA4 00194DA4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80197FA8 00194DA8*/ PPC::Runtime::ASM::bne(.L_80197F64);
/*80197FAC 00194DAC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80197FB0 00194DB0*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80197FB4 00194DB4*/ PPC::Runtime::ASM::mr(context->r27, context->r23);
/*80197FB8 00194DB8*/ PPC::Runtime::ASM::slwi(context->r31, context->r30, 2);
/*80197FBC 00194DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80197FC0 00194DC0*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80197FC4 00194DC4*/ PPC::Runtime::ASM::b(.L_80198114);
RUNTIME_PPC_JUMP_LABEL(.L_80197FC8, 0x80197FC8) //this is a jump label
/*80197FC8 00194DC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r28));
/*80197FCC 00194DCC*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r26);
/*80197FD0 00194DD0*/ PPC::Runtime::ASM::b(.L_80197FE0);
RUNTIME_PPC_JUMP_LABEL(.L_80197FD4, 0x80197FD4) //this is a jump label
/*80197FD4 00194DD4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*80197FD8 00194DD8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80197FDC 00194DDC*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
RUNTIME_PPC_JUMP_LABEL(.L_80197FE0, 0x80197FE0) //this is a jump label
/*80197FE0 00194DE0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 80197FE4 00194DE4  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*80197FE8 00194DE8*/ PPC::Runtime::ASM::beq(.L_80197FD4);
/*80197FEC 00194DEC*/ PPC::Runtime::ASM::lwzx(context->r24, context->r4, context->r26);
/*80197FF0 00194DF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*80197FF4 00194DF4*/ PPC::Runtime::ASM::bl(fn_HSD_DObjLoadDesc);
/* 80197FF8 00194DF8  7C 77 1B 79 */ mr. context->r23 , context->r3
/*80197FFC 00194DFC*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80198000 00194E00*/ PPC::Runtime::ASM::beq(.L_80198100);
/*80198004 00194E04*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80198008 00194E08*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*8019800C 00194E0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80198010 00194E10*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80198014 00194E14*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*80198018 00194E18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8019801C 00194E1C*/ PPC::Runtime::ASM::bl(fn_HSD_DObjResolveRefsAll);
/*80198020 00194E20*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80198024 00194E24*/ PPC::Runtime::ASM::bne(.L_80198070);
/*80198028 00194E28*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*8019802C 00194E2C*/ PPC::Runtime::ASM::beq(.L_80198084);
/*80198030 00194E30*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r24));
/*80198034 00194E34*/ PPC::Runtime::ASM::b(.L_80198084);
/*80198038 00194E38*/ PPC::Runtime::ASM::b(.L_80198070);
RUNTIME_PPC_JUMP_LABEL(.L_8019803C, 0x8019803C) //this is a jump label
/*8019803C 00194E3C*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80198040 00194E40*/ PPC::Runtime::ASM::beq(.L_8019804C);
/*80198044 00194E44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*80198048 00194E48*/ PPC::Runtime::ASM::b(.L_80198050);
RUNTIME_PPC_JUMP_LABEL(.L_8019804C, 0x8019804C) //this is a jump label
/*8019804C 00194E4C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80198050, 0x80198050) //this is a jump label
/*80198050 00194E50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80198054 00194E54*/ PPC::Runtime::ASM::beq(.L_80198078);
/*80198058 00194E58*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8019805C 00194E5C*/ PPC::Runtime::ASM::beq(.L_80198068);
/*80198060 00194E60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*80198064 00194E64*/ PPC::Runtime::ASM::b(.L_8019806C);
RUNTIME_PPC_JUMP_LABEL(.L_80198068, 0x80198068) //this is a jump label
/*80198068 00194E68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019806C, 0x8019806C) //this is a jump label
/*8019806C 00194E6C*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80198070, 0x80198070) //this is a jump label
/*80198070 00194E70*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80198074 00194E74*/ PPC::Runtime::ASM::bne(.L_8019803C);
RUNTIME_PPC_JUMP_LABEL(.L_80198078, 0x80198078) //this is a jump label
/*80198078 00194E78*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8019807C 00194E7C*/ PPC::Runtime::ASM::beq(.L_80198084);
/*80198080 00194E80*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_80198084, 0x80198084) //this is a jump label
/*80198084 00194E84*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_2 @ Get_MemoryOffset_HighBit);
/*80198088 00194E88*/ PPC::Runtime::ASM::mr(context->r24, context->r31);
/*8019808C 00194E8C*/ PPC::Runtime::ASM::addi(context->r25, context->r3, StructWithFuncPtrs_2 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80198090, 0x80198090) //this is a jump label
/*80198090 00194E90*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80198094 00194E94*/ PPC::Runtime::ASM::beq(.L_801980E8);
/*80198098 00194E98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8019809C 00194E9C*/ PPC::Runtime::ASM::stwx(context->r23, context->r3, context->r24);
/*801980A0 00194EA0*/ PPC::Runtime::ASM::beq(.L_801980AC);
/*801980A4 00194EA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*801980A8 00194EA8*/ PPC::Runtime::ASM::b(.L_801980B0);
RUNTIME_PPC_JUMP_LABEL(.L_801980AC, 0x801980AC) //this is a jump label
/*801980AC 00194EAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801980B0, 0x801980B0) //this is a jump label
/*801980B0 00194EB0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801980B4 00194EB4*/ PPC::Runtime::ASM::beq(.L_801980C0);
/*801980B8 00194EB8*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*801980BC 00194EBC*/ PPC::Runtime::ASM::bl(fn_80420D5C);
RUNTIME_PPC_JUMP_LABEL(.L_801980C0, 0x801980C0) //this is a jump label
/*801980C0 00194EC0*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*801980C4 00194EC4*/ PPC::Runtime::ASM::beq(.L_801980D0);
/*801980C8 00194EC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*801980CC 00194ECC*/ PPC::Runtime::ASM::b(.L_801980D4);
RUNTIME_PPC_JUMP_LABEL(.L_801980D0, 0x801980D0) //this is a jump label
/*801980D0 00194ED0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801980D4, 0x801980D4) //this is a jump label
/*801980D4 00194ED4*/ PPC::Runtime::ASM::mr(context->r23, context->r0);
/*801980D8 00194ED8*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x4);
/*801980DC 00194EDC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801980E0 00194EE0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801980E4 00194EE4*/ PPC::Runtime::ASM::b(.L_80198090);
RUNTIME_PPC_JUMP_LABEL(.L_801980E8, 0x801980E8) //this is a jump label
/*801980E8 00194EE8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r28));
/*801980EC 00194EEC*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x8);
/*801980F0 00194EF0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801980F4 00194EF4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r3);
/*801980F8 00194EF8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 29, 29);
/*801980FC 00194EFC*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80198100, 0x80198100) //this is a jump label
/*80198100 00194F00*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80198104 00194F04*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
/*80198108 00194F08*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*8019810C 00194F0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80198110 00194F10*/ PPC::Runtime::ASM::bl(fn_800528F0);
RUNTIME_PPC_JUMP_LABEL(.L_80198114, 0x80198114) //this is a jump label
/*80198114 00194F14*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80198118 00194F18*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8019811C 00194F1C*/ PPC::Runtime::ASM::bne(.L_80197FC8);
/*80198120 00194F20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80198124 00194F24*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80198128 00194F28*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*8019812C 00194F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80198130 00194F30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80198134 00194F34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80198138 00194F38*/ PPC::Runtime::ASM::blr();
}