//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FA594.hpp"



void fn_800D2770(PPC::Runtime::GCContext* context)
{
/*800D2770 000CF570*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D2774 000CF574*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D2778 000CF578*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D277C 000CF57C*/ PPC::Runtime::ASM::bl(fn_800FA594);
/*800D2780 000CF580*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D2784 000CF584*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D2788 000CF588*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D278C 000CF58C*/ PPC::Runtime::ASM::blr();
}