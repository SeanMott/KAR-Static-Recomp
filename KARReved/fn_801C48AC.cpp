//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801C499C.hpp"



void fn_801C48AC(PPC::Runtime::GCContext* context)
{
/*801C48AC 001C16AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C48B0 001C16B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C48B4 001C16B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C48B8 001C16B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C48BC 001C16BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C48C0 001C16C0*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801C48C4 001C16C4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C48C8 001C16C8*/ PPC::Runtime::ASM::beq(.L_801C48D4);
/*801C48CC 001C16CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C48D0 001C16D0*/ PPC::Runtime::ASM::bl(fn_801C499C);
RUNTIME_PPC_JUMP_LABEL(.L_801C48D4, 0x801C48D4) //this is a jump label
/*801C48D4 001C16D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C48D8 001C16D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C48DC 001C16DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C48E0 001C16E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C48E4 001C16E4*/ PPC::Runtime::ASM::blr();
}