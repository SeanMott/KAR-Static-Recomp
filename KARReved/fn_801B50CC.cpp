//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B4C98.hpp"



void fn_801B50CC(PPC::Runtime::GCContext* context)
{
/*801B50CC 001B1ECC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B50D0 001B1ED0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B50D4 001B1ED4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B50D8 001B1ED8*/ PPC::Runtime::ASM::bl(fn_801B4C98);
/*801B50DC 001B1EDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B50E0 001B1EE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B50E4 001B1EE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B50E8 001B1EE8*/ PPC::Runtime::ASM::blr();
}