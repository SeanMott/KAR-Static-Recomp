//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B1830.hpp"
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801B17D4.hpp"



void fn_801B16B0(PPC::Runtime::GCContext* context)
{
/*801B16B0 001AE4B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B16B4 001AE4B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B16B8 001AE4B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B16BC 001AE4BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B16C0 001AE4C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B16C4 001AE4C4*/ PPC::Runtime::ASM::bl(fn_801B1830);
/*801B16C8 001AE4C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B16CC 001AE4CC*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801B16D0 001AE4D0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B16D4 001AE4D4*/ PPC::Runtime::ASM::beq(.L_801B16E0);
/*801B16D8 001AE4D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B16DC 001AE4DC*/ PPC::Runtime::ASM::bl(fn_801B17D4);
RUNTIME_PPC_JUMP_LABEL(.L_801B16E0, 0x801B16E0) //this is a jump label
/*801B16E0 001AE4E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B16E4 001AE4E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B16E8 001AE4E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B16EC 001AE4EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B16F0 001AE4F0*/ PPC::Runtime::ASM::blr();
}