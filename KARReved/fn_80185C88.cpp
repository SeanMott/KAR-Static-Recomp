//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80185C88(PPC::Runtime::GCContext* context)
{
/*80185C88 00182A88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80185C8C 00182A8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80185C90 00182A90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80185C94 00182A94*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80185C98 00182A98*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80185C9C 00182A9C*/ PPC::Runtime::ASM::lis(context->r6, lbl_804AD810 @ Get_MemoryOffset_HighBit);
/*80185CA0 00182AA0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80185CA4 00182AA4*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*80185CA8 00182AA8*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*80185CAC 00182AAC*/ PPC::Runtime::ASM::addi(context->r31, context->r6, lbl_804AD810 @ Get_MemoryOffset_LowBit);
/*80185CB0 00182AB0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80185CB4 00182AB4*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r29, 24);
/*80185CB8 00182AB8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x9);
/*80185CBC 00182ABC*/ PPC::Runtime::ASM::ble(.L_80185CD0);
/*80185CC0 00182AC0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*80185CC4 00182AC4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80185CC8 00182AC8*/ PPC::Runtime::ASM::bl(OSReport);
/*80185CCC 00182ACC*/ PPC::Runtime::ASM::b(.L_80185D7C);
RUNTIME_PPC_JUMP_LABEL(.L_80185CD0, 0x80185CD0) //this is a jump label
/*80185CD0 00182AD0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r27, 24);
/*80185CD4 00182AD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*80185CD8 00182AD8*/ PPC::Runtime::ASM::beq(.L_80185CF4);
/*80185CDC 00182ADC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80185CE0 00182AE0*/ PPC::Runtime::ASM::beq(.L_80185CF4);
/*80185CE4 00182AE4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x40);
/*80185CE8 00182AE8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80185CEC 00182AEC*/ PPC::Runtime::ASM::bl(OSReport);
/*80185CF0 00182AF0*/ PPC::Runtime::ASM::b(.L_80185D7C);
RUNTIME_PPC_JUMP_LABEL(.L_80185CF4, 0x80185CF4) //this is a jump label
/*80185CF4 00182AF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11ac, context->r3));
/*80185CF8 00182AF8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r29, 24, 2);
/*80185CFC 00182AFC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80185D00 00182B00*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*80185D04 00182B04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80185D08 00182B08*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80185D0C 00182B0C*/ PPC::Runtime::ASM::bne(.L_80185D20);
/*80185D10 00182B10*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E58 @ Get_MemoryOffset_SDA21);
/*80185D14 00182B14*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80185D18 00182B18*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E60 @ Get_MemoryOffset_SDA21);
/*80185D1C 00182B1C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80185D20, 0x80185D20) //this is a jump label
/*80185D20 00182B20*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80185D24 00182B24*/ PPC::Runtime::ASM::bne(.L_80185D38);
/*80185D28 00182B28*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x68);
/*80185D2C 00182B2C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E58 @ Get_MemoryOffset_SDA21);
/*80185D30 00182B30*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80185D34 00182B34*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80185D38, 0x80185D38) //this is a jump label
/*80185D38 00182B38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/* 80185D3C 00182B3C  57 60 07 FF */ clrlwi. context->r0 , context->r27 , 31
/*80185D40 00182B40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*80185D44 00182B44*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80185D48 00182B48*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80185D4C 00182B4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*80185D50 00182B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80185D54 00182B54*/ PPC::Runtime::ASM::beq(.L_80185D7C);
/*80185D58 00182B58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80185D5C 00182B5C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80185D60 00182B60*/ PPC::Runtime::ASM::bne(.L_80185D74);
/*80185D64 00182B64*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E58 @ Get_MemoryOffset_SDA21);
/*80185D68 00182B68*/ PPC::Runtime::ASM::li(context->r4, 0x3f1);
/*80185D6C 00182B6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E60 @ Get_MemoryOffset_SDA21);
/*80185D70 00182B70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80185D74, 0x80185D74) //this is a jump label
/*80185D74 00182B74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80185D78 00182B78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80185D7C, 0x80185D7C) //this is a jump label
/*80185D7C 00182B7C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80185D80 00182B80*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80185D84 00182B84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80185D88 00182B88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80185D8C 00182B8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80185D90 00182B90*/ PPC::Runtime::ASM::blr();
}