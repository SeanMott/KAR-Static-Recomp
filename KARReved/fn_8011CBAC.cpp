//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_8011CBAC(PPC::Runtime::GCContext* context)
{
/*8011CBAC 001199AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8011CBB0 001199B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011CBB4 001199B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011CBB8 001199B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011CBBC 001199BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8011CBC0 001199C0*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011CBC4 001199C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8011CBC8 001199C8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8011CBCC 001199CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r3));
/*8011CBD0 001199D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011CBD4 001199D4*/ PPC::Runtime::ASM::beq(.L_8011CBDC);
/*8011CBD8 001199D8*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8011CBDC, 0x8011CBDC) //this is a jump label
/*8011CBDC 001199DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011CBE0 001199E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011CBE4 001199E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011CBE8 001199E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8011CBEC 001199EC*/ PPC::Runtime::ASM::blr();
}