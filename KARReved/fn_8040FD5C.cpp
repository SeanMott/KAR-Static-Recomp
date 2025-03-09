//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSAllocFromArenaLo.hpp"
#include "fn_HSD_Panic.hpp"



void fn_8040FD5C(PPC::Runtime::GCContext* context)
{
/*8040FD5C 0040CB5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8040FD60 0040CB60*/ PPC::Runtime::ASM::mflr(context->r0);
/*8040FD64 0040CB64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8040FD68 0040CB68*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8040FD6C 0040CB6C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8040FD70 0040CB70*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8040FD74 0040CB74*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8040FD78 0040CB78*/ PPC::Runtime::ASM::bne(.L_8040FD84);
/*8040FD7C 0040CB7C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8040FD80 0040CB80*/ PPC::Runtime::ASM::b(.L_8040FE78);
RUNTIME_PPC_JUMP_LABEL(.L_8040FD84, 0x8040FD84) //this is a jump label
/*8040FD84 0040CB84*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8040FD88 0040CB88*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180589A48 @ Get_MemoryOffset_HighBit);
/*8040FD8C 0040CB8C*/ PPC::Runtime::ASM::lis(context->r5, lbl_80503C60 @ Get_MemoryOffset_HighBit);
/*8040FD90 0040CB90*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8040FD94 0040CB94*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0xf);
/*8040FD98 0040CB98*/ PPC::Runtime::ASM::addi(context->r28, context->r3, STRUCT_BYTE4_COUNT_180589A48 @ Get_MemoryOffset_LowBit);
/*8040FD9C 0040CB9C*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r7, 0, 16, 27);
/*8040FDA0 0040CBA0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503C70 @ Get_MemoryOffset_HighBit);
/*8040FDA4 0040CBA4*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r0);
/*8040FDA8 0040CBA8*/ PPC::Runtime::ASM::lis(context->r6, STRUCT_BYTE4_COUNT_180589A54 @ Get_MemoryOffset_HighBit);
/*8040FDAC 0040CBAC*/ PPC::Runtime::ASM::addi(context->r29, context->r5, lbl_80503C60 @ Get_MemoryOffset_LowBit);
/*8040FDB0 0040CBB0*/ PPC::Runtime::ASM::addi(context->r4, context->r6, STRUCT_BYTE4_COUNT_180589A54 @ Get_MemoryOffset_LowBit);
/*8040FDB4 0040CBB4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_80503C70 @ Get_MemoryOffset_LowBit);
/*8040FDB8 0040CBB8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8040FDBC 0040CBBC*/ PPC::Runtime::ASM::slwi(context->r26, context->r0, 1);
/*8040FDC0 0040CBC0*/ PPC::Runtime::ASM::mullw(context->r0, context->r26, context->r31);
/*8040FDC4 0040CBC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8040FDC8 0040CBC8*/ PPC::Runtime::ASM::b(.L_8040FDFC);
RUNTIME_PPC_JUMP_LABEL(.L_8040FDCC, 0x8040FDCC) //this is a jump label
/*8040FDCC 0040CBCC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8040FDD0 0040CBD0*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*8040FDD4 0040CBD4*/ PPC::Runtime::ASM::bl(fn_OSAllocFromArenaLo);
/*8040FDD8 0040CBD8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040FDDC 0040CBDC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8040FDE0 0040CBE0*/ PPC::Runtime::ASM::bne(.L_8040FDF4);
/*8040FDE4 0040CBE4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8040FDE8 0040CBE8*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8040FDEC 0040CBEC*/ PPC::Runtime::ASM::li(context->r4, 0xf4);
/*8040FDF0 0040CBF0*/ PPC::Runtime::ASM::bl(fn_HSD_Panic);
RUNTIME_PPC_JUMP_LABEL(.L_8040FDF4, 0x8040FDF4) //this is a jump label
/*8040FDF4 0040CBF4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*8040FDF8 0040CBF8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8040FDFC, 0x8040FDFC) //this is a jump label
/*8040FDFC 0040CBFC*/ PPC::Runtime::ASM::cmpw(context->r27, context->r31);
/*8040FE00 0040CC00*/ PPC::Runtime::ASM::blt(.L_8040FDCC);
/*8040FE04 0040CC04*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180589A48 @ Get_MemoryOffset_HighBit);
/*8040FE08 0040CC08*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x3);
/*8040FE0C 0040CC0C*/ PPC::Runtime::ASM::slwi(context->r5, context->r31, 2);
/*8040FE10 0040CC10*/ PPC::Runtime::ASM::subfic(context->r3, context->r31, 0x3);
/*8040FE14 0040CC14*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_180589A48 @ Get_MemoryOffset_LowBit);
/*8040FE18 0040CC18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8040FE1C 0040CC1C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*8040FE20 0040CC20*/ PPC::Runtime::ASM::bge(.L_8040FE70);
/* 8040FE24 0040CC24  54 60 E8 FF */ srwi. context->r0 , context->r3 , 3
/*8040FE28 0040CC28*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8040FE2C 0040CC2C*/ PPC::Runtime::ASM::beq(.L_8040FE60);
RUNTIME_PPC_JUMP_LABEL(.L_8040FE30, 0x8040FE30) //this is a jump label
/*8040FE30 0040CC30*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8040FE34 0040CC34*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8040FE38 0040CC38*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8040FE3C 0040CC3C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8040FE40 0040CC40*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*8040FE44 0040CC44*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8040FE48 0040CC48*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8040FE4C 0040CC4C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8040FE50 0040CC50*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x20);
/*8040FE54 0040CC54*/ PPC::Runtime::ASM::bdnz(.L_8040FE30);
/*8040FE58 0040CC58*/ PPC::Runtime::ASM::andi.(context->r3, context->r3, 0x7);
/*8040FE5C 0040CC5C*/ PPC::Runtime::ASM::beq(.L_8040FE70);
RUNTIME_PPC_JUMP_LABEL(.L_8040FE60, 0x8040FE60) //this is a jump label
/*8040FE60 0040CC60*/ PPC::Runtime::ASM::mtctr(context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8040FE64, 0x8040FE64) //this is a jump label
/*8040FE64 0040CC64*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8040FE68 0040CC68*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*8040FE6C 0040CC6C*/ PPC::Runtime::ASM::bdnz(.L_8040FE64);
RUNTIME_PPC_JUMP_LABEL(.L_8040FE70, 0x8040FE70) //this is a jump label
/*8040FE70 0040CC70*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180589A48 @ Get_MemoryOffset_HighBit);
/*8040FE74 0040CC74*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180589A48 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8040FE78, 0x8040FE78) //this is a jump label
/*8040FE78 0040CC78*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8040FE7C 0040CC7C*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8040FE80 0040CC80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8040FE84 0040CC84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8040FE88 0040CC88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8040FE8C 0040CC8C*/ PPC::Runtime::ASM::blr();
}