//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CF1B8.hpp"



void fn_801EF7A4(PPC::Runtime::GCContext* context)
{
/*801EF7A4 001EC5A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF7A8 001EC5A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF7AC 001EC5AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF7B0 001EC5B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r3));
/*801EF7B4 001EC5B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r4));
/*801EF7B8 001EC5B8*/ PPC::Runtime::ASM::bl(fn_801CF1B8);
/*801EF7BC 001EC5BC*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*801EF7C0 001EC5C0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*801EF7C4 001EC5C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF7C8 001EC5C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF7CC 001EC5CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF7D0 001EC5D0*/ PPC::Runtime::ASM::blr();
}