//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800F0EFC(PPC::Runtime::GCContext* context)
{
/*800F0EFC 000EDCFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800F0F00 000EDD00*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F0F04 000EDD04*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*800F0F08 000EDD08*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800F0F0C 000EDD0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800F0F10 000EDD10*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800F0F14 000EDD14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800F0F18 000EDD18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800F0F1C 000EDD1C*/ PPC::Runtime::ASM::li(context->r30, -0x1);
/*800F0F20 000EDD20*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F0F24 000EDD24*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800F0F28 000EDD28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800F0F2C 000EDD2C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800F0F30 000EDD30*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F0F34 000EDD34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800F0F38 000EDD38*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800F0F3C 000EDD3C*/ PPC::Runtime::ASM::mr(context->r6, context->r8);
/*800F0F40 000EDD40*/ PPC::Runtime::ASM::b(.L_800F0F54);
RUNTIME_PPC_JUMP_LABEL(.L_800F0F44, 0x800F0F44) //this is a jump label
/*800F0F44 000EDD44*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*800F0F48 000EDD48*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*800F0F4C 000EDD4C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4);
/*800F0F50 000EDD50*/ PPC::Runtime::ASM::add(context->r9, context->r9, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800F0F54, 0x800F0F54) //this is a jump label
/*800F0F54 000EDD54*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800F0F58 000EDD58*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800F0F5C 000EDD5C*/ PPC::Runtime::ASM::beq(.L_800F0F78);
/*800F0F60 000EDD60*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800F0F64 000EDD64*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x2);
/*800F0F68 000EDD68*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800F0F6C 000EDD6C*/ PPC::Runtime::ASM::lhax(context->r3, context->r5, context->r3);
/*800F0F70 000EDD70*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800F0F74 000EDD74*/ PPC::Runtime::ASM::bne(.L_800F0F44);
RUNTIME_PPC_JUMP_LABEL(.L_800F0F78, 0x800F0F78) //this is a jump label
/*800F0F78 000EDD78*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x0);
/*800F0F7C 000EDD7C*/ PPC::Runtime::ASM::ble(.L_800F10D4);
/*800F0F80 000EDD80*/ PPC::Runtime::ASM::xoris(context->r6, context->r9, 0x8000);
/*800F0F84 000EDD84*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*800F0F88 000EDD88*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F0F8C 000EDD8C*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*800F0F90 000EDD90*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F0F94 000EDD94*/ PPC::Runtime::ASM::mr(context->r6, context->r10);
/*800F0F98 000EDD98*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805DF7C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F0F9C 000EDD9C*/ PPC::Runtime::ASM::mr(context->r7, context->r8);
/*800F0FA0 000EDDA0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F0FA4 000EDDA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF7D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F0FA8 000EDDA8*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F0FAC 000EDDAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*800F0FB0 000EDDB0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*800F0FB4 000EDDB4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800F0FB8 000EDDB8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*800F0FBC 000EDDBC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800F0FC0 000EDDC0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F0FC4 000EDDC4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F0FC8 000EDDC8*/ PPC::Runtime::ASM::b(.L_800F0FF0);
RUNTIME_PPC_JUMP_LABEL(.L_800F0FCC, 0x800F0FCC) //this is a jump label
/*800F0FCC 000EDDCC*/ PPC::Runtime::ASM::cmpw(context->r9, context->r3);
/*800F0FD0 000EDDD0*/ PPC::Runtime::ASM::bge(.L_800F0FE4);
/*800F0FD4 000EDDD4*/ PPC::Runtime::ASM::slwi(context->r0, context->r10, 2);
/*800F0FD8 000EDDD8*/ PPC::Runtime::ASM::lhax(context->r3, context->r8, context->r0);
/*800F0FDC 000EDDDC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x50);
/*800F0FE0 000EDDE0*/ PPC::Runtime::ASM::b(.L_800F1014);
RUNTIME_PPC_JUMP_LABEL(.L_800F0FE4, 0x800F0FE4) //this is a jump label
/*800F0FE4 000EDDE4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*800F0FE8 000EDDE8*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4);
/*800F0FEC 000EDDEC*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F0FF0, 0x800F0FF0) //this is a jump label
/*800F0FF0 000EDDF0*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800F0FF4 000EDDF4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800F0FF8 000EDDF8*/ PPC::Runtime::ASM::beq(.L_800F1014);
/*800F0FFC 000EDDFC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800F1000 000EDE00*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x2);
/*800F1004 000EDE04*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800F1008 000EDE08*/ PPC::Runtime::ASM::lhax(context->r3, context->r5, context->r3);
/*800F100C 000EDE0C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800F1010 000EDE10*/ PPC::Runtime::ASM::bne(.L_800F0FCC);
RUNTIME_PPC_JUMP_LABEL(.L_800F1014, 0x800F1014) //this is a jump label
/*800F1014 000EDE14*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F1018 000EDE18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800F101C 000EDE1C*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*800F1020 000EDE20*/ PPC::Runtime::ASM::slwi(context->r31, context->r0, 1);
/*800F1024 000EDE24*/ PPC::Runtime::ASM::mtctr(context->r5);
/*800F1028 000EDE28*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*800F102C 000EDE2C*/ PPC::Runtime::ASM::ble(.L_800F1054);
RUNTIME_PPC_JUMP_LABEL(.L_800F1030, 0x800F1030) //this is a jump label
/*800F1030 000EDE30*/ PPC::Runtime::ASM::add(context->r5, context->r31, context->r7);
/*800F1034 000EDE34*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F1038 000EDE38*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x8);
/*800F103C 000EDE3C*/ PPC::Runtime::ASM::lhax(context->r5, context->r6, context->r0);
/*800F1040 000EDE40*/ PPC::Runtime::ASM::extsh.(context->r0, context->r5);
/*800F1044 000EDE44*/ PPC::Runtime::ASM::ble(.L_800F104C);
/*800F1048 000EDE48*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_800F104C, 0x800F104C) //this is a jump label
/*800F104C 000EDE4C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x38);
/*800F1050 000EDE50*/ PPC::Runtime::ASM::bdnz(.L_800F1030);
RUNTIME_PPC_JUMP_LABEL(.L_800F1054, 0x800F1054) //this is a jump label
/*800F1054 000EDE54*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F1058 000EDE58*/ PPC::Runtime::ASM::ble(.L_800F10D4);
/*800F105C 000EDE5C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD700 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F1060 000EDE60*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F1064 000EDE64*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800F1068 000EDE68*/ PPC::Runtime::ASM::li(context->r0, StructValues_57 @ Get_MemoryOffset_SDA21);
/*800F106C 000EDE6C*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*800F1070 000EDE70*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F1074 000EDE74*/ PPC::Runtime::ASM::mr(context->r8, context->r9);
/*800F1078 000EDE78*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F107C 000EDE7C*/ PPC::Runtime::ASM::mr(context->r6, context->r9);
/*800F1080 000EDE80*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800F1084 000EDE84*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800F1088 000EDE88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800F108C 000EDE8C*/ PPC::Runtime::ASM::ble(.L_800F10D4);
RUNTIME_PPC_JUMP_LABEL(.L_800F1090, 0x800F1090) //this is a jump label
/*800F1090 000EDE90*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r6);
/*800F1094 000EDE94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*800F1098 000EDE98*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x8);
/*800F109C 000EDE9C*/ PPC::Runtime::ASM::lhax(context->r4, context->r5, context->r0);
/*800F10A0 000EDEA0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*800F10A4 000EDEA4*/ PPC::Runtime::ASM::ble(.L_800F10C8);
/*800F10A8 000EDEA8*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
/*800F10AC 000EDEAC*/ PPC::Runtime::ASM::cmpw(context->r3, context->r8);
/*800F10B0 000EDEB0*/ PPC::Runtime::ASM::bge(.L_800F10C8);
/*800F10B4 000EDEB4*/ PPC::Runtime::ASM::mulli(context->r0, context->r9, 0x38);
/*800F10B8 000EDEB8*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*800F10BC 000EDEBC*/ PPC::Runtime::ASM::lha(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*800F10C0 000EDEC0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800F10C4 000EDEC4*/ PPC::Runtime::ASM::b(.L_800F10D4);
RUNTIME_PPC_JUMP_LABEL(.L_800F10C8, 0x800F10C8) //this is a jump label
/*800F10C8 000EDEC8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x38);
/*800F10CC 000EDECC*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*800F10D0 000EDED0*/ PPC::Runtime::ASM::bdnz(.L_800F1090);
RUNTIME_PPC_JUMP_LABEL(.L_800F10D4, 0x800F10D4) //this is a jump label
/*800F10D4 000EDED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800F10D8 000EDED8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800F10DC 000EDEDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800F10E0 000EDEE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800F10E4 000EDEE4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F10E8 000EDEE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F10EC 000EDEEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800F10F0 000EDEF0*/ PPC::Runtime::ASM::blr();
}