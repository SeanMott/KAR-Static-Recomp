//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802AF6C0(PPC::Runtime::GCContext* context)
{
/*802AF6C0 002AC4C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AF6C4 002AC4C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AF6C8 002AC4C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF6CC 002AC4CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF6D0 002AC4D0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AF6D4 002AC4D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AF6D8 002AC4D8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AF6DC 002AC4DC*/ PPC::Runtime::ASM::beq(.L_802AF7AC);
/*802AF6E0 002AC4E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802AF6E4 002AC4E4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x30);
/*802AF6E8 002AC4E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802AF6EC 002AC4EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AF6F0 002AC4F0*/ PPC::Runtime::ASM::beq(.L_802AF728);
/*802AF6F4 002AC4F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802AF6F8 002AC4F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x30);
/*802AF6FC 002AC4FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802AF700 002AC500*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802AF704 002AC504*/ PPC::Runtime::ASM::beq(.L_802AF728);
/*802AF708 002AC508*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802AF70C 002AC50C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x30);
/*802AF710 002AC510*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802AF714 002AC514*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802AF718 002AC518*/ PPC::Runtime::ASM::beq(.L_802AF728);
/*802AF71C 002AC51C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802AF720 002AC520*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802AF724 002AC524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AF728, 0x802AF728) //this is a jump label
/*802AF728 002AC528*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AF72C 002AC52C*/ PPC::Runtime::ASM::beq(.L_802AF79C);
/*802AF730 002AC530*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AF734 002AC534*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*802AF738 002AC538*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AF73C 002AC53C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AF740 002AC540*/ PPC::Runtime::ASM::beq(.L_802AF764);
/*802AF744 002AC544*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AF748 002AC548*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*802AF74C 002AC54C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AF750 002AC550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802AF754 002AC554*/ PPC::Runtime::ASM::beq(.L_802AF764);
/*802AF758 002AC558*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AF75C 002AC55C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AF760 002AC560*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AF764, 0x802AF764) //this is a jump label
/*802AF764 002AC564*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AF768 002AC568*/ PPC::Runtime::ASM::beq(.L_802AF79C);
/*802AF76C 002AC56C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AF770 002AC570*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AF774 002AC574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AF778 002AC578*/ PPC::Runtime::ASM::beq(.L_802AF79C);
/*802AF77C 002AC57C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AF780 002AC580*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AF784 002AC584*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AF788 002AC588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AF78C 002AC58C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AF790 002AC590*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AF794 002AC594*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AF798 002AC598*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AF79C, 0x802AF79C) //this is a jump label
/*802AF79C 002AC59C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AF7A0 002AC5A0*/ PPC::Runtime::ASM::ble(.L_802AF7AC);
/*802AF7A4 002AC5A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AF7A8 002AC5A8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AF7AC, 0x802AF7AC) //this is a jump label
/*802AF7AC 002AC5AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF7B0 002AC5B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AF7B4 002AC5B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF7B8 002AC5B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AF7BC 002AC5BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AF7C0 002AC5C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AF7C4 002AC5C4*/ PPC::Runtime::ASM::blr();
}