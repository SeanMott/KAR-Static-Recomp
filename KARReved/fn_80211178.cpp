//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80203458.hpp"



void fn_80211178(PPC::Runtime::GCContext* context)
{
/*80211178 0020DF78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021117C 0020DF7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80211180 0020DF80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211184 0020DF84*/ PPC::Runtime::ASM::bl(fn_80203458);
/*80211188 0020DF88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021118C 0020DF8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80211190 0020DF90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80211194 0020DF94*/ PPC::Runtime::ASM::blr();
}