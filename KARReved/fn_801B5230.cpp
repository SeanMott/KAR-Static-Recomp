//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AB390.hpp"



void fn_801B5230(PPC::Runtime::GCContext* context)
{
/*801B5230 001B2030*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B5234 001B2034*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B5238 001B2038*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B523C 001B203C*/ PPC::Runtime::ASM::bl(fn_801AB390);
/*801B5240 001B2040*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B5244 001B2044*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B5248 001B2048*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B524C 001B204C*/ PPC::Runtime::ASM::blr();
}