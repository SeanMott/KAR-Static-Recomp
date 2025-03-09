//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memmove.hpp"
#include "memmove.hpp"
#include "memmove.hpp"



void fn_IFRingOut(PPC::Runtime::GCContext* context)
{
/*804720E0 0046EEE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*804720E4 0046EEE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804720E8 0046EEE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*804720EC 0046EEEC*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804720F0 0046EEF0*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*804720F4 0046EEF4*/ PPC::Runtime::ASM::addi(context->r28, context->r5, 0x0);
/*804720F8 0046EEF8*/ PPC::Runtime::ASM::addi(context->r30, context->r8, 0x0);
/*804720FC 0046EEFC*/ PPC::Runtime::ASM::add(context->r3, context->r27, context->r4);
/*80472100 0046EF00*/ PPC::Runtime::ASM::add(context->r0, context->r28, context->r30);
/*80472104 0046EF04*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*80472108 0046EF08*/ PPC::Runtime::ASM::addi(context->r29, context->r7, 0x0);
/*8047210C 0046EF0C*/ PPC::Runtime::ASM::bge(.L_80472128);
/*80472110 0046EF10*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*80472114 0046EF14*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*80472118 0046EF18*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8047211C 0046EF1C*/ PPC::Runtime::ASM::bl(memmove);
/*80472120 0046EF20*/ PPC::Runtime::ASM::add(context->r28, context->r28, context->r30);
/*80472124 0046EF24*/ PPC::Runtime::ASM::b(.L_8047215C);
RUNTIME_PPC_JUMP_LABEL(.L_80472128, 0x80472128) //this is a jump label
/*80472128 0046EF28*/ PPC::Runtime::ASM::subf(context->r31, context->r28, context->r3);
/*8047212C 0046EF2C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*80472130 0046EF30*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*80472134 0046EF34*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x0);
/*80472138 0046EF38*/ PPC::Runtime::ASM::bl(memmove);
/*8047213C 0046EF3C*/ PPC::Runtime::ASM::addi(context->r28, context->r27, 0x0);
/*80472140 0046EF40*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r31);
/*80472144 0046EF44*/ PPC::Runtime::ASM::subf(context->r30, context->r31, context->r30);
/*80472148 0046EF48*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047214C 0046EF4C*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*80472150 0046EF50*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*80472154 0046EF54*/ PPC::Runtime::ASM::bl(memmove);
/*80472158 0046EF58*/ PPC::Runtime::ASM::add(context->r28, context->r28, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8047215C, 0x8047215C) //this is a jump label
/*8047215C 0046EF5C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80472160 0046EF60*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80472164 0046EF64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80472168 0046EF68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*8047216C 0046EF6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80472170 0046EF70*/ PPC::Runtime::ASM::blr();
}