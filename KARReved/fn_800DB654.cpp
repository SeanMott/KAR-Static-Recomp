//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DB6D4.hpp"



void fn_800DB654(PPC::Runtime::GCContext* context)
{
/*800DB654 000D8454*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800DB658 000D8458*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DB65C 000D845C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DB660 000D8460*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DB664 000D8464*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800DB668 000D8468*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DB66C 000D846C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800DB670 000D8470*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DB674 000D8474*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800DB678 000D8478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800DB67C 000D847C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r31);
/*800DB680 000D8480*/ PPC::Runtime::ASM::bgt(.L_800DB69C);
/*800DB684 000D8484*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_930 @ Get_MemoryOffset_HighBit);
/*800DB688 000D8488*/ PPC::Runtime::ASM::lis(context->r5, "String_Debug" itCounterIdAll->idParamNum>idParamID ""@ha
/* 800DB68C 000D848C  38 63 3E AC */	addi r3, r3, MemoryOffset_930@l
/* 800DB690 000D8490  38 80 03 C7 */	li r4, 0x3c7
/* 800DB694 000D8494  38 A5 3E B8 */	addi r5, r5," tring_Debug_ "bitCounterIdAll->idParamNum>idParamI" @ Get_MemoryOffset_LowBit);
/*800DB698 000D8498*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800DB69C, 0x800DB69C) //this is a jump label
/*800DB69C 000D849C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800DB6A0 000D84A0*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 3);
/*800DB6A4 000D84A4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x863);
/*800DB6A8 000D84A8*/ PPC::Runtime::ASM::li(context->r4, 0x64);
/*800DB6AC 000D84AC*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*800DB6B0 000D84B0*/ PPC::Runtime::ASM::bl(fn_800DB6D4);
/*800DB6B4 000D84B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DB6B8 000D84B8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x863);
/*800DB6BC 000D84BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DB6C0 000D84C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DB6C4 000D84C4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DB6C8 000D84C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DB6CC 000D84CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800DB6D0 000D84D0*/ PPC::Runtime::ASM::blr();
}