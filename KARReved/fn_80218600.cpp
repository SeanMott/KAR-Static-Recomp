//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802186AC.hpp"



void fn_80218600(PPC::Runtime::GCContext* context)
{
/*80218600 00215400*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80218604 00215404*/ PPC::Runtime::ASM::mflr(context->r0);
/*80218608 00215408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021860C 0021540C*/ PPC::Runtime::ASM::bl(fn_802186AC);
/*80218610 00215410*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218614 00215414*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80218618 00215418*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021861C 0021541C*/ PPC::Runtime::ASM::blr();
}