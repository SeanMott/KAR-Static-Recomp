//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A04FC.hpp"



void fn_801C295C(PPC::Runtime::GCContext* context)
{
/*801C295C 001BF75C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C2960 001BF760*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C2964 001BF764*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2968 001BF768*/ PPC::Runtime::ASM::bl(fn_801A04FC);
/*801C296C 001BF76C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2970 001BF770*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C2974 001BF774*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C2978 001BF778*/ PPC::Runtime::ASM::blr();
}