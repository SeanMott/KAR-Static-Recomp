//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_801194D4(PPC::Runtime::GCContext* context)
{
/*801194D4 001162D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801194D8 001162D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801194DC 001162DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801194E0 001162E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801194E4 001162E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801194E8 001162E8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801194EC 001162EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801194F0 001162F0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801194F4 001162F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r3));
/*801194F8 001162F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801194FC 001162FC*/ PPC::Runtime::ASM::beq(.L_80119504);
/*80119500 00116300*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80119504, 0x80119504) //this is a jump label
/*80119504 00116304*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80119508 00116308*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011950C 0011630C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80119510 00116310*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80119514 00116314*/ PPC::Runtime::ASM::blr();
}