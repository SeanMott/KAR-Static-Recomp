//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011944C(PPC::Runtime::GCContext* context)
{
/*8011944C 0011624C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80119450 00116250*/ PPC::Runtime::ASM::mflr(context->r0);
/*80119454 00116254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80119458 00116258*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011945C 0011625C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80119460 00116260*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80119464 00116264*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r3));
/*80119468 00116268*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011946C 0011626C*/ PPC::Runtime::ASM::beq(.L_8011947C);
/*80119470 00116270*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*80119474 00116274*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80119478 00116278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8011947C, 0x8011947C) //this is a jump label
/*8011947C 0011627C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80119480 00116280*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80119484 00116284*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80119488 00116288*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8011948C 0011628C*/ PPC::Runtime::ASM::blr();
}