//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B7A14.hpp"



void fn_801B7D6C(PPC::Runtime::GCContext* context)
{
/*801B7D6C 001B4B6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B7D70 001B4B70*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B7D74 001B4B74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7D78 001B4B78*/ PPC::Runtime::ASM::bl(fn_801B7A14);
/*801B7D7C 001B4B7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7D80 001B4B80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B7D84 001B4B84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7D88 001B4B88*/ PPC::Runtime::ASM::blr();
}