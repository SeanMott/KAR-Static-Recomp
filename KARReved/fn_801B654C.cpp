//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B5EE4.hpp"



void fn_801B654C(PPC::Runtime::GCContext* context)
{
/*801B654C 001B334C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6550 001B3350*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6554 001B3354*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6558 001B3358*/ PPC::Runtime::ASM::bl(fn_801B5EE4);
/*801B655C 001B335C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6560 001B3360*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6564 001B3364*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6568 001B3368*/ PPC::Runtime::ASM::blr();
}