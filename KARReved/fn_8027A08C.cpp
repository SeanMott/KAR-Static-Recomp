//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80277C84.hpp"



void fn_8027A08C(PPC::Runtime::GCContext* context)
{
/*8027A08C 00276E8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027A090 00276E90*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027A094 00276E94*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8027A098 00276E98*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8027A09C 00276E9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027A0A0 00276EA0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027A0A4 00276EA4*/ PPC::Runtime::ASM::bl(fn_80277C84);
/*8027A0A8 00276EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027A0AC 00276EAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027A0B0 00276EB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027A0B4 00276EB4*/ PPC::Runtime::ASM::blr();
}