//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80211444.hpp"
#include "fn_80211734.hpp"



void fn_8021131C(PPC::Runtime::GCContext* context)
{
/*8021131C 0020E11C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80211320 0020E120*/ PPC::Runtime::ASM::mflr(context->r0);
/*80211324 0020E124*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211328 0020E128*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r3));
/*8021132C 0020E12C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80211330 0020E130*/ PPC::Runtime::ASM::bne(.L_8021133C);
/*80211334 0020E134*/ PPC::Runtime::ASM::bl(fn_80211444);
/*80211338 0020E138*/ PPC::Runtime::ASM::b(.L_80211340);
RUNTIME_PPC_JUMP_LABEL(.L_8021133C, 0x8021133C) //this is a jump label
/*8021133C 0020E13C*/ PPC::Runtime::ASM::bl(fn_80211734);
RUNTIME_PPC_JUMP_LABEL(.L_80211340, 0x80211340) //this is a jump label
/*80211340 0020E140*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211344 0020E144*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80211348 0020E148*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021134C 0020E14C*/ PPC::Runtime::ASM::blr();
}