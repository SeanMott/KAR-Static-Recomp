//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8029C568.hpp"



void fn_80296368(PPC::Runtime::GCContext* context)
{
/*80296368 00293168*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029636C 0029316C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80296370 00293170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80296374 00293174*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80296378 00293178*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8029637C 0029317C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80296380 00293180  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80296384 00293184*/ PPC::Runtime::ASM::beq(.L_802963AC);
/*80296388 00293188*/ PPC::Runtime::ASM::bl(fn_8029C568);
/*8029638C 0029318C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80296390 00293190*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80296394 00293194*/ PPC::Runtime::ASM::beq(.L_8029639C);
/*80296398 00293198*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8029639C, 0x8029639C) //this is a jump label
/*8029639C 0029319C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802963A0 002931A0*/ PPC::Runtime::ASM::ble(.L_802963AC);
/*802963A4 002931A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802963A8 002931A8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802963AC, 0x802963AC) //this is a jump label
/*802963AC 002931AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802963B0 002931B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802963B4 002931B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802963B8 002931B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802963BC 002931BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802963C0 002931C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802963C4 002931C4*/ PPC::Runtime::ASM::blr();
}