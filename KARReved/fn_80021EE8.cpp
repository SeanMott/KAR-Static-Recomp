//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80134158.hpp"



void fn_80021EE8(PPC::Runtime::GCContext* context)
{
/*80021EE8 0001ECE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80021EEC 0001ECEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80021EF0 0001ECF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80021EF4 0001ECF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80021EF8 0001ECF8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80021EFC 0001ECFC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80021F00 0001ED00*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80021F04 0001ED04*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80021F08 0001ED08*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*80021F0C 0001ED0C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80021F10 0001ED10*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80021F14 0001ED14*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10a);
/*80021F18 0001ED18*/ PPC::Runtime::ASM::extsb(context->r10, context->r30);
/*80021F1C 0001ED1C*/ PPC::Runtime::ASM::li(context->r11, -0x1);
/*80021F20 0001ED20*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80021F24 0001ED24*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80021F28 0001ED28*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80021F2C 0001ED2C*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*80021F30 0001ED30*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80021F34 0001ED34*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*80021F38 0001ED38*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80021F3C, 0x80021F3C) //this is a jump label
/*80021F3C 0001ED3C*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80021F40 0001ED40*/ PPC::Runtime::ASM::beq(.L_80021F9C);
/*80021F44 0001ED44*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80021F48 0001ED48*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80021F4C 0001ED4C*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r12);
/*80021F50 0001ED50*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*80021F54 0001ED54*/ PPC::Runtime::ASM::beq(.L_80021F9C);
/*80021F58 0001ED58*/ PPC::Runtime::ASM::add(context->r7, context->r3, context->r12);
/*80021F5C 0001ED5C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80021F60 0001ED60*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r7));
/*80021F64 0001ED64*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*80021F68 0001ED68*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*80021F6C 0001ED6C*/ PPC::Runtime::ASM::bne(.L_80021F9C);
/*80021F70 0001ED70*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r7));
/*80021F74 0001ED74*/ PPC::Runtime::ASM::extsb(context->r0, context->r11);
/*80021F78 0001ED78*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80021F7C 0001ED7C*/ PPC::Runtime::ASM::extsb(context->r9, context->r12);
/*80021F80 0001ED80*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*80021F84 0001ED84*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80021F88 0001ED88*/ PPC::Runtime::ASM::cmpw(context->r0, context->r7);
/*80021F8C 0001ED8C*/ PPC::Runtime::ASM::stbx(context->r12, context->r6, context->r7);
/*80021F90 0001ED90*/ PPC::Runtime::ASM::bge(.L_80021F9C);
/*80021F94 0001ED94*/ PPC::Runtime::ASM::mr(context->r11, context->r8);
/*80021F98 0001ED98*/ PPC::Runtime::ASM::mr(context->r4, context->r9);
RUNTIME_PPC_JUMP_LABEL(.L_80021F9C, 0x80021F9C) //this is a jump label
/*80021F9C 0001ED9C*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*80021FA0 0001EDA0*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80021FA4 0001EDA4*/ PPC::Runtime::ASM::beq(.L_80022000);
/*80021FA8 0001EDA8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80021FAC 0001EDAC*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80021FB0 0001EDB0*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r12);
/*80021FB4 0001EDB4*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*80021FB8 0001EDB8*/ PPC::Runtime::ASM::beq(.L_80022000);
/*80021FBC 0001EDBC*/ PPC::Runtime::ASM::add(context->r7, context->r3, context->r12);
/*80021FC0 0001EDC0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80021FC4 0001EDC4*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r7));
/*80021FC8 0001EDC8*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*80021FCC 0001EDCC*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*80021FD0 0001EDD0*/ PPC::Runtime::ASM::bne(.L_80022000);
/*80021FD4 0001EDD4*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r7));
/*80021FD8 0001EDD8*/ PPC::Runtime::ASM::extsb(context->r0, context->r11);
/*80021FDC 0001EDDC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80021FE0 0001EDE0*/ PPC::Runtime::ASM::extsb(context->r9, context->r12);
/*80021FE4 0001EDE4*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*80021FE8 0001EDE8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80021FEC 0001EDEC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r7);
/*80021FF0 0001EDF0*/ PPC::Runtime::ASM::stbx(context->r12, context->r6, context->r7);
/*80021FF4 0001EDF4*/ PPC::Runtime::ASM::bge(.L_80022000);
/*80021FF8 0001EDF8*/ PPC::Runtime::ASM::mr(context->r11, context->r8);
/*80021FFC 0001EDFC*/ PPC::Runtime::ASM::mr(context->r4, context->r9);
RUNTIME_PPC_JUMP_LABEL(.L_80022000, 0x80022000) //this is a jump label
/*80022000 0001EE00*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*80022004 0001EE04*/ PPC::Runtime::ASM::bdnz(.L_80021F3C);
/*80022008 0001EE08*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*8002200C 0001EE0C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80022010 0001EE10*/ PPC::Runtime::ASM::bne(.L_80022028);
/*80022014 0001EE14*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80022018 0001EE18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002201C 0001EE1C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80022020 0001EE20*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r3));
/*80022024 0001EE24*/ PPC::Runtime::ASM::b(.L_8002216C);
RUNTIME_PPC_JUMP_LABEL(.L_80022028, 0x80022028) //this is a jump label
/*80022028 0001EE28*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002202C 0001EE2C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80022030 0001EE30*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80022034 0001EE34*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80022038 0001EE38*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*8002203C 0001EE3C*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*80022040 0001EE40*/ PPC::Runtime::ASM::bne(.L_8002204C);
/*80022044 0001EE44*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*80022048 0001EE48*/ PPC::Runtime::ASM::b(.L_8002205C);
RUNTIME_PPC_JUMP_LABEL(.L_8002204C, 0x8002204C) //this is a jump label
/*8002204C 0001EE4C*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*80022050 0001EE50*/ PPC::Runtime::ASM::beq(.L_8002205C);
/*80022054 0001EE54*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80022058 0001EE58*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002205C, 0x8002205C) //this is a jump label
/*8002205C 0001EE5C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80022060 0001EE60*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*80022064 0001EE64*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*80022068 0001EE68*/ PPC::Runtime::ASM::bne(.L_80022074);
/*8002206C 0001EE6C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*80022070 0001EE70*/ PPC::Runtime::ASM::b(.L_8002208C);
RUNTIME_PPC_JUMP_LABEL(.L_80022074, 0x80022074) //this is a jump label
/*80022074 0001EE74*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*80022078 0001EE78*/ PPC::Runtime::ASM::beq(.L_8002208C);
/*8002207C 0001EE7C*/ PPC::Runtime::ASM::extsb(context->r7, context->r9);
/*80022080 0001EE80*/ PPC::Runtime::ASM::subfic(context->r7, context->r7, 0x1);
/*80022084 0001EE84*/ PPC::Runtime::ASM::stbx(context->r8, context->r6, context->r7);
/*80022088 0001EE88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002208C, 0x8002208C) //this is a jump label
/*8002208C 0001EE8C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80022090 0001EE90*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*80022094 0001EE94*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*80022098 0001EE98*/ PPC::Runtime::ASM::bne(.L_800220A4);
/*8002209C 0001EE9C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*800220A0 0001EEA0*/ PPC::Runtime::ASM::b(.L_800220BC);
RUNTIME_PPC_JUMP_LABEL(.L_800220A4, 0x800220A4) //this is a jump label
/*800220A4 0001EEA4*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*800220A8 0001EEA8*/ PPC::Runtime::ASM::beq(.L_800220BC);
/*800220AC 0001EEAC*/ PPC::Runtime::ASM::extsb(context->r7, context->r9);
/*800220B0 0001EEB0*/ PPC::Runtime::ASM::subfic(context->r7, context->r7, 0x2);
/*800220B4 0001EEB4*/ PPC::Runtime::ASM::stbx(context->r8, context->r6, context->r7);
/*800220B8 0001EEB8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800220BC, 0x800220BC) //this is a jump label
/*800220BC 0001EEBC*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*800220C0 0001EEC0*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*800220C4 0001EEC4*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*800220C8 0001EEC8*/ PPC::Runtime::ASM::bne(.L_800220D0);
/*800220CC 0001EECC*/ PPC::Runtime::ASM::b(.L_800220E8);
RUNTIME_PPC_JUMP_LABEL(.L_800220D0, 0x800220D0) //this is a jump label
/*800220D0 0001EED0*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*800220D4 0001EED4*/ PPC::Runtime::ASM::beq(.L_800220E8);
/*800220D8 0001EED8*/ PPC::Runtime::ASM::extsb(context->r7, context->r9);
/*800220DC 0001EEDC*/ PPC::Runtime::ASM::subfic(context->r7, context->r7, 0x3);
/*800220E0 0001EEE0*/ PPC::Runtime::ASM::stbx(context->r8, context->r6, context->r7);
/*800220E4 0001EEE4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800220E8, 0x800220E8) //this is a jump label
/*800220E8 0001EEE8*/ PPC::Runtime::ASM::extsb(context->r0, context->r5);
/*800220EC 0001EEEC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800220F0 0001EEF0*/ PPC::Runtime::ASM::stbx(context->r30, context->r5, context->r0);
/*800220F4 0001EEF4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800220F8 0001EEF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800220FC 0001EEFC*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80022100 0001EF00*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*80022104 0001EF04*/ PPC::Runtime::ASM::beq(.L_80022110);
/*80022108 0001EF08*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*8002210C 0001EF0C*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80022110, 0x80022110) //this is a jump label
/*80022110 0001EF10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80022114 0001EF14*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80022118 0001EF18*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8002211C 0001EF1C*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*80022120 0001EF20*/ PPC::Runtime::ASM::beq(.L_8002212C);
/*80022124 0001EF24*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*80022128 0001EF28*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002212C, 0x8002212C) //this is a jump label
/*8002212C 0001EF2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80022130 0001EF30*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*80022134 0001EF34*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80022138 0001EF38*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8002213C 0001EF3C*/ PPC::Runtime::ASM::beq(.L_80022148);
/*80022140 0001EF40*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*80022144 0001EF44*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80022148, 0x80022148) //this is a jump label
/*80022148 0001EF48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8002214C 0001EF4C*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*80022150 0001EF50*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80022154 0001EF54*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*80022158 0001EF58*/ PPC::Runtime::ASM::beq(.L_80022164);
/*8002215C 0001EF5C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*80022160 0001EF60*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80022164, 0x80022164) //this is a jump label
/*80022164 0001EF64*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80022168 0001EF68*/ PPC::Runtime::ASM::bl(fn_80134158);
RUNTIME_PPC_JUMP_LABEL(.L_8002216C, 0x8002216C) //this is a jump label
/*8002216C 0001EF6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80022170 0001EF70*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80022174 0001EF74*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80022178 0001EF78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8002217C 0001EF7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80022180 0001EF80*/ PPC::Runtime::ASM::blr();
}