//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011FF18(PPC::Runtime::GCContext* context)
{
/*8011FF18 0011CD18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8011FF1C 0011CD1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011FF20 0011CD20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011FF24 0011CD24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011FF28 0011CD28*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8011FF2C 0011CD2C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8011FF30 0011CD30*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8011FF34 0011CD34*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011FF38 0011CD38*/ PPC::Runtime::ASM::mulli(context->r4, context->r30, 0x14);
/*8011FF3C 0011CD3C*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8011FF40 0011CD40*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*8011FF44 0011CD44*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*8011FF48 0011CD48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r31));
/*8011FF4C 0011CD4C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011FF50 0011CD50*/ PPC::Runtime::ASM::beq(.L_8011FF60);
/*8011FF54 0011CD54*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8011FF58 0011CD58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011FF5C 0011CD5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8011FF60, 0x8011FF60) //this is a jump label
/*8011FF60 0011CD60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011FF64 0011CD64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011FF68 0011CD68*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8011FF6C 0011CD6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011FF70 0011CD70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8011FF74 0011CD74*/ PPC::Runtime::ASM::blr();
}