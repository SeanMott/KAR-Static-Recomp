//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015CB6C.hpp"



void fn_801356B4(PPC::Runtime::GCContext* context)
{
/*801356B4 001324B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801356B8 001324B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801356BC 001324BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801356C0 001324C0*/ PPC::Runtime::ASM::bl(fn_8015CB6C);
/*801356C4 001324C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801356C8 001324C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801356CC 001324CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801356D0 001324D0*/ PPC::Runtime::ASM::blr();
}