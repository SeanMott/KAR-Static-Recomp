//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F3B28.hpp"



void fn_801FED1C(PPC::Runtime::GCContext* context)
{
/*801FED1C 001FBB1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FED20 001FBB20*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FED24 001FBB24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FED28 001FBB28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FED2C 001FBB2C*/ PPC::Runtime::ASM::bl(fn_800F3B28);
/*801FED30 001FBB30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FED34 001FBB34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FED38 001FBB38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FED3C 001FBB3C*/ PPC::Runtime::ASM::blr();
}