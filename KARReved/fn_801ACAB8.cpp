//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801A8454.hpp"
#include "fn_801A0040.hpp"



void fn_801ACAB8(PPC::Runtime::GCContext* context)
{
/*801ACAB8 001A98B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ACABC 001A98BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ACAC0 001A98C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACAC4 001A98C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ACAC8 001A98C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801ACACC 001A98CC*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801ACAD0 001A98D0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801ACAD4 001A98D4*/ PPC::Runtime::ASM::beq(.L_801ACAE4);
/*801ACAD8 001A98D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ACADC 001A98DC*/ PPC::Runtime::ASM::bl(fn_801A8454);
/*801ACAE0 001A98E0*/ PPC::Runtime::ASM::b(.L_801ACAEC);
RUNTIME_PPC_JUMP_LABEL(.L_801ACAE4, 0x801ACAE4) //this is a jump label
/*801ACAE4 001A98E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ACAE8 001A98E8*/ PPC::Runtime::ASM::bl(fn_801A0040);
RUNTIME_PPC_JUMP_LABEL(.L_801ACAEC, 0x801ACAEC) //this is a jump label
/*801ACAEC 001A98EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACAF0 001A98F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ACAF4 001A98F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ACAF8 001A98F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ACAFC 001A98FC*/ PPC::Runtime::ASM::blr();
}