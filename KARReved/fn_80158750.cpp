//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"
#include "fn_80138AB0.hpp"



void fn_80158750(PPC::Runtime::GCContext* context)
{
/*80158750 00155550*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80158754 00155554*/ PPC::Runtime::ASM::mflr(context->r0);
/*80158758 00155558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015875C 0015555C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80158760 00155560*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80158764 00155564*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80158768 00155568*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8015876C 0015556C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80158770 00155570*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80158774 00155574*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74c, context->r3));
/*80158778 00155578*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015877C 0015557C*/ PPC::Runtime::ASM::beq(.L_801587A0);
/*80158780 00155580*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80158784 00155584*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80158788 00155588*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015878C 0015558C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80158790 00155590*/ PPC::Runtime::ASM::bne(.L_8015879C);
/*80158794 00155594*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*80158798 00155598*/ PPC::Runtime::ASM::b(.L_801587A0);
RUNTIME_PPC_JUMP_LABEL(.L_8015879C, 0x8015879C) //this is a jump label
/*8015879C 0015559C*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_801587A0, 0x801587A0) //this is a jump label
/*801587A0 001555A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801587A4 001555A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801587A8 001555A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801587AC 001555AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801587B0 001555B0*/ PPC::Runtime::ASM::blr();
}