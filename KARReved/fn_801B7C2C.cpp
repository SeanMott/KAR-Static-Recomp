//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_sndAuxCallbackPrepareDelay.hpp"



void fn_801B7C2C(PPC::Runtime::GCContext* context)
{
/*801B7C2C 001B4A2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B7C30 001B4A30*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B7C34 001B4A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7C38 001B4A38*/ PPC::Runtime::ASM::bl(fn_sndAuxCallbackPrepareDelay);
/*801B7C3C 001B4A3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7C40 001B4A40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B7C44 001B4A44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7C48 001B4A48*/ PPC::Runtime::ASM::blr();
}