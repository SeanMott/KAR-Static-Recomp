//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017CF14(PPC::Runtime::GCContext* context)
{
/*8017CF14 00179D14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017CF18 00179D18*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017CF1C 00179D1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017CF20 00179D20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017CF24 00179D24*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017CF28 00179D28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xed0, context->r3));
/*8017CF2C 00179D2C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017CF30 00179D30*/ PPC::Runtime::ASM::beq(.L_8017CF3C);
/*8017CF34 00179D34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8017CF38 00179D38*/ PPC::Runtime::ASM::b(.L_8017CF40);
RUNTIME_PPC_JUMP_LABEL(.L_8017CF3C, 0x8017CF3C) //this is a jump label
/*8017CF3C 00179D3C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8017CF40, 0x8017CF40) //this is a jump label
/*8017CF40 00179D40*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8017CF44 00179D44*/ PPC::Runtime::ASM::bne(.L_8017CF6C);
/*8017CF48 00179D48*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AD2F8 @ Get_MemoryOffset_HighBit);
/*8017CF4C 00179D4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804AD2F8 @ Get_MemoryOffset_LowBit);
/*8017CF50 00179D50*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8017CF54 00179D54*/ PPC::Runtime::ASM::bl(OSReport);
/*8017CF58 00179D58*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AD318 @ Get_MemoryOffset_HighBit);
/*8017CF5C 00179D5C*/ PPC::Runtime::ASM::li(context->r4, 0xc0);
/*8017CF60 00179D60*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804AD318 @ Get_MemoryOffset_LowBit);
/*8017CF64 00179D64*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E00 @ Get_MemoryOffset_SDA21);
/*8017CF68 00179D68*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017CF6C, 0x8017CF6C) //this is a jump label
/*8017CF6C 00179D6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017CF70 00179D70*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r31));
/*8017CF74 00179D74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017CF78 00179D78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017CF7C 00179D7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017CF80 00179D80*/ PPC::Runtime::ASM::blr();
}