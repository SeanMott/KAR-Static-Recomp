//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006EE5C.hpp"
#include "fn_Cup_Template_8_14__GetTeamStats_TakeParam_Int.hpp"
#include "fn_Cup_Template_8_14__GetTeamStats_TakeParam_int_2.hpp"
#include "fn_8006E9EC.hpp"
#include "fn_8006EDF4.hpp"
#include "fn_8006EA38.hpp"
#include "fn_8006E9EC.hpp"
#include "fn_8006EAD8.hpp"



void fn_8006EAD8(PPC::Runtime::GCContext* context)
{
/*8006EAD8 0006B8D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8006EADC 0006B8DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006EAE0 0006B8E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8006EAE4 0006B8E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8006EAE8 0006B8E8*/ PPC::Runtime::ASM::bl(_savegpr_19);
/*8006EAEC 0006B8EC*/ PPC::Runtime::ASM::mr(context->r20, context->r3);
/*8006EAF0 0006B8F0*/ PPC::Runtime::ASM::slwi(context->r24, context->r4, 2);
/*8006EAF4 0006B8F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8006EAF8 0006B8F8*/ PPC::Runtime::ASM::mr(context->r21, context->r5);
/*8006EAFC 0006B8FC*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r24);
/*8006EB00 0006B900*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8006EB04 0006B904*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x0);
/*8006EB08 0006B908*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006EB0C 0006B90C*/ PPC::Runtime::ASM::beq(.L_8006EB18);
/*8006EB10 0006B910*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006EB14 0006B914*/ PPC::Runtime::ASM::b(.L_8006EB90);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB18, 0x8006EB18) //this is a jump label
/*8006EB18 0006B918*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r4));
/*8006EB1C 0006B91C*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x0);
/*8006EB20 0006B920*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006EB24 0006B924*/ PPC::Runtime::ASM::beq(.L_8006EB30);
/*8006EB28 0006B928*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006EB2C 0006B92C*/ PPC::Runtime::ASM::b(.L_8006EB90);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB30, 0x8006EB30) //this is a jump label
/*8006EB30 0006B930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r20));
/*8006EB34 0006B934*/ PPC::Runtime::ASM::mr(context->r4, context->r20);
/*8006EB38 0006B938*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8006EB3C 0006B93C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8006EB40 0006B940*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006EB44 0006B944*/ PPC::Runtime::ASM::ble(.L_8006EB8C);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB48, 0x8006EB48) //this is a jump label
/*8006EB48 0006B948*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8006EB4C 0006B94C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/* 8006EB50 0006B950  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8006EB54 0006B954*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r24);
/*8006EB58 0006B958*/ PPC::Runtime::ASM::beq(.L_8006EB68);
/*8006EB5C 0006B95C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1e);
/*8006EB60 0006B960*/ PPC::Runtime::ASM::lhzx(context->r0, context->r3, context->r0);
/*8006EB64 0006B964*/ PPC::Runtime::ASM::b(.L_8006EB70);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB68, 0x8006EB68) //this is a jump label
/*8006EB68 0006B968*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x20);
/*8006EB6C 0006B96C*/ PPC::Runtime::ASM::lhzx(context->r0, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB70, 0x8006EB70) //this is a jump label
/*8006EB70 0006B970*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006EB74 0006B974*/ PPC::Runtime::ASM::beq(.L_8006EB80);
/*8006EB78 0006B978*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8006EB7C 0006B97C*/ PPC::Runtime::ASM::b(.L_8006EB90);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB80, 0x8006EB80) //this is a jump label
/*8006EB80 0006B980*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*8006EB84 0006B984*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*8006EB88 0006B988*/ PPC::Runtime::ASM::bdnz(.L_8006EB48);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB8C, 0x8006EB8C) //this is a jump label
/*8006EB8C 0006B98C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006EB90, 0x8006EB90) //this is a jump label
/*8006EB90 0006B990*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006EB94 0006B994*/ PPC::Runtime::ASM::beq(.L_8006EBA4);
/*8006EB98 0006B998*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*8006EB9C 0006B99C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006EBA0 0006B9A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_8006EBA4, 0x8006EBA4) //this is a jump label
/*8006EBA4 0006B9A4*/ PPC::Runtime::ASM::li(context->r22, 0x0);
/*8006EBA8 0006B9A8*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006EBAC, 0x8006EBAC) //this is a jump label
/*8006EBAC 0006B9AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*8006EBB0 0006B9B0*/ PPC::Runtime::ASM::addi(context->r0, context->r25, 0x18);
/*8006EBB4 0006B9B4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r24, context->r4);
/*8006EBB8 0006B9B8*/ PPC::Runtime::ASM::lhzx(context->r3, context->r3, context->r0);
/*8006EBBC 0006B9BC*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x0);
/*8006EBC0 0006B9C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006EBC4 0006B9C4*/ PPC::Runtime::ASM::beq(.L_8006EDCC);
/*8006EBC8 0006B9C8*/ PPC::Runtime::ASM::slwi(context->r23, context->r3, 2);
/*8006EBCC 0006B9CC*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r23);
/*8006EBD0 0006B9D0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8006EBD4 0006B9D4*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x0);
/*8006EBD8 0006B9D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006EBDC 0006B9DC*/ PPC::Runtime::ASM::beq(.L_8006EBE8);
/*8006EBE0 0006B9E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006EBE4 0006B9E4*/ PPC::Runtime::ASM::b(.L_8006EC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8006EBE8, 0x8006EBE8) //this is a jump label
/*8006EBE8 0006B9E8*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r4));
/*8006EBEC 0006B9EC*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x0);
/*8006EBF0 0006B9F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006EBF4 0006B9F4*/ PPC::Runtime::ASM::beq(.L_8006EC00);
/*8006EBF8 0006B9F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006EBFC 0006B9FC*/ PPC::Runtime::ASM::b(.L_8006EC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8006EC00, 0x8006EC00) //this is a jump label
/*8006EC00 0006BA00*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8006EC04 0006BA04*/ PPC::Runtime::ASM::b(.L_8006EC5C);
RUNTIME_PPC_JUMP_LABEL(.L_8006EC08, 0x8006EC08) //this is a jump label
/*8006EC08 0006BA08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*8006EC0C 0006BA0C*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*8006EC10 0006BA10*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8006EC14 0006BA14*/ PPC::Runtime::ASM::lwzx(context->r27, context->r23, context->r0);
/*8006EC18 0006BA18*/ PPC::Runtime::ASM::bl(fn_8006EE5C);
/* 8006EC1C 0006BA1C  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*8006EC20 0006BA20*/ PPC::Runtime::ASM::beq(.L_8006EC38);
/*8006EC24 0006BA24*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8006EC28 0006BA28*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8006EC2C 0006BA2C*/ PPC::Runtime::ASM::bl(fn_Cup_Template_8_14__GetTeamStats_TakeParam_Int);
/*8006EC30 0006BA30*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*8006EC34 0006BA34*/ PPC::Runtime::ASM::b(.L_8006EC48);
RUNTIME_PPC_JUMP_LABEL(.L_8006EC38, 0x8006EC38) //this is a jump label
/*8006EC38 0006BA38*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8006EC3C 0006BA3C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8006EC40 0006BA40*/ PPC::Runtime::ASM::bl(fn_Cup_Template_8_14__GetTeamStats_TakeParam_int_2);
/*8006EC44 0006BA44*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8006EC48, 0x8006EC48) //this is a jump label
/*8006EC48 0006BA48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006EC4C 0006BA4C*/ PPC::Runtime::ASM::beq(.L_8006EC58);
/*8006EC50 0006BA50*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8006EC54 0006BA54*/ PPC::Runtime::ASM::b(.L_8006EC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8006EC58, 0x8006EC58) //this is a jump label
/*8006EC58 0006BA58*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8006EC5C, 0x8006EC5C) //this is a jump label
/*8006EC5C 0006BA5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r20));
/*8006EC60 0006BA60*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*8006EC64 0006BA64*/ PPC::Runtime::ASM::blt(.L_8006EC08);
/*8006EC68 0006BA68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006EC6C, 0x8006EC6C) //this is a jump label
/*8006EC6C 0006BA6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006EC70 0006BA70*/ PPC::Runtime::ASM::beq(.L_8006EC80);
/*8006EC74 0006BA74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*8006EC78 0006BA78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006EC7C 0006BA7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_8006EC80, 0x8006EC80) //this is a jump label
/*8006EC80 0006BA80*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8006EC84 0006BA84*/ PPC::Runtime::ASM::mr(context->r26, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8006EC88, 0x8006EC88) //this is a jump label
/*8006EC88 0006BA88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*8006EC8C 0006BA8C*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x18);
/*8006EC90 0006BA90*/ PPC::Runtime::ASM::lwzx(context->r3, context->r23, context->r3);
/*8006EC94 0006BA94*/ PPC::Runtime::ASM::lhzx(context->r19, context->r3, context->r0);
/*8006EC98 0006BA98*/ PPC::Runtime::ASM::addis(context->r0, context->r19, 0x0);
/*8006EC9C 0006BA9C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006ECA0 0006BAA0*/ PPC::Runtime::ASM::beq(.L_8006EDBC);
/*8006ECA4 0006BAA4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006ECA8, 0x8006ECA8) //this is a jump label
/*8006ECA8 0006BAA8*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*8006ECAC 0006BAAC*/ PPC::Runtime::ASM::mr(context->r4, context->r19);
/*8006ECB0 0006BAB0*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*8006ECB4 0006BAB4*/ PPC::Runtime::ASM::bl(fn_8006E9EC);
/*8006ECB8 0006BAB8*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x0);
/*8006ECBC 0006BABC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006ECC0 0006BAC0*/ PPC::Runtime::ASM::beq(.L_8006ECCC);
/*8006ECC4 0006BAC4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006ECC8 0006BAC8*/ PPC::Runtime::ASM::b(.L_8006ED14);
RUNTIME_PPC_JUMP_LABEL(.L_8006ECCC, 0x8006ECCC) //this is a jump label
/*8006ECCC 0006BACC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8006ECD0 0006BAD0*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x2);
/*8006ECD4 0006BAD4*/ PPC::Runtime::ASM::blt(.L_8006ECA8);
/*8006ECD8 0006BAD8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8006ECDC 0006BADC*/ PPC::Runtime::ASM::b(.L_8006ED04);
RUNTIME_PPC_JUMP_LABEL(.L_8006ECE0, 0x8006ECE0) //this is a jump label
/*8006ECE0 0006BAE0*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*8006ECE4 0006BAE4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8006ECE8 0006BAE8*/ PPC::Runtime::ASM::mr(context->r5, context->r19);
/*8006ECEC 0006BAEC*/ PPC::Runtime::ASM::bl(fn_8006EDF4);
/*8006ECF0 0006BAF0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8006ECF4 0006BAF4*/ PPC::Runtime::ASM::beq(.L_8006ED00);
/*8006ECF8 0006BAF8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8006ECFC 0006BAFC*/ PPC::Runtime::ASM::b(.L_8006ED14);
RUNTIME_PPC_JUMP_LABEL(.L_8006ED00, 0x8006ED00) //this is a jump label
/*8006ED00 0006BB00*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8006ED04, 0x8006ED04) //this is a jump label
/*8006ED04 0006BB04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r20));
/*8006ED08 0006BB08*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*8006ED0C 0006BB0C*/ PPC::Runtime::ASM::blt(.L_8006ECE0);
/*8006ED10 0006BB10*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006ED14, 0x8006ED14) //this is a jump label
/*8006ED14 0006BB14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8006ED18 0006BB18*/ PPC::Runtime::ASM::beq(.L_8006ED28);
/*8006ED1C 0006BB1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*8006ED20 0006BB20*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006ED24 0006BB24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_8006ED28, 0x8006ED28) //this is a jump label
/*8006ED28 0006BB28*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8006ED2C 0006BB2C*/ PPC::Runtime::ASM::slwi(context->r27, context->r19, 2);
/*8006ED30 0006BB30*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8006ED34, 0x8006ED34) //this is a jump label
/*8006ED34 0006BB34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*8006ED38 0006BB38*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x18);
/*8006ED3C 0006BB3C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r27, context->r3);
/*8006ED40 0006BB40*/ PPC::Runtime::ASM::lhzx(context->r29, context->r3, context->r0);
/*8006ED44 0006BB44*/ PPC::Runtime::ASM::addis(context->r0, context->r29, 0x0);
/*8006ED48 0006BB48*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006ED4C 0006BB4C*/ PPC::Runtime::ASM::beq(.L_8006EDAC);
/*8006ED50 0006BB50*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*8006ED54 0006BB54*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8006ED58 0006BB58*/ PPC::Runtime::ASM::bl(fn_8006EA38);
/*8006ED5C 0006BB5C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8006ED60 0006BB60*/ PPC::Runtime::ASM::beq(.L_8006ED70);
/*8006ED64 0006BB64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*8006ED68 0006BB68*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006ED6C 0006BB6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_8006ED70, 0x8006ED70) //this is a jump label
/*8006ED70 0006BB70*/ PPC::Runtime::ASM::li(context->r19, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006ED74, 0x8006ED74) //this is a jump label
/*8006ED74 0006BB74*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*8006ED78 0006BB78*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8006ED7C 0006BB7C*/ PPC::Runtime::ASM::mr(context->r5, context->r19);
/*8006ED80 0006BB80*/ PPC::Runtime::ASM::bl(fn_8006E9EC);
/*8006ED84 0006BB84*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8006ED88 0006BB88*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006ED8C 0006BB8C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006ED90 0006BB90*/ PPC::Runtime::ASM::beq(.L_8006EDA0);
/*8006ED94 0006BB94*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*8006ED98 0006BB98*/ PPC::Runtime::ASM::mr(context->r5, context->r21);
/*8006ED9C 0006BB9C*/ PPC::Runtime::ASM::bl(fn_8006EAD8);
RUNTIME_PPC_JUMP_LABEL(.L_8006EDA0, 0x8006EDA0) //this is a jump label
/*8006EDA0 0006BBA0*/ PPC::Runtime::ASM::addi(context->r19, context->r19, 0x1);
/*8006EDA4 0006BBA4*/ PPC::Runtime::ASM::cmpwi(context->r19, 0x2);
/*8006EDA8 0006BBA8*/ PPC::Runtime::ASM::blt(.L_8006ED74);
RUNTIME_PPC_JUMP_LABEL(.L_8006EDAC, 0x8006EDAC) //this is a jump label
/*8006EDAC 0006BBAC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8006EDB0 0006BBB0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x2);
/*8006EDB4 0006BBB4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*8006EDB8 0006BBB8*/ PPC::Runtime::ASM::blt(.L_8006ED34);
RUNTIME_PPC_JUMP_LABEL(.L_8006EDBC, 0x8006EDBC) //this is a jump label
/*8006EDBC 0006BBBC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8006EDC0 0006BBC0*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x2);
/*8006EDC4 0006BBC4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*8006EDC8 0006BBC8*/ PPC::Runtime::ASM::blt(.L_8006EC88);
RUNTIME_PPC_JUMP_LABEL(.L_8006EDCC, 0x8006EDCC) //this is a jump label
/*8006EDCC 0006BBCC*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x1);
/*8006EDD0 0006BBD0*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x2);
/*8006EDD4 0006BBD4*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x2);
/*8006EDD8 0006BBD8*/ PPC::Runtime::ASM::blt(.L_8006EBAC);
/*8006EDDC 0006BBDC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8006EDE0 0006BBE0*/ PPC::Runtime::ASM::bl(_restgpr_19);
/*8006EDE4 0006BBE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8006EDE8 0006BBE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006EDEC 0006BBEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8006EDF0 0006BBF0*/ PPC::Runtime::ASM::blr();
}