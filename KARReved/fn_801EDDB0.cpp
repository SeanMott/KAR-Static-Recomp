//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CDB8C.hpp"



void fn_801EDDB0(PPC::Runtime::GCContext* context)
{
/*801EDDB0 001EABB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EDDB4 001EABB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EDDB8 001EABB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EDDBC 001EABBC*/ PPC::Runtime::ASM::bl(fn_801CDB8C);
/*801EDDC0 001EABC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EDDC4 001EABC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EDDC8 001EABC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EDDCC 001EABCC*/ PPC::Runtime::ASM::blr();
}