//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C088C.hpp"



void fn_801C09B0(PPC::Runtime::GCContext* context)
{
/*801C09B0 001BD7B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C09B4 001BD7B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C09B8 001BD7B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C09BC 001BD7BC*/ PPC::Runtime::ASM::bl(fn_801C088C);
/*801C09C0 001BD7C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C09C4 001BD7C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C09C8 001BD7C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C09CC 001BD7CC*/ PPC::Runtime::ASM::blr();
}