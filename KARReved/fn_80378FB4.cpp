//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005F57C.hpp"
#include "fn_80379310.hpp"
#include "fn_803792DC.hpp"



void fn_80378FB4(PPC::Runtime::GCContext* context)
{
/*80378FB4 00375DB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80378FB8 00375DB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80378FBC 00375DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80378FC0 00375DC0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80378FC4 00375DC4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 80378FC8 00375DC8  54 E0 06 3F */ clrlwi. context->r0 , context->r7 , 24
/*80378FCC 00375DCC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80378FD0 00375DD0*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80378FD4 00375DD4*/ PPC::Runtime::ASM::mr(context->r27, context->r6);
/*80378FD8 00375DD8*/ PPC::Runtime::ASM::beq(.L_80378FEC);
/*80378FDC 00375DDC*/ PPC::Runtime::ASM::mulli(context->r0, context->r29, 0x18);
/*80378FE0 00375DE0*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*80378FE4 00375DE4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80378FE8 00375DE8*/ PPC::Runtime::ASM::b(.L_80378FF8);
RUNTIME_PPC_JUMP_LABEL(.L_80378FEC, 0x80378FEC) //this is a jump label
/*80378FEC 00375DEC*/ PPC::Runtime::ASM::mulli(context->r0, context->r29, 0x18);
/*80378FF0 00375DF0*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*80378FF4 00375DF4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80378FF8, 0x80378FF8) //this is a jump label
/*80378FF8 00375DF8*/ PPC::Runtime::ASM::mulli(context->r0, context->r29, 0x18);
/*80378FFC 00375DFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*80379000 00375E00*/ PPC::Runtime::ASM::add(context->r30, context->r28, context->r0);
/*80379004 00375E04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80379008 00375E08*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8037900C 00375E0C*/ PPC::Runtime::ASM::beq(.L_80379018);
/*80379010 00375E10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*80379014 00375E14*/ PPC::Runtime::ASM::bne(.L_80379020);
RUNTIME_PPC_JUMP_LABEL(.L_80379018, 0x80379018) //this is a jump label
/*80379018 00375E18*/ PPC::Runtime::ASM::li(context->r31, -0x1);
/*8037901C 00375E1C*/ PPC::Runtime::ASM::b(.L_80379180);
RUNTIME_PPC_JUMP_LABEL(.L_80379020, 0x80379020) //this is a jump label
/*80379020 00375E20*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80379024 00375E24*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80379028 00375E28*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*8037902C 00375E2C*/ PPC::Runtime::ASM::bl(fn_8005F57C);
/*80379030 00375E30*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80379034 00375E34*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*80379038 00375E38*/ PPC::Runtime::ASM::beq(.L_80379180);
/* 8037903C 00375E3C  57 60 06 3F */ clrlwi. context->r0 , context->r27 , 24
/*80379040 00375E40*/ PPC::Runtime::ASM::beq(.L_80379180);
/*80379044 00375E44*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_61 @ Get_MemoryOffset_HighBit);
/*80379048 00375E48*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r28));
/*8037904C 00375E4C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, MemoryOffset_61 @ Get_MemoryOffset_LowBit);
/*80379050 00375E50*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80379054 00375E54*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80379058 00375E58*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8037905C 00375E5C*/ PPC::Runtime::ASM::cmpw(context->r8, context->r9);
/*80379060 00375E60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80379064 00375E64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80379068 00375E68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*8037906C 00375E6C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80379070 00375E70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4B48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80379074 00375E74*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80379078 00375E78*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037907C 00375E7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80379080 00375E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80379084 00375E84*/ PPC::Runtime::ASM::beq(.L_80379090);
/*80379088 00375E88*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x3);
/*8037908C 00375E8C*/ PPC::Runtime::ASM::bne(.L_80379098);
RUNTIME_PPC_JUMP_LABEL(.L_80379090, 0x80379090) //this is a jump label
/*80379090 00375E90*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80379094 00375E94*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80379098, 0x80379098) //this is a jump label
/*80379098 00375E98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r28));
/*8037909C 00375E9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*803790A0 00375EA0*/ PPC::Runtime::ASM::beq(.L_803790AC);
/*803790A4 00375EA4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r9);
/*803790A8 00375EA8*/ PPC::Runtime::ASM::bne(.L_803790C4);
RUNTIME_PPC_JUMP_LABEL(.L_803790AC, 0x803790AC) //this is a jump label
/*803790AC 00375EAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*803790B0 00375EB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*803790B4 00375EB4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803790B8 00375EB8*/ PPC::Runtime::ASM::lfsx(context->f0, context->r3, context->r0);
/*803790BC 00375EBC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*803790C0 00375EC0*/ PPC::Runtime::ASM::b(.L_80379110);
RUNTIME_PPC_JUMP_LABEL(.L_803790C4, 0x803790C4) //this is a jump label
/*803790C4 00375EC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*803790C8 00375EC8*/ PPC::Runtime::ASM::beq(.L_803790D4);
/*803790CC 00375ECC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r9);
/*803790D0 00375ED0*/ PPC::Runtime::ASM::bne(.L_803790EC);
RUNTIME_PPC_JUMP_LABEL(.L_803790D4, 0x803790D4) //this is a jump label
/*803790D4 00375ED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*803790D8 00375ED8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*803790DC 00375EDC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803790E0 00375EE0*/ PPC::Runtime::ASM::lfsx(context->f0, context->r3, context->r0);
/*803790E4 00375EE4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*803790E8 00375EE8*/ PPC::Runtime::ASM::b(.L_80379110);
RUNTIME_PPC_JUMP_LABEL(.L_803790EC, 0x803790EC) //this is a jump label
/*803790EC 00375EEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*803790F0 00375EF0*/ PPC::Runtime::ASM::bne(.L_80379110);
/*803790F4 00375EF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*803790F8 00375EF8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*803790FC 00375EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*80379100 00375F00*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80379104 00375F04*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80379108 00375F08*/ PPC::Runtime::ASM::lfsx(context->f0, context->r3, context->r0);
/*8037910C 00375F0C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80379110, 0x80379110) //this is a jump label
/*80379110 00375F10*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f1);
/*80379114 00375F14*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80379118 00375F18*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8037911C 00375F1C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80379120 00375F20*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80379124 00375F24*/ PPC::Runtime::ASM::bl(fn_80379310);
/*80379128 00375F28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r28));
/*8037912C 00375F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80379130 00375F30*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80379134 00375F34*/ PPC::Runtime::ASM::beq(.L_80379140);
/*80379138 00375F38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*8037913C 00375F3C*/ PPC::Runtime::ASM::bne(.L_80379180);
RUNTIME_PPC_JUMP_LABEL(.L_80379140, 0x80379140) //this is a jump label
/*80379140 00375F40*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_62 @ Get_MemoryOffset_HighBit);
/*80379144 00375F44*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*80379148 00375F48*/ PPC::Runtime::ASM::addi(context->r6, context->r3, MemoryOffset_62 @ Get_MemoryOffset_LowBit);
/*8037914C 00375F4C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80379150 00375F50*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80379154 00375F54*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80379158 00375F58*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8037915C 00375F5C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80379160 00375F60*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80379164 00375F64*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80379168 00375F68*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037916C 00375F6C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80379170 00375F70*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80379174 00375F74*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80379178 00375F78*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*8037917C 00375F7C*/ PPC::Runtime::ASM::bl(fn_803792DC);
RUNTIME_PPC_JUMP_LABEL(.L_80379180, 0x80379180) //this is a jump label
/*80379180 00375F80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80379184 00375F84*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80379188 00375F88*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8037918C 00375F8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80379190 00375F90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80379194 00375F94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80379198 00375F98*/ PPC::Runtime::ASM::blr();
}