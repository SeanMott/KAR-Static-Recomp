//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"
#include "fn_checkIfGettingOffBike.hpp"



void fn_801B6DC0(PPC::Runtime::GCContext* context)
{
/*801B6DC0 001B3BC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6DC4 001B3BC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6DC8 001B3BC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6DCC 001B3BCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B6DD0 001B3BD0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B6DD4 001B3BD4*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801B6DD8 001B3BD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B6DDC 001B3BDC*/ PPC::Runtime::ASM::bl(fn_checkIfGettingOffBike);
/*801B6DE0 001B3BE0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B6DE4 001B3BE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6DE8 001B3BE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B6DEC 001B3BEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6DF0 001B3BF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6DF4 001B3BF4*/ PPC::Runtime::ASM::blr();
}