//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800799BC.hpp"



void fn_801D6C2C(PPC::Runtime::GCContext* context)
{
/*801D6C2C 001D3A2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D6C30 001D3A30*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D6C34 001D3A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D6C38 001D3A38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r3));
/*801D6C3C 001D3A3C*/ PPC::Runtime::ASM::bl(fn_800799BC);
/*801D6C40 001D3A40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D6C44 001D3A44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D6C48 001D3A48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D6C4C 001D3A4C*/ PPC::Runtime::ASM::blr();
}