//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016F41C.hpp"



void fn_801377C8(PPC::Runtime::GCContext* context)
{
/*801377C8 001345C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801377CC 001345CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801377D0 001345D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801377D4 001345D4*/ PPC::Runtime::ASM::bl(fn_8016F41C);
/*801377D8 001345D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801377DC 001345DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801377E0 001345E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801377E4 001345E4*/ PPC::Runtime::ASM::blr();
}