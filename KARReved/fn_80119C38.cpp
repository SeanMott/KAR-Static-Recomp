//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_80119C38(PPC::Runtime::GCContext* context)
{
/*80119C38 00116A38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80119C3C 00116A3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80119C40 00116A40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80119C44 00116A44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80119C48 00116A48*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80119C4C 00116A4C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80119C50 00116A50*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80119C54 00116A54*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80119C58 00116A58*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*80119C5C 00116A5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*80119C60 00116A60*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80119C64 00116A64*/ PPC::Runtime::ASM::beq(.L_80119C74);
/*80119C68 00116A68*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*80119C6C 00116A6C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80119C70 00116A70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80119C74, 0x80119C74) //this is a jump label
/*80119C74 00116A74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80119C78 00116A78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80119C7C 00116A7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80119C80 00116A80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80119C84 00116A84*/ PPC::Runtime::ASM::blr();
}