//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193830.hpp"



void fn_801A04DC(PPC::Runtime::GCContext* context)
{
/*801A04DC 0019D2DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A04E0 0019D2E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A04E4 0019D2E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A04E8 0019D2E8*/ PPC::Runtime::ASM::bl(fn_80193830);
/*801A04EC 0019D2EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A04F0 0019D2F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A04F4 0019D2F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A04F8 0019D2F8*/ PPC::Runtime::ASM::blr();
}