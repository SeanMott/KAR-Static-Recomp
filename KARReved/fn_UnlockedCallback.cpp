//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_UnlockedCallback.hpp"
#include "fn_UnlockedCallback.hpp"
#include "fn___CARDUnlockedHandler.hpp"
#include "fn___CARDUnlockedHandler.hpp"
#include "EXILock.hpp"
#include "fn_Retry.hpp"



void fn_UnlockedCallback(PPC::Runtime::GCContext* context)
{
/*803E26A8 003DF4A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E26AC 003DF4AC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803E26B0 003DF4B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E26B4 003DF4B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803E26B8 003DF4B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E26BC 003DF4BC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803E26C0 003DF4C0*/ PPC::Runtime::ASM::mulli(context->r5, context->r31, 0x110);
/*803E26C4 003DF4C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E26C8 003DF4C8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E26CC 003DF4CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E26D0 003DF4D0*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r5);
/*803E26D4 003DF4D4*/ PPC::Runtime::ASM::blt(.L_803E271C);
/*803E26D8 003DF4D8*/ PPC::Runtime::ASM::lis(context->r3, fn_UnlockedCallback @ Get_MemoryOffset_HighBit);
/*803E26DC 003DF4DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_UnlockedCallback @ Get_MemoryOffset_LowBit);
/*803E26E0 003DF4E0*/ PPC::Runtime::ASM::lis(context->r3, fn___CARDUnlockedHandler @ Get_MemoryOffset_HighBit);
/*803E26E4 003DF4E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r30));
/*803E26E8 003DF4E8*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn___CARDUnlockedHandler @ Get_MemoryOffset_LowBit);
/*803E26EC 003DF4EC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803E26F0 003DF4F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803E26F4 003DF4F4*/ PPC::Runtime::ASM::bl(EXILock);
/*803E26F8 003DF4F8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E26FC 003DF4FC*/ PPC::Runtime::ASM::bne(.L_803E2708);
/*803E2700 003DF500*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803E2704 003DF504*/ PPC::Runtime::ASM::b(.L_803E271C);
RUNTIME_PPC_JUMP_LABEL(.L_803E2708, 0x803E2708) //this is a jump label
/*803E2708 003DF508*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E270C 003DF50C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r30));
/*803E2710 003DF510*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E2714 003DF514*/ PPC::Runtime::ASM::bl(fn_Retry);
/*803E2718 003DF518*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803E271C, 0x803E271C) //this is a jump label
/*803E271C 003DF51C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803E2720 003DF520*/ PPC::Runtime::ASM::bge(.L_803E27A0);
/*803E2724 003DF524*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*803E2728 003DF528*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf3);
/*803E272C 003DF52C*/ PPC::Runtime::ASM::beq(.L_803E27A0);
/*803E2730 003DF530*/ PPC::Runtime::ASM::bge(.L_803E274C);
/*803E2734 003DF534*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x52);
/*803E2738 003DF538*/ PPC::Runtime::ASM::beq(.L_803E2758);
/*803E273C 003DF53C*/ PPC::Runtime::ASM::blt(.L_803E27A0);
/*803E2740 003DF540*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf1);
/*803E2744 003DF544*/ PPC::Runtime::ASM::bge(.L_803E2780);
/*803E2748 003DF548*/ PPC::Runtime::ASM::b(.L_803E27A0);
RUNTIME_PPC_JUMP_LABEL(.L_803E274C, 0x803E274C) //this is a jump label
/*803E274C 003DF54C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf5);
/*803E2750 003DF550*/ PPC::Runtime::ASM::bge(.L_803E27A0);
/*803E2754 003DF554*/ PPC::Runtime::ASM::b(.L_803E2780);
RUNTIME_PPC_JUMP_LABEL(.L_803E2758, 0x803E2758) //this is a jump label
/*803E2758 003DF558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
/*803E275C 003DF55C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803E2760 003DF560*/ PPC::Runtime::ASM::mr(context->r12, context->r0);
/*803E2764 003DF564*/ PPC::Runtime::ASM::beq(.L_803E27A0);
/*803E2768 003DF568*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E276C 003DF56C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803E2770 003DF570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
/*803E2774 003DF574*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/* 803E2778 003DF578  4E 80 00 21 */ blrl
/*803E277C 003DF57C*/ PPC::Runtime::ASM::b(.L_803E27A0);
RUNTIME_PPC_JUMP_LABEL(.L_803E2780, 0x803E2780) //this is a jump label
/*803E2780 003DF580*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r30));
/*803E2784 003DF584*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803E2788 003DF588*/ PPC::Runtime::ASM::beq(.L_803E27A0);
/*803E278C 003DF58C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E2790 003DF590*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803E2794 003DF594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r30));
/*803E2798 003DF598*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/* 803E279C 003DF59C  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803E27A0, 0x803E27A0) //this is a jump label
/*803E27A0 003DF5A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E27A4 003DF5A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E27A8 003DF5A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E27AC 003DF5AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803E27B0 003DF5B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E27B4 003DF5B4*/ PPC::Runtime::ASM::blr();
}