//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80453484.hpp"



void fn_80453440(PPC::Runtime::GCContext* context)
{
/*80453440 00450240*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80453444 00450244*/ PPC::Runtime::ASM::mflr(context->r0);
/*80453448 00450248*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045344C 0045024C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80453450 00450250*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80453454 00450254*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80453458 00450258*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*8045345C 0045025C*/ PPC::Runtime::ASM::bl(fn_80453484);
/*80453460 00450260*/ PPC::Runtime::ASM::cmpw(context->r31, context->r3);
/*80453464 00450264*/ PPC::Runtime::ASM::blt(.L_8045346C);
/*80453468 00450268*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8045346C, 0x8045346C) //this is a jump label
/*8045346C 0045026C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80453470 00450270*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453474 00450274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80453478 00450278*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045347C 0045027C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80453480 00450280*/ PPC::Runtime::ASM::blr();
}