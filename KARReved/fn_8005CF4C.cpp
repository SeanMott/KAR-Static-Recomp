//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005CF4C(PPC::Runtime::GCContext* context)
{
/*8005CF4C 00059D4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005CF50 00059D50*/ PPC::Runtime::ASM::lis(context->r8, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005CF54 00059D54*/ PPC::Runtime::ASM::li(context->r0, 0xaf);
/*8005CF58 00059D58*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*8005CF5C 00059D5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005CF60 00059D60*/ PPC::Runtime::ASM::addi(context->r8, context->r8, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005CF64 00059D64*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8005CF68 00059D68*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*8005CF6C 00059D6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8005CF70 00059D70*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8005CF74 00059D74*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*8005CF78 00059D78*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8005CF7C 00059D7C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8005CF80, 0x8005CF80) //this is a jump label
/*8005CF80 00059D80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r8));
/*8005CF84 00059D84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8005CF88 00059D88*/ PPC::Runtime::ASM::beq(.L_8005CFB4);
/*8005CF8C 00059D8C*/ PPC::Runtime::ASM::bge(.L_8005CFA0);
/*8005CF90 00059D90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005CF94 00059D94*/ PPC::Runtime::ASM::beq(.L_8005CFAC);
/*8005CF98 00059D98*/ PPC::Runtime::ASM::bge(.L_8005CFC4);
/*8005CF9C 00059D9C*/ PPC::Runtime::ASM::b(.L_8005CFCC);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFA0, 0x8005CFA0) //this is a jump label
/*8005CFA0 00059DA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8005CFA4 00059DA4*/ PPC::Runtime::ASM::bge(.L_8005CFCC);
/*8005CFA8 00059DA8*/ PPC::Runtime::ASM::b(.L_8005CFBC);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFAC, 0x8005CFAC) //this is a jump label
/*8005CFAC 00059DAC*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*8005CFB0 00059DB0*/ PPC::Runtime::ASM::b(.L_8005CFD0);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFB4, 0x8005CFB4) //this is a jump label
/*8005CFB4 00059DB4*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*8005CFB8 00059DB8*/ PPC::Runtime::ASM::b(.L_8005CFD0);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFBC, 0x8005CFBC) //this is a jump label
/*8005CFBC 00059DBC*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
/*8005CFC0 00059DC0*/ PPC::Runtime::ASM::b(.L_8005CFD0);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFC4, 0x8005CFC4) //this is a jump label
/*8005CFC4 00059DC4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8005CFC8 00059DC8*/ PPC::Runtime::ASM::b(.L_8005CFD0);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFCC, 0x8005CFCC) //this is a jump label
/*8005CFCC 00059DCC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFD0, 0x8005CFD0) //this is a jump label
/*8005CFD0 00059DD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r8));
/*8005CFD4 00059DD4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8005CFD8 00059DD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8005CFDC 00059DDC*/ PPC::Runtime::ASM::beq(.L_8005D008);
/*8005CFE0 00059DE0*/ PPC::Runtime::ASM::bge(.L_8005CFF4);
/*8005CFE4 00059DE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005CFE8 00059DE8*/ PPC::Runtime::ASM::beq(.L_8005D000);
/*8005CFEC 00059DEC*/ PPC::Runtime::ASM::bge(.L_8005D018);
/*8005CFF0 00059DF0*/ PPC::Runtime::ASM::b(.L_8005D020);
RUNTIME_PPC_JUMP_LABEL(.L_8005CFF4, 0x8005CFF4) //this is a jump label
/*8005CFF4 00059DF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8005CFF8 00059DF8*/ PPC::Runtime::ASM::bge(.L_8005D020);
/*8005CFFC 00059DFC*/ PPC::Runtime::ASM::b(.L_8005D010);
RUNTIME_PPC_JUMP_LABEL(.L_8005D000, 0x8005D000) //this is a jump label
/*8005D000 00059E00*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*8005D004 00059E04*/ PPC::Runtime::ASM::b(.L_8005D024);
RUNTIME_PPC_JUMP_LABEL(.L_8005D008, 0x8005D008) //this is a jump label
/*8005D008 00059E08*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*8005D00C 00059E0C*/ PPC::Runtime::ASM::b(.L_8005D024);
RUNTIME_PPC_JUMP_LABEL(.L_8005D010, 0x8005D010) //this is a jump label
/*8005D010 00059E10*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
/*8005D014 00059E14*/ PPC::Runtime::ASM::b(.L_8005D024);
RUNTIME_PPC_JUMP_LABEL(.L_8005D018, 0x8005D018) //this is a jump label
/*8005D018 00059E18*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8005D01C 00059E1C*/ PPC::Runtime::ASM::b(.L_8005D024);
RUNTIME_PPC_JUMP_LABEL(.L_8005D020, 0x8005D020) //this is a jump label
/*8005D020 00059E20*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8005D024, 0x8005D024) //this is a jump label
/*8005D024 00059E24*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8005D028 00059E28*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*8005D02C 00059E2C*/ PPC::Runtime::ASM::bdnz(.L_8005CF80);
/*8005D030 00059E30*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8005D034 00059E34*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8005D038 00059E38*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8005D03C 00059E3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8005D040 00059E40*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8005D044 00059E44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005D048 00059E48*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8005D04C 00059E4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005D050 00059E50*/ PPC::Runtime::ASM::blr();
}