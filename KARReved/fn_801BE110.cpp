//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C8410.hpp"
#include "fn_801C8404.hpp"
#include "fn_8019BFB4.hpp"
#include "fn_8019BFB4.hpp"



void fn_801BE110(PPC::Runtime::GCContext* context)
{
/*801BE110 001BAF10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801BE114 001BAF14*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BE118 001BAF18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801BE11C 001BAF1C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801BE120 001BAF20*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801BE124 001BAF24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BE128 001BAF28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r3));
/*801BE12C 001BAF2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/* 801BE130 001BAF30  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801BE134 001BAF34*/ PPC::Runtime::ASM::beq(.L_801BE1A4);
/*801BE138 001BAF38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801BE13C 001BAF3C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801BE140 001BAF40*/ PPC::Runtime::ASM::beq(.L_801BE1A4);
/*801BE144 001BAF44*/ PPC::Runtime::ASM::bl(fn_801C8410);
/*801BE148 001BAF48*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801BE14C 001BAF4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801BE150 001BAF50*/ PPC::Runtime::ASM::bl(fn_801C8404);
/*801BE154 001BAF54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801BE158 001BAF58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801BE15C 001BAF5C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801BE160 001BAF60*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801BE164 001BAF64*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801BE168 001BAF68*/ PPC::Runtime::ASM::bne(.L_801BE180);
/*801BE16C 001BAF6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BE170 001BAF70*/ PPC::Runtime::ASM::li(context->r4, 0x2f);
/*801BE174 001BAF74*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BE178 001BAF78*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*801BE17C 001BAF7C*/ PPC::Runtime::ASM::b(.L_801BE1A4);
RUNTIME_PPC_JUMP_LABEL(.L_801BE180, 0x801BE180) //this is a jump label
/*801BE180 001BAF80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801BE184 001BAF84*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801BE188 001BAF88*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801BE18C 001BAF8C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801BE190 001BAF90*/ PPC::Runtime::ASM::bne(.L_801BE1A4);
/*801BE194 001BAF94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BE198 001BAF98*/ PPC::Runtime::ASM::li(context->r4, 0x2e);
/*801BE19C 001BAF9C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BE1A0 001BAFA0*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
RUNTIME_PPC_JUMP_LABEL(.L_801BE1A4, 0x801BE1A4) //this is a jump label
/*801BE1A4 001BAFA4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801BE1A8 001BAFA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801BE1AC 001BAFAC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801BE1B0 001BAFB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BE1B4 001BAFB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BE1B8 001BAFB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801BE1BC 001BAFBC*/ PPC::Runtime::ASM::blr();
}