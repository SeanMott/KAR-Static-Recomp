//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"



void fn_801B82B0(PPC::Runtime::GCContext* context)
{
/*801B82B0 001B50B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B82B4 001B50B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B82B8 001B50B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B82BC 001B50BC*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801B82C0 001B50C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B82C4 001B50C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B82C8 001B50C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B82CC 001B50CC*/ PPC::Runtime::ASM::blr();
}