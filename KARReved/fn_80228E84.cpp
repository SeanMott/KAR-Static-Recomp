//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80229E64.hpp"



void fn_80228E84(PPC::Runtime::GCContext* context)
{
/*80228E84 00225C84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80228E88 00225C88*/ PPC::Runtime::ASM::mflr(context->r0);
/*80228E8C 00225C8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80228E90 00225C90*/ PPC::Runtime::ASM::bl(fn_80229E64);
/*80228E94 00225C94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80228E98 00225C98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80228E9C 00225C9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80228EA0 00225CA0*/ PPC::Runtime::ASM::blr();
}