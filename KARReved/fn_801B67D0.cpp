//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B6264.hpp"



void fn_801B67D0(PPC::Runtime::GCContext* context)
{
/*801B67D0 001B35D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B67D4 001B35D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B67D8 001B35D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B67DC 001B35DC*/ PPC::Runtime::ASM::bl(fn_801B6264);
/*801B67E0 001B35E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B67E4 001B35E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B67E8 001B35E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B67EC 001B35EC*/ PPC::Runtime::ASM::blr();
}