//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_8011B994(PPC::Runtime::GCContext* context)
{
/*8011B994 00118794*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8011B998 00118798*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011B99C 0011879C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011B9A0 001187A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011B9A4 001187A4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8011B9A8 001187A8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011B9AC 001187AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8011B9B0 001187B0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8011B9B4 001187B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x270, context->r3));
/*8011B9B8 001187B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011B9BC 001187BC*/ PPC::Runtime::ASM::beq(.L_8011B9C4);
/*8011B9C0 001187C0*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_8011B9C4, 0x8011B9C4) //this is a jump label
/*8011B9C4 001187C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011B9C8 001187C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011B9CC 001187CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011B9D0 001187D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8011B9D4 001187D4*/ PPC::Runtime::ASM::blr();
}