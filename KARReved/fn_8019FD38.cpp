//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C14.hpp"



void fn_8019FD38(PPC::Runtime::GCContext* context)
{
/*8019FD38 0019CB38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019FD3C 0019CB3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019FD40 0019CB40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FD44 0019CB44*/ PPC::Runtime::ASM::bl(fn_80199C14);
/*8019FD48 0019CB48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FD4C 0019CB4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019FD50 0019CB50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019FD54 0019CB54*/ PPC::Runtime::ASM::blr();
}