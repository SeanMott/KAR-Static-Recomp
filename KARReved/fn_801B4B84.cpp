//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC80.hpp"



void fn_801B4B84(PPC::Runtime::GCContext* context)
{
/*801B4B84 001B1984*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4B88 001B1988*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4B8C 001B198C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4B90 001B1990*/ PPC::Runtime::ASM::bl(fn_8019FC80);
/*801B4B94 001B1994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4B98 001B1998*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4B9C 001B199C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B4BA0 001B19A0*/ PPC::Runtime::ASM::blr();
}