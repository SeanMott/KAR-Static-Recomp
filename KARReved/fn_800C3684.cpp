//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800C3510.hpp"



void fn_800C3684(PPC::Runtime::GCContext* context)
{
/*800C3684 000C0484*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800C3688 000C0488*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C368C 000C048C*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_24 @ Get_MemoryOffset_HighBit);
/*800C3690 000C0490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C3694 000C0494*/ PPC::Runtime::ASM::addi(context->r7, context->r5, MemoryOffset_24 @ Get_MemoryOffset_LowBit);
/*800C3698 000C0498*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C369C 000C049C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C36A0 000C04A0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r4));
/*800C36A4 000C04A4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800C36A8 000C04A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/* 800C36AC 000C04AC  54 00 07 BF */ clrlwi. context->r0 , context->r0 , 30
/*800C36B0 000C04B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800C36B4 000C04B4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C36B8 000C04B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C36BC 000C04BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C36C0 000C04C0*/ PPC::Runtime::ASM::bne(.L_800C36D0);
/*800C36C4 000C04C4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800C36C8 000C04C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C36CC 000C04CC*/ PPC::Runtime::ASM::b(.L_800C36EC);
RUNTIME_PPC_JUMP_LABEL(.L_800C36D0, 0x800C36D0) //this is a jump label
/*800C36D0 000C04D0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800C36D4 000C04D4*/ PPC::Runtime::ASM::bl(fn_800C3510);
/*800C36D8 000C04D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*800C36DC 000C04DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C36E0 000C04E0*/ PPC::Runtime::ASM::bne(.L_800C36EC);
/*800C36E4 000C04E4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800C36E8 000C04E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800C36EC, 0x800C36EC) //this is a jump label
/*800C36EC 000C04EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800C36F0 000C04F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C36F4 000C04F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800C36F8 000C04F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800C36FC 000C04FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800C3700 000C0500*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800C3704 000C0504*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800C3708 000C0508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800C370C 000C050C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C3710 000C0510*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800C3714 000C0514*/ PPC::Runtime::ASM::blr();
}