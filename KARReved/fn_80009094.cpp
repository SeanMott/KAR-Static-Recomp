//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80009094(PPC::Runtime::GCContext* context)
{
/*80009094 00005E94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80009098 00005E98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000909C 00005E9C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*800090A0 00005EA0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_080536EF0 @ Get_MemoryOffset_HighBit);
/*800090A4 00005EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800090A8 00005EA8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800090AC 00005EAC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*800090B0 00005EB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800090B4 00005EB4*/ PPC::Runtime::ASM::addi(context->r31, context->r4, STRUCT_BYTE4_COUNT_080536EF0 @ Get_MemoryOffset_LowBit);
/*800090B8 00005EB8*/ PPC::Runtime::ASM::lis(context->r4, String_ "BackslashInString_cffff00_DoubleWithTwoDecimlesFla" Get_MemoryOffset_HighBit);
/*800090BC 00005EBC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r3));
/*800090C0 00005EC0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, String_ "BackslashInString_cffff00_DoubleWithTwoDecimlesFla" Get_MemoryOffset_LowBit);
/*800090C4 00005EC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800090C8 00005EC8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*800090CC 00005ECC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800090D0 00005ED0*/ PPC::Runtime::ASM::bl(fn_sprintf);
/*800090D4 00005ED4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_080536EF0 @ Get_MemoryOffset_HighBit);
/*800090D8 00005ED8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800090DC 00005EDC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_080536EF0 @ Get_MemoryOffset_LowBit);
/*800090E0 00005EE0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x88);
/*800090E4 00005EE4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800090E8 00005EE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800090EC 00005EEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800090F0 00005EF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800090F4 00005EF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800090F8 00005EF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800090FC 00005EFC*/ PPC::Runtime::ASM::blr();
}