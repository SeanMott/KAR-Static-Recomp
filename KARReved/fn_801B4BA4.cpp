//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B4C08.hpp"
#include "fn_801B4CCC.hpp"



void fn_801B4BA4(PPC::Runtime::GCContext* context)
{
/*801B4BA4 001B19A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4BA8 001B19A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4BAC 001B19AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4BB0 001B19B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4BB4 001B19B4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801B4BB8 001B19B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B4BBC 001B19BC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801B4BC0 001B19C0*/ PPC::Runtime::ASM::bl(fn_801B4C08);
/*801B4BC4 001B19C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B4BC8 001B19C8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801B4BCC 001B19CC*/ PPC::Runtime::ASM::bl(fn_801B4CCC);
/*801B4BD0 001B19D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4BD4 001B19D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4BD8 001B19D8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B4BDC 001B19DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4BE0 001B19E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B4BE4 001B19E4*/ PPC::Runtime::ASM::blr();
}