//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194CA4.hpp"



void fn_801E0A44(PPC::Runtime::GCContext* context)
{
/*801E0A44 001DD844*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E0A48 001DD848*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E0A4C 001DD84C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0A50 001DD850*/ PPC::Runtime::ASM::bl(fn_80194CA4);
/*801E0A54 001DD854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0A58 001DD858*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E0A5C 001DD85C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E0A60 001DD860*/ PPC::Runtime::ASM::blr();
}