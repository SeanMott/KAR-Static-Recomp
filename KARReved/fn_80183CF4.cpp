//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_80183CF4(PPC::Runtime::GCContext* context)
{
/*80183CF4 00180AF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80183CF8 00180AF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80183CFC 00180AFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80183D00 00180B00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183D04 00180B04*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183D08 00180B08*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80183D0C 00180B0C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80183D10 00180B10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1168, context->r3));
/*80183D14 00180B14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80183D18 00180B18*/ PPC::Runtime::ASM::beq(.L_80183D90);
/*80183D1C 00180B1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80183D20 00180B20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80183D24 00180B24*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80183D28 00180B28*/ PPC::Runtime::ASM::bne(.L_80183D3C);
/*80183D2C 00180B2C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E38 @ Get_MemoryOffset_SDA21);
/*80183D30 00180B30*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80183D34 00180B34*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E40 @ Get_MemoryOffset_SDA21);
/*80183D38 00180B38*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80183D3C, 0x80183D3C) //this is a jump label
/*80183D3C 00180B3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80183D40 00180B40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80183D44 00180B44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80183D48 00180B48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80183D4C 00180B4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80183D50 00180B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80183D54 00180B54*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80183D58 00180B58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80183D5C 00180B5C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80183D60 00180B60*/ PPC::Runtime::ASM::beq(.L_80183D7C);
/*80183D64 00180B64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80183D68 00180B68*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80183D6C 00180B6C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80183D70 00180B70*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80183D74 00180B74*/ PPC::Runtime::ASM::bl(fn_800644AC);
/*80183D78 00180B78*/ PPC::Runtime::ASM::b(.L_80183D90);
RUNTIME_PPC_JUMP_LABEL(.L_80183D7C, 0x80183D7C) //this is a jump label
/*80183D7C 00180B7C*/ PPC::Runtime::ASM::lis(context->r3, String_ "mnlandialogue." Get_MemoryOffset_HighBit);
/*80183D80 00180B80*/ PPC::Runtime::ASM::li(context->r4, 0x4f);
/*80183D84 00180B84*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "mnlandialogue." Get_MemoryOffset_LowBit);
/*80183D88 00180B88*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E48 @ Get_MemoryOffset_SDA21);
/*80183D8C 00180B8C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80183D90, 0x80183D90) //this is a jump label
/*80183D90 00180B90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80183D94 00180B94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183D98 00180B98*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183D9C 00180B9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80183DA0 00180BA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80183DA4 00180BA4*/ PPC::Runtime::ASM::blr();
}