//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80300D14(PPC::Runtime::GCContext* context)
{
/*80300D14 002FDB14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80300D18 002FDB18*/ PPC::Runtime::ASM::mflr(context->r0);
/*80300D1C 002FDB1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80300D20 002FDB20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80300D24 002FDB24*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80300D28 002FDB28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80300D2C 002FDB2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*80300D30 002FDB30*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80300D34 002FDB34*/ PPC::Runtime::ASM::beq(.L_80300D40);
/* 80300D38 002FDB38  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80300D3C 002FDB3C*/ PPC::Runtime::ASM::beq(.L_80300D8C);
RUNTIME_PPC_JUMP_LABEL(.L_80300D40, 0x80300D40) //this is a jump label
/*80300D40 002FDB40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x474, context->r3));
/*80300D44 002FDB44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80300D48 002FDB48*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x10);
/*80300D4C 002FDB4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80300D50 002FDB50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80300D54 002FDB54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*80300D58 002FDB58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80300D5C 002FDB5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80300D60 002FDB60*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80300D64 002FDB64*/ PPC::Runtime::ASM::bctrl();
/*80300D68 002FDB68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80300D6C 002FDB6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*80300D70 002FDB70*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xe);
/*80300D74 002FDB74*/ PPC::Runtime::ASM::bge(.L_80300D8C);
/*80300D78 002FDB78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r3));
/*80300D7C 002FDB7C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80300D80 002FDB80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80300D84 002FDB84*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80300D88 002FDB88*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80300D8C, 0x80300D8C) //this is a jump label
/*80300D8C 002FDB8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80300D90 002FDB90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x514, context->r3));
/*80300D94 002FDB94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80300D98 002FDB98*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80300D9C 002FDB9C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80300DA0 002FDBA0*/ PPC::Runtime::ASM::bctrl();
/*80300DA4 002FDBA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80300DA8 002FDBA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80300DAC 002FDBAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80300DB0 002FDBB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80300DB4 002FDBB4*/ PPC::Runtime::ASM::blr();
}