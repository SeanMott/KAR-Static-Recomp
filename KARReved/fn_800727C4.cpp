//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80073984.hpp"



void fn_800727C4(PPC::Runtime::GCContext* context)
{
/*800727C4 0006F5C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800727C8 0006F5C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800727CC 0006F5CC*/ PPC::Runtime::ASM::li(context->r3, 0x7d2);
/*800727D0 0006F5D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800727D4 0006F5D4*/ PPC::Runtime::ASM::bl(fn_80073984);
/*800727D8 0006F5D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800727DC 0006F5DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800727E0 0006F5E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800727E4 0006F5E4*/ PPC::Runtime::ASM::blr();
}