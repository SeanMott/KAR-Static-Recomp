//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_80211E98(PPC::Runtime::GCContext* context)
{
/*80211E98 0020EC98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80211E9C 0020EC9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80211EA0 0020ECA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211EA4 0020ECA4*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*80211EA8 0020ECA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211EAC 0020ECAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80211EB0 0020ECB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80211EB4 0020ECB4*/ PPC::Runtime::ASM::blr();
}