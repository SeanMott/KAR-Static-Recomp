//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B2F88.hpp"



void fn_801B2DD8(PPC::Runtime::GCContext* context)
{
/*801B2DD8 001AFBD8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B2DDC 001AFBDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2DE0 001AFBE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2DE4 001AFBE4*/ PPC::Runtime::ASM::bl(fn_801B2F88);
/*801B2DE8 001AFBE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2DEC 001AFBEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2DF0 001AFBF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B2DF4 001AFBF4*/ PPC::Runtime::ASM::blr();
}