//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B798(PPC::Runtime::GCContext* context)
{
/*8000B798 00008598*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B79C 0000859C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B7A0 000085A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B7A4 000085A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B7A8 000085A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000B7AC 000085AC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B7B0 000085B0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8000B7B4 000085B4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8000B7B8 000085B8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8000B7BC 000085BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc14, context->r3));
/*8000B7C0 000085C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B7C4 000085C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B7C8 000085C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B7CC 000085CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B7D0 000085D0*/ PPC::Runtime::ASM::blr();
}