//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3BC.hpp"



void fn_801C1054(PPC::Runtime::GCContext* context)
{
/*801C1054 001BDE54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1058 001BDE58*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C105C 001BDE5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1060 001BDE60*/ PPC::Runtime::ASM::bl(fn_8019F3BC);
/*801C1064 001BDE64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1068 001BDE68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C106C 001BDE6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1070 001BDE70*/ PPC::Runtime::ASM::blr();
}