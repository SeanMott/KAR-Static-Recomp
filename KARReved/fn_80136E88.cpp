//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80167940.hpp"



void fn_80136E88(PPC::Runtime::GCContext* context)
{
/*80136E88 00133C88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80136E8C 00133C8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136E90 00133C90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136E94 00133C94*/ PPC::Runtime::ASM::bl(fn_80167940);
/*80136E98 00133C98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136E9C 00133C9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136EA0 00133CA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80136EA4 00133CA4*/ PPC::Runtime::ASM::blr();
}