//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019C63C.hpp"



void fn_801ADC78(PPC::Runtime::GCContext* context)
{
/*801ADC78 001AAA78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ADC7C 001AAA7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ADC80 001AAA80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADC84 001AAA84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r3));
/*801ADC88 001AAA88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801ADC8C 001AAA8C*/ PPC::Runtime::ASM::bne(.L_801ADC94);
/*801ADC90 001AAA90*/ PPC::Runtime::ASM::bl(fn_8019C63C);
RUNTIME_PPC_JUMP_LABEL(.L_801ADC94, 0x801ADC94) //this is a jump label
/*801ADC94 001AAA94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADC98 001AAA98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ADC9C 001AAA9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ADCA0 001AAAA0*/ PPC::Runtime::ASM::blr();
}