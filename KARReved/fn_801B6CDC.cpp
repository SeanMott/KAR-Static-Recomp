//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B6FB0.hpp"



void fn_801B6CDC(PPC::Runtime::GCContext* context)
{
/*801B6CDC 001B3ADC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6CE0 001B3AE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6CE4 001B3AE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6CE8 001B3AE8*/ PPC::Runtime::ASM::bl(fn_801B6FB0);
/*801B6CEC 001B3AEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6CF0 001B3AF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6CF4 001B3AF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6CF8 001B3AF8*/ PPC::Runtime::ASM::blr();
}