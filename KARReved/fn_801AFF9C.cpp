//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B0434.hpp"
#include "fn_801B0750.hpp"



void fn_801AFF9C(PPC::Runtime::GCContext* context)
{
/*801AFF9C 001ACD9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AFFA0 001ACDA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AFFA4 001ACDA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AFFA8 001ACDA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*801AFFAC 001ACDAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x56);
/*801AFFB0 001ACDB0*/ PPC::Runtime::ASM::beq(.L_801AFFDC);
/*801AFFB4 001ACDB4*/ PPC::Runtime::ASM::bge(.L_801AFFC4);
/*801AFFB8 001ACDB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x55);
/*801AFFBC 001ACDBC*/ PPC::Runtime::ASM::bge(.L_801AFFD0);
/*801AFFC0 001ACDC0*/ PPC::Runtime::ASM::b(.L_801AFFDC);
RUNTIME_PPC_JUMP_LABEL(.L_801AFFC4, 0x801AFFC4) //this is a jump label
/*801AFFC4 001ACDC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x58);
/*801AFFC8 001ACDC8*/ PPC::Runtime::ASM::bge(.L_801AFFDC);
/*801AFFCC 001ACDCC*/ PPC::Runtime::ASM::b(.L_801AFFD8);
RUNTIME_PPC_JUMP_LABEL(.L_801AFFD0, 0x801AFFD0) //this is a jump label
/*801AFFD0 001ACDD0*/ PPC::Runtime::ASM::bl(fn_801B0434);
/*801AFFD4 001ACDD4*/ PPC::Runtime::ASM::b(.L_801AFFDC);
RUNTIME_PPC_JUMP_LABEL(.L_801AFFD8, 0x801AFFD8) //this is a jump label
/*801AFFD8 001ACDD8*/ PPC::Runtime::ASM::bl(fn_801B0750);
RUNTIME_PPC_JUMP_LABEL(.L_801AFFDC, 0x801AFFDC) //this is a jump label
/*801AFFDC 001ACDDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AFFE0 001ACDE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AFFE4 001ACDE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AFFE8 001ACDE8*/ PPC::Runtime::ASM::blr();
}