//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800444F8.hpp"



void fn_80045A6C(PPC::Runtime::GCContext* context)
{
/*80045A6C 0004286C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80045A70 00042870*/ PPC::Runtime::ASM::mflr(context->r0);
/*80045A74 00042874*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80045A78 00042878*/ PPC::Runtime::ASM::bl(fn_800444F8);
/*80045A7C 0004287C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80045A80 00042880*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80045A84 00042884*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80045A88 00042888*/ PPC::Runtime::ASM::blr();
}