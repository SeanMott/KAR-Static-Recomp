//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AAC80.hpp"



void fn_801AABF8(PPC::Runtime::GCContext* context)
{
/*801AABF8 001A79F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AABFC 001A79FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AAC00 001A7A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AAC04 001A7A04*/ PPC::Runtime::ASM::bl(fn_801AAC80);
/*801AAC08 001A7A08*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AAC0C 001A7A0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AAC10 001A7A10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AAC14 001A7A14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AAC18 001A7A18*/ PPC::Runtime::ASM::blr();
}