//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B2E50.hpp"
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801B2E18.hpp"



void fn_801B2D0C(PPC::Runtime::GCContext* context)
{
/*801B2D0C 001AFB0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B2D10 001AFB10*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2D14 001AFB14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2D18 001AFB18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B2D1C 001AFB1C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B2D20 001AFB20*/ PPC::Runtime::ASM::bl(fn_801B2E50);
/*801B2D24 001AFB24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B2D28 001AFB28*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801B2D2C 001AFB2C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B2D30 001AFB30*/ PPC::Runtime::ASM::beq(.L_801B2D3C);
/*801B2D34 001AFB34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B2D38 001AFB38*/ PPC::Runtime::ASM::bl(fn_801B2E18);
RUNTIME_PPC_JUMP_LABEL(.L_801B2D3C, 0x801B2D3C) //this is a jump label
/*801B2D3C 001AFB3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2D40 001AFB40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B2D44 001AFB44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2D48 001AFB48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B2D4C 001AFB4C*/ PPC::Runtime::ASM::blr();
}