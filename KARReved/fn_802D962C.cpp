//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EFFB8.hpp"



void fn_802D962C(PPC::Runtime::GCContext* context)
{
/*802D962C 002D642C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D9630 002D6430*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D9634 002D6434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D9638 002D6438*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D963C 002D643C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802D9640 002D6440*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802D9644 002D6444  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802D9648 002D6448*/ PPC::Runtime::ASM::beq(.L_802D96A4);
/*802D964C 002D644C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1EE4 @ Get_MemoryOffset_HighBit);
/*802D9650 002D6450*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1EE4 @ Get_MemoryOffset_LowBit);
/*802D9654 002D6454*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802D9658 002D6458*/ PPC::Runtime::ASM::beq(.L_802D9694);
/*802D965C 002D645C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802D9660 002D6460*/ PPC::Runtime::ASM::lis(context->r3, String_ "AC_RUN_LOO" 1 @ Get_MemoryOffset_HighBit);
/*802D9664 002D6464*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802D9668 002D6468*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802D966C 002D646C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802D9670 002D6470*/ PPC::Runtime::ASM::addi(context->r4, context->r3, String_ "AC_RUN_LOO" 1 @ Get_MemoryOffset_LowBit);
/*802D9674 002D6474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802D9678 002D6478*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802D967C 002D647C*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802D9680 002D6480*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802D9684 002D6484*/ PPC::Runtime::ASM::beq(.L_802D9694);
/*802D9688 002D6488*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802D968C 002D648C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802D9690 002D6490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802D9694, 0x802D9694) //this is a jump label
/*802D9694 002D6494*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802D9698 002D6498*/ PPC::Runtime::ASM::ble(.L_802D96A4);
/*802D969C 002D649C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802D96A0 002D64A0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802D96A4, 0x802D96A4) //this is a jump label
/*802D96A4 002D64A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D96A8 002D64A8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802D96AC 002D64AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D96B0 002D64B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D96B4 002D64B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D96B8 002D64B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D96BC 002D64BC*/ PPC::Runtime::ASM::blr();
}