//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_80191170.hpp"
#include "fn_80236C40.hpp"
#include "fn_801A41BC.hpp"



void fn_801A4C04(PPC::Runtime::GCContext* context)
{
/*801A4C04 001A1A04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A4C08 001A1A08*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A4C0C 001A1A0C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A4C10 001A1A10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A4C14 001A1A14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A4C18 001A1A18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A4C1C 001A1A1C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A4C20 001A1A20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801A4C24 001A1A24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r30));
/*801A4C28 001A1A28*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 4, 27, 27);
/*801A4C2C 001A1A2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801A4C30 001A1A30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r30));
/*801A4C34 001A1A34*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r3));
/*801A4C38 001A1A38*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 4);
/*801A4C3C 001A1A3C*/ PPC::Runtime::ASM::lwzx(context->r31, context->r4, context->r3);
/*801A4C40 001A1A40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r30));
/*801A4C44 001A1A44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
/*801A4C48 001A1A48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4c, context->r30));
/*801A4C4C 001A1A4C*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*801A4C50 001A1A50*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*801A4C54 001A1A54*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*801A4C58 001A1A58*/ PPC::Runtime::ASM::beq(.L_801A4C6C);
/*801A4C5C 001A1A5C*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
/*801A4C60 001A1A60*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A4C64 001A1A64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4c, context->r30));
/*801A4C68 001A1A68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801A4C6C, 0x801A4C6C) //this is a jump label
/*801A4C6C 001A1A6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A4C70 001A1A70*/ PPC::Runtime::ASM::bl(fn_80191170);
/*801A4C74 001A1A74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x368, context->r30));
/*801A4C78 001A1A78*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*801A4C7C 001A1A7C*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*801A4C80 001A1A80*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*801A4C84 001A1A84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A4C88 001A1A88*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x5a73);
/*801A4C8C 001A1A8C*/ PPC::Runtime::ASM::li(context->r6, 0xd5);
/*801A4C90 001A1A90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801A4C94 001A1A94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r30));
/*801A4C98 001A1A98*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801A4C9C 001A1A9C*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*801A4CA0 001A1AA0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A4CA4 001A1AA4*/ PPC::Runtime::ASM::bl(fn_801A41BC);
/*801A4CA8 001A1AA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A4CAC 001A1AAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A4CB0 001A1AB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A4CB4 001A1AB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A4CB8 001A1AB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A4CBC 001A1ABC*/ PPC::Runtime::ASM::blr();
}