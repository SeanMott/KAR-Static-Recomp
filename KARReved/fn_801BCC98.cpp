//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801BCC98(PPC::Runtime::GCContext* context)
{
/*801BCC98 001B9A98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BCC9C 001B9A9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BCCA0 001B9AA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BCCA4 001B9AA4*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801BCCA8 001B9AA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BCCAC 001B9AAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BCCB0 001B9AB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BCCB4 001B9AB4*/ PPC::Runtime::ASM::blr();
}