//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"



void fn_802CBF08(PPC::Runtime::GCContext* context)
{
/*802CBF08 002C8D08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802CBF0C 002C8D0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802CBF10 002C8D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802CBF14 002C8D14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802CBF18 002C8D18*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802CBF1C 002C8D1C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802CBF20 002C8D20  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802CBF24 002C8D24*/ PPC::Runtime::ASM::beq(.L_802CBFD0);
/*802CBF28 002C8D28*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D0E3C @ Get_MemoryOffset_HighBit);
/*802CBF2C 002C8D2C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4c);
/*802CBF30 002C8D30*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D0E3C @ Get_MemoryOffset_LowBit);
/*802CBF34 002C8D34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802CBF38 002C8D38*/ PPC::Runtime::ASM::beq(.L_802CBF5C);
/*802CBF3C 002C8D3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*802CBF40 002C8D40*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802CBF44 002C8D44*/ PPC::Runtime::ASM::beq(.L_802CBF5C);
/*802CBF48 002C8D48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBF4C 002C8D4C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802CBF50 002C8D50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802CBF54 002C8D54*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBF58 002C8D58*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBF5C, 0x802CBF5C) //this is a jump label
/*802CBF5C 002C8D5C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802CBF60 002C8D60*/ PPC::Runtime::ASM::beq(.L_802CBFC0);
/*802CBF64 002C8D64*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D0F20 @ Get_MemoryOffset_HighBit);
/*802CBF68 002C8D68*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x10);
/*802CBF6C 002C8D6C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D0F20 @ Get_MemoryOffset_LowBit);
/*802CBF70 002C8D70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802CBF74 002C8D74*/ PPC::Runtime::ASM::beq(.L_802CBFC0);
/*802CBF78 002C8D78*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802CBF7C 002C8D7C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802CBF80 002C8D80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802CBF84 002C8D84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*802CBF88 002C8D88*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802CBF8C 002C8D8C*/ PPC::Runtime::ASM::beq(.L_802CBF98);
/*802CBF90 002C8D90*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802CBF94 002C8D94*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_802CBF98, 0x802CBF98) //this is a jump label
/*802CBF98 002C8D98*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x10);
/*802CBF9C 002C8D9C*/ PPC::Runtime::ASM::beq(.L_802CBFC0);
/*802CBFA0 002C8DA0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*802CBFA4 002C8DA4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*802CBFA8 002C8DA8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*802CBFAC 002C8DAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802CBFB0 002C8DB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802CBFB4 002C8DB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802CBFB8 002C8DB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBFBC 002C8DBC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBFC0, 0x802CBFC0) //this is a jump label
/*802CBFC0 002C8DC0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802CBFC4 002C8DC4*/ PPC::Runtime::ASM::ble(.L_802CBFD0);
/*802CBFC8 002C8DC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802CBFCC 002C8DCC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802CBFD0, 0x802CBFD0) //this is a jump label
/*802CBFD0 002C8DD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802CBFD4 002C8DD4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802CBFD8 002C8DD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802CBFDC 002C8DDC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802CBFE0 002C8DE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802CBFE4 002C8DE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802CBFE8 002C8DE8*/ PPC::Runtime::ASM::blr();
}