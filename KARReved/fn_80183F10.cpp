//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_80183F10(PPC::Runtime::GCContext* context)
{
/*80183F10 00180D10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80183F14 00180D14*/ PPC::Runtime::ASM::mflr(context->r0);
/*80183F18 00180D18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80183F1C 00180D1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183F20 00180D20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183F24 00180D24*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80183F28 00180D28*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80183F2C 00180D2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1168, context->r3));
/*80183F30 00180D30*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80183F34 00180D34*/ PPC::Runtime::ASM::beq(.L_80183FAC);
/*80183F38 00180D38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80183F3C 00180D3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80183F40 00180D40*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80183F44 00180D44*/ PPC::Runtime::ASM::bne(.L_80183F58);
/*80183F48 00180D48*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6E38 @ Get_MemoryOffset_SDA21);
/*80183F4C 00180D4C*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80183F50 00180D50*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E40 @ Get_MemoryOffset_SDA21);
/*80183F54 00180D54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80183F58, 0x80183F58) //this is a jump label
/*80183F58 00180D58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80183F5C 00180D5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80183F60 00180D60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80183F64 00180D64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80183F68 00180D68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80183F6C 00180D6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80183F70 00180D70*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80183F74 00180D74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80183F78 00180D78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80183F7C 00180D7C*/ PPC::Runtime::ASM::beq(.L_80183F98);
/*80183F80 00180D80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80183F84 00180D84*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80183F88 00180D88*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80183F8C 00180D8C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80183F90 00180D90*/ PPC::Runtime::ASM::bl(fn_800644AC);
/*80183F94 00180D94*/ PPC::Runtime::ASM::b(.L_80183FAC);
RUNTIME_PPC_JUMP_LABEL(.L_80183F98, 0x80183F98) //this is a jump label
/*80183F98 00180D98*/ PPC::Runtime::ASM::lis(context->r3, String_ "mnlandialogue." Get_MemoryOffset_HighBit);
/*80183F9C 00180D9C*/ PPC::Runtime::ASM::li(context->r4, 0x4f);
/*80183FA0 00180DA0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "mnlandialogue." Get_MemoryOffset_LowBit);
/*80183FA4 00180DA4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6E48 @ Get_MemoryOffset_SDA21);
/*80183FA8 00180DA8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80183FAC, 0x80183FAC) //this is a jump label
/*80183FAC 00180DAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80183FB0 00180DB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183FB4 00180DB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183FB8 00180DB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80183FBC 00180DBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80183FC0 00180DC0*/ PPC::Runtime::ASM::blr();
}