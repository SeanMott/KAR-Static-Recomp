//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803955BC.hpp"



void fn_8039558C(PPC::Runtime::GCContext* context)
{
/*8039558C 0039238C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80395590 00392390*/ PPC::Runtime::ASM::mflr(context->r0);
/*80395594 00392394*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80395598 00392398*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039559C 0039239C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803955A0 003923A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803955A4 003923A4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803955A8 003923A8*/ PPC::Runtime::ASM::bl(fn_803955BC);
/*803955AC 003923AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803955B0 003923B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803955B4 003923B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803955B8 003923B8*/ PPC::Runtime::ASM::blr();
}