//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE6CC.hpp"
#include "fn_800EE6C4.hpp"
#include "fn_800EE660.hpp"
#include "fn_80114154.hpp"



void fn_event_secretChamber(PPC::Runtime::GCContext* context)
{
/*80111884 0010E684*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80111888 0010E688*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011188C 0010E68C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80111890 0010E690*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80111894 0010E694*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80111898 0010E698*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8011189C 0010E69C*/ PPC::Runtime::ASM::bl(fn_800EE6CC);
/*801118A0 0010E6A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801118A4 0010E6A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801118A8 0010E6A8*/ PPC::Runtime::ASM::bl(fn_800EE6C4);
/*801118AC 0010E6AC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*801118B0 0010E6B0*/ PPC::Runtime::ASM::blt(.L_801118C0);
/*801118B4 0010E6B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801118B8 0010E6B8*/ PPC::Runtime::ASM::bl(fn_800EE660);
/*801118BC 0010E6BC*/ PPC::Runtime::ASM::bl(fn_80114154);
RUNTIME_PPC_JUMP_LABEL(.L_801118C0, 0x801118C0) //this is a jump label
/*801118C0 0010E6C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801118C4 0010E6C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801118C8 0010E6C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801118CC 0010E6CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801118D0 0010E6D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801118D4 0010E6D4*/ PPC::Runtime::ASM::blr();
}