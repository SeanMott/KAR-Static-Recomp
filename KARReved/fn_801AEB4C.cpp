//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"



void fn_801AEB4C(PPC::Runtime::GCContext* context)
{
/*801AEB4C 001AB94C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AEB50 001AB950*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AEB54 001AB954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AEB58 001AB958*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801AEB5C 001AB95C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AEB60 001AB960*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AEB64 001AB964*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AEB68 001AB968*/ PPC::Runtime::ASM::blr();
}