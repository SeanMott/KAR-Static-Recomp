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
#include "fn_80230A88.hpp"



void fn_8004CD5C(PPC::Runtime::GCContext* context)
{
/*8004CD5C 00049B5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004CD60 00049B60*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004CD64 00049B64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004CD68 00049B68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004CD6C 00049B6C*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*8004CD70 00049B70*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CD74 00049B74*/ PPC::Runtime::ASM::bne(.L_8004CDE4);
/*8004CD78 00049B78*/ PPC::Runtime::ASM::bl(fn_getRuleNum);
/*8004CD7C 00049B7C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CD80 00049B80*/ PPC::Runtime::ASM::bne(.L_8004CDD0);
/*8004CD84 00049B84*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CD88, 0x8004CD88) //this is a jump label
/*8004CD88 00049B88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CD8C 00049B8C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004CD90 00049B90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004CD94 00049B94*/ PPC::Runtime::ASM::bne(.L_8004CDB0);
/*8004CD98 00049B98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CD9C 00049B9C*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004CDA0 00049BA0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CDA4 00049BA4*/ PPC::Runtime::ASM::beq(.L_8004CDB0);
/*8004CDA8 00049BA8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004CDAC 00049BAC*/ PPC::Runtime::ASM::b(.L_8004CDC0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CDB0, 0x8004CDB0) //this is a jump label
/*8004CDB0 00049BB0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004CDB4 00049BB4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004CDB8 00049BB8*/ PPC::Runtime::ASM::blt(.L_8004CD88);
/*8004CDBC 00049BBC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CDC0, 0x8004CDC0) //this is a jump label
/*8004CDC0 00049BC0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004CDC4 00049BC4*/ PPC::Runtime::ASM::beq(.L_8004CDE4);
/*8004CDC8 00049BC8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004CDCC 00049BCC*/ PPC::Runtime::ASM::b(.L_8004CDE8);
RUNTIME_PPC_JUMP_LABEL(.L_8004CDD0, 0x8004CDD0) //this is a jump label
/*8004CDD0 00049BD0*/ PPC::Runtime::ASM::bl(fn_8000A0F8);
/*8004CDD4 00049BD4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004CDD8 00049BD8*/ PPC::Runtime::ASM::bgt(.L_8004CDE4);
/*8004CDDC 00049BDC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004CDE0 00049BE0*/ PPC::Runtime::ASM::b(.L_8004CDE8);
RUNTIME_PPC_JUMP_LABEL(.L_8004CDE4, 0x8004CDE4) //this is a jump label
/*8004CDE4 00049BE4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CDE8, 0x8004CDE8) //this is a jump label
/*8004CDE8 00049BE8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004CDEC 00049BEC*/ PPC::Runtime::ASM::beq(.L_8004CE4C);
/*8004CDF0 00049BF0*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8004CDF4 00049BF4*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8004CDF8 00049BF8*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8004CDFC 00049BFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*8004CE00 00049C00*/ PPC::Runtime::ASM::bne(.L_8004CE4C);
/*8004CE04 00049C04*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CE08, 0x8004CE08) //this is a jump label
/*8004CE08 00049C08*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CE0C 00049C0C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004CE10 00049C10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004CE14 00049C14*/ PPC::Runtime::ASM::bne(.L_8004CE40);
/*8004CE18 00049C18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CE1C 00049C1C*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004CE20 00049C20*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CE24 00049C24*/ PPC::Runtime::ASM::bne(.L_8004CE40);
/*8004CE28 00049C28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004CE2C 00049C2C*/ PPC::Runtime::ASM::bl(fn_80230A88);
/*8004CE30 00049C30*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8004CE34 00049C34*/ PPC::Runtime::ASM::bne(.L_8004CE40);
/*8004CE38 00049C38*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004CE3C 00049C3C*/ PPC::Runtime::ASM::b(.L_8004CE50);
RUNTIME_PPC_JUMP_LABEL(.L_8004CE40, 0x8004CE40) //this is a jump label
/*8004CE40 00049C40*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004CE44 00049C44*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004CE48 00049C48*/ PPC::Runtime::ASM::blt(.L_8004CE08);
RUNTIME_PPC_JUMP_LABEL(.L_8004CE4C, 0x8004CE4C) //this is a jump label
/*8004CE4C 00049C4C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004CE50, 0x8004CE50) //this is a jump label
/*8004CE50 00049C50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004CE54 00049C54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004CE58 00049C58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004CE5C 00049C5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004CE60 00049C60*/ PPC::Runtime::ASM::blr();
}