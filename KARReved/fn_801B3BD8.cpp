//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ability_Spike_changeNeedle.hpp"
#include "fn_801A9B48.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"



void fn_801B3BD8(PPC::Runtime::GCContext* context)
{
/*801B3BD8 001B09D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B3BDC 001B09DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B3BE0 001B09E0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801B3BE4 001B09E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B3BE8 001B09E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B3BEC 001B09EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B3BF0 001B09F0*/ PPC::Runtime::ASM::bl(fn_ability_Spike_changeNeedle);
/*801B3BF4 001B09F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B3BF8 001B09F8*/ PPC::Runtime::ASM::bl(fn_801A9B48);
/*801B3BFC 001B09FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f8, context->r31));
/*801B3C00 001B0A00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801B3C04 001B0A04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9fc, context->r31));
/*801B3C08 001B0A08*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*801B3C0C 001B0A0C*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*801B3C10 001B0A10*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*801B3C14 001B0A14*/ PPC::Runtime::ASM::beq(.L_801B3C28);
/*801B3C18 001B0A18*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
/*801B3C1C 001B0A1C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B3C20 001B0A20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9fc, context->r31));
/*801B3C24 001B0A24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B3C28, 0x801B3C28) //this is a jump label
/*801B3C28 001B0A28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r31));
/*801B3C2C 001B0A2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801B3C30 001B0A30*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801B3C34 001B0A34*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r31));
/*801B3C38 001B0A38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B3C3C 001B0A3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B3C40 001B0A40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B3C44 001B0A44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B3C48 001B0A48*/ PPC::Runtime::ASM::blr();
}