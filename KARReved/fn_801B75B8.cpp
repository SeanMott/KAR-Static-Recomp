//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"
#include "fn_checkIfGettingOffBike.hpp"



void fn_801B75B8(PPC::Runtime::GCContext* context)
{
/*801B75B8 001B43B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B75BC 001B43BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B75C0 001B43C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B75C4 001B43C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B75C8 001B43C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B75CC 001B43CC*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801B75D0 001B43D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B75D4 001B43D4*/ PPC::Runtime::ASM::bl(fn_checkIfGettingOffBike);
/*801B75D8 001B43D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B75DC 001B43DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B75E0 001B43E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B75E4 001B43E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B75E8 001B43E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B75EC 001B43EC*/ PPC::Runtime::ASM::blr();
}