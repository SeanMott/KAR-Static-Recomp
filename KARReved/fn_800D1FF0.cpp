//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D78B4.hpp"



void fn_800D1FF0(PPC::Runtime::GCContext* context)
{
/*800D1FF0 000CEDF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800D1FF4 000CEDF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D1FF8 000CEDF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800D1FFC 000CEDFC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800D2000 000CEE00*/ PPC::Runtime::ASM::bl(_savegpr_21);
/*800D2004 000CEE04*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800D2008 000CEE08*/ PPC::Runtime::ASM::lwz(context->r9, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D200C 000CEE0C*/ PPC::Runtime::ASM::mulli(context->r0, context->r27, 0x140);
/*800D2010 000CEE10*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800D2014 000CEE14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r9));
/*800D2018 000CEE18*/ PPC::Runtime::ASM::lis(context->r8, MemoryOffset_898 @ Get_MemoryOffset_HighBit);
/*800D201C 000CEE1C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*800D2020 000CEE20*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*800D2024 000CEE24*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D2028 000CEE28*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800D202C 000CEE2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800D2030 000CEE30*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*800D2034 000CEE34*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*800D2038 000CEE38*/ PPC::Runtime::ASM::addi(context->r26, context->r8, MemoryOffset_898 @ Get_MemoryOffset_LowBit);
/* 800D203C 000CEE3C  54 18 27 3F */ srwi. context->r24 , context->r0 , 28
/*800D2040 000CEE40*/ PPC::Runtime::ASM::clrlwi(context->r23, context->r0, 7);
/*800D2044 000CEE44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D2048 000CEE48*/ PPC::Runtime::ASM::blt(.L_800D2058);
/*800D204C 000CEE4C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x4);
/*800D2050 000CEE50*/ PPC::Runtime::ASM::bge(.L_800D2058);
/*800D2054 000CEE54*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D2058, 0x800D2058) //this is a jump label
/*800D2058 000CEE58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D205C 000CEE5C*/ PPC::Runtime::ASM::bne(.L_800D2070);
/*800D2060 000CEE60*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x450);
/*800D2064 000CEE64*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D2068 000CEE68*/ PPC::Runtime::ASM::li(context->r4, 0x7f0);
/*800D206C 000CEE6C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D2070, 0x800D2070) //this is a jump label
/*800D2070 000CEE70*/ PPC::Runtime::ASM::mulli(context->r22, context->r24, 0xc);
/*800D2074 000CEE74*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*800D2078 000CEE78*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD6C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D207C 000CEE7C*/ PPC::Runtime::ASM::addi(context->r21, context->r22, 0x524);
/*800D2080 000CEE80*/ PPC::Runtime::ASM::add(context->r21, context->r0, context->r21);
/*800D2084 000CEE84*/ PPC::Runtime::ASM::bne(.L_800D209C);
/*800D2088 000CEE88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF5DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D208C 000CEE8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800D2090 000CEE90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800D2094 000CEE94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800D2098 000CEE98*/ PPC::Runtime::ASM::b(.L_800D20E0);
RUNTIME_PPC_JUMP_LABEL(.L_800D209C, 0x800D209C) //this is a jump label
/*800D209C 000CEE9C*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x1);
/*800D20A0 000CEEA0*/ PPC::Runtime::ASM::bne(.L_800D20BC);
/*800D20A4 000CEEA4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D20A8 000CEEA8*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800D20AC 000CEEAC*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*800D20B0 000CEEB0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x54);
/*800D20B4 000CEEB4*/ PPC::Runtime::ASM::bl(fn_800D78B4);
/*800D20B8 000CEEB8*/ PPC::Runtime::ASM::b(.L_800D20E0);
RUNTIME_PPC_JUMP_LABEL(.L_800D20BC, 0x800D20BC) //this is a jump label
/*800D20BC 000CEEBC*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800D20C0 000CEEC0*/ PPC::Runtime::ASM::mr(context->r5, context->r23);
/*800D20C4 000CEEC4*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x478);
/*800D20C8 000CEEC8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800D20CC 000CEECC*/ PPC::Runtime::ASM::bl(OSReport);
/*800D20D0 000CEED0*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D20D4 000CEED4*/ PPC::Runtime::ASM::li(context->r4, 0x7fa);
/*800D20D8 000CEED8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6098 @ Get_MemoryOffset_SDA21);
/*800D20DC 000CEEDC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D20E0, 0x800D20E0) //this is a jump label
/*800D20E0 000CEEE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*800D20E4 000CEEE4*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x2);
/*800D20E8 000CEEE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D20EC 000CEEEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r21));
/*800D20F0 000CEEF0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D20F4 000CEEF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r21));
/*800D20F8 000CEEF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800D20FC 000CEEFC*/ PPC::Runtime::ASM::bge(.L_800D2178);
/*800D2100 000CEF00*/ PPC::Runtime::ASM::add(context->r3, context->r25, context->r22);
/*800D2104 000CEF04*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*800D2108 000CEF08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D210C 000CEF0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*800D2110 000CEF10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D2114 000CEF14*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800D2118 000CEF18*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DF5F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D211C 000CEF1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D2120 000CEF20*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D2124 000CEF24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r3));
/*800D2128 000CEF28*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800D212C 000CEF2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D2130 000CEF30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800D2134 000CEF34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*800D2138 000CEF38*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*800D213C 000CEF3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D2140 000CEF40*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D2144 000CEF44*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800D2148 000CEF48*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800D214C 000CEF4C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800D2150 000CEF50*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D2154 000CEF54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D2158 000CEF58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800D215C 000CEF5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800D2160 000CEF60*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D2164 000CEF64*/ PPC::Runtime::ASM::bgt(.L_800D2178);
/*800D2168 000CEF68*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x490);
/*800D216C 000CEF6C*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D2170 000CEF70*/ PPC::Runtime::ASM::li(context->r4, 0x807);
/*800D2174 000CEF74*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D2178, 0x800D2178) //this is a jump label
/*800D2178 000CEF78*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800D217C 000CEF7C*/ PPC::Runtime::ASM::bl(_restgpr_21);
/*800D2180 000CEF80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800D2184 000CEF84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D2188 000CEF88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800D218C 000CEF8C*/ PPC::Runtime::ASM::blr();
}