//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022C568.hpp"



void fn_801FFF84(PPC::Runtime::GCContext* context)
{
/*801FFF84 001FCD84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FFF88 001FCD88*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FFF8C 001FCD8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FFF90 001FCD90*/ PPC::Runtime::ASM::bl(fn_8022C568);
/*801FFF94 001FCD94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FFF98 001FCD98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FFF9C 001FCD9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FFFA0 001FCDA0*/ PPC::Runtime::ASM::blr();
}