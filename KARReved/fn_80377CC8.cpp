//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80378568.hpp"



void fn_80377CC8(PPC::Runtime::GCContext* context)
{
/*80377CC8 00374AC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80377CCC 00374ACC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80377CD0 00374AD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80377CD4 00374AD4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80377CD8 00374AD8*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80377CDC 00374ADC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F13E0 @ Get_MemoryOffset_HighBit);
/*80377CE0 00374AE0*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*80377CE4 00374AE4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, lbl_804F13E0 @ Get_MemoryOffset_LowBit);
/*80377CE8 00374AE8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80377CEC 00374AEC*/ PPC::Runtime::ASM::addi(context->r26, context->r29, 0xd10);
RUNTIME_PPC_JUMP_LABEL(.L_80377CF0, 0x80377CF0) //this is a jump label
/*80377CF0 00374AF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80377CF4 00374AF4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 14 @ Get_MemoryOffset_SDA21);
/*80377CF8 00374AF8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80377CFC 00374AFC*/ PPC::Runtime::ASM::bl(OSReport);
/*80377D00 00374B00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*80377D04 00374B04*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xe80);
/*80377D08 00374B08*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80377D0C 00374B0C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80377D10 00374B10*/ PPC::Runtime::ASM::bl(OSReport);
/*80377D14 00374B14*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0xd10);
/*80377D18 00374B18*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80377D1C 00374B1C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r31);
/*80377D20 00374B20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80377D24 00374B24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80377D28 00374B28*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80377D2C 00374B2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80377D30 00374B30*/ PPC::Runtime::ASM::bl(fn_80378568);
/*80377D34 00374B34*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80377D38 00374B38*/ PPC::Runtime::ASM::addi(context->r27, context->r26, 0xc);
/*80377D3C 00374B3C*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*80377D40 00374B40*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80377D44 00374B44*/ PPC::Runtime::ASM::b(.L_80377D6C);
RUNTIME_PPC_JUMP_LABEL(.L_80377D48, 0x80377D48) //this is a jump label
/*80377D48 00374B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80377D4C 00374B4C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xea4);
/*80377D50 00374B50*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r28);
/*80377D54 00374B54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80377D58 00374B58*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/* 80377D5C 00374B5C  4C C6 32 42 */ crset context->cr1eq
/*80377D60 00374B60*/ PPC::Runtime::ASM::bl(OSReport);
/*80377D64 00374B64*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*80377D68 00374B68*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80377D6C, 0x80377D6C) //this is a jump label
/*80377D6C 00374B6C*/ PPC::Runtime::ASM::cmplw(context->r24, context->r30);
/*80377D70 00374B70*/ PPC::Runtime::ASM::blt(.L_80377D48);
/*80377D74 00374B74*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xeb4);
/*80377D78 00374B78*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80377D7C 00374B7C*/ PPC::Runtime::ASM::bl(OSReport);
/*80377D80 00374B80*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*80377D84 00374B84*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x10);
/*80377D88 00374B88*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x16);
/*80377D8C 00374B8C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
/*80377D90 00374B90*/ PPC::Runtime::ASM::blt(.L_80377CF0);
/*80377D94 00374B94*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80377D98 00374B98*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*80377D9C 00374B9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80377DA0 00374BA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80377DA4 00374BA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80377DA8 00374BA8*/ PPC::Runtime::ASM::blr();
}