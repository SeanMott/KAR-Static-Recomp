//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_8011E8AC(PPC::Runtime::GCContext* context)
{
/*8011E8AC 0011B6AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8011E8B0 0011B6B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011E8B4 0011B6B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011E8B8 0011B6B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011E8BC 0011B6BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8011E8C0 0011B6C0*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011E8C4 0011B6C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8011E8C8 0011B6C8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8011E8CC 0011B6CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a4, context->r3));
/*8011E8D0 0011B6D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011E8D4 0011B6D4*/ PPC::Runtime::ASM::beq(.L_8011E8DC);
/*8011E8D8 0011B6D8*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8011E8DC, 0x8011E8DC) //this is a jump label
/*8011E8DC 0011B6DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011E8E0 0011B6E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011E8E4 0011B6E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011E8E8 0011B6E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8011E8EC 0011B6EC*/ PPC::Runtime::ASM::blr();
}