//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_8041CDF8.hpp"



void fn_HSD_ObjAllocAddFree(PPC::Runtime::GCContext* context)
{
/*80417E94 00414C94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80417E98 00414C98*/ PPC::Runtime::ASM::mflr(context->r0);
/*80417E9C 00414C9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80417EA0 00414CA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80417EA4 00414CA4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80417EA8 00414CA8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 80417EAC 00414CAC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80417EB0 00414CB0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417EB4 00414CB4*/ PPC::Runtime::ASM::bne(.L_80417ECC);
/*80417EB8 00414CB8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504028 @ Get_MemoryOffset_HighBit);
/*80417EBC 00414CBC*/ PPC::Runtime::ASM::li(context->r4, 0xee);
/*80417EC0 00414CC0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504028 @ Get_MemoryOffset_LowBit);
/*80417EC4 00414CC4*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_508 @ Get_MemoryOffset_SDA21);
/*80417EC8 00414CC8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80417ECC, 0x80417ECC) //this is a jump label
/*80417ECC 00414CCC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80417ED0 00414CD0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504018 @ Get_MemoryOffset_HighBit);
/*80417ED4 00414CD4*/ PPC::Runtime::ASM::addi(context->r6, context->r3, lbl_80504018 @ Get_MemoryOffset_LowBit);
/*80417ED8 00414CD8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80417EDC 00414CDC*/ PPC::Runtime::ASM::mullw(context->r3, context->r8, context->r31);
/*80417EE0 00414CE0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80417EE4 00414CE4*/ PPC::Runtime::ASM::beq(.L_80417F5C);
/*80417EE8 00414CE8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80417EEC 00414CEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80417EF0 00414CF0*/ PPC::Runtime::ASM::subi(context->r7, context->r4, 0x1);
/*80417EF4 00414CF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80417EF8 00414CF8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r7);
/*80417EFC 00414CFC*/ PPC::Runtime::ASM::add(context->r9, context->r5, context->r4);
/*80417F00 00414D00*/ PPC::Runtime::ASM::andc(context->r5, context->r0, context->r7);
/*80417F04 00414D04*/ PPC::Runtime::ASM::cmplw(context->r5, context->r9);
/*80417F08 00414D08*/ PPC::Runtime::ASM::ble(.L_80417F14);
/*80417F0C 00414D0C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80417F10 00414D10*/ PPC::Runtime::ASM::b(.L_804180C8);
RUNTIME_PPC_JUMP_LABEL(.L_80417F14, 0x80417F14) //this is a jump label
/*80417F14 00414D14*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r9);
/*80417F18 00414D18*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*80417F1C 00414D1C*/ PPC::Runtime::ASM::bge(.L_80417F30);
/*80417F20 00414D20*/ PPC::Runtime::ASM::divwu(context->r0, context->r4, context->r8);
/*80417F24 00414D24*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r8);
/*80417F28 00414D28*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*80417F2C 00414D2C*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80417F30, 0x80417F30) //this is a jump label
/*80417F30 00414D30*/ PPC::Runtime::ASM::divwu.(context->r31, context->r3, context->r8);
/*80417F34 00414D34*/ PPC::Runtime::ASM::bne(.L_80417F40);
/*80417F38 00414D38*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80417F3C 00414D3C*/ PPC::Runtime::ASM::b(.L_804180C8);
RUNTIME_PPC_JUMP_LABEL(.L_80417F40, 0x80417F40) //this is a jump label
/*80417F40 00414D40*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r3);
/*80417F44 00414D44*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504018 @ Get_MemoryOffset_HighBit);
/*80417F48 00414D48*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r9);
/*80417F4C 00414D4C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80417F50 00414D50*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504018 @ Get_MemoryOffset_LowBit);
/*80417F54 00414D54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80417F58 00414D58*/ PPC::Runtime::ASM::b(.L_80417F78);
RUNTIME_PPC_JUMP_LABEL(.L_80417F5C, 0x80417F5C) //this is a jump label
/*80417F5C 00414D5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80417F60 00414D60*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80417F64 00414D64*/ PPC::Runtime::ASM::bl(fn_8041CDF8);
/* 80417F68 00414D68  7C 65 1B 79 */ mr. context->r5 , context->r3
/*80417F6C 00414D6C*/ PPC::Runtime::ASM::bne(.L_80417F78);
/*80417F70 00414D70*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80417F74 00414D74*/ PPC::Runtime::ASM::b(.L_804180C8);
RUNTIME_PPC_JUMP_LABEL(.L_80417F78, 0x80417F78) //this is a jump label
/*80417F78 00414D78*/ PPC::Runtime::ASM::subi(context->r0, context->r31, 0x1);
/*80417F7C 00414D7C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80417F80 00414D80*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80417F84 00414D84*/ PPC::Runtime::ASM::ble(.L_804180A4);
/*80417F88 00414D88*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*80417F8C 00414D8C*/ PPC::Runtime::ASM::subi(context->r3, context->r31, 0x9);
/*80417F90 00414D90*/ PPC::Runtime::ASM::ble(.L_80418070);
/*80417F94 00414D94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x7);
/*80417F98 00414D98*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80417F9C 00414D9C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80417FA0 00414DA0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80417FA4 00414DA4*/ PPC::Runtime::ASM::ble(.L_80418070);
RUNTIME_PPC_JUMP_LABEL(.L_80417FA8, 0x80417FA8) //this is a jump label
/*80417FA8 00414DA8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80417FAC 00414DAC*/ PPC::Runtime::ASM::addi(context->r10, context->r6, 0x1);
/*80417FB0 00414DB0*/ PPC::Runtime::ASM::addi(context->r11, context->r6, 0x2);
/*80417FB4 00414DB4*/ PPC::Runtime::ASM::addi(context->r12, context->r6, 0x3);
/*80417FB8 00414DB8*/ PPC::Runtime::ASM::mullw(context->r8, context->r9, context->r10);
/*80417FBC 00414DBC*/ PPC::Runtime::ASM::addi(context->r29, context->r6, 0x4);
/*80417FC0 00414DC0*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x5);
/*80417FC4 00414DC4*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x6);
/*80417FC8 00414DC8*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x7);
/*80417FCC 00414DCC*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x8);
/*80417FD0 00414DD0*/ PPC::Runtime::ASM::mullw(context->r9, context->r9, context->r6);
/*80417FD4 00414DD4*/ PPC::Runtime::ASM::add(context->r8, context->r5, context->r8);
/*80417FD8 00414DD8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*80417FDC 00414DDC*/ PPC::Runtime::ASM::stwx(context->r8, context->r5, context->r9);
/*80417FE0 00414DE0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80417FE4 00414DE4*/ PPC::Runtime::ASM::mullw(context->r8, context->r9, context->r11);
/*80417FE8 00414DE8*/ PPC::Runtime::ASM::mullw(context->r9, context->r9, context->r10);
/*80417FEC 00414DEC*/ PPC::Runtime::ASM::add(context->r8, context->r5, context->r8);
/*80417FF0 00414DF0*/ PPC::Runtime::ASM::stwx(context->r8, context->r5, context->r9);
/*80417FF4 00414DF4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80417FF8 00414DF8*/ PPC::Runtime::ASM::mullw(context->r8, context->r9, context->r12);
/*80417FFC 00414DFC*/ PPC::Runtime::ASM::mullw(context->r9, context->r9, context->r11);
/*80418000 00414E00*/ PPC::Runtime::ASM::add(context->r8, context->r5, context->r8);
/*80418004 00414E04*/ PPC::Runtime::ASM::stwx(context->r8, context->r5, context->r9);
/*80418008 00414E08*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8041800C 00414E0C*/ PPC::Runtime::ASM::mullw(context->r8, context->r9, context->r29);
/*80418010 00414E10*/ PPC::Runtime::ASM::mullw(context->r9, context->r9, context->r12);
/*80418014 00414E14*/ PPC::Runtime::ASM::add(context->r8, context->r5, context->r8);
/*80418018 00414E18*/ PPC::Runtime::ASM::stwx(context->r8, context->r5, context->r9);
/*8041801C 00414E1C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80418020 00414E20*/ PPC::Runtime::ASM::mullw(context->r8, context->r9, context->r0);
/*80418024 00414E24*/ PPC::Runtime::ASM::mullw(context->r9, context->r9, context->r29);
/*80418028 00414E28*/ PPC::Runtime::ASM::add(context->r8, context->r5, context->r8);
/*8041802C 00414E2C*/ PPC::Runtime::ASM::stwx(context->r8, context->r5, context->r9);
/*80418030 00414E30*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80418034 00414E34*/ PPC::Runtime::ASM::mullw(context->r8, context->r9, context->r3);
/*80418038 00414E38*/ PPC::Runtime::ASM::mullw(context->r9, context->r9, context->r0);
/*8041803C 00414E3C*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r8);
/*80418040 00414E40*/ PPC::Runtime::ASM::stwx(context->r0, context->r5, context->r9);
/*80418044 00414E44*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80418048 00414E48*/ PPC::Runtime::ASM::mullw(context->r0, context->r8, context->r4);
/*8041804C 00414E4C*/ PPC::Runtime::ASM::mullw(context->r3, context->r8, context->r3);
/*80418050 00414E50*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*80418054 00414E54*/ PPC::Runtime::ASM::stwx(context->r0, context->r5, context->r3);
/*80418058 00414E58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8041805C 00414E5C*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r7);
/*80418060 00414E60*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r4);
/*80418064 00414E64*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*80418068 00414E68*/ PPC::Runtime::ASM::stwx(context->r0, context->r5, context->r3);
/*8041806C 00414E6C*/ PPC::Runtime::ASM::bdnz(.L_80417FA8);
RUNTIME_PPC_JUMP_LABEL(.L_80418070, 0x80418070) //this is a jump label
/*80418070 00414E70*/ PPC::Runtime::ASM::subi(context->r3, context->r31, 0x1);
/*80418074 00414E74*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r3);
/*80418078 00414E78*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8041807C 00414E7C*/ PPC::Runtime::ASM::cmplw(context->r6, context->r3);
/*80418080 00414E80*/ PPC::Runtime::ASM::bge(.L_804180A4);
RUNTIME_PPC_JUMP_LABEL(.L_80418084, 0x80418084) //this is a jump label
/*80418084 00414E84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80418088 00414E88*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x1);
/*8041808C 00414E8C*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80418090 00414E90*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r6);
/*80418094 00414E94*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80418098 00414E98*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*8041809C 00414E9C*/ PPC::Runtime::ASM::stwx(context->r0, context->r5, context->r3);
/*804180A0 00414EA0*/ PPC::Runtime::ASM::bdnz(.L_80418084);
RUNTIME_PPC_JUMP_LABEL(.L_804180A4, 0x804180A4) //this is a jump label
/*804180A4 00414EA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*804180A8 00414EA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804180AC 00414EAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*804180B0 00414EB0*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r6);
/*804180B4 00414EB4*/ PPC::Runtime::ASM::stwx(context->r4, context->r5, context->r0);
/*804180B8 00414EB8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*804180BC 00414EBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*804180C0 00414EC0*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r31);
/*804180C4 00414EC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_804180C8, 0x804180C8) //this is a jump label
/*804180C8 00414EC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804180CC 00414ECC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804180D0 00414ED0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804180D4 00414ED4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804180D8 00414ED8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804180DC 00414EDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804180E0 00414EE0*/ PPC::Runtime::ASM::blr();
}