//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801A12BC(PPC::Runtime::GCContext* context)
{
/*801A12BC 0019E0BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A12C0 0019E0C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A12C4 0019E0C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A12C8 0019E0C8*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801A12CC 0019E0CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A12D0 0019E0D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A12D4 0019E0D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A12D8 0019E0D8*/ PPC::Runtime::ASM::blr();
}