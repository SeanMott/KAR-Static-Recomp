//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A20C4.hpp"



void fn_801B78AC(PPC::Runtime::GCContext* context)
{
/*801B78AC 001B46AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B78B0 001B46B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B78B4 001B46B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B78B8 001B46B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801B78BC 001B46BC*/ PPC::Runtime::ASM::bl(fn_801A20C4);
/*801B78C0 001B46C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B78C4 001B46C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B78C8 001B46C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B78CC 001B46CC*/ PPC::Runtime::ASM::blr();
}