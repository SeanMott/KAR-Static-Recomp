//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006EA38.hpp"
#include "fn_8009C284.hpp"
#include "fn_8006EA38.hpp"
#include "fn_8009C284.hpp"
#include "fn_8006EA38.hpp"
#include "fn_8009C284.hpp"
#include "fn_8006EA38.hpp"
#include "fn_8009C284.hpp"
#include "fn_8006EA38.hpp"
#include "fn_8009C284.hpp"
#include "fn_8006EA38.hpp"
#include "fn_8009C284.hpp"
#include "fn_8006EA38.hpp"
#include "fn_8009C284.hpp"
#include "fn_8006E9EC.hpp"
#include "fn_8009C9B0.hpp"



void fn_8009C9B0(PPC::Runtime::GCContext* context)
{
/*8009C9B0 000997B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*8009C9B4 000997B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8009C9B8 000997B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8009C9BC 000997BC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*8009C9C0 000997C0*/ PPC::Runtime::ASM::bl(_savegpr_14);
/*8009C9C4 000997C4*/ PPC::Runtime::ASM::mr(context->r16, context->r4);
/*8009C9C8 000997C8*/ PPC::Runtime::ASM::mr(context->r14, context->r5);
/*8009C9CC 000997CC*/ PPC::Runtime::ASM::mr(context->r15, context->r3);
/*8009C9D0 000997D0*/ PPC::Runtime::ASM::mr(context->r17, context->r6);
/*8009C9D4 000997D4*/ PPC::Runtime::ASM::mr(context->r18, context->r7);
/*8009C9D8 000997D8*/ PPC::Runtime::ASM::mr(context->r19, context->r8);
/*8009C9DC 000997DC*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009C9E0 000997E0*/ PPC::Runtime::ASM::mr(context->r4, context->r14);
/*8009C9E4 000997E4*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8009C9E8 000997E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8009C9EC 000997EC*/ PPC::Runtime::ASM::beq(.L_8009CA0C);
/*8009C9F0 000997F0*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009C9F4 000997F4*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009C9F8 000997F8*/ PPC::Runtime::ASM::mr(context->r5, context->r14);
/*8009C9FC 000997FC*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CA00 00099800*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CA04 00099804*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CA08 00099808*/ PPC::Runtime::ASM::bl(fn_8009C284);
RUNTIME_PPC_JUMP_LABEL(.L_8009CA0C, 0x8009CA0C) //this is a jump label
/*8009CA0C 0009980C*/ PPC::Runtime::ASM::slwi(context->r0, context->r14, 2);
/*8009CA10 00099810*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8009CA14 00099814*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8009CA18 00099818*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8009CA1C 0009981C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8009CA20 00099820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8009CA24, 0x8009CA24) //this is a jump label
/*8009CA24 00099824*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8009CA28 00099828*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8009CA2C 0009982C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x18);
/*8009CA30 00099830*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8009CA34 00099834*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8009CA38 00099838*/ PPC::Runtime::ASM::lhzx(context->r14, context->r3, context->r0);
/*8009CA3C 0009983C*/ PPC::Runtime::ASM::addis(context->r0, context->r14, 0x0);
/*8009CA40 00099840*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8009CA44 00099844*/ PPC::Runtime::ASM::beq(.L_8009CCF8);
/*8009CA48 00099848*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009CA4C 0009984C*/ PPC::Runtime::ASM::mr(context->r4, context->r14);
/*8009CA50 00099850*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8009CA54 00099854*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8009CA58 00099858*/ PPC::Runtime::ASM::beq(.L_8009CA78);
/*8009CA5C 0009985C*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009CA60 00099860*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009CA64 00099864*/ PPC::Runtime::ASM::mr(context->r5, context->r14);
/*8009CA68 00099868*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CA6C 0009986C*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CA70 00099870*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CA74 00099874*/ PPC::Runtime::ASM::bl(fn_8009C284);
RUNTIME_PPC_JUMP_LABEL(.L_8009CA78, 0x8009CA78) //this is a jump label
/*8009CA78 00099878*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8009CA7C 0009987C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8009CA80 00099880*/ PPC::Runtime::ASM::slwi(context->r0, context->r14, 2);
/*8009CA84 00099884*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8009CA88 00099888*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8009CA8C 0009988C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8009CA90, 0x8009CA90) //this is a jump label
/*8009CA90 00099890*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8009CA94 00099894*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8009CA98 00099898*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x18);
/*8009CA9C 0009989C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8009CAA0 000998A0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8009CAA4 000998A4*/ PPC::Runtime::ASM::lhzx(context->r14, context->r3, context->r0);
/*8009CAA8 000998A8*/ PPC::Runtime::ASM::addis(context->r0, context->r14, 0x0);
/*8009CAAC 000998AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8009CAB0 000998B0*/ PPC::Runtime::ASM::beq(.L_8009CCD4);
/*8009CAB4 000998B4*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009CAB8 000998B8*/ PPC::Runtime::ASM::mr(context->r4, context->r14);
/*8009CABC 000998BC*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8009CAC0 000998C0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8009CAC4 000998C4*/ PPC::Runtime::ASM::beq(.L_8009CAE4);
/*8009CAC8 000998C8*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009CACC 000998CC*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009CAD0 000998D0*/ PPC::Runtime::ASM::mr(context->r5, context->r14);
/*8009CAD4 000998D4*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CAD8 000998D8*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CADC 000998DC*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CAE0 000998E0*/ PPC::Runtime::ASM::bl(fn_8009C284);
RUNTIME_PPC_JUMP_LABEL(.L_8009CAE4, 0x8009CAE4) //this is a jump label
/*8009CAE4 000998E4*/ PPC::Runtime::ASM::slwi(context->r0, context->r14, 2);
/*8009CAE8 000998E8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8009CAEC 000998EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8009CAF0 000998F0*/ PPC::Runtime::ASM::mr(context->r14, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8009CAF4, 0x8009CAF4) //this is a jump label
/*8009CAF4 000998F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8009CAF8 000998F8*/ PPC::Runtime::ASM::addi(context->r0, context->r14, 0x18);
/*8009CAFC 000998FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8009CB00 00099900*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8009CB04 00099904*/ PPC::Runtime::ASM::lhzx(context->r20, context->r3, context->r0);
/*8009CB08 00099908*/ PPC::Runtime::ASM::addis(context->r0, context->r20, 0x0);
/*8009CB0C 0009990C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8009CB10 00099910*/ PPC::Runtime::ASM::beq(.L_8009CCC4);
/*8009CB14 00099914*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009CB18 00099918*/ PPC::Runtime::ASM::mr(context->r4, context->r20);
/*8009CB1C 0009991C*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8009CB20 00099920*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8009CB24 00099924*/ PPC::Runtime::ASM::beq(.L_8009CB44);
/*8009CB28 00099928*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009CB2C 0009992C*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009CB30 00099930*/ PPC::Runtime::ASM::mr(context->r5, context->r20);
/*8009CB34 00099934*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CB38 00099938*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CB3C 0009993C*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CB40 00099940*/ PPC::Runtime::ASM::bl(fn_8009C284);
RUNTIME_PPC_JUMP_LABEL(.L_8009CB44, 0x8009CB44) //this is a jump label
/*8009CB44 00099944*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8009CB48 00099948*/ PPC::Runtime::ASM::slwi(context->r20, context->r20, 2);
/*8009CB4C 0009994C*/ PPC::Runtime::ASM::mr(context->r21, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8009CB50, 0x8009CB50) //this is a jump label
/*8009CB50 00099950*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8009CB54 00099954*/ PPC::Runtime::ASM::addi(context->r0, context->r21, 0x18);
/*8009CB58 00099958*/ PPC::Runtime::ASM::lwzx(context->r3, context->r20, context->r3);
/*8009CB5C 0009995C*/ PPC::Runtime::ASM::lhzx(context->r22, context->r3, context->r0);
/*8009CB60 00099960*/ PPC::Runtime::ASM::addis(context->r0, context->r22, 0x0);
/*8009CB64 00099964*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8009CB68 00099968*/ PPC::Runtime::ASM::beq(.L_8009CCB4);
/*8009CB6C 0009996C*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009CB70 00099970*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*8009CB74 00099974*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8009CB78 00099978*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8009CB7C 0009997C*/ PPC::Runtime::ASM::beq(.L_8009CB9C);
/*8009CB80 00099980*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009CB84 00099984*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009CB88 00099988*/ PPC::Runtime::ASM::mr(context->r5, context->r22);
/*8009CB8C 0009998C*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CB90 00099990*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CB94 00099994*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CB98 00099998*/ PPC::Runtime::ASM::bl(fn_8009C284);
RUNTIME_PPC_JUMP_LABEL(.L_8009CB9C, 0x8009CB9C) //this is a jump label
/*8009CB9C 0009999C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8009CBA0 000999A0*/ PPC::Runtime::ASM::slwi(context->r22, context->r22, 2);
/*8009CBA4 000999A4*/ PPC::Runtime::ASM::mr(context->r23, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8009CBA8, 0x8009CBA8) //this is a jump label
/*8009CBA8 000999A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8009CBAC 000999AC*/ PPC::Runtime::ASM::addi(context->r0, context->r23, 0x18);
/*8009CBB0 000999B0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r22, context->r3);
/*8009CBB4 000999B4*/ PPC::Runtime::ASM::lhzx(context->r24, context->r3, context->r0);
/*8009CBB8 000999B8*/ PPC::Runtime::ASM::addis(context->r0, context->r24, 0x0);
/*8009CBBC 000999BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8009CBC0 000999C0*/ PPC::Runtime::ASM::beq(.L_8009CCA4);
/*8009CBC4 000999C4*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009CBC8 000999C8*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*8009CBCC 000999CC*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8009CBD0 000999D0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8009CBD4 000999D4*/ PPC::Runtime::ASM::beq(.L_8009CBF4);
/*8009CBD8 000999D8*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009CBDC 000999DC*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009CBE0 000999E0*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*8009CBE4 000999E4*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CBE8 000999E8*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CBEC 000999EC*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CBF0 000999F0*/ PPC::Runtime::ASM::bl(fn_8009C284);
RUNTIME_PPC_JUMP_LABEL(.L_8009CBF4, 0x8009CBF4) //this is a jump label
/*8009CBF4 000999F4*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8009CBF8 000999F8*/ PPC::Runtime::ASM::slwi(context->r24, context->r24, 2);
/*8009CBFC 000999FC*/ PPC::Runtime::ASM::mr(context->r25, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_8009CC00, 0x8009CC00) //this is a jump label
/*8009CC00 00099A00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8009CC04 00099A04*/ PPC::Runtime::ASM::addi(context->r0, context->r25, 0x18);
/*8009CC08 00099A08*/ PPC::Runtime::ASM::lwzx(context->r3, context->r24, context->r3);
/*8009CC0C 00099A0C*/ PPC::Runtime::ASM::lhzx(context->r26, context->r3, context->r0);
/*8009CC10 00099A10*/ PPC::Runtime::ASM::addis(context->r0, context->r26, 0x0);
/*8009CC14 00099A14*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8009CC18 00099A18*/ PPC::Runtime::ASM::beq(.L_8009CC94);
/*8009CC1C 00099A1C*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009CC20 00099A20*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8009CC24 00099A24*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8009CC28 00099A28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8009CC2C 00099A2C*/ PPC::Runtime::ASM::beq(.L_8009CC4C);
/*8009CC30 00099A30*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009CC34 00099A34*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009CC38 00099A38*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*8009CC3C 00099A3C*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CC40 00099A40*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CC44 00099A44*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CC48 00099A48*/ PPC::Runtime::ASM::bl(fn_8009C284);
RUNTIME_PPC_JUMP_LABEL(.L_8009CC4C, 0x8009CC4C) //this is a jump label
/*8009CC4C 00099A4C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8009CC50, 0x8009CC50) //this is a jump label
/*8009CC50 00099A50*/ PPC::Runtime::ASM::mr(context->r3, context->r16);
/*8009CC54 00099A54*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8009CC58 00099A58*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*8009CC5C 00099A5C*/ PPC::Runtime::ASM::bl(fn_8006E9EC);
/*8009CC60 00099A60*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8009CC64 00099A64*/ PPC::Runtime::ASM::addis(context->r0, context->r5, 0x0);
/*8009CC68 00099A68*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8009CC6C 00099A6C*/ PPC::Runtime::ASM::beq(.L_8009CC88);
/*8009CC70 00099A70*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8009CC74 00099A74*/ PPC::Runtime::ASM::mr(context->r4, context->r16);
/*8009CC78 00099A78*/ PPC::Runtime::ASM::mr(context->r6, context->r17);
/*8009CC7C 00099A7C*/ PPC::Runtime::ASM::mr(context->r7, context->r18);
/*8009CC80 00099A80*/ PPC::Runtime::ASM::mr(context->r8, context->r19);
/*8009CC84 00099A84*/ PPC::Runtime::ASM::bl(fn_8009C9B0);
RUNTIME_PPC_JUMP_LABEL(.L_8009CC88, 0x8009CC88) //this is a jump label
/*8009CC88 00099A88*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8009CC8C 00099A8C*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x2);
/*8009CC90 00099A90*/ PPC::Runtime::ASM::blt(.L_8009CC50);
RUNTIME_PPC_JUMP_LABEL(.L_8009CC94, 0x8009CC94) //this is a jump label
/*8009CC94 00099A94*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8009CC98 00099A98*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x2);
/*8009CC9C 00099A9C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x2);
/*8009CCA0 00099AA0*/ PPC::Runtime::ASM::blt(.L_8009CC00);
RUNTIME_PPC_JUMP_LABEL(.L_8009CCA4, 0x8009CCA4) //this is a jump label
/*8009CCA4 00099AA4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8009CCA8 00099AA8*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x2);
/*8009CCAC 00099AAC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8009CCB0 00099AB0*/ PPC::Runtime::ASM::blt(.L_8009CBA8);
RUNTIME_PPC_JUMP_LABEL(.L_8009CCB4, 0x8009CCB4) //this is a jump label
/*8009CCB4 00099AB4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8009CCB8 00099AB8*/ PPC::Runtime::ASM::addi(context->r21, context->r21, 0x2);
/*8009CCBC 00099ABC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*8009CCC0 00099AC0*/ PPC::Runtime::ASM::blt(.L_8009CB50);
RUNTIME_PPC_JUMP_LABEL(.L_8009CCC4, 0x8009CCC4) //this is a jump label
/*8009CCC4 00099AC4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8009CCC8 00099AC8*/ PPC::Runtime::ASM::addi(context->r14, context->r14, 0x2);
/*8009CCCC 00099ACC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*8009CCD0 00099AD0*/ PPC::Runtime::ASM::blt(.L_8009CAF4);
RUNTIME_PPC_JUMP_LABEL(.L_8009CCD4, 0x8009CCD4) //this is a jump label
/*8009CCD4 00099AD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8009CCD8 00099AD8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8009CCDC 00099ADC*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8009CCE0 00099AE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8009CCE4 00099AE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8009CCE8 00099AE8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8009CCEC 00099AEC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2);
/*8009CCF0 00099AF0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8009CCF4 00099AF4*/ PPC::Runtime::ASM::blt(.L_8009CA90);
RUNTIME_PPC_JUMP_LABEL(.L_8009CCF8, 0x8009CCF8) //this is a jump label
/*8009CCF8 00099AF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8009CCFC 00099AFC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8009CD00 00099B00*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8009CD04 00099B04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8009CD08 00099B08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8009CD0C 00099B0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8009CD10 00099B10*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2);
/*8009CD14 00099B14*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8009CD18 00099B18*/ PPC::Runtime::ASM::blt(.L_8009CA24);
/*8009CD1C 00099B1C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*8009CD20 00099B20*/ PPC::Runtime::ASM::bl(_restgpr_14);
/*8009CD24 00099B24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8009CD28 00099B28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8009CD2C 00099B2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*8009CD30 00099B30*/ PPC::Runtime::ASM::blr();
}