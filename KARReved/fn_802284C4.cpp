//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802286E8.hpp"



void fn_802284C4(PPC::Runtime::GCContext* context)
{
/*802284C4 002252C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802284C8 002252C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802284CC 002252CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802284D0 002252D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802284D4 002252D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802284D8 002252D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*802284DC 002252DC*/ PPC::Runtime::ASM::beq(.L_802284E4);
/*802284E0 002252E0*/ PPC::Runtime::ASM::bl(fn_802286E8);
RUNTIME_PPC_JUMP_LABEL(.L_802284E4, 0x802284E4) //this is a jump label
/*802284E4 002252E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802284E8 002252E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802284EC 002252EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802284F0 002252F0*/ PPC::Runtime::ASM::blr();
}