//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801BE3A4(PPC::Runtime::GCContext* context)
{
/*801BE3A4 001BB1A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BE3A8 001BB1A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BE3AC 001BB1AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE3B0 001BB1B0*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801BE3B4 001BB1B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE3B8 001BB1B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BE3BC 001BB1BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BE3C0 001BB1C0*/ PPC::Runtime::ASM::blr();
}