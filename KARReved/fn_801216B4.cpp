//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"



void fn_801216B4(PPC::Runtime::GCContext* context)
{
/*801216B4 0011E4B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801216B8 0011E4B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801216BC 0011E4BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801216C0 0011E4C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801216C4 0011E4C4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801216C8 0011E4C8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801216CC 0011E4CC*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*801216D0 0011E4D0*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x374);
RUNTIME_PPC_JUMP_LABEL(.L_801216D4, 0x801216D4) //this is a jump label
/*801216D4 0011E4D4*/ PPC::Runtime::ASM::addi(context->r0, context->r8, 0x1);
/*801216D8 0011E4D8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*801216DC 0011E4DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801216E0 0011E4E0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801216E4 0011E4E4*/ PPC::Runtime::ASM::beq(.L_80121788);
/*801216E8 0011E4E8*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*801216EC 0011E4EC*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*801216F0 0011E4F0*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*801216F4 0011E4F4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801216F8 0011E4F8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801216FC, 0x801216FC) //this is a jump label
/*801216FC 0011E4FC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80121700 0011E500*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*80121704 0011E504*/ PPC::Runtime::ASM::beq(.L_8012171C);
/*80121708 0011E508*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*8012170C 0011E50C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121710 0011E510*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*80121714 0011E514*/ PPC::Runtime::ASM::bne(.L_8012171C);
/*80121718 0011E518*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8012171C, 0x8012171C) //this is a jump label
/*8012171C 0011E51C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80121720 0011E520*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*80121724 0011E524*/ PPC::Runtime::ASM::beq(.L_8012173C);
/*80121728 0011E528*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*8012172C 0011E52C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121730 0011E530*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*80121734 0011E534*/ PPC::Runtime::ASM::bne(.L_8012173C);
/*80121738 0011E538*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8012173C, 0x8012173C) //this is a jump label
/*8012173C 0011E53C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80121740 0011E540*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*80121744 0011E544*/ PPC::Runtime::ASM::beq(.L_8012175C);
/*80121748 0011E548*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*8012174C 0011E54C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121750 0011E550*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*80121754 0011E554*/ PPC::Runtime::ASM::bne(.L_8012175C);
/*80121758 0011E558*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8012175C, 0x8012175C) //this is a jump label
/*8012175C 0011E55C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*80121760 0011E560*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*80121764 0011E564*/ PPC::Runtime::ASM::beq(.L_8012177C);
/*80121768 0011E568*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*8012176C 0011E56C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121770 0011E570*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*80121774 0011E574*/ PPC::Runtime::ASM::bne(.L_8012177C);
/*80121778 0011E578*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8012177C, 0x8012177C) //this is a jump label
/*8012177C 0011E57C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*80121780 0011E580*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x3);
/*80121784 0011E584*/ PPC::Runtime::ASM::bdnz(.L_801216FC);
RUNTIME_PPC_JUMP_LABEL(.L_80121788, 0x80121788) //this is a jump label
/*80121788 0011E588*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8012178C 0011E58C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x80);
/*80121790 0011E590*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x4);
/*80121794 0011E594*/ PPC::Runtime::ASM::blt(.L_801216D4);
/*80121798 0011E598*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012179C 0011E59C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801217A0 0011E5A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801217A4 0011E5A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801217A8 0011E5A8*/ PPC::Runtime::ASM::blr();
}