//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BEAB4.hpp"



void fn_801BECC4(PPC::Runtime::GCContext* context)
{
/*801BECC4 001BBAC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BECC8 001BBAC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BECCC 001BBACC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BECD0 001BBAD0*/ PPC::Runtime::ASM::bl(fn_801BEAB4);
/*801BECD4 001BBAD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BECD8 001BBAD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BECDC 001BBADC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BECE0 001BBAE0*/ PPC::Runtime::ASM::blr();
}