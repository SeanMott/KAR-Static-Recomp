//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AB390.hpp"



void fn_801B6E18(PPC::Runtime::GCContext* context)
{
/*801B6E18 001B3C18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6E1C 001B3C1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6E20 001B3C20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6E24 001B3C24*/ PPC::Runtime::ASM::bl(fn_801AB390);
/*801B6E28 001B3C28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6E2C 001B3C2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6E30 001B3C30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6E34 001B3C34*/ PPC::Runtime::ASM::blr();
}