//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8026BBE0.hpp"
#include "fn_802716E8.hpp"
#include "fn_8026BF30.hpp"
#include "fn_80275CBC.hpp"



void fn_8026BEEC(PPC::Runtime::GCContext* context)
{
/*8026BEEC 00268CEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8026BEF0 00268CF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026BEF4 00268CF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026BEF8 00268CF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026BEFC 00268CFC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8026BF00 00268D00*/ PPC::Runtime::ASM::bl(fn_8026BBE0);
/*8026BF04 00268D04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8026BF08 00268D08*/ PPC::Runtime::ASM::bl(fn_802716E8);
/*8026BF0C 00268D0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8026BF10 00268D10*/ PPC::Runtime::ASM::bl(fn_8026BF30);
/*8026BF14 00268D14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8026BF18 00268D18*/ PPC::Runtime::ASM::bl(fn_80275CBC);
/*8026BF1C 00268D1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026BF20 00268D20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026BF24 00268D24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8026BF28 00268D28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8026BF2C 00268D2C*/ PPC::Runtime::ASM::blr();
}