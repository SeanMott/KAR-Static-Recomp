//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80287AAC(PPC::Runtime::GCContext* context)
{
/*80287AAC 002848AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80287AB0 002848B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80287AB4 002848B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287AB8 002848B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287ABC 002848BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80287AC0 002848C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287AC4 002848C4*/ PPC::Runtime::ASM::bctrl();
/*80287AC8 002848C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287ACC 002848CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80287AD0 002848D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80287AD4 002848D4*/ PPC::Runtime::ASM::blr();
}