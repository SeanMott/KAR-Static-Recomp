//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8012EC50(PPC::Runtime::GCContext* context)
{
/*8012EC50 0012BA50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8012EC54 0012BA54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012EC58 0012BA58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012EC5C 0012BA5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012EC60 0012BA60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012EC64 0012BA64*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012EC68 0012BA68*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012EC6C 0012BA6C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xce4);
/*8012EC70 0012BA70*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8012EC74 0012BA74*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8012EC78, 0x8012EC78) //this is a jump label
/*8012EC78 0012BA78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8012EC7C 0012BA7C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012EC80 0012BA80*/ PPC::Runtime::ASM::beq(.L_8012EC8C);
/*8012EC84 0012BA84*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8012EC88 0012BA88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8012EC8C, 0x8012EC8C) //this is a jump label
/*8012EC8C 0012BA8C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8012EC90 0012BA90*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8012EC94 0012BA94*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8012EC98 0012BA98*/ PPC::Runtime::ASM::blt(.L_8012EC78);
/*8012EC9C 0012BA9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012ECA0 0012BAA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012ECA4 0012BAA4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012ECA8 0012BAA8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012ECAC 0012BAAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012ECB0 0012BAB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8012ECB4 0012BAB4*/ PPC::Runtime::ASM::blr();
}