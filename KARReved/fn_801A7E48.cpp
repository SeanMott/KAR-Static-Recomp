//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019C95C.hpp"



void fn_801A7E48(PPC::Runtime::GCContext* context)
{
/*801A7E48 001A4C48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A7E4C 001A4C4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A7E50 001A4C50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A7E54 001A4C54*/ PPC::Runtime::ASM::bl(fn_8019C95C);
/*801A7E58 001A4C58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A7E5C 001A4C5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A7E60 001A4C60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A7E64 001A4C64*/ PPC::Runtime::ASM::blr();
}