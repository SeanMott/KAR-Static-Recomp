//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"



void fn_801B37B8(PPC::Runtime::GCContext* context)
{
/*801B37B8 001B05B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B37BC 001B05BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B37C0 001B05C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B37C4 001B05C4*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801B37C8 001B05C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B37CC 001B05CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B37D0 001B05D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B37D4 001B05D4*/ PPC::Runtime::ASM::blr();
}