//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80413F34(PPC::Runtime::GCContext* context)
{
/*80413F34 00410D34*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_HighBit);
/*80413F38 00410D38*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503F08 @ Get_MemoryOffset_HighBit);
/*80413F3C 00410D3C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_LowBit);
/*80413F40 00410D40*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80413F44 00410D44*/ PPC::Runtime::ASM::addi(context->r10, context->r4, 0x110);
/*80413F48 00410D48*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_80503F08 @ Get_MemoryOffset_LowBit);
/*80413F4C 00410D4C*/ PPC::Runtime::ASM::li(context->r4, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80413F50, 0x80413F50) //this is a jump label
/*80413F50 00410D50*/ PPC::Runtime::ASM::li(context->r8, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80413F54, 0x80413F54) //this is a jump label
/*80413F54 00410D54*/ PPC::Runtime::ASM::subi(context->r7, context->r10, 0x4);
/*80413F58 00410D58*/ PPC::Runtime::ASM::subi(context->r6, context->r5, 0x4);
/*80413F5C 00410D5C*/ PPC::Runtime::ASM::mtctr(context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80413F60, 0x80413F60) //this is a jump label
/*80413F60 00410D60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80413F64 00410D64*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80413F68 00410D68*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413F6C 00410D6C*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80413F70 00410D70*/ PPC::Runtime::ASM::bdnz(.L_80413F60);
/*80413F74 00410D74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80413F78 00410D78*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80413F7C 00410D7C*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x4);
/*80413F80 00410D80*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x44);
/*80413F84 00410D84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413F88 00410D88*/ PPC::Runtime::ASM::blt(.L_80413F54);
/*80413F8C 00410D8C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*80413F90 00410D90*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x4);
/*80413F94 00410D94*/ PPC::Runtime::ASM::blt(.L_80413F50);
/*80413F98 00410D98*/ PPC::Runtime::ASM::blr();
}