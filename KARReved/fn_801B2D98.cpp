//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B2F48.hpp"



void fn_801B2D98(PPC::Runtime::GCContext* context)
{
/*801B2D98 001AFB98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B2D9C 001AFB9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2DA0 001AFBA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2DA4 001AFBA4*/ PPC::Runtime::ASM::bl(fn_801B2F48);
/*801B2DA8 001AFBA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2DAC 001AFBAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2DB0 001AFBB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B2DB4 001AFBB4*/ PPC::Runtime::ASM::blr();
}