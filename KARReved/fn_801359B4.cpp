//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015E1CC.hpp"



void fn_801359B4(PPC::Runtime::GCContext* context)
{
/*801359B4 001327B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801359B8 001327B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801359BC 001327BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801359C0 001327C0*/ PPC::Runtime::ASM::bl(fn_8015E1CC);
/*801359C4 001327C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801359C8 001327C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801359CC 001327CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801359D0 001327D0*/ PPC::Runtime::ASM::blr();
}