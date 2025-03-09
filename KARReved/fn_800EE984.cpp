//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_grGetGlobalDeadPosNum.hpp"
#include "fn_loadGlobalDeadLocations?.hpp"
#include "fn_800CEEB8.hpp"



void fn_800EE984(PPC::Runtime::GCContext* context)
{
/*800EE984 000EB784*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800EE988 000EB788*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EE98C 000EB78C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800EE990 000EB790*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800EE994 000EB794*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*800EE998 000EB798*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800EE99C 000EB79C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800EE9A0 000EB7A0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*800EE9A4 000EB7A4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*800EE9A8 000EB7A8*/ PPC::Runtime::ASM::beq(.L_800EE9B4);
/*800EE9AC 000EB7AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800EE9B0 000EB7B0*/ PPC::Runtime::ASM::b(.L_800EE9B8);
RUNTIME_PPC_JUMP_LABEL(.L_800EE9B4, 0x800EE9B4) //this is a jump label
/*800EE9B4 000EB7B4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EE9B8, 0x800EE9B8) //this is a jump label
/*800EE9B8 000EB7B8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800EE9BC 000EB7BC*/ PPC::Runtime::ASM::beq(.L_800EEA44);
/*800EE9C0 000EB7C0*/ PPC::Runtime::ASM::bl(fn_grGetGlobalDeadPosNum);
/*800EE9C4 000EB7C4*/ PPC::Runtime::ASM::cmpw(context->r31, context->r3);
/*800EE9C8 000EB7C8*/ PPC::Runtime::ASM::ble(.L_800EE9E4);
/*800EE9CC 000EB7CC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_970 @ Get_MemoryOffset_HighBit);
/*800EE9D0 000EB7D0*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_971 @ Get_MemoryOffset_HighBit);
/*800EE9D4 000EB7D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_970 @ Get_MemoryOffset_LowBit);
/*800EE9D8 000EB7D8*/ PPC::Runtime::ASM::li(context->r4, 0x2c);
/*800EE9DC 000EB7DC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_971 @ Get_MemoryOffset_LowBit);
/*800EE9E0 000EB7E0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EE9E4, 0x800EE9E4) //this is a jump label
/*800EE9E4 000EB7E4*/ PPC::Runtime::ASM::mulli(context->r3, context->r31, 0xc);
/*800EE9E8 000EB7E8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x708, context->r26));
/*800EE9EC 000EB7EC*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800EE9F0 000EB7F0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800EE9F4 000EB7F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70c, context->r26));
/*800EE9F8 000EB7F8*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
/*800EE9FC 000EB7FC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800EEA00 000EB800*/ PPC::Runtime::ASM::b(.L_800EEA3C);
RUNTIME_PPC_JUMP_LABEL(.L_800EEA04, 0x800EEA04) //this is a jump label
/*800EEA04 000EB804*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800EEA08 000EB808*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800EEA0C 000EB80C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*800EEA10 000EB810*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*800EEA14 000EB814*/ PPC::Runtime::ASM::bl(fn_loadGlobalDeadLocations?);
/*800EEA18 000EB818*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800EEA1C 000EB81C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800EEA20 000EB820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70c, context->r26));
/*800EEA24 000EB824*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r29);
/*800EEA28 000EB828*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r30);
/*800EEA2C 000EB82C*/ PPC::Runtime::ASM::bl(fn_800CEEB8);
/*800EEA30 000EB830*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc);
/*800EEA34 000EB834*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*800EEA38 000EB838*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800EEA3C, 0x800EEA3C) //this is a jump label
/*800EEA3C 000EB83C*/ PPC::Runtime::ASM::cmpw(context->r27, context->r31);
/*800EEA40 000EB840*/ PPC::Runtime::ASM::blt(.L_800EEA04);
RUNTIME_PPC_JUMP_LABEL(.L_800EEA44, 0x800EEA44) //this is a jump label
/*800EEA44 000EB844*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800EEA48 000EB848*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800EEA4C 000EB84C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800EEA50 000EB850*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EEA54 000EB854*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800EEA58 000EB858*/ PPC::Runtime::ASM::blr();
}