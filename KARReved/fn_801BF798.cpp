//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FEE0.hpp"



void fn_801BF798(PPC::Runtime::GCContext* context)
{
/*801BF798 001BC598*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF79C 001BC59C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF7A0 001BC5A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF7A4 001BC5A4*/ PPC::Runtime::ASM::bl(fn_8019FEE0);
/*801BF7A8 001BC5A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF7AC 001BC5AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF7B0 001BC5B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF7B4 001BC5B4*/ PPC::Runtime::ASM::blr();
}