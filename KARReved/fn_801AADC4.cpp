//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AAEF8.hpp"



void fn_801AADC4(PPC::Runtime::GCContext* context)
{
/*801AADC4 001A7BC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AADC8 001A7BC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AADCC 001A7BCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AADD0 001A7BD0*/ PPC::Runtime::ASM::bl(fn_801AAEF8);
/*801AADD4 001A7BD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AADD8 001A7BD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AADDC 001A7BDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AADE0 001A7BE0*/ PPC::Runtime::ASM::blr();
}