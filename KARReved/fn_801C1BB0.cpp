//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801C1CA4.hpp"



void fn_801C1BB0(PPC::Runtime::GCContext* context)
{
/*801C1BB0 001BE9B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1BB4 001BE9B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1BB8 001BE9B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1BBC 001BE9BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C1BC0 001BE9C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C1BC4 001BE9C4*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801C1BC8 001BE9C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C1BCC 001BE9CC*/ PPC::Runtime::ASM::beq(.L_801C1BD8);
/*801C1BD0 001BE9D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C1BD4 001BE9D4*/ PPC::Runtime::ASM::bl(fn_801C1CA4);
RUNTIME_PPC_JUMP_LABEL(.L_801C1BD8, 0x801C1BD8) //this is a jump label
/*801C1BD8 001BE9D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1BDC 001BE9DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C1BE0 001BE9E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1BE4 001BE9E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1BE8 001BE9E8*/ PPC::Runtime::ASM::blr();
}