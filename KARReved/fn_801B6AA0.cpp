//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B67F0.hpp"



void fn_801B6AA0(PPC::Runtime::GCContext* context)
{
/*801B6AA0 001B38A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6AA4 001B38A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6AA8 001B38A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6AAC 001B38AC*/ PPC::Runtime::ASM::bl(fn_801B67F0);
/*801B6AB0 001B38B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B6AB4 001B38B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6AB8 001B38B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6ABC 001B38BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6AC0 001B38C0*/ PPC::Runtime::ASM::blr();
}