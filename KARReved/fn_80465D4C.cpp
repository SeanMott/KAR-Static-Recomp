//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8046559C.hpp"
#include "fn_80465A20.hpp"
#include "fn_804657C0.hpp"
#include "fn_80465AE0.hpp"
#include "fn_80465BC8.hpp"



void fn_80465D4C(PPC::Runtime::GCContext* context)
{
/*80465D4C 00462B4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80465D50 00462B50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80465D54 00462B54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80465D58 00462B58*/ PPC::Runtime::ASM::mr(context->r11, context->r7);
/*80465D5C 00462B5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80465D60 00462B60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80465D64 00462B64*/ PPC::Runtime::ASM::bne(.L_80465D70);
/*80465D68 00462B68*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80465D6C 00462B6C*/ PPC::Runtime::ASM::b(.L_80465E8C);
RUNTIME_PPC_JUMP_LABEL(.L_80465D70, 0x80465D70) //this is a jump label
/*80465D70 00462B70*/ PPC::Runtime::ASM::cmplwi(context->r8, 0x0);
/*80465D74 00462B74*/ PPC::Runtime::ASM::bne(.L_80465D80);
/*80465D78 00462B78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80465D7C 00462B7C*/ PPC::Runtime::ASM::b(.L_80465E8C);
RUNTIME_PPC_JUMP_LABEL(.L_80465D80, 0x80465D80) //this is a jump label
/*80465D80 00462B80*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80465D84 00462B84*/ PPC::Runtime::ASM::mr(context->r7, context->r5);
/*80465D88 00462B88*/ PPC::Runtime::ASM::lhz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80465D8C 00462B8C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r9, 0, 24, 24);
/*80465D90 00462B90*/ PPC::Runtime::ASM::beq(.L_80465D98);
/*80465D94 00462B94*/ PPC::Runtime::ASM::srwi(context->r7, context->r5, 1);
RUNTIME_PPC_JUMP_LABEL(.L_80465D98, 0x80465D98) //this is a jump label
/*80465D98 00462B98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80465D9C 00462B9C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80465DA0 00462BA0*/ PPC::Runtime::ASM::bne(.L_80465E04);
/*80465DA4 00462BA4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r9, 25);
/*80465DA8 00462BA8*/ PPC::Runtime::ASM::slwi(context->r31, context->r5, 2);
/*80465DAC 00462BAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80465DB0 00462BB0*/ PPC::Runtime::ASM::beq(.L_80465DE0);
/*80465DB4 00462BB4*/ PPC::Runtime::ASM::bge(.L_80465DFC);
/*80465DB8 00462BB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80465DBC 00462BBC*/ PPC::Runtime::ASM::bge(.L_80465DC4);
/*80465DC0 00462BC0*/ PPC::Runtime::ASM::b(.L_80465DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80465DC4, 0x80465DC4) //this is a jump label
/*80465DC4 00462BC4*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*80465DC8 00462BC8*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*80465DCC 00462BCC*/ PPC::Runtime::ASM::mr(context->r6, context->r10);
/*80465DD0 00462BD0*/ PPC::Runtime::ASM::mr(context->r8, context->r11);
/*80465DD4 00462BD4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80465DD8 00462BD8*/ PPC::Runtime::ASM::bl(fn_8046559C);
/*80465DDC 00462BDC*/ PPC::Runtime::ASM::b(.L_80465E88);
RUNTIME_PPC_JUMP_LABEL(.L_80465DE0, 0x80465DE0) //this is a jump label
/*80465DE0 00462BE0*/ PPC::Runtime::ASM::mr(context->r3, context->r6);
/*80465DE4 00462BE4*/ PPC::Runtime::ASM::mr(context->r4, context->r8);
/*80465DE8 00462BE8*/ PPC::Runtime::ASM::mr(context->r5, context->r10);
/*80465DEC 00462BEC*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*80465DF0 00462BF0*/ PPC::Runtime::ASM::mr(context->r7, context->r11);
/*80465DF4 00462BF4*/ PPC::Runtime::ASM::bl(fn_80465A20);
/*80465DF8 00462BF8*/ PPC::Runtime::ASM::b(.L_80465E88);
RUNTIME_PPC_JUMP_LABEL(.L_80465DFC, 0x80465DFC) //this is a jump label
/*80465DFC 00462BFC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80465E00 00462C00*/ PPC::Runtime::ASM::b(.L_80465E88);
RUNTIME_PPC_JUMP_LABEL(.L_80465E04, 0x80465E04) //this is a jump label
/*80465E04 00462C04*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r9, 25);
/*80465E08 00462C08*/ PPC::Runtime::ASM::slwi(context->r31, context->r5, 2);
/*80465E0C 00462C0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80465E10 00462C10*/ PPC::Runtime::ASM::beq(.L_80465E4C);
/*80465E14 00462C14*/ PPC::Runtime::ASM::bge(.L_80465E24);
/*80465E18 00462C18*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80465E1C 00462C1C*/ PPC::Runtime::ASM::bge(.L_80465E30);
/*80465E20 00462C20*/ PPC::Runtime::ASM::b(.L_80465E84);
RUNTIME_PPC_JUMP_LABEL(.L_80465E24, 0x80465E24) //this is a jump label
/*80465E24 00462C24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80465E28 00462C28*/ PPC::Runtime::ASM::beq(.L_80465E68);
/*80465E2C 00462C2C*/ PPC::Runtime::ASM::b(.L_80465E84);
RUNTIME_PPC_JUMP_LABEL(.L_80465E30, 0x80465E30) //this is a jump label
/*80465E30 00462C30*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*80465E34 00462C34*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*80465E38 00462C38*/ PPC::Runtime::ASM::mr(context->r6, context->r10);
/*80465E3C 00462C3C*/ PPC::Runtime::ASM::mr(context->r8, context->r11);
/*80465E40 00462C40*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80465E44 00462C44*/ PPC::Runtime::ASM::bl(fn_804657C0);
/*80465E48 00462C48*/ PPC::Runtime::ASM::b(.L_80465E88);
RUNTIME_PPC_JUMP_LABEL(.L_80465E4C, 0x80465E4C) //this is a jump label
/*80465E4C 00462C4C*/ PPC::Runtime::ASM::mr(context->r3, context->r6);
/*80465E50 00462C50*/ PPC::Runtime::ASM::mr(context->r4, context->r8);
/*80465E54 00462C54*/ PPC::Runtime::ASM::mr(context->r5, context->r10);
/*80465E58 00462C58*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*80465E5C 00462C5C*/ PPC::Runtime::ASM::mr(context->r7, context->r11);
/*80465E60 00462C60*/ PPC::Runtime::ASM::bl(fn_80465AE0);
/*80465E64 00462C64*/ PPC::Runtime::ASM::b(.L_80465E88);
RUNTIME_PPC_JUMP_LABEL(.L_80465E68, 0x80465E68) //this is a jump label
/*80465E68 00462C68*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*80465E6C 00462C6C*/ PPC::Runtime::ASM::mr(context->r5, context->r8);
/*80465E70 00462C70*/ PPC::Runtime::ASM::mr(context->r6, context->r10);
/*80465E74 00462C74*/ PPC::Runtime::ASM::mr(context->r8, context->r11);
/*80465E78 00462C78*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80465E7C 00462C7C*/ PPC::Runtime::ASM::bl(fn_80465BC8);
/*80465E80 00462C80*/ PPC::Runtime::ASM::b(.L_80465E88);
RUNTIME_PPC_JUMP_LABEL(.L_80465E84, 0x80465E84) //this is a jump label
/*80465E84 00462C84*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80465E88, 0x80465E88) //this is a jump label
/*80465E88 00462C88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80465E8C, 0x80465E8C) //this is a jump label
/*80465E8C 00462C8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80465E90 00462C90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80465E94 00462C94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80465E98 00462C98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80465E9C 00462C9C*/ PPC::Runtime::ASM::blr();
}