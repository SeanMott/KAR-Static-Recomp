//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CC480.hpp"



void fn_801FA1C8(PPC::Runtime::GCContext* context)
{
/*801FA1C8 001F6FC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA1CC 001F6FCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA1D0 001F6FD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA1D4 001F6FD4*/ PPC::Runtime::ASM::bl(fn_801CC480);
/*801FA1D8 001F6FD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA1DC 001F6FDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA1E0 001F6FE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA1E4 001F6FE4*/ PPC::Runtime::ASM::blr();
}