//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A5F2C.hpp"



void fn_801AFB90(PPC::Runtime::GCContext* context)
{
/*801AFB90 001AC990*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AFB94 001AC994*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AFB98 001AC998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AFB9C 001AC99C*/ PPC::Runtime::ASM::bl(fn_801A5F2C);
/*801AFBA0 001AC9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AFBA4 001AC9A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AFBA8 001AC9A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AFBAC 001AC9AC*/ PPC::Runtime::ASM::blr();
}