//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"



void fn_801B5D2C(PPC::Runtime::GCContext* context)
{
/*801B5D2C 001B2B2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B5D30 001B2B30*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B5D34 001B2B34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B5D38 001B2B38*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801B5D3C 001B2B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B5D40 001B2B40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B5D44 001B2B44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B5D48 001B2B48*/ PPC::Runtime::ASM::blr();
}