//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B79F4.hpp"



void fn_801B7D4C(PPC::Runtime::GCContext* context)
{
/*801B7D4C 001B4B4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B7D50 001B4B50*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B7D54 001B4B54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7D58 001B4B58*/ PPC::Runtime::ASM::bl(fn_801B79F4);
/*801B7D5C 001B4B5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7D60 001B4B60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B7D64 001B4B64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7D68 001B4B68*/ PPC::Runtime::ASM::blr();
}