//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"



void fn_801AF534(PPC::Runtime::GCContext* context)
{
/*801AF534 001AC334*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AF538 001AC338*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AF53C 001AC33C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF540 001AC340*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801AF544 001AC344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AF548 001AC348*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AF54C 001AC34C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AF550 001AC350*/ PPC::Runtime::ASM::blr();
}