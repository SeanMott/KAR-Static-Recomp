//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802188D4.hpp"
#include "fn_80218B28.hpp"



void fn_802187C4(PPC::Runtime::GCContext* context)
{
/*802187C4 002155C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802187C8 002155C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802187CC 002155CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802187D0 002155D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*802187D4 002155D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802187D8 002155D8*/ PPC::Runtime::ASM::bne(.L_802187E4);
/*802187DC 002155DC*/ PPC::Runtime::ASM::bl(fn_802188D4);
/*802187E0 002155E0*/ PPC::Runtime::ASM::b(.L_802187E8);
RUNTIME_PPC_JUMP_LABEL(.L_802187E4, 0x802187E4) //this is a jump label
/*802187E4 002155E4*/ PPC::Runtime::ASM::bl(fn_80218B28);
RUNTIME_PPC_JUMP_LABEL(.L_802187E8, 0x802187E8) //this is a jump label
/*802187E8 002155E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802187EC 002155EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802187F0 002155F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802187F4 002155F4*/ PPC::Runtime::ASM::blr();
}