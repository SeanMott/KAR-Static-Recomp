//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011C18C(PPC::Runtime::GCContext* context)
{
/*8011C18C 00118F8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011C190 00118F90*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011C194 00118F94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011C198 00118F98*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011C19C 00118F9C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8011C1A0 00118FA0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011C1A4 00118FA4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011C1A8 00118FA8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8011C1AC, 0x8011C1AC) //this is a jump label
/*8011C1AC 00118FAC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011C1B0 00118FB0*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8011C1B4 00118FB4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8011C1B8 00118FB8*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8011C1BC 00118FBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r30));
/*8011C1C0 00118FC0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011C1C4 00118FC4*/ PPC::Runtime::ASM::beq(.L_8011C1D0);
/*8011C1C8 00118FC8*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8011C1CC 00118FCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8011C1D0, 0x8011C1D0) //this is a jump label
/*8011C1D0 00118FD0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8011C1D4 00118FD4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8011C1D8 00118FD8*/ PPC::Runtime::ASM::blt(.L_8011C1AC);
/*8011C1DC 00118FDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011C1E0 00118FE0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011C1E4 00118FE4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011C1E8 00118FE8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011C1EC 00118FEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011C1F0 00118FF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011C1F4 00118FF4*/ PPC::Runtime::ASM::blr();
}