//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"



void fn_801AEB08(PPC::Runtime::GCContext* context)
{
/*801AEB08 001AB908*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AEB0C 001AB90C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AEB10 001AB910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AEB14 001AB914*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801AEB18 001AB918*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AEB1C 001AB91C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AEB20 001AB920*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AEB24 001AB924*/ PPC::Runtime::ASM::blr();
}