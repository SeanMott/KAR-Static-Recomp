//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_801357E4.hpp"



void fn_8002FB3C(PPC::Runtime::GCContext* context)
{
/*8002FB3C 0002C93C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8002FB40 0002C940*/ PPC::Runtime::ASM::mflr(context->r0);
/*8002FB44 0002C944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8002FB48 0002C948*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8002FB4C 0002C94C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8002FB50 0002C950*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8002FB54 0002C954*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8002FB58 0002C958*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8002FB5C 0002C95C*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002FB60 0002C960*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8002FB64 0002C964*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002FB68 0002C968*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1d0);
/*8002FB6C 0002C96C*/ PPC::Runtime::ASM::extsb(context->r10, context->r30);
/*8002FB70 0002C970*/ PPC::Runtime::ASM::li(context->r11, -0x1);
/*8002FB74 0002C974*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8002FB78 0002C978*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8002FB7C 0002C97C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8002FB80 0002C980*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*8002FB84 0002C984*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8002FB88 0002C988*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8002FB8C 0002C98C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FB90, 0x8002FB90) //this is a jump label
/*8002FB90 0002C990*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*8002FB94 0002C994*/ PPC::Runtime::ASM::beq(.L_8002FBF0);
/*8002FB98 0002C998*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002FB9C 0002C99C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8002FBA0 0002C9A0*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r12);
/*8002FBA4 0002C9A4*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*8002FBA8 0002C9A8*/ PPC::Runtime::ASM::beq(.L_8002FBF0);
/*8002FBAC 0002C9AC*/ PPC::Runtime::ASM::add(context->r7, context->r3, context->r12);
/*8002FBB0 0002C9B0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8002FBB4 0002C9B4*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r7));
/*8002FBB8 0002C9B8*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*8002FBBC 0002C9BC*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*8002FBC0 0002C9C0*/ PPC::Runtime::ASM::bne(.L_8002FBF0);
/*8002FBC4 0002C9C4*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r7));
/*8002FBC8 0002C9C8*/ PPC::Runtime::ASM::extsb(context->r0, context->r11);
/*8002FBCC 0002C9CC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8002FBD0 0002C9D0*/ PPC::Runtime::ASM::extsb(context->r9, context->r12);
/*8002FBD4 0002C9D4*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*8002FBD8 0002C9D8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8002FBDC 0002C9DC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r7);
/*8002FBE0 0002C9E0*/ PPC::Runtime::ASM::stbx(context->r12, context->r6, context->r7);
/*8002FBE4 0002C9E4*/ PPC::Runtime::ASM::bge(.L_8002FBF0);
/*8002FBE8 0002C9E8*/ PPC::Runtime::ASM::mr(context->r11, context->r8);
/*8002FBEC 0002C9EC*/ PPC::Runtime::ASM::mr(context->r4, context->r9);
RUNTIME_PPC_JUMP_LABEL(.L_8002FBF0, 0x8002FBF0) //this is a jump label
/*8002FBF0 0002C9F0*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*8002FBF4 0002C9F4*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*8002FBF8 0002C9F8*/ PPC::Runtime::ASM::beq(.L_8002FC54);
/*8002FBFC 0002C9FC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002FC00 0002CA00*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8002FC04 0002CA04*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r12);
/*8002FC08 0002CA08*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*8002FC0C 0002CA0C*/ PPC::Runtime::ASM::beq(.L_8002FC54);
/*8002FC10 0002CA10*/ PPC::Runtime::ASM::add(context->r7, context->r3, context->r12);
/*8002FC14 0002CA14*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8002FC18 0002CA18*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r7));
/*8002FC1C 0002CA1C*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*8002FC20 0002CA20*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*8002FC24 0002CA24*/ PPC::Runtime::ASM::bne(.L_8002FC54);
/*8002FC28 0002CA28*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r7));
/*8002FC2C 0002CA2C*/ PPC::Runtime::ASM::extsb(context->r0, context->r11);
/*8002FC30 0002CA30*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8002FC34 0002CA34*/ PPC::Runtime::ASM::extsb(context->r9, context->r12);
/*8002FC38 0002CA38*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*8002FC3C 0002CA3C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8002FC40 0002CA40*/ PPC::Runtime::ASM::cmpw(context->r0, context->r7);
/*8002FC44 0002CA44*/ PPC::Runtime::ASM::stbx(context->r12, context->r6, context->r7);
/*8002FC48 0002CA48*/ PPC::Runtime::ASM::bge(.L_8002FC54);
/*8002FC4C 0002CA4C*/ PPC::Runtime::ASM::mr(context->r11, context->r8);
/*8002FC50 0002CA50*/ PPC::Runtime::ASM::mr(context->r4, context->r9);
RUNTIME_PPC_JUMP_LABEL(.L_8002FC54, 0x8002FC54) //this is a jump label
/*8002FC54 0002CA54*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*8002FC58 0002CA58*/ PPC::Runtime::ASM::bdnz(.L_8002FB90);
/*8002FC5C 0002CA5C*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*8002FC60 0002CA60*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8002FC64 0002CA64*/ PPC::Runtime::ASM::bne(.L_8002FC7C);
/*8002FC68 0002CA68*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8002FC6C 0002CA6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8002FC70 0002CA70*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8002FC74 0002CA74*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r3));
/*8002FC78 0002CA78*/ PPC::Runtime::ASM::b(.L_8002FDC0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FC7C, 0x8002FC7C) //this is a jump label
/*8002FC7C 0002CA7C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002FC80 0002CA80*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8002FC84 0002CA84*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8002FC88 0002CA88*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8002FC8C 0002CA8C*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*8002FC90 0002CA90*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*8002FC94 0002CA94*/ PPC::Runtime::ASM::bne(.L_8002FCA0);
/*8002FC98 0002CA98*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*8002FC9C 0002CA9C*/ PPC::Runtime::ASM::b(.L_8002FCB0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FCA0, 0x8002FCA0) //this is a jump label
/*8002FCA0 0002CAA0*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*8002FCA4 0002CAA4*/ PPC::Runtime::ASM::beq(.L_8002FCB0);
/*8002FCA8 0002CAA8*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002FCAC 0002CAAC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002FCB0, 0x8002FCB0) //this is a jump label
/*8002FCB0 0002CAB0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8002FCB4 0002CAB4*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*8002FCB8 0002CAB8*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*8002FCBC 0002CABC*/ PPC::Runtime::ASM::bne(.L_8002FCC8);
/*8002FCC0 0002CAC0*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*8002FCC4 0002CAC4*/ PPC::Runtime::ASM::b(.L_8002FCE0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FCC8, 0x8002FCC8) //this is a jump label
/*8002FCC8 0002CAC8*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*8002FCCC 0002CACC*/ PPC::Runtime::ASM::beq(.L_8002FCE0);
/*8002FCD0 0002CAD0*/ PPC::Runtime::ASM::extsb(context->r7, context->r9);
/*8002FCD4 0002CAD4*/ PPC::Runtime::ASM::subfic(context->r7, context->r7, 0x1);
/*8002FCD8 0002CAD8*/ PPC::Runtime::ASM::stbx(context->r8, context->r6, context->r7);
/*8002FCDC 0002CADC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002FCE0, 0x8002FCE0) //this is a jump label
/*8002FCE0 0002CAE0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8002FCE4 0002CAE4*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*8002FCE8 0002CAE8*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*8002FCEC 0002CAEC*/ PPC::Runtime::ASM::bne(.L_8002FCF8);
/*8002FCF0 0002CAF0*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*8002FCF4 0002CAF4*/ PPC::Runtime::ASM::b(.L_8002FD10);
RUNTIME_PPC_JUMP_LABEL(.L_8002FCF8, 0x8002FCF8) //this is a jump label
/*8002FCF8 0002CAF8*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*8002FCFC 0002CAFC*/ PPC::Runtime::ASM::beq(.L_8002FD10);
/*8002FD00 0002CB00*/ PPC::Runtime::ASM::extsb(context->r7, context->r9);
/*8002FD04 0002CB04*/ PPC::Runtime::ASM::subfic(context->r7, context->r7, 0x2);
/*8002FD08 0002CB08*/ PPC::Runtime::ASM::stbx(context->r8, context->r6, context->r7);
/*8002FD0C 0002CB0C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002FD10, 0x8002FD10) //this is a jump label
/*8002FD10 0002CB10*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8002FD14 0002CB14*/ PPC::Runtime::ASM::extsb(context->r7, context->r8);
/*8002FD18 0002CB18*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*8002FD1C 0002CB1C*/ PPC::Runtime::ASM::bne(.L_8002FD24);
/*8002FD20 0002CB20*/ PPC::Runtime::ASM::b(.L_8002FD3C);
RUNTIME_PPC_JUMP_LABEL(.L_8002FD24, 0x8002FD24) //this is a jump label
/*8002FD24 0002CB24*/ PPC::Runtime::ASM::extsb.(context->r7, context->r9);
/*8002FD28 0002CB28*/ PPC::Runtime::ASM::beq(.L_8002FD3C);
/*8002FD2C 0002CB2C*/ PPC::Runtime::ASM::extsb(context->r7, context->r9);
/*8002FD30 0002CB30*/ PPC::Runtime::ASM::subfic(context->r7, context->r7, 0x3);
/*8002FD34 0002CB34*/ PPC::Runtime::ASM::stbx(context->r8, context->r6, context->r7);
/*8002FD38 0002CB38*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002FD3C, 0x8002FD3C) //this is a jump label
/*8002FD3C 0002CB3C*/ PPC::Runtime::ASM::extsb(context->r0, context->r5);
/*8002FD40 0002CB40*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8002FD44 0002CB44*/ PPC::Runtime::ASM::stbx(context->r30, context->r5, context->r0);
/*8002FD48 0002CB48*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8002FD4C 0002CB4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002FD50 0002CB50*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8002FD54 0002CB54*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8002FD58 0002CB58*/ PPC::Runtime::ASM::beq(.L_8002FD64);
/*8002FD5C 0002CB5C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*8002FD60 0002CB60*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FD64, 0x8002FD64) //this is a jump label
/*8002FD64 0002CB64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8002FD68 0002CB68*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8002FD6C 0002CB6C*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8002FD70 0002CB70*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8002FD74 0002CB74*/ PPC::Runtime::ASM::beq(.L_8002FD80);
/*8002FD78 0002CB78*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*8002FD7C 0002CB7C*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FD80, 0x8002FD80) //this is a jump label
/*8002FD80 0002CB80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8002FD84 0002CB84*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*8002FD88 0002CB88*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8002FD8C 0002CB8C*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8002FD90 0002CB90*/ PPC::Runtime::ASM::beq(.L_8002FD9C);
/*8002FD94 0002CB94*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*8002FD98 0002CB98*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FD9C, 0x8002FD9C) //this is a jump label
/*8002FD9C 0002CB9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8002FDA0 0002CBA0*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*8002FDA4 0002CBA4*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8002FDA8 0002CBA8*/ PPC::Runtime::ASM::cmpwi(context->r5, -0x1);
/*8002FDAC 0002CBAC*/ PPC::Runtime::ASM::beq(.L_8002FDB8);
/*8002FDB0 0002CBB0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x39);
/*8002FDB4 0002CBB4*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FDB8, 0x8002FDB8) //this is a jump label
/*8002FDB8 0002CBB8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8002FDBC 0002CBBC*/ PPC::Runtime::ASM::bl(fn_801357E4);
RUNTIME_PPC_JUMP_LABEL(.L_8002FDC0, 0x8002FDC0) //this is a jump label
/*8002FDC0 0002CBC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8002FDC4 0002CBC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8002FDC8 0002CBC8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8002FDCC 0002CBCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8002FDD0 0002CBD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8002FDD4 0002CBD4*/ PPC::Runtime::ASM::blr();
}