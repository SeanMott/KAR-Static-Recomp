//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_grSwitchLogic.hpp"



void fn_800D29DC(PPC::Runtime::GCContext* context)
{
/*800D29DC 000CF7DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D29E0 000CF7E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D29E4 000CF7E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D29E8 000CF7E8*/ PPC::Runtime::ASM::bl(fn_grSwitchLogic);
/*800D29EC 000CF7EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D29F0 000CF7F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D29F4 000CF7F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D29F8 000CF7F8*/ PPC::Runtime::ASM::blr();
}