//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0300.hpp"
#include "fn_801BF0F4.hpp"



void fn_chargeMain_Dedede(PPC::Runtime::GCContext* context)
{
/*801BF008 001BBE08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF00C 001BBE0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF010 001BBE10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF014 001BBE14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF018 001BBE18*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BF01C 001BBE1C*/ PPC::Runtime::ASM::bl(fn_801A0300);
/*801BF020 001BBE20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF024 001BBE24*/ PPC::Runtime::ASM::bl(fn_801BF0F4);
/*801BF028 001BBE28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BF02C 001BBE2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF030 001BBE30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF034 001BBE34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF038 001BBE38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF03C 001BBE3C*/ PPC::Runtime::ASM::blr();
}