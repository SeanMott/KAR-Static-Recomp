//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_80119490(PPC::Runtime::GCContext* context)
{
/*80119490 00116290*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80119494 00116294*/ PPC::Runtime::ASM::mflr(context->r0);
/*80119498 00116298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011949C 0011629C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801194A0 001162A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801194A4 001162A4*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801194A8 001162A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801194AC 001162AC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801194B0 001162B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r3));
/*801194B4 001162B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801194B8 001162B8*/ PPC::Runtime::ASM::beq(.L_801194C0);
/*801194BC 001162BC*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_801194C0, 0x801194C0) //this is a jump label
/*801194C0 001162C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801194C4 001162C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801194C8 001162C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801194CC 001162CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801194D0 001162D0*/ PPC::Runtime::ASM::blr();
}