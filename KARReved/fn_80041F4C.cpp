//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetClearcheckerP.hpp"
#include "fn_8000AF14.hpp"
#include "fn_8000AF14.hpp"
#include "fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces.hpp"
#include "fn_8000AF14.hpp"
#include "fn_8000AF14.hpp"
#include "fn_8000B2B8.hpp"
#include "fn_8000BD6C.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000AF14.hpp"
#include "fn_8000BF4C.hpp"
#include "fn_8000BDF0.hpp"
#include "fn_8000C0B4.hpp"
#include "fn_8000AF14.hpp"
#include "fn_8000C054.hpp"
#include "fn_8000AF14.hpp"
#include "fn_8000C090.hpp"
#include "fn_gmGetClearcheckerP.hpp"



void fn_80041F4C(PPC::Runtime::GCContext* context)
{
/*80041F4C 0003ED4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80041F50 0003ED50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80041F54 0003ED54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80041F58 0003ED58*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*80041F5C 0003ED5C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80041F60 0003ED60*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80041F64 0003ED64*/ PPC::Runtime::ASM::bl(fn_gmGetClearcheckerP);
/*80041F68 0003ED68*/ PPC::Runtime::ASM::bl(fn_8000AF14);
/*80041F6C 0003ED6C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80041F70 0003ED70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80041F74 0003ED74*/ PPC::Runtime::ASM::beq(.L_80041F90);
/*80041F78 0003ED78*/ PPC::Runtime::ASM::bl(fn_8000AF14);
/*80041F7C 0003ED7C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80041F80 0003ED80*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80041F84 0003ED84*/ PPC::Runtime::ASM::beq(.L_80041F90);
/*80041F88 0003ED88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80041F8C 0003ED8C*/ PPC::Runtime::ASM::b(.L_800421E8);
RUNTIME_PPC_JUMP_LABEL(.L_80041F90, 0x80041F90) //this is a jump label
/*80041F90 0003ED90*/ PPC::Runtime::ASM::bl(fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces);
/*80041F94 0003ED94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80041F98 0003ED98*/ PPC::Runtime::ASM::beq(.L_80041FA4);
/*80041F9C 0003ED9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80041FA0 0003EDA0*/ PPC::Runtime::ASM::b(.L_800421E8);
RUNTIME_PPC_JUMP_LABEL(.L_80041FA4, 0x80041FA4) //this is a jump label
/*80041FA4 0003EDA4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80041FA8 0003EDA8*/ PPC::Runtime::ASM::bl(fn_8000AF14);
/*80041FAC 0003EDAC*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80041FB0 0003EDB0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80041FB4 0003EDB4*/ PPC::Runtime::ASM::bne(.L_80041FC0);
/*80041FB8 0003EDB8*/ PPC::Runtime::ASM::li(context->r30, 0x4);
/*80041FBC 0003EDBC*/ PPC::Runtime::ASM::b(.L_80041FD4);
RUNTIME_PPC_JUMP_LABEL(.L_80041FC0, 0x80041FC0) //this is a jump label
/*80041FC0 0003EDC0*/ PPC::Runtime::ASM::bl(fn_8000AF14);
/*80041FC4 0003EDC4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80041FC8 0003EDC8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80041FCC 0003EDCC*/ PPC::Runtime::ASM::bne(.L_80041FD4);
/*80041FD0 0003EDD0*/ PPC::Runtime::ASM::li(context->r30, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_80041FD4, 0x80041FD4) //this is a jump label
/*80041FD4 0003EDD4*/ PPC::Runtime::ASM::bl(fn_8000B2B8);
/*80041FD8 0003EDD8*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80041FDC 0003EDDC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80041FE0 0003EDE0*/ PPC::Runtime::ASM::slwi(context->r31, context->r0, 4);
RUNTIME_PPC_JUMP_LABEL(.L_80041FE4, 0x80041FE4) //this is a jump label
/*80041FE4 0003EDE4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80041FE8 0003EDE8*/ PPC::Runtime::ASM::bl(fn_8000BD6C);
/*80041FEC 0003EDEC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80041FF0 0003EDF0*/ PPC::Runtime::ASM::bne(.L_800421D8);
/*80041FF4 0003EDF4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80041FF8 0003EDF8*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0xcc8);
/*80041FFC 0003EDFC*/ PPC::Runtime::ASM::bl(fn_8000AF14);
/*80042000 0003EE00*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80042004 0003EE04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042008 0003EE08*/ PPC::Runtime::ASM::bne(.L_8004201C);
/*8004200C 0003EE0C*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x4);
/*80042010 0003EE10*/ PPC::Runtime::ASM::lbzx(context->r0, context->r27, context->r0);
/*80042014 0003EE14*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80042018 0003EE18*/ PPC::Runtime::ASM::beq(.L_800421D8);
RUNTIME_PPC_JUMP_LABEL(.L_8004201C, 0x8004201C) //this is a jump label
/*8004201C 0003EE1C*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80042020 0003EE20*/ PPC::Runtime::ASM::bl(fn_8000BF4C);
/*80042024 0003EE24*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80042028 0003EE28*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8004202C 0003EE2C*/ PPC::Runtime::ASM::bl(fn_8000BDF0);
/*80042030 0003EE30*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80042034 0003EE34*/ PPC::Runtime::ASM::bl(fn_8000C0B4);
/*80042038 0003EE38*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x18);
/*8004203C 0003EE3C*/ PPC::Runtime::ASM::bl(fn_OSTicksToCalendarTime);
/*80042040 0003EE40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80042044 0003EE44*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80042048 0003EE48*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004204C 0003EE4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80042050 0003EE50*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80042054 0003EE54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80042058 0003EE58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8004205C 0003EE5C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80042060 0003EE60*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r1));
/*80042064 0003EE64*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
/*80042068 0003EE68*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r1));
/*8004206C 0003EE6C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80042070 0003EE70*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*80042074 0003EE74*/ PPC::Runtime::ASM::bl(fn_8000AF14);
/*80042078 0003EE78*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8004207C 0003EE7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042080 0003EE80*/ PPC::Runtime::ASM::bne(.L_80042094);
/*80042084 0003EE84*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80042088 0003EE88*/ PPC::Runtime::ASM::bl(fn_8000C054);
/*8004208C 0003EE8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80042090 0003EE90*/ PPC::Runtime::ASM::b(.L_800420AC);
RUNTIME_PPC_JUMP_LABEL(.L_80042094, 0x80042094) //this is a jump label
/*80042094 0003EE94*/ PPC::Runtime::ASM::bl(fn_8000AF14);
/*80042098 0003EE98*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8004209C 0003EE9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800420A0 0003EEA0*/ PPC::Runtime::ASM::bne(.L_800420AC);
/*800420A4 0003EEA4*/ PPC::Runtime::ASM::bl(fn_8000C090);
/*800420A8 0003EEA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800420AC, 0x800420AC) //this is a jump label
/*800420AC 0003EEAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800420B0 0003EEB0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800420B4 0003EEB4*/ PPC::Runtime::ASM::beq(.L_800421D8);
/*800420B8 0003EEB8*/ PPC::Runtime::ASM::lis(context->r3, 0x5);
/*800420BC 0003EEBC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x7e40);
/*800420C0 0003EEC0*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800420C4 0003EEC4*/ PPC::Runtime::ASM::blt(.L_800420D0);
/*800420C8 0003EEC8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x7e3f);
/*800420CC 0003EECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800420D0, 0x800420D0) //this is a jump label
/*800420D0 0003EED0*/ PPC::Runtime::ASM::bl(fn_gmGetClearcheckerP);
/*800420D4 0003EED4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*800420D8 0003EED8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4bc);
/*800420DC 0003EEDC*/ PPC::Runtime::ASM::bne(.L_80042158);
/*800420E0 0003EEE0*/ PPC::Runtime::ASM::add(context->r6, context->r31, context->r0);
/*800420E4 0003EEE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800420E8 0003EEE8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800420EC 0003EEEC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800420F0 0003EEF0*/ PPC::Runtime::ASM::bne(.L_80042120);
/*800420F4 0003EEF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800420F8 0003EEF8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800420FC 0003EEFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80042100 0003EF00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80042104 0003EF04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80042108 0003EF08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8004210C 0003EF0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80042110 0003EF10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80042114 0003EF14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80042118 0003EF18*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r6));
/*8004211C 0003EF1C*/ PPC::Runtime::ASM::b(.L_800421D4);
RUNTIME_PPC_JUMP_LABEL(.L_80042120, 0x80042120) //this is a jump label
/*80042120 0003EF20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80042124 0003EF24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80042128 0003EF28*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8004212C 0003EF2C*/ PPC::Runtime::ASM::bgt(.L_800421D0);
/*80042130 0003EF30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80042134 0003EF34*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80042138 0003EF38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004213C 0003EF3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80042140 0003EF40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80042144 0003EF44*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80042148 0003EF48*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8004214C 0003EF4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80042150 0003EF50*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r6));
/*80042154 0003EF54*/ PPC::Runtime::ASM::b(.L_800421D4);
RUNTIME_PPC_JUMP_LABEL(.L_80042158, 0x80042158) //this is a jump label
/*80042158 0003EF58*/ PPC::Runtime::ASM::add(context->r6, context->r31, context->r0);
/*8004215C 0003EF5C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r6));
/*80042160 0003EF60*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80042164 0003EF64*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80042168 0003EF68*/ PPC::Runtime::ASM::bne(.L_80042198);
/*8004216C 0003EF6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80042170 0003EF70*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80042174 0003EF74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80042178 0003EF78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r6));
/*8004217C 0003EF7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80042180 0003EF80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r6));
/*80042184 0003EF84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80042188 0003EF88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r6));
/*8004218C 0003EF8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r6));
/*80042190 0003EF90*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x82, context->r6));
/*80042194 0003EF94*/ PPC::Runtime::ASM::b(.L_800421D4);
RUNTIME_PPC_JUMP_LABEL(.L_80042198, 0x80042198) //this is a jump label
/*80042198 0003EF98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004219C 0003EF9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r6));
/*800421A0 0003EFA0*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800421A4 0003EFA4*/ PPC::Runtime::ASM::bgt(.L_800421D0);
/*800421A8 0003EFA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800421AC 0003EFAC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800421B0 0003EFB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800421B4 0003EFB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r6));
/*800421B8 0003EFB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800421BC 0003EFBC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r6));
/*800421C0 0003EFC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r6));
/*800421C4 0003EFC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r6));
/*800421C8 0003EFC8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x82, context->r6));
/*800421CC 0003EFCC*/ PPC::Runtime::ASM::b(.L_800421D4);
RUNTIME_PPC_JUMP_LABEL(.L_800421D0, 0x800421D0) //this is a jump label
/*800421D0 0003EFD0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800421D4, 0x800421D4) //this is a jump label
/*800421D4 0003EFD4*/ PPC::Runtime::ASM::or(context->r29, context->r29, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_800421D8, 0x800421D8) //this is a jump label
/*800421D8 0003EFD8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*800421DC 0003EFDC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*800421E0 0003EFE0*/ PPC::Runtime::ASM::blt(.L_80041FE4);
/*800421E4 0003EFE4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_800421E8, 0x800421E8) //this is a jump label
/*800421E8 0003EFE8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*800421EC 0003EFEC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800421F0 0003EFF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800421F4 0003EFF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800421F8 0003EFF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*800421FC 0003EFFC*/ PPC::Runtime::ASM::blr();
}