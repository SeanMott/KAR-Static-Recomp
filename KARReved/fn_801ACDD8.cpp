//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0180.hpp"



void fn_801ACDD8(PPC::Runtime::GCContext* context)
{
/*801ACDD8 001A9BD8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ACDDC 001A9BDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ACDE0 001A9BE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACDE4 001A9BE4*/ PPC::Runtime::ASM::bl(fn_801A0180);
/*801ACDE8 001A9BE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACDEC 001A9BEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ACDF0 001A9BF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ACDF4 001A9BF4*/ PPC::Runtime::ASM::blr();
}