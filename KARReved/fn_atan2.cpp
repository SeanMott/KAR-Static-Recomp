//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_atan3.hpp"
#include "fn_atan3.hpp"



void fn_atan2(PPC::Runtime::GCContext* context)
{
/*803B9F80 003B6D80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803B9F84 003B6D84*/ PPC::Runtime::ASM::mflr(context->r0);
/*803B9F88 003B6D88*/ PPC::Runtime::ASM::lis(context->r3, 0x7ff0);
/*803B9F8C 003B6D8C*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9F90 003B6D90*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803B9F94 003B6D94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803B9F98 003B6D98*/ PPC::Runtime::ASM::neg(context->r0, context->r8);
/*803B9F9C 003B6D9C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9FA0 003B6DA0*/ PPC::Runtime::ASM::or(context->r0, context->r8, context->r0);
/*803B9FA4 003B6DA4*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B9FA8 003B6DA8*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r4, 1);
/*803B9FAC 003B6DAC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*803B9FB0 003B6DB0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B9FB4 003B6DB4*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*803B9FB8 003B6DB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803B9FBC 003B6DBC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*803B9FC0 003B6DC0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803B9FC4 003B6DC4*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r5, 1);
/*803B9FC8 003B6DC8*/ PPC::Runtime::ASM::bgt(.L_803B9FE4);
/*803B9FCC 003B6DCC*/ PPC::Runtime::ASM::neg(context->r0, context->r9);
/*803B9FD0 003B6DD0*/ PPC::Runtime::ASM::or(context->r0, context->r9, context->r0);
/*803B9FD4 003B6DD4*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*803B9FD8 003B6DD8*/ PPC::Runtime::ASM::or(context->r0, context->r7, context->r0);
/*803B9FDC 003B6DDC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*803B9FE0 003B6DE0*/ PPC::Runtime::ASM::ble(.L_803B9FF4);
RUNTIME_PPC_JUMP_LABEL(.L_803B9FE4, 0x803B9FE4) //this is a jump label
/*803B9FE4 003B6DE4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B9FE8 003B6DE8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B9FEC 003B6DEC*/ PPC::Runtime::ASM::fadd(context->f1, context->f1, context->f0);
/*803B9FF0 003B6DF0*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803B9FF4, 0x803B9FF4) //this is a jump label
/*803B9FF4 003B6DF4*/ PPC::Runtime::ASM::subis(context->r0, context->r4, 0x3ff0);
/*803B9FF8 003B6DF8*/ PPC::Runtime::ASM::or.(context->r0, context->r0, context->r8);
/*803B9FFC 003B6DFC*/ PPC::Runtime::ASM::bne(.L_803BA008);
/*803BA000 003B6E00*/ PPC::Runtime::ASM::bl(fn_atan3);
/*803BA004 003B6E04*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA008, 0x803BA008) //this is a jump label
/*803BA008 003B6E08*/ PPC::Runtime::ASM::or.(context->r0, context->r7, context->r9);
/*803BA00C 003B6E0C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r4, 2, 30, 30);
/*803BA010 003B6E10*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*803BA014 003B6E14*/ PPC::Runtime::ASM::rlwimi(context->r31, context->r5, 1, 31, 31);
/*803BA018 003B6E18*/ PPC::Runtime::ASM::bne(.L_803BA054);
/*803BA01C 003B6E1C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*803BA020 003B6E20*/ PPC::Runtime::ASM::beq(.L_803BA044);
/*803BA024 003B6E24*/ PPC::Runtime::ASM::bge(.L_803BA034);
/*803BA028 003B6E28*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803BA02C 003B6E2C*/ PPC::Runtime::ASM::bge(.L_803BA1FC);
/*803BA030 003B6E30*/ PPC::Runtime::ASM::b(.L_803BA054);
RUNTIME_PPC_JUMP_LABEL(.L_803BA034, 0x803BA034) //this is a jump label
/*803BA034 003B6E34*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*803BA038 003B6E38*/ PPC::Runtime::ASM::bge(.L_803BA054);
/*803BA03C 003B6E3C*/ PPC::Runtime::ASM::b(.L_803BA04C);
/*803BA040 003B6E40*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA044, 0x803BA044) //this is a jump label
/*803BA044 003B6E44*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA048 003B6E48*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA04C, 0x803BA04C) //this is a jump label
/*803BA04C 003B6E4C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA050 003B6E50*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA054, 0x803BA054) //this is a jump label
/*803BA054 003B6E54*/ PPC::Runtime::ASM::or.(context->r0, context->r6, context->r8);
/*803BA058 003B6E58*/ PPC::Runtime::ASM::bne(.L_803BA074);
/*803BA05C 003B6E5C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BA060 003B6E60*/ PPC::Runtime::ASM::bge(.L_803BA06C);
/*803BA064 003B6E64*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA068 003B6E68*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA06C, 0x803BA06C) //this is a jump label
/*803BA06C 003B6E6C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA070 003B6E70*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA074, 0x803BA074) //this is a jump label
/*803BA074 003B6E74*/ PPC::Runtime::ASM::subis(context->r0, context->r6, 0x7ff0);
/*803BA078 003B6E78*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803BA07C 003B6E7C*/ PPC::Runtime::ASM::bne(.L_803BA11C);
/*803BA080 003B6E80*/ PPC::Runtime::ASM::subis(context->r0, context->r7, 0x7ff0);
/*803BA084 003B6E84*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803BA088 003B6E88*/ PPC::Runtime::ASM::bne(.L_803BA0D4);
/*803BA08C 003B6E8C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*803BA090 003B6E90*/ PPC::Runtime::ASM::beq(.L_803BA0C4);
/*803BA094 003B6E94*/ PPC::Runtime::ASM::bge(.L_803BA0A8);
/*803BA098 003B6E98*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803BA09C 003B6E9C*/ PPC::Runtime::ASM::beq(.L_803BA0B4);
/*803BA0A0 003B6EA0*/ PPC::Runtime::ASM::bge(.L_803BA0BC);
/*803BA0A4 003B6EA4*/ PPC::Runtime::ASM::b(.L_803BA11C);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0A8, 0x803BA0A8) //this is a jump label
/*803BA0A8 003B6EA8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*803BA0AC 003B6EAC*/ PPC::Runtime::ASM::bge(.L_803BA11C);
/*803BA0B0 003B6EB0*/ PPC::Runtime::ASM::b(.L_803BA0CC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0B4, 0x803BA0B4) //this is a jump label
/*803BA0B4 003B6EB4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5308 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA0B8 003B6EB8*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0BC, 0x803BA0BC) //this is a jump label
/*803BA0BC 003B6EBC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA0C0 003B6EC0*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0C4, 0x803BA0C4) //this is a jump label
/*803BA0C4 003B6EC4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA0C8 003B6EC8*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0CC, 0x803BA0CC) //this is a jump label
/*803BA0CC 003B6ECC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA0D0 003B6ED0*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0D4, 0x803BA0D4) //this is a jump label
/*803BA0D4 003B6ED4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*803BA0D8 003B6ED8*/ PPC::Runtime::ASM::beq(.L_803BA10C);
/*803BA0DC 003B6EDC*/ PPC::Runtime::ASM::bge(.L_803BA0F0);
/*803BA0E0 003B6EE0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803BA0E4 003B6EE4*/ PPC::Runtime::ASM::beq(.L_803BA0FC);
/*803BA0E8 003B6EE8*/ PPC::Runtime::ASM::bge(.L_803BA104);
/*803BA0EC 003B6EEC*/ PPC::Runtime::ASM::b(.L_803BA11C);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0F0, 0x803BA0F0) //this is a jump label
/*803BA0F0 003B6EF0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*803BA0F4 003B6EF4*/ PPC::Runtime::ASM::bge(.L_803BA11C);
/*803BA0F8 003B6EF8*/ PPC::Runtime::ASM::b(.L_803BA114);
RUNTIME_PPC_JUMP_LABEL(.L_803BA0FC, 0x803BA0FC) //this is a jump label
/*803BA0FC 003B6EFC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA100 003B6F00*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA104, 0x803BA104) //this is a jump label
/*803BA104 003B6F04*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA108 003B6F08*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA10C, 0x803BA10C) //this is a jump label
/*803BA10C 003B6F0C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA110 003B6F10*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA114, 0x803BA114) //this is a jump label
/*803BA114 003B6F14*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA118 003B6F18*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA11C, 0x803BA11C) //this is a jump label
/*803BA11C 003B6F1C*/ PPC::Runtime::ASM::subis(context->r0, context->r7, 0x7ff0);
/*803BA120 003B6F20*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803BA124 003B6F24*/ PPC::Runtime::ASM::bne(.L_803BA140);
/*803BA128 003B6F28*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BA12C 003B6F2C*/ PPC::Runtime::ASM::bge(.L_803BA138);
/*803BA130 003B6F30*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E52F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA134 003B6F34*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA138, 0x803BA138) //this is a jump label
/*803BA138 003B6F38*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA13C 003B6F3C*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA140, 0x803BA140) //this is a jump label
/*803BA140 003B6F40*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r7);
/*803BA144 003B6F44*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 20);
/*803BA148 003B6F48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3c);
/*803BA14C 003B6F4C*/ PPC::Runtime::ASM::ble(.L_803BA15C);
/*803BA150 003B6F50*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA154 003B6F54*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA158 003B6F58*/ PPC::Runtime::ASM::b(.L_803BA190);
RUNTIME_PPC_JUMP_LABEL(.L_803BA15C, 0x803BA15C) //this is a jump label
/*803BA15C 003B6F5C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803BA160 003B6F60*/ PPC::Runtime::ASM::bge(.L_803BA178);
/*803BA164 003B6F64*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x3c);
/*803BA168 003B6F68*/ PPC::Runtime::ASM::bge(.L_803BA178);
/*803BA16C 003B6F6C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA170 003B6F70*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA174 003B6F74*/ PPC::Runtime::ASM::b(.L_803BA190);
RUNTIME_PPC_JUMP_LABEL(.L_803BA178, 0x803BA178) //this is a jump label
/*803BA178 003B6F78*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BA17C 003B6F7C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803BA180 003B6F80*/ PPC::Runtime::ASM::fdiv(context->f0, context->f1, context->f0);
/*803BA184 003B6F84*/ PPC::Runtime::ASM::fabs(context->f1, context->f0);
/*803BA188 003B6F88*/ PPC::Runtime::ASM::bl(fn_atan3);
/*803BA18C 003B6F8C*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803BA190, 0x803BA190) //this is a jump label
/*803BA190 003B6F90*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*803BA194 003B6F94*/ PPC::Runtime::ASM::beq(.L_803BA1BC);
/*803BA198 003B6F98*/ PPC::Runtime::ASM::bge(.L_803BA1A8);
/*803BA19C 003B6F9C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803BA1A0 003B6FA0*/ PPC::Runtime::ASM::bge(.L_803BA1B4);
/*803BA1A4 003B6FA4*/ PPC::Runtime::ASM::b(.L_803BA1E8);
RUNTIME_PPC_JUMP_LABEL(.L_803BA1A8, 0x803BA1A8) //this is a jump label
/*803BA1A8 003B6FA8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x3);
/*803BA1AC 003B6FAC*/ PPC::Runtime::ASM::bge(.L_803BA1E8);
/*803BA1B0 003B6FB0*/ PPC::Runtime::ASM::b(.L_803BA1D0);
RUNTIME_PPC_JUMP_LABEL(.L_803BA1B4, 0x803BA1B4) //this is a jump label
/*803BA1B4 003B6FB4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA1B8 003B6FB8*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA1BC, 0x803BA1BC) //this is a jump label
/*803BA1BC 003B6FBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA1C0 003B6FC0*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*803BA1C4 003B6FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA1C8 003B6FC8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA1CC 003B6FCC*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA1D0, 0x803BA1D0) //this is a jump label
/*803BA1D0 003B6FD0*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA1D4 003B6FD4*/ PPC::Runtime::ASM::lfd(context->f0, AT_156 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA1D8 003B6FD8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E52E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA1DC 003B6FDC*/ PPC::Runtime::ASM::fsub(context->f0, context->f1, context->f0);
/*803BA1E0 003B6FE0*/ PPC::Runtime::ASM::fsub(context->f1, context->f2, context->f0);
/*803BA1E4 003B6FE4*/ PPC::Runtime::ASM::b(.L_803BA1FC);
RUNTIME_PPC_JUMP_LABEL(.L_803BA1E8, 0x803BA1E8) //this is a jump label
/*803BA1E8 003B6FE8*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BA1EC 003B6FEC*/ PPC::Runtime::ASM::lfd(context->f1, AT_156 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA1F0 003B6FF0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E52E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BA1F4 003B6FF4*/ PPC::Runtime::ASM::fsub(context->f1, context->f2, context->f1);
/*803BA1F8 003B6FF8*/ PPC::Runtime::ASM::fsub(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_803BA1FC, 0x803BA1FC) //this is a jump label
/*803BA1FC 003B6FFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803BA200 003B7000*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803BA204 003B7004*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BA208 003B7008*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803BA20C 003B700C*/ PPC::Runtime::ASM::blr();
}