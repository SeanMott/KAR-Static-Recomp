//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BB350.hpp"
#include "fn_AS_Dash.hpp"



void fn_801BB080(PPC::Runtime::GCContext* context)
{
/*801BB080 001B7E80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BB084 001B7E84*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BB088 001B7E88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB08C 001B7E8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BB090 001B7E90*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BB094 001B7E94*/ PPC::Runtime::ASM::bl(fn_801BB350);
/*801BB098 001B7E98*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*801BB09C 001B7E9C*/ PPC::Runtime::ASM::bne(.L_801BB0B4);
/*801BB0A0 001B7EA0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r31));
/*801BB0A4 001B7EA4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BB0A8 001B7EA8*/ PPC::Runtime::ASM::bl(fn_AS_Dash);
/*801BB0AC 001B7EAC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BB0B0 001B7EB0*/ PPC::Runtime::ASM::b(.L_801BB0B8);
RUNTIME_PPC_JUMP_LABEL(.L_801BB0B4, 0x801BB0B4) //this is a jump label
/*801BB0B4 001B7EB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BB0B8, 0x801BB0B8) //this is a jump label
/*801BB0B8 001B7EB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB0BC 001B7EBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BB0C0 001B7EC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BB0C4 001B7EC4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BB0C8 001B7EC8*/ PPC::Runtime::ASM::blr();
}