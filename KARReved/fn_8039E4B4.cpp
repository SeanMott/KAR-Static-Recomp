//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"



void fn_8039E4B4(PPC::Runtime::GCContext* context)
{
/*8039E4B4 0039B2B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8039E4B8 0039B2B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039E4BC 0039B2BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039E4C0 0039B2C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039E4C4 0039B2C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039E4C8 0039B2C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039E4CC 0039B2CC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039E4D0 0039B2D0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8039E4D4 0039B2D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039E4D8 0039B2D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8039E4DC 0039B2DC*/ PPC::Runtime::ASM::beq(.L_8039E5B8);
/*8039E4E0 0039B2E0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8039E4E4 0039B2E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039E4E8 0039B2E8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC408 @ Get_MemoryOffset_SDA21);
/*8039E4EC 0039B2EC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3B0 @ Get_MemoryOffset_SDA21);
/*8039E4F0 0039B2F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039E4F4 0039B2F4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039E4F8 0039B2F8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8039E4FC 0039B2FC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x8);
/*8039E500 0039B300*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8039E504 0039B304*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*8039E508 0039B308*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8039E50C 0039B30C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039E510 0039B310*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039E514 0039B314*/ PPC::Runtime::ASM::bctrl();
/*8039E518 0039B318*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039E51C 0039B31C*/ PPC::Runtime::ASM::b(.L_8039E55C);
RUNTIME_PPC_JUMP_LABEL(.L_8039E520, 0x8039E520) //this is a jump label
/*8039E520 0039B320*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8039E524 0039B324*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039E528 0039B328*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039E52C 0039B32C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039E530 0039B330*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039E534 0039B334*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039E538 0039B338*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039E53C 0039B33C*/ PPC::Runtime::ASM::beq(.L_8039E544);
/*8039E540 0039B340*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8039E544, 0x8039E544) //this is a jump label
/*8039E544 0039B344*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8039E548 0039B348*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8039E54C 0039B34C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039E550 0039B350*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039E554 0039B354*/ PPC::Runtime::ASM::bctrl();
/*8039E558 0039B358*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039E55C, 0x8039E55C) //this is a jump label
/*8039E55C 0039B35C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8039E560 0039B360*/ PPC::Runtime::ASM::bne(.L_8039E520);
/*8039E564 0039B364*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039E568 0039B368*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8039E56C 0039B36C*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 8039E570 0039B370  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8039E574 0039B374*/ PPC::Runtime::ASM::beq(.L_8039E58C);
/*8039E578 0039B378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8039E57C 0039B37C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039E580 0039B380*/ PPC::Runtime::ASM::beq(.L_8039E58C);
/*8039E584 0039B384*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8039E588 0039B388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8039E58C, 0x8039E58C) //this is a jump label
/*8039E58C 0039B38C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039E590 0039B390*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8039E594 0039B394*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 8039E598 0039B398  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8039E59C 0039B39C*/ PPC::Runtime::ASM::beq(.L_8039E5B8);
/*8039E5A0 0039B3A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8039E5A4 0039B3A4*/ PPC::Runtime::ASM::subi(context->r0, context->r30, 0x1);
/*8039E5A8 0039B3A8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8039E5AC 0039B3AC*/ PPC::Runtime::ASM::bge(.L_8039E5B8);
/*8039E5B0 0039B3B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8039E5B4 0039B3B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8039E5B8, 0x8039E5B8) //this is a jump label
/*8039E5B8 0039B3B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039E5BC 0039B3BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039E5C0 0039B3C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039E5C4 0039B3C4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039E5C8 0039B3C8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039E5CC 0039B3CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039E5D0 0039B3D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8039E5D4 0039B3D4*/ PPC::Runtime::ASM::blr();
}