//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC80.hpp"



void fn_801C42A4(PPC::Runtime::GCContext* context)
{
/*801C42A4 001C10A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C42A8 001C10A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C42AC 001C10AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C42B0 001C10B0*/ PPC::Runtime::ASM::bl(fn_8019FC80);
/*801C42B4 001C10B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C42B8 001C10B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C42BC 001C10BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C42C0 001C10C0*/ PPC::Runtime::ASM::blr();
}