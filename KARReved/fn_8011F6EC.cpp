//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011F6EC(PPC::Runtime::GCContext* context)
{
/*8011F6EC 0011C4EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011F6F0 0011C4F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011F6F4 0011C4F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011F6F8 0011C4F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011F6FC 0011C4FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011F700 0011C500*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011F704 0011C504*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011F708 0011C508*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x280);
/*8011F70C 0011C50C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8011F710 0011C510*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8011F714, 0x8011F714) //this is a jump label
/*8011F714 0011C514*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8011F718 0011C518*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011F71C 0011C51C*/ PPC::Runtime::ASM::beq(.L_8011F728);
/*8011F720 0011C520*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8011F724 0011C524*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8011F728, 0x8011F728) //this is a jump label
/*8011F728 0011C528*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8011F72C 0011C52C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8011F730 0011C530*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8011F734 0011C534*/ PPC::Runtime::ASM::blt(.L_8011F714);
/*8011F738 0011C538*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011F73C 0011C53C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011F740 0011C540*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011F744 0011C544*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011F748 0011C548*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011F74C 0011C54C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011F750 0011C550*/ PPC::Runtime::ASM::blr();
}