//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80057970(PPC::Runtime::GCContext* context)
{
/*80057970 00054770*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80057974 00054774*/ PPC::Runtime::ASM::mflr(context->r0);
/*80057978 00054778*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8005797C 0005477C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80057980 00054780*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80057984 00054784*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_HighBit);
/*80057988 00054788*/ PPC::Runtime::ASM::lis(context->r6, MemoryOffset_186 @ Get_MemoryOffset_HighBit);
/*8005798C 0005478C*/ PPC::Runtime::ASM::addi(context->r29, context->r5, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_LowBit);
/*80057990 00054790*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80057994 00054794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x968, context->r29));
/*80057998 00054798*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8005799C 0005479C*/ PPC::Runtime::ASM::addi(context->r28, context->r6, MemoryOffset_186 @ Get_MemoryOffset_LowBit);
/*800579A0 000547A0*/ PPC::Runtime::ASM::lis(context->r26, 0x4000);
/*800579A4 000547A4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800579A8 000547A8*/ PPC::Runtime::ASM::bne(.L_800579BC);
/*800579AC 000547AC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*800579B0 000547B0*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x68);
/*800579B4 000547B4*/ PPC::Runtime::ASM::li(context->r4, 0xcf);
/*800579B8 000547B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800579BC, 0x800579BC) //this is a jump label
/*800579BC 000547BC*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x1f);
/*800579C0 000547C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800579C4 000547C4*/ PPC::Runtime::ASM::clrrwi(context->r30, context->r0, 5);
/*800579C8 000547C8*/ PPC::Runtime::ASM::addi(context->r5, context->r25, 0xc);
/*800579CC 000547CC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800579D0, 0x800579D0) //this is a jump label
/*800579D0 000547D0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800579D4 000547D4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800579D8 000547D8*/ PPC::Runtime::ASM::beq(.L_800579E4);
/*800579DC 000547DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800579E0 000547E0*/ PPC::Runtime::ASM::b(.L_800579E8);
RUNTIME_PPC_JUMP_LABEL(.L_800579E4, 0x800579E4) //this is a jump label
/*800579E4 000547E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_800579E8, 0x800579E8) //this is a jump label
/*800579E8 000547E8*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*800579EC 000547EC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*800579F0 000547F0*/ PPC::Runtime::ASM::blt(.L_80057A0C);
/*800579F4 000547F4*/ PPC::Runtime::ASM::subf(context->r0, context->r30, context->r0);
/*800579F8 000547F8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r26);
/*800579FC 000547FC*/ PPC::Runtime::ASM::bgt(.L_80057A0C);
/*80057A00 00054800*/ PPC::Runtime::ASM::mr(context->r26, context->r0);
/*80057A04 00054804*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80057A08 00054808*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80057A0C, 0x80057A0C) //this is a jump label
/*80057A0C 0005480C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80057A10 00054810*/ PPC::Runtime::ASM::beq(.L_80057A28);
/*80057A14 00054814*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80057A18 00054818*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*80057A1C 0005481C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80057A20 00054820*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80057A24 00054824*/ PPC::Runtime::ASM::b(.L_800579D0);
RUNTIME_PPC_JUMP_LABEL(.L_80057A28, 0x80057A28) //this is a jump label
/*80057A28 00054828*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80057A2C 0005482C*/ PPC::Runtime::ASM::bne(.L_80057A40);
/*80057A30 00054830*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80057A34 00054834*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x78);
/*80057A38 00054838*/ PPC::Runtime::ASM::li(context->r4, 0xec);
/*80057A3C 0005483C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80057A40, 0x80057A40) //this is a jump label
/*80057A40 00054840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x968, context->r29));
/*80057A44 00054844*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_HighBit);
/*80057A48 00054848*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_LowBit);
/*80057A4C 0005484C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80057A50 00054850*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x968, context->r29));
/*80057A54 00054854*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80057A58 00054858*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80057A5C 0005485C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80057A60 00054860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80057A64 00054864*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80057A68 00054868*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96c, context->r5));
/*80057A6C 0005486C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x970, context->r5));
/*80057A70 00054870*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80057A74 00054874*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80057A78 00054878*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96c, context->r5));
/*80057A7C 0005487C*/ PPC::Runtime::ASM::ble(.L_80057A84);
/*80057A80 00054880*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x970, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80057A84, 0x80057A84) //this is a jump label
/*80057A84 00054884*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80057A88 00054888*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80057A8C 0005488C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80057A90 00054890*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80057A94 00054894*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80057A98 00054898*/ PPC::Runtime::ASM::blr();
}