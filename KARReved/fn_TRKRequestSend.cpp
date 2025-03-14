//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "MWTRACE.hpp"
#include "fn_TRKMessageSend.hpp"
#include "fn_TRKTestForPacket.hpp"
#include "TRKGetBuffer.hpp"
#include "fn_TRKSetBufferPosition.hpp"
#include "fn_OutputData.hpp"
#include "MWTRACE.hpp"
#include "fn_TRKProcessInput.hpp"
#include "MWTRACE.hpp"
#include "MWTRACE.hpp"
#include "fn_TRKReleaseBuffer.hpp"



void fn_TRKRequestSend(PPC::Runtime::GCContext* context)
{
/*803BFB08 003BC908*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*803BFB0C 003BC90C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BFB10 003BC910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803BFB14 003BC914*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803BFB18 003BC918*/ PPC::Runtime::ASM::stmw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803BFB1C 003BC91C*/ PPC::Runtime::ASM::mr(context->r22, context->r4);
/*803BFB20 003BC920*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_97 @ Get_MemoryOffset_HighBit);
/*803BFB24 003BC924*/ PPC::Runtime::ASM::mr(context->r21, context->r3);
/*803BFB28 003BC928*/ PPC::Runtime::ASM::mr(context->r23, context->r7);
/*803BFB2C 003BC92C*/ PPC::Runtime::ASM::addi(context->r27, context->r6, 0x1);
/*803BFB30 003BC930*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_97 @ Get_MemoryOffset_LowBit);
/*803BFB34 003BC934*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803BFB38 003BC938*/ PPC::Runtime::ASM::li(context->r24, 0x1);
/*803BFB3C 003BC93C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFB40 003BC940*/ PPC::Runtime::ASM::b(.L_803BFCA4);
RUNTIME_PPC_JUMP_LABEL(.L_803BFB44, 0x803BFB44) //this is a jump label
/*803BFB44 003BC944*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803BFB48 003BC948*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803BFB4C 003BC94C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803BFB50 003BC950*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803BFB54 003BC954*/ PPC::Runtime::ASM::mr(context->r3, context->r21);
/*803BFB58 003BC958*/ PPC::Runtime::ASM::bl(fn_TRKMessageSend);
/* 803BFB5C 003BC95C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803BFB60 003BC960*/ PPC::Runtime::ASM::bne(.L_803BFCA0);
/*803BFB64 003BC964*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*803BFB68 003BC968*/ PPC::Runtime::ASM::beq(.L_803BFB70);
/*803BFB6C 003BC96C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803BFB70, 0x803BFB70) //this is a jump label
/*803BFB70 003BC970*/ PPC::Runtime::ASM::bl(fn_TRKTestForPacket);
/*803BFB74 003BC974*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFB78 003BC978*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFB7C 003BC97C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*803BFB80 003BC980*/ PPC::Runtime::ASM::bne(.L_803BFBA0);
/*803BFB84 003BC984*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*803BFB88 003BC988*/ PPC::Runtime::ASM::beq(.L_803BFB70);
/*803BFB8C 003BC98C*/ PPC::Runtime::ASM::lis(context->r4, 0x4c5);
/*803BFB90 003BC990*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*803BFB94 003BC994*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x4c14);
/*803BFB98 003BC998*/ PPC::Runtime::ASM::cmplw(context->r28, context->r0);
/*803BFB9C 003BC99C*/ PPC::Runtime::ASM::blt(.L_803BFB70);
RUNTIME_PPC_JUMP_LABEL(.L_803BFBA0, 0x803BFBA0) //this is a jump label
/*803BFBA0 003BC9A0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*803BFBA4 003BC9A4*/ PPC::Runtime::ASM::beq(.L_803BFC00);
/*803BFBA8 003BC9A8*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*803BFBAC 003BC9AC*/ PPC::Runtime::ASM::bl(TRKGetBuffer);
/*803BFBB0 003BC9B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803BFBB4 003BC9B4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803BFBB8 003BC9B8*/ PPC::Runtime::ASM::bl(fn_TRKSetBufferPosition);
/*803BFBBC 003BC9BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803BFBC0 003BC9C0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x10);
/*803BFBC4 003BC9C4*/ PPC::Runtime::ASM::bl(fn_OutputData);
/*803BFBC8 003BC9C8*/ PPC::Runtime::ASM::lbz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*803BFBCC 003BC9CC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x18);
/*803BFBD0 003BC9D0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803BFBD4 003BC9D4*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*803BFBD8 003BC9D8*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*803BFBDC 003BC9DC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803BFBE0 003BC9E0*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803BFBE4 003BC9E4*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x80);
/*803BFBE8 003BC9E8*/ PPC::Runtime::ASM::bge(.L_803BFC00);
/*803BFBEC 003BC9EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFBF0 003BC9F0*/ PPC::Runtime::ASM::bl(fn_TRKProcessInput);
/*803BFBF4 003BC9F4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803BFBF8 003BC9F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFBFC 003BC9FC*/ PPC::Runtime::ASM::b(.L_803BFB70);
RUNTIME_PPC_JUMP_LABEL(.L_803BFC00, 0x803BFC00) //this is a jump label
/*803BFC00 003BCA00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFC04 003BCA04*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*803BFC08 003BCA08*/ PPC::Runtime::ASM::beq(.L_803BFCA0);
/*803BFC0C 003BCA0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803BFC10 003BCA10*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x40);
/*803BFC14 003BCA14*/ PPC::Runtime::ASM::bge(.L_803BFC1C);
/*803BFC18 003BCA18*/ PPC::Runtime::ASM::li(context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803BFC1C, 0x803BFC1C) //this is a jump label
/*803BFC1C 003BCA1C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803BFC20 003BCA20*/ PPC::Runtime::ASM::bne(.L_803BFC44);
/*803BFC24 003BCA24*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x0);
/*803BFC28 003BCA28*/ PPC::Runtime::ASM::bne(.L_803BFC44);
/*803BFC2C 003BCA2C*/ PPC::Runtime::ASM::lbz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*803BFC30 003BCA30*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x40);
/*803BFC34 003BCA34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803BFC38 003BCA38*/ PPC::Runtime::ASM::mr(context->r5, context->r25);
/*803BFC3C 003BCA3C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803BFC40 003BCA40*/ PPC::Runtime::ASM::bl(MWTRACE);
RUNTIME_PPC_JUMP_LABEL(.L_803BFC44, 0x803BFC44) //this is a jump label
/*803BFC44 003BCA44*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803BFC48 003BCA48*/ PPC::Runtime::ASM::bne(.L_803BFC80);
/*803BFC4C 003BCA4C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x0);
/*803BFC50 003BCA50*/ PPC::Runtime::ASM::bne(.L_803BFC80);
/*803BFC54 003BCA54*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x80);
/*803BFC58 003BCA58*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*803BFC5C 003BCA5C*/ PPC::Runtime::ASM::bne(.L_803BFC68);
/*803BFC60 003BCA60*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*803BFC64 003BCA64*/ PPC::Runtime::ASM::beq(.L_803BFC80);
RUNTIME_PPC_JUMP_LABEL(.L_803BFC68, 0x803BFC68) //this is a jump label
/*803BFC68 003BCA68*/ PPC::Runtime::ASM::mr(context->r6, context->r25);
/*803BFC6C 003BCA6C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x54);
/*803BFC70 003BCA70*/ PPC::Runtime::ASM::li(context->r3, 0x8);
/*803BFC74 003BCA74*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803BFC78 003BCA78*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803BFC7C 003BCA7C*/ PPC::Runtime::ASM::li(context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803BFC80, 0x803BFC80) //this is a jump label
/*803BFC80 003BCA80*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803BFC84 003BCA84*/ PPC::Runtime::ASM::bne(.L_803BFC90);
/*803BFC88 003BCA88*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x0);
/*803BFC8C 003BCA8C*/ PPC::Runtime::ASM::beq(.L_803BFCA0);
RUNTIME_PPC_JUMP_LABEL(.L_803BFC90, 0x803BFC90) //this is a jump label
/*803BFC90 003BCA90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFC94 003BCA94*/ PPC::Runtime::ASM::bl(fn_TRKReleaseBuffer);
/*803BFC98 003BCA98*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803BFC9C 003BCA9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_803BFCA0, 0x803BFCA0) //this is a jump label
/*803BFCA0 003BCAA0*/ PPC::Runtime::ASM::subi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803BFCA4, 0x803BFCA4) //this is a jump label
/*803BFCA4 003BCAA4*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*803BFCA8 003BCAA8*/ PPC::Runtime::ASM::beq(.L_803BFCC0);
/*803BFCAC 003BCAAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFCB0 003BCAB0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*803BFCB4 003BCAB4*/ PPC::Runtime::ASM::bne(.L_803BFCC0);
/*803BFCB8 003BCAB8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803BFCBC 003BCABC*/ PPC::Runtime::ASM::beq(.L_803BFB44);
RUNTIME_PPC_JUMP_LABEL(.L_803BFCC0, 0x803BFCC0) //this is a jump label
/*803BFCC0 003BCAC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803BFCC4 003BCAC4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*803BFCC8 003BCAC8*/ PPC::Runtime::ASM::bne(.L_803BFCD0);
/*803BFCCC 003BCACC*/ PPC::Runtime::ASM::li(context->r30, 0x800);
RUNTIME_PPC_JUMP_LABEL(.L_803BFCD0, 0x803BFCD0) //this is a jump label
/*803BFCD0 003BCAD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803BFCD4 003BCAD4*/ PPC::Runtime::ASM::lmw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803BFCD8 003BCAD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803BFCDC 003BCADC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BFCE0 003BCAE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*803BFCE4 003BCAE4*/ PPC::Runtime::ASM::blr();
}