//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"



void fn_801AD3EC(PPC::Runtime::GCContext* context)
{
/*801AD3EC 001AA1EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AD3F0 001AA1F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AD3F4 001AA1F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AD3F8 001AA1F8*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801AD3FC 001AA1FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AD400 001AA200*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AD404 001AA204*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AD408 001AA208*/ PPC::Runtime::ASM::blr();
}