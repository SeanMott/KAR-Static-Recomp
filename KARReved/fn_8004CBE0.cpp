//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8003D5F0.hpp"
#include "fn_getRuleNum.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_8000A0F8.hpp"
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_8022E438.hpp"



void fn_8004CBE0(PPC::Runtime::GCContext* context)
{
/*8004CBE0 000499E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004CBE4 000499E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004CBE8 000499E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004CBEC 000499EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004CBF0 000499F0*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*8004CBF4 000499F4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CBF8 000499F8*/ PPC::Runtime::ASM::bne(.L_8004CC68);
/*8004CBFC 000499FC*/ PPC::Runtime::ASM::bl(fn_getRuleNum);
/*8004CC00 00049A00*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CC04 00049A04*/ PPC::Runtime::ASM::bne(.L_8004CC54);
/*8004CC08 00049A08*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CC0C, 0x8004CC0C) //this is a jump label
/*8004CC0C 00049A0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CC10 00049A10*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004CC14 00049A14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004CC18 00049A18*/ PPC::Runtime::ASM::bne(.L_8004CC34);
/*8004CC1C 00049A1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CC20 00049A20*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004CC24 00049A24*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CC28 00049A28*/ PPC::Runtime::ASM::beq(.L_8004CC34);
/*8004CC2C 00049A2C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004CC30 00049A30*/ PPC::Runtime::ASM::b(.L_8004CC44);
RUNTIME_PPC_JUMP_LABEL(.L_8004CC34, 0x8004CC34) //this is a jump label
/*8004CC34 00049A34*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004CC38 00049A38*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004CC3C 00049A3C*/ PPC::Runtime::ASM::blt(.L_8004CC0C);
/*8004CC40 00049A40*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CC44, 0x8004CC44) //this is a jump label
/*8004CC44 00049A44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004CC48 00049A48*/ PPC::Runtime::ASM::beq(.L_8004CC68);
/*8004CC4C 00049A4C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004CC50 00049A50*/ PPC::Runtime::ASM::b(.L_8004CC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8004CC54, 0x8004CC54) //this is a jump label
/*8004CC54 00049A54*/ PPC::Runtime::ASM::bl(fn_8000A0F8);
/*8004CC58 00049A58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004CC5C 00049A5C*/ PPC::Runtime::ASM::bgt(.L_8004CC68);
/*8004CC60 00049A60*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004CC64 00049A64*/ PPC::Runtime::ASM::b(.L_8004CC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8004CC68, 0x8004CC68) //this is a jump label
/*8004CC68 00049A68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CC6C, 0x8004CC6C) //this is a jump label
/*8004CC6C 00049A6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004CC70 00049A70*/ PPC::Runtime::ASM::beq(.L_8004CCD0);
/*8004CC74 00049A74*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8004CC78 00049A78*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8004CC7C 00049A7C*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8004CC80 00049A80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8004CC84 00049A84*/ PPC::Runtime::ASM::bne(.L_8004CCD0);
/*8004CC88 00049A88*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CC8C, 0x8004CC8C) //this is a jump label
/*8004CC8C 00049A8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CC90 00049A90*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004CC94 00049A94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004CC98 00049A98*/ PPC::Runtime::ASM::bne(.L_8004CCC4);
/*8004CC9C 00049A9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CCA0 00049AA0*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004CCA4 00049AA4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CCA8 00049AA8*/ PPC::Runtime::ASM::bne(.L_8004CCC4);
/*8004CCAC 00049AAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CCB0 00049AB0*/ PPC::Runtime::ASM::bl(fn_8022E438);
/*8004CCB4 00049AB4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x3);
/*8004CCB8 00049AB8*/ PPC::Runtime::ASM::bne(.L_8004CCC4);
/*8004CCBC 00049ABC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004CCC0 00049AC0*/ PPC::Runtime::ASM::b(.L_8004CCD4);
RUNTIME_PPC_JUMP_LABEL(.L_8004CCC4, 0x8004CCC4) //this is a jump label
/*8004CCC4 00049AC4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004CCC8 00049AC8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004CCCC 00049ACC*/ PPC::Runtime::ASM::blt(.L_8004CC8C);
RUNTIME_PPC_JUMP_LABEL(.L_8004CCD0, 0x8004CCD0) //this is a jump label
/*8004CCD0 00049AD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CCD4, 0x8004CCD4) //this is a jump label
/*8004CCD4 00049AD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004CCD8 00049AD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004CCDC 00049ADC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004CCE0 00049AE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004CCE4 00049AE4*/ PPC::Runtime::ASM::blr();
}