//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"



void fn_801B2B48(PPC::Runtime::GCContext* context)
{
/*801B2B48 001AF948*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B2B4C 001AF94C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2B50 001AF950*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2B54 001AF954*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801B2B58 001AF958*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2B5C 001AF95C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2B60 001AF960*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B2B64 001AF964*/ PPC::Runtime::ASM::blr();
}