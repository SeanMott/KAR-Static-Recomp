//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B3B6C.hpp"



void fn_802B3A4C(PPC::Runtime::GCContext* context)
{
/*802B3A4C 002B084C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*802B3A50 002B0850*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B3A54 002B0854*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802B3A58 002B0858*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802B3A5C 002B085C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*802B3A60 002B0860*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802B3A64 002B0864*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802B3A68 002B0868*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B3A6C 002B086C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x4);
/*802B3A70 002B0870*/ PPC::Runtime::ASM::addi(context->r30, context->r28, 0x4);
/*802B3A74 002B0874*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802B3A78 002B0878*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802B3A7C 002B087C*/ PPC::Runtime::ASM::lis(context->r3, __files @ Get_MemoryOffset_HighBit);
/*802B3A80 002B0880*/ PPC::Runtime::ASM::addi(context->r3, context->r3, __files @ Get_MemoryOffset_LowBit);
/*802B3A84 002B0884*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B3A88 002B0888*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xa0);
/*802B3A8C 002B088C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802B3A90 002B0890*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802B3A94 002B0894*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B3A98 002B0898*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B3A9C 002B089C*/ PPC::Runtime::ASM::b(.L_802B3B44);
RUNTIME_PPC_JUMP_LABEL(.L_802B3AA0, 0x802B3AA0) //this is a jump label
/*802B3AA0 002B08A0*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B3AA4 002B08A4*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*802B3AA8 002B08A8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802B3AAC 002B08AC  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*802B3AB0 002B08B0*/ PPC::Runtime::ASM::bne(.L_802B3ACC);
/*802B3AB4 002B08B4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C4A94 @ Get_MemoryOffset_HighBit);
/*802B3AB8 002B08B8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802B3ABC 002B08BC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804C4A94 @ Get_MemoryOffset_LowBit);
/*802B3AC0 002B08C0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802B3AC4 002B08C4*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802B3AC8 002B08C8*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802B3ACC, 0x802B3ACC) //this is a jump label
/*802B3ACC 002B08CC*/ PPC::Runtime::ASM::addic.(context->r3, context->r27, 0x8);
/*802B3AD0 002B08D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B3AD4 002B08D4*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B3AD8 002B08D8*/ PPC::Runtime::ASM::beq(.L_802B3AEC);
/*802B3ADC 002B08DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*802B3AE0 002B08E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B3AE4 002B08E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*802B3AE8 002B08E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802B3AEC, 0x802B3AEC) //this is a jump label
/*802B3AEC 002B08EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B3AF0 002B08F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802B3AF4 002B08F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B3AF8 002B08F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B3AFC 002B08FC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802B3B00 002B0900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B3B04 002B0904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802B3B08 002B0908*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B3B0C 002B090C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802B3B10 002B0910*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802B3B14 002B0914*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802B3B18 002B0918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802B3B1C 002B091C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B3B20 002B0920*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B3B24 002B0924*/ PPC::Runtime::ASM::beq(.L_802B3B38);
/*802B3B28 002B0928*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*802B3B2C 002B092C*/ PPC::Runtime::ASM::bl(fn_802B3B6C);
/*802B3B30 002B0930*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B3B34 002B0934*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802B3B38, 0x802B3B38) //this is a jump label
/*802B3B38 002B0938*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B3B3C 002B093C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802B3B40 002B0940*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B3B44, 0x802B3B44) //this is a jump label
/*802B3B44 002B0944*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B3B48 002B0948*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*802B3B4C 002B094C*/ PPC::Runtime::ASM::bne(.L_802B3AA0);
/*802B3B50 002B0950*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*802B3B54 002B0954*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802B3B58 002B0958*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*802B3B5C 002B095C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802B3B60 002B0960*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B3B64 002B0964*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*802B3B68 002B0968*/ PPC::Runtime::ASM::blr();
}