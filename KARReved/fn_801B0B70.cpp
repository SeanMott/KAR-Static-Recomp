//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801B0B70(PPC::Runtime::GCContext* context)
{
/*801B0B70 001AD970*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B0B74 001AD974*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B0B78 001AD978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0B7C 001AD97C*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801B0B80 001AD980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0B84 001AD984*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B0B88 001AD988*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B0B8C 001AD98C*/ PPC::Runtime::ASM::blr();
}