//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80167EF8(PPC::Runtime::GCContext* context)
{
/*80167EF8 00164CF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80167EFC 00164CFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80167F00 00164D00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80167F04 00164D04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80167F08 00164D08*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80167F0C 00164D0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80167F10 00164D10*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80167F14 00164D14*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80167F18 00164D18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r3));
/*80167F1C 00164D1C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80167F20 00164D20*/ PPC::Runtime::ASM::beq(.L_80167F4C);
/*80167F24 00164D24*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80167F28 00164D28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80167F2C 00164D2C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x60);
/*80167F30 00164D30*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80167F34 00164D34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r4));
/*80167F38 00164D38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*80167F3C 00164D3C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80167F40 00164D40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80167F44 00164D44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r4));
/*80167F48 00164D48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80167F4C, 0x80167F4C) //this is a jump label
/*80167F4C 00164D4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80167F50 00164D50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80167F54 00164D54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80167F58 00164D58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80167F5C 00164D5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80167F60 00164D60*/ PPC::Runtime::ASM::blr();
}