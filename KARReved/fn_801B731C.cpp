//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AB390.hpp"



void fn_801B731C(PPC::Runtime::GCContext* context)
{
/*801B731C 001B411C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B7320 001B4120*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B7324 001B4124*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7328 001B4128*/ PPC::Runtime::ASM::bl(fn_801AB390);
/*801B732C 001B412C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7330 001B4130*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B7334 001B4134*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7338 001B4138*/ PPC::Runtime::ASM::blr();
}