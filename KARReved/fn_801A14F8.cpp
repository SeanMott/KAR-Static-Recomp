//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A1650.hpp"



void fn_801A14F8(PPC::Runtime::GCContext* context)
{
/*801A14F8 0019E2F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A14FC 0019E2FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A1500 0019E300*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A1504 0019E304*/ PPC::Runtime::ASM::bl(fn_801A1650);
/*801A1508 0019E308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A150C 0019E30C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A1510 0019E310*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A1514 0019E314*/ PPC::Runtime::ASM::blr();
}