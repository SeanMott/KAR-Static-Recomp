//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_sndAuxCallbackPrepareDelay.hpp"



void fn_801B7DCC(PPC::Runtime::GCContext* context)
{
/*801B7DCC 001B4BCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B7DD0 001B4BD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B7DD4 001B4BD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7DD8 001B4BD8*/ PPC::Runtime::ASM::bl(fn_sndAuxCallbackPrepareDelay);
/*801B7DDC 001B4BDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7DE0 001B4BE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B7DE4 001B4BE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7DE8 001B4BE8*/ PPC::Runtime::ASM::blr();
}