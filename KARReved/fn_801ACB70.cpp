//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A008C.hpp"



void fn_801ACB70(PPC::Runtime::GCContext* context)
{
/*801ACB70 001A9970*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ACB74 001A9974*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ACB78 001A9978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACB7C 001A997C*/ PPC::Runtime::ASM::bl(fn_801A008C);
/*801ACB80 001A9980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACB84 001A9984*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ACB88 001A9988*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ACB8C 001A998C*/ PPC::Runtime::ASM::blr();
}