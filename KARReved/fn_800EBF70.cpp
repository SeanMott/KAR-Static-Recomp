//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800ED520.hpp"
#include "fn_80009FF0.hpp"
#include "fn_800EB374.hpp"
#include "fn_800ED8B0.hpp"
#include "fn_800EDA0C.hpp"
#include "fn_grGetItemposNum.hpp"
#include "fn_grGetItemAreaposNum.hpp"
#include "fn_800ECFAC.hpp"



void fn_800EBF70(PPC::Runtime::GCContext* context)
{
/*800EBF70 000E8D70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800EBF74 000E8D74*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EBF78 000E8D78*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_964 @ Get_MemoryOffset_HighBit);
/*800EBF7C 000E8D7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800EBF80 000E8D80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800EBF84 000E8D84*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_964 @ Get_MemoryOffset_LowBit);
/*800EBF88 000E8D88*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800EBF8C 000E8D8C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800EBF90 000E8D90*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EBF94 000E8D94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800EBF98 000E8D98*/ PPC::Runtime::ASM::bl(fn_800ED520);
/*800EBF9C 000E8D9C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EBFA0 000E8DA0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800EBFA4 000E8DA4*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x290);
/*800EBFA8 000E8DA8*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x294);
/*800EBFAC 000E8DAC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x298);
/*800EBFB0 000E8DB0*/ PPC::Runtime::ASM::bl(fn_80009FF0);
/*800EBFB4 000E8DB4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EBFB8 000E8DB8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*800EBFBC 000E8DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800EBFC0 000E8DC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r4));
/*800EBFC4 000E8DC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x290, context->r4));
/*800EBFC8 000E8DC8*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*800EBFCC 000E8DCC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DF768 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EBFD0 000E8DD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800EBFD4 000E8DD4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3c);
/*800EBFD8 000E8DD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x294, context->r4));
/*800EBFDC 000E8DDC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800EBFE0 000E8DE0*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800EBFE4 000E8DE4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF760 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EBFE8 000E8DE8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800EBFEC 000E8DEC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3c);
/*800EBFF0 000E8DF0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*800EBFF4 000E8DF4*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800EBFF8 000E8DF8*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800EBFFC 000E8DFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EC000 000E8E00*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800EC004 000E8E04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29c, context->r4));
/*800EC008 000E8E08*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC00C 000E8E0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29c, context->r3));
/*800EC010 000E8E10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a0, context->r3));
/*800EC014 000E8E14*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC018 000E8E18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800EC01C 000E8E1C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800EC020 000E8E20*/ PPC::Runtime::ASM::beq(.L_800EC030);
/*800EC024 000E8E24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800EC028 000E8E28*/ PPC::Runtime::ASM::bl(fn_800EB374);
/*800EC02C 000E8E2C*/ PPC::Runtime::ASM::b(.L_800EC084);
RUNTIME_PPC_JUMP_LABEL(.L_800EC030, 0x800EC030) //this is a jump label
/*800EC030 000E8E30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800EC034 000E8E34*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800EC038 000E8E38*/ PPC::Runtime::ASM::beq(.L_800EC04C);
/*800EC03C 000E8E3C*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*800EC040 000E8E40*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800EC044 000E8E44*/ PPC::Runtime::ASM::bl(fn_800ED8B0);
/*800EC048 000E8E48*/ PPC::Runtime::ASM::b(.L_800EC084);
RUNTIME_PPC_JUMP_LABEL(.L_800EC04C, 0x800EC04C) //this is a jump label
/*800EC04C 000E8E4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800EC050 000E8E50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800EC054 000E8E54*/ PPC::Runtime::ASM::beq(.L_800EC068);
/*800EC058 000E8E58*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*800EC05C 000E8E5C*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800EC060 000E8E60*/ PPC::Runtime::ASM::bl(fn_800EDA0C);
/*800EC064 000E8E64*/ PPC::Runtime::ASM::b(.L_800EC084);
RUNTIME_PPC_JUMP_LABEL(.L_800EC068, 0x800EC068) //this is a jump label
/*800EC068 000E8E68*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xfc);
/*800EC06C 000E8E6C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800EC070 000E8E70*/ PPC::Runtime::ASM::bl(OSReport);
/*800EC074 000E8E74*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*800EC078 000E8E78*/ PPC::Runtime::ASM::li(context->r4, 0x421);
/*800EC07C 000E8E7C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6178 @ Get_MemoryOffset_SDA21);
/*800EC080 000E8E80*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EC084, 0x800EC084) //this is a jump label
/*800EC084 000E8E84*/ PPC::Runtime::ASM::bl(fn_grGetItemposNum);
/*800EC088 000E8E88*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC08C 000E8E8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*800EC090 000E8E90*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC094 000E8E94*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800EC098 000E8E98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800EC09C 000E8E9C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*800EC0A0 000E8EA0*/ PPC::Runtime::ASM::ble(.L_800EC0A8);
/*800EC0A4 000E8EA4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800EC0A8, 0x800EC0A8) //this is a jump label
/*800EC0A8 000E8EA8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC0AC 000E8EAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800EC0B0 000E8EB0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x80);
/*800EC0B4 000E8EB4*/ PPC::Runtime::ASM::ble(.L_800EC0C0);
/*800EC0B8 000E8EB8*/ PPC::Runtime::ASM::li(context->r0, 0x80);
/*800EC0BC 000E8EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800EC0C0, 0x800EC0C0) //this is a jump label
/*800EC0C0 000E8EC0*/ PPC::Runtime::ASM::bl(fn_grGetItemAreaposNum);
/*800EC0C4 000E8EC4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC0C8 000E8EC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*800EC0CC 000E8ECC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC0D0 000E8ED0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*800EC0D4 000E8ED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800EC0D8 000E8ED8*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*800EC0DC 000E8EDC*/ PPC::Runtime::ASM::ble(.L_800EC0E4);
/*800EC0E0 000E8EE0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800EC0E4, 0x800EC0E4) //this is a jump label
/*800EC0E4 000E8EE4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC0E8 000E8EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800EC0EC 000E8EEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x80);
/*800EC0F0 000E8EF0*/ PPC::Runtime::ASM::ble(.L_800EC0FC);
/*800EC0F4 000E8EF4*/ PPC::Runtime::ASM::li(context->r0, 0x80);
/*800EC0F8 000E8EF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800EC0FC, 0x800EC0FC) //this is a jump label
/*800EC0FC 000E8EFC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC100 000E8F00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*800EC104 000E8F04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*800EC108 000E8F08*/ PPC::Runtime::ASM::add.(context->r29, context->r3, context->r0);
/*800EC10C 000E8F0C*/ PPC::Runtime::ASM::beq(.L_800EC1C0);
/*800EC110 000E8F10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r5));
/*800EC114 000E8F14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/* 800EC118 000E8F18  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*800EC11C 000E8F1C*/ PPC::Runtime::ASM::beq(.L_800EC128);
/*800EC120 000E8F20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EC124 000E8F24*/ PPC::Runtime::ASM::b(.L_800EC19C);
RUNTIME_PPC_JUMP_LABEL(.L_800EC128, 0x800EC128) //this is a jump label
/*800EC128 000E8F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r5));
/* 800EC12C 000E8F2C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*800EC130 000E8F30*/ PPC::Runtime::ASM::beq(.L_800EC13C);
/*800EC134 000E8F34*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x3c);
/*800EC138 000E8F38*/ PPC::Runtime::ASM::b(.L_800EC19C);
RUNTIME_PPC_JUMP_LABEL(.L_800EC13C, 0x800EC13C) //this is a jump label
/*800EC13C 000E8F3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800EC140 000E8F40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800EC144 000E8F44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC148 000E8F48*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800EC14C 000E8F4C*/ PPC::Runtime::ASM::b(.L_800EC174);
RUNTIME_PPC_JUMP_LABEL(.L_800EC150, 0x800EC150) //this is a jump label
/*800EC150 000E8F50*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EC154 000E8F54*/ PPC::Runtime::ASM::lfsx(context->f0, context->r6, context->r5);
/*800EC158 000E8F58*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800EC15C 000E8F5C*/ PPC::Runtime::ASM::bge(.L_800EC16C);
/*800EC160 000E8F60*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 4);
/*800EC164 000E8F64*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r0);
/*800EC168 000E8F68*/ PPC::Runtime::ASM::b(.L_800EC19C);
RUNTIME_PPC_JUMP_LABEL(.L_800EC16C, 0x800EC16C) //this is a jump label
/*800EC16C 000E8F6C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*800EC170 000E8F70*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800EC174, 0x800EC174) //this is a jump label
/*800EC174 000E8F74*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EC178 000E8F78*/ PPC::Runtime::ASM::bne(.L_800EC150);
/*800EC17C 000E8F7C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800EC180 000E8F80*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800EC184 000E8F84*/ PPC::Runtime::ASM::bl(OSReport);
/*800EC188 000E8F88*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*800EC18C 000E8F8C*/ PPC::Runtime::ASM::li(context->r4, 0x99);
/*800EC190 000E8F90*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6178 @ Get_MemoryOffset_SDA21);
/*800EC194 000E8F94*/ PPC::Runtime::ASM::bl(fn___assert);
/*800EC198 000E8F98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EC19C, 0x800EC19C) //this is a jump label
/*800EC19C 000E8F9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EC1A0 000E8FA0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC1A4 000E8FA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800EC1A8 000E8FA8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC1AC 000E8FAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800EC1B0 000E8FB0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r29);
/*800EC1B4 000E8FB4*/ PPC::Runtime::ASM::ble(.L_800EC1C8);
/*800EC1B8 000E8FB8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800EC1BC 000E8FBC*/ PPC::Runtime::ASM::b(.L_800EC1C8);
RUNTIME_PPC_JUMP_LABEL(.L_800EC1C0, 0x800EC1C0) //this is a jump label
/*800EC1C0 000E8FC0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800EC1C4 000E8FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_800EC1C8, 0x800EC1C8) //this is a jump label
/*800EC1C8 000E8FC8*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*800EC1CC 000E8FCC*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800EC1D0 000E8FD0*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*800EC1D4 000E8FD4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800EC1D8 000E8FD8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800EC1DC, 0x800EC1DC) //this is a jump label
/*800EC1DC 000E8FDC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC1E0 000E8FE0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x14c);
/*800EC1E4 000E8FE4*/ PPC::Runtime::ASM::stbx(context->r3, context->r4, context->r0);
/*800EC1E8 000E8FE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EC1EC 000E8FEC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xd);
/*800EC1F0 000E8FF0*/ PPC::Runtime::ASM::blt(.L_800EC1F8);
/*800EC1F4 000E8FF4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EC1F8, 0x800EC1F8) //this is a jump label
/*800EC1F8 000E8FF8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC1FC 000E8FFC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x14d);
/*800EC200 000E9000*/ PPC::Runtime::ASM::stbx(context->r3, context->r4, context->r0);
/*800EC204 000E9004*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EC208 000E9008*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xd);
/*800EC20C 000E900C*/ PPC::Runtime::ASM::blt(.L_800EC214);
/*800EC210 000E9010*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EC214, 0x800EC214) //this is a jump label
/*800EC214 000E9014*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC218 000E9018*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x14e);
/*800EC21C 000E901C*/ PPC::Runtime::ASM::stbx(context->r3, context->r4, context->r0);
/*800EC220 000E9020*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EC224 000E9024*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xd);
/*800EC228 000E9028*/ PPC::Runtime::ASM::blt(.L_800EC230);
/*800EC22C 000E902C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EC230, 0x800EC230) //this is a jump label
/*800EC230 000E9030*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC234 000E9034*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x14f);
/*800EC238 000E9038*/ PPC::Runtime::ASM::stbx(context->r3, context->r4, context->r0);
/*800EC23C 000E903C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EC240 000E9040*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xd);
/*800EC244 000E9044*/ PPC::Runtime::ASM::blt(.L_800EC24C);
/*800EC248 000E9048*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EC24C, 0x800EC24C) //this is a jump label
/*800EC24C 000E904C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*800EC250 000E9050*/ PPC::Runtime::ASM::bdnz(.L_800EC1DC);
/*800EC254 000E9054*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC258 000E9058*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800EC25C 000E905C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800EC260 000E9060*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800EC264 000E9064*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r5));
/*800EC268 000E9068*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r6, 6, 25, 25);
/*800EC26C 000E906C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r5));
/*800EC270 000E9070*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC274 000E9074*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*800EC278 000E9078*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC27C 000E907C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*800EC280 000E9080*/ PPC::Runtime::ASM::bl(fn_800ECFAC);
/*800EC284 000E9084*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC288 000E9088*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r3));
/*800EC28C 000E908C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 800EC290 000E9090  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*800EC294 000E9094*/ PPC::Runtime::ASM::beq(.L_800EC2A0);
/*800EC298 000E9098*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EC29C 000E909C*/ PPC::Runtime::ASM::b(.L_800EC314);
RUNTIME_PPC_JUMP_LABEL(.L_800EC2A0, 0x800EC2A0) //this is a jump label
/*800EC2A0 000E90A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/* 800EC2A4 000E90A4  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*800EC2A8 000E90A8*/ PPC::Runtime::ASM::beq(.L_800EC2B4);
/*800EC2AC 000E90AC*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x3c);
/*800EC2B0 000E90B0*/ PPC::Runtime::ASM::b(.L_800EC314);
RUNTIME_PPC_JUMP_LABEL(.L_800EC2B4, 0x800EC2B4) //this is a jump label
/*800EC2B4 000E90B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800EC2B8 000E90B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800EC2BC 000E90BC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC2C0 000E90C0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800EC2C4 000E90C4*/ PPC::Runtime::ASM::b(.L_800EC2EC);
RUNTIME_PPC_JUMP_LABEL(.L_800EC2C8, 0x800EC2C8) //this is a jump label
/*800EC2C8 000E90C8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800EC2CC 000E90CC*/ PPC::Runtime::ASM::lfsx(context->f0, context->r6, context->r5);
/*800EC2D0 000E90D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800EC2D4 000E90D4*/ PPC::Runtime::ASM::bge(.L_800EC2E4);
/*800EC2D8 000E90D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 4);
/*800EC2DC 000E90DC*/ PPC::Runtime::ASM::add(context->r29, context->r6, context->r0);
/*800EC2E0 000E90E0*/ PPC::Runtime::ASM::b(.L_800EC314);
RUNTIME_PPC_JUMP_LABEL(.L_800EC2E4, 0x800EC2E4) //this is a jump label
/*800EC2E4 000E90E4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*800EC2E8 000E90E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800EC2EC, 0x800EC2EC) //this is a jump label
/*800EC2EC 000E90EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EC2F0 000E90F0*/ PPC::Runtime::ASM::bne(.L_800EC2C8);
/*800EC2F4 000E90F4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800EC2F8 000E90F8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800EC2FC 000E90FC*/ PPC::Runtime::ASM::bl(OSReport);
/*800EC300 000E9100*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*800EC304 000E9104*/ PPC::Runtime::ASM::li(context->r4, 0x99);
/*800EC308 000E9108*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6178 @ Get_MemoryOffset_SDA21);
/*800EC30C 000E910C*/ PPC::Runtime::ASM::bl(fn___assert);
/*800EC310 000E9110*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EC314, 0x800EC314) //this is a jump label
/*800EC314 000E9114*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800EC318 000E9118*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800EC31C 000E911C*/ PPC::Runtime::ASM::subf.(context->r3, context->r3, context->r0);
/*800EC320 000E9120*/ PPC::Runtime::ASM::bge(.L_800EC328);
/*800EC324 000E9124*/ PPC::Runtime::ASM::neg(context->r3, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800EC328, 0x800EC328) //this is a jump label
/*800EC328 000E9128*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800EC32C 000E912C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800EC330 000E9130*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*800EC334 000E9134*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800EC338 000E9138*/ PPC::Runtime::ASM::bge(.L_800EC340);
/*800EC33C 000E913C*/ PPC::Runtime::ASM::li(context->r0, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_800EC340, 0x800EC340) //this is a jump label
/*800EC340 000E9140*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC344 000E9144*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800EC348 000E9148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800EC34C 000E914C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800EC350 000E9150*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800EC354 000E9154*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800EC358 000E9158*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EC35C 000E915C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800EC360 000E9160*/ PPC::Runtime::ASM::blr();
}