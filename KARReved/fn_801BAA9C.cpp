//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B9570.hpp"



void fn_801BAA9C(PPC::Runtime::GCContext* context)
{
/*801BAA9C 001B789C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BAAA0 001B78A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BAAA4 001B78A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAAA8 001B78A8*/ PPC::Runtime::ASM::bl(fn_801B9570);
/*801BAAAC 001B78AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAAB0 001B78B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BAAB4 001B78B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BAAB8 001B78B8*/ PPC::Runtime::ASM::blr();
}