//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802A0560(PPC::Runtime::GCContext* context)
{
/*802A0560 0029D360*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A0564 0029D364*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A0568 0029D368*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A056C 0029D36C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 802A0570 0029D370  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802A0574 0029D374*/ PPC::Runtime::ASM::beq(.L_802A05B4);
/*802A0578 0029D378*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF978 @ Get_MemoryOffset_HighBit);
/*802A057C 0029D37C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BF978 @ Get_MemoryOffset_LowBit);
/*802A0580 0029D380*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802A0584 0029D384*/ PPC::Runtime::ASM::beq(.L_802A05A4);
/*802A0588 0029D388*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BFA54 @ Get_MemoryOffset_HighBit);
/*802A058C 0029D38C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BFA54 @ Get_MemoryOffset_LowBit);
/*802A0590 0029D390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802A0594 0029D394*/ PPC::Runtime::ASM::beq(.L_802A05A4);
/*802A0598 0029D398*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BFA40 @ Get_MemoryOffset_HighBit);
/*802A059C 0029D39C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BFA40 @ Get_MemoryOffset_LowBit);
/*802A05A0 0029D3A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802A05A4, 0x802A05A4) //this is a jump label
/*802A05A4 0029D3A4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*802A05A8 0029D3A8*/ PPC::Runtime::ASM::ble(.L_802A05B4);
/*802A05AC 0029D3AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802A05B0 0029D3B0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A05B4, 0x802A05B4) //this is a jump label
/*802A05B4 0029D3B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A05B8 0029D3B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802A05BC 0029D3BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A05C0 0029D3C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A05C4 0029D3C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A05C8 0029D3C8*/ PPC::Runtime::ASM::blr();
}