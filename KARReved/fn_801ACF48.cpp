//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A020C.hpp"



void fn_801ACF48(PPC::Runtime::GCContext* context)
{
/*801ACF48 001A9D48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ACF4C 001A9D4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ACF50 001A9D50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACF54 001A9D54*/ PPC::Runtime::ASM::bl(fn_801A020C);
/*801ACF58 001A9D58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACF5C 001A9D5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ACF60 001A9D60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ACF64 001A9D64*/ PPC::Runtime::ASM::blr();
}