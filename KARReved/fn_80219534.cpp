//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80219674.hpp"



void fn_80219534(PPC::Runtime::GCContext* context)
{
/*80219534 00216334*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80219538 00216338*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021953C 0021633C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80219540 00216340*/ PPC::Runtime::ASM::bl(fn_80219674);
/*80219544 00216344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80219548 00216348*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021954C 0021634C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80219550 00216350*/ PPC::Runtime::ASM::blr();
}