//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193830.hpp"



void fn_801A00B0(PPC::Runtime::GCContext* context)
{
/*801A00B0 0019CEB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A00B4 0019CEB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A00B8 0019CEB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A00BC 0019CEBC*/ PPC::Runtime::ASM::bl(fn_80193830);
/*801A00C0 0019CEC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A00C4 0019CEC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A00C8 0019CEC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A00CC 0019CECC*/ PPC::Runtime::ASM::blr();
}