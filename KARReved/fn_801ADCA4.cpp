//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC80.hpp"



void fn_801ADCA4(PPC::Runtime::GCContext* context)
{
/*801ADCA4 001AAAA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ADCA8 001AAAA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ADCAC 001AAAAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADCB0 001AAAB0*/ PPC::Runtime::ASM::bl(fn_8019FC80);
/*801ADCB4 001AAAB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADCB8 001AAAB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ADCBC 001AAABC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ADCC0 001AAAC0*/ PPC::Runtime::ASM::blr();
}