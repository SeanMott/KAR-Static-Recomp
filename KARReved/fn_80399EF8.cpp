//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB78.hpp"



void fn_80399EF8(PPC::Runtime::GCContext* context)
{
/*80399EF8 00396CF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80399EFC 00396CFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80399F00 00396D00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399F04 00396D04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80399F08 00396D08  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80399F0C 00396D0C*/ PPC::Runtime::ASM::beq(.L_80399F3C);
/*80399F10 00396D10*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5EB0 @ Get_MemoryOffset_HighBit);
/*80399F14 00396D14*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5EB0 @ Get_MemoryOffset_LowBit);
/*80399F18 00396D18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80399F1C 00396D1C*/ PPC::Runtime::ASM::beq(.L_80399F2C);
/*80399F20 00396D20*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399F24 00396D24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399F28 00396D28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80399F2C, 0x80399F2C) //this is a jump label
/*80399F2C 00396D2C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80399F30 00396D30*/ PPC::Runtime::ASM::ble(.L_80399F3C);
/*80399F34 00396D34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80399F38 00396D38*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80399F3C, 0x80399F3C) //this is a jump label
/*80399F3C 00396D3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399F40 00396D40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80399F44 00396D44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80399F48 00396D48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80399F4C 00396D4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80399F50 00396D50*/ PPC::Runtime::ASM::blr();
}