//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"



void fn_801B4674(PPC::Runtime::GCContext* context)
{
/*801B4674 001B1474*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4678 001B1478*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B467C 001B147C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4680 001B1480*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801B4684 001B1484*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4688 001B1488*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B468C 001B148C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B4690 001B1490*/ PPC::Runtime::ASM::blr();
}