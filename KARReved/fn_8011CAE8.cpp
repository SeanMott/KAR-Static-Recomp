//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011CAE8(PPC::Runtime::GCContext* context)
{
/*8011CAE8 001198E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011CAEC 001198EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011CAF0 001198F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011CAF4 001198F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011CAF8 001198F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011CAFC 001198FC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011CB00 00119900*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8011CB04 00119904*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011CB08 00119908*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8011CB0C 0011990C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8011CB10 00119910*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
/*8011CB14 00119914*/ PPC::Runtime::ASM::b(.L_8011CB3C);
RUNTIME_PPC_JUMP_LABEL(.L_8011CB18, 0x8011CB18) //this is a jump label
/*8011CB18 00119918*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011CB1C 0011991C*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r29);
/*8011CB20 00119920*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e8, context->r30));
/*8011CB24 00119924*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011CB28 00119928*/ PPC::Runtime::ASM::beq(.L_8011CB34);
/*8011CB2C 0011992C*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8011CB30 00119930*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8011CB34, 0x8011CB34) //this is a jump label
/*8011CB34 00119934*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8011CB38 00119938*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8011CB3C, 0x8011CB3C) //this is a jump label
/*8011CB3C 0011993C*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8011CB40 00119940*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8011CB44 00119944*/ PPC::Runtime::ASM::blt(.L_8011CB18);
/*8011CB48 00119948*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011CB4C 0011994C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011CB50 00119950*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011CB54 00119954*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011CB58 00119958*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8011CB5C 0011995C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011CB60 00119960*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011CB64 00119964*/ PPC::Runtime::ASM::blr();
}