//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F07D4.hpp"
#include "fn_801F05F4.hpp"



void fn_801F045C(PPC::Runtime::GCContext* context)
{
/*801F045C 001ED25C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F0460 001ED260*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F0464 001ED264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0468 001ED268*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r3));
/* 801F046C 001ED26C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801F0470 001ED270*/ PPC::Runtime::ASM::beq(.L_801F047C);
/*801F0474 001ED274*/ PPC::Runtime::ASM::bl(fn_801F07D4);
/*801F0478 001ED278*/ PPC::Runtime::ASM::b(.L_801F0480);
RUNTIME_PPC_JUMP_LABEL(.L_801F047C, 0x801F047C) //this is a jump label
/*801F047C 001ED27C*/ PPC::Runtime::ASM::bl(fn_801F05F4);
RUNTIME_PPC_JUMP_LABEL(.L_801F0480, 0x801F0480) //this is a jump label
/*801F0480 001ED280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0484 001ED284*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F0488 001ED288*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F048C 001ED28C*/ PPC::Runtime::ASM::blr();
}