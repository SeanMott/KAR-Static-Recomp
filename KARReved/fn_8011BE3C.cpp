//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011BE3C(PPC::Runtime::GCContext* context)
{
/*8011BE3C 00118C3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011BE40 00118C40*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011BE44 00118C44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011BE48 00118C48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011BE4C 00118C4C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011BE50 00118C50*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011BE54 00118C54*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011BE58 00118C58*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x26c);
/*8011BE5C 00118C5C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8011BE60 00118C60*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8011BE64, 0x8011BE64) //this is a jump label
/*8011BE64 00118C64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8011BE68 00118C68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011BE6C 00118C6C*/ PPC::Runtime::ASM::beq(.L_8011BE78);
/*8011BE70 00118C70*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8011BE74 00118C74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8011BE78, 0x8011BE78) //this is a jump label
/*8011BE78 00118C78*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8011BE7C 00118C7C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8011BE80 00118C80*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8011BE84 00118C84*/ PPC::Runtime::ASM::blt(.L_8011BE64);
/*8011BE88 00118C88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011BE8C 00118C8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011BE90 00118C90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011BE94 00118C94*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011BE98 00118C98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011BE9C 00118C9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011BEA0 00118CA0*/ PPC::Runtime::ASM::blr();
}