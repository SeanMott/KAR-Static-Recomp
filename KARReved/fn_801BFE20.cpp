//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801BE934.hpp"
#include "fn_801A0040.hpp"



void fn_801BFE20(PPC::Runtime::GCContext* context)
{
/*801BFE20 001BCC20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BFE24 001BCC24*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BFE28 001BCC28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFE2C 001BCC2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BFE30 001BCC30*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BFE34 001BCC34*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801BFE38 001BCC38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BFE3C 001BCC3C*/ PPC::Runtime::ASM::beq(.L_801BFE4C);
/*801BFE40 001BCC40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BFE44 001BCC44*/ PPC::Runtime::ASM::bl(fn_801BE934);
/*801BFE48 001BCC48*/ PPC::Runtime::ASM::b(.L_801BFE54);
RUNTIME_PPC_JUMP_LABEL(.L_801BFE4C, 0x801BFE4C) //this is a jump label
/*801BFE4C 001BCC4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BFE50 001BCC50*/ PPC::Runtime::ASM::bl(fn_801A0040);
RUNTIME_PPC_JUMP_LABEL(.L_801BFE54, 0x801BFE54) //this is a jump label
/*801BFE54 001BCC54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFE58 001BCC58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BFE5C 001BCC5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BFE60 001BCC60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BFE64 001BCC64*/ PPC::Runtime::ASM::blr();
}