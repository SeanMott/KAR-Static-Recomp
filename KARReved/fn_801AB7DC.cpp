//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_AS_StarChargeHold.hpp"



void fn_801AB7DC(PPC::Runtime::GCContext* context)
{
/*801AB7DC 001A85DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AB7E0 001A85E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AB7E4 001A85E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB7E8 001A85E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB7EC 001A85EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AB7F0 001A85F0*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801AB7F4 001A85F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AB7F8 001A85F8*/ PPC::Runtime::ASM::beq(.L_801AB80C);
/*801AB7FC 001A85FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r31));
/*801AB800 001A8600*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AB804 001A8604*/ PPC::Runtime::ASM::extrwi(context->r4, context->r0, 1, 29);
/*801AB808 001A8608*/ PPC::Runtime::ASM::bl(fn_AS_StarChargeHold);
RUNTIME_PPC_JUMP_LABEL(.L_801AB80C, 0x801AB80C) //this is a jump label
/*801AB80C 001A860C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB810 001A8610*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB814 001A8614*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AB818 001A8618*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AB81C 001A861C*/ PPC::Runtime::ASM::blr();
}