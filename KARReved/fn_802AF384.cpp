//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AF3CC.hpp"



void fn_802AF384(PPC::Runtime::GCContext* context)
{
/*802AF384 002AC184*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AF388 002AC188*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AF38C 002AC18C*/ PPC::Runtime::ASM::li(context->r3, 0x6c);
/*802AF390 002AC190*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF394 002AC194*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF398 002AC198*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AF39C 002AC19C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802AF3A0 002AC1A0  7C 60 1B 79 */ mr. context->r0 , context->r3
/*802AF3A4 002AC1A4*/ PPC::Runtime::ASM::beq(.L_802AF3B4);
/*802AF3A8 002AC1A8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802AF3AC 002AC1AC*/ PPC::Runtime::ASM::bl(fn_802AF3CC);
/*802AF3B0 002AC1B0*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802AF3B4, 0x802AF3B4) //this is a jump label
/*802AF3B4 002AC1B4*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*802AF3B8 002AC1B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF3BC 002AC1BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF3C0 002AC1C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AF3C4 002AC1C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AF3C8 002AC1C8*/ PPC::Runtime::ASM::blr();
}