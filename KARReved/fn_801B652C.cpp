//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B5EC4.hpp"



void fn_801B652C(PPC::Runtime::GCContext* context)
{
/*801B652C 001B332C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6530 001B3330*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6534 001B3334*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6538 001B3338*/ PPC::Runtime::ASM::bl(fn_801B5EC4);
/*801B653C 001B333C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6540 001B3340*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6544 001B3344*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6548 001B3348*/ PPC::Runtime::ASM::blr();
}