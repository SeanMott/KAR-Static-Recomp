//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3BC.hpp"



void fn_801C4C48(PPC::Runtime::GCContext* context)
{
/*801C4C48 001C1A48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4C4C 001C1A4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4C50 001C1A50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4C54 001C1A54*/ PPC::Runtime::ASM::bl(fn_8019F3BC);
/*801C4C58 001C1A58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4C5C 001C1A5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C4C60 001C1A60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4C64 001C1A64*/ PPC::Runtime::ASM::blr();
}