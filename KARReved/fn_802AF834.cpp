//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AF87C.hpp"



void fn_802AF834(PPC::Runtime::GCContext* context)
{
/*802AF834 002AC634*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AF838 002AC638*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AF83C 002AC63C*/ PPC::Runtime::ASM::li(context->r3, 0x6c);
/*802AF840 002AC640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF844 002AC644*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF848 002AC648*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AF84C 002AC64C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802AF850 002AC650  7C 60 1B 79 */ mr. context->r0 , context->r3
/*802AF854 002AC654*/ PPC::Runtime::ASM::beq(.L_802AF864);
/*802AF858 002AC658*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802AF85C 002AC65C*/ PPC::Runtime::ASM::bl(fn_802AF87C);
/*802AF860 002AC660*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802AF864, 0x802AF864) //this is a jump label
/*802AF864 002AC664*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*802AF868 002AC668*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF86C 002AC66C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF870 002AC670*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AF874 002AC674*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AF878 002AC678*/ PPC::Runtime::ASM::blr();
}