//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A47E8.hpp"



void fn_801A4B50(PPC::Runtime::GCContext* context)
{
/*801A4B50 001A1950*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A4B54 001A1954*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A4B58 001A1958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A4B5C 001A195C*/ PPC::Runtime::ASM::bl(fn_801A47E8);
/*801A4B60 001A1960*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A4B64 001A1964*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A4B68 001A1968*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A4B6C 001A196C*/ PPC::Runtime::ASM::blr();
}