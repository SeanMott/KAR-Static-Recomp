//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_sndAuxCallbackPrepareDelay.hpp"



void fn_801B7C4C(PPC::Runtime::GCContext* context)
{
/*801B7C4C 001B4A4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B7C50 001B4A50*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B7C54 001B4A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7C58 001B4A58*/ PPC::Runtime::ASM::bl(fn_sndAuxCallbackPrepareDelay);
/*801B7C5C 001B4A5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7C60 001B4A60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B7C64 001B4A64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7C68 001B4A68*/ PPC::Runtime::ASM::blr();
}