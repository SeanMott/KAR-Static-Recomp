//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801BBB78(PPC::Runtime::GCContext* context)
{
/*801BBB78 001B8978*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BBB7C 001B897C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BBB80 001B8980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BBB84 001B8984*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801BBB88 001B8988*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BBB8C 001B898C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BBB90 001B8990*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BBB94 001B8994*/ PPC::Runtime::ASM::blr();
}