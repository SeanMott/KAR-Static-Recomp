//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800AEF6C(PPC::Runtime::GCContext* context)
{
/*800AEF6C 000ABD6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AEF70 000ABD70*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AEF74 000ABD74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800AEF78 000ABD78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AEF7C 000ABD7C*/ PPC::Runtime::ASM::bne(.L_800AEF9C);
/*800AEF80 000ABD80*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AEF84 000ABD84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800AEF88 000ABD88*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AEF8C 000ABD8C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800AEF90 000ABD90*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AEF94 000ABD94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800AEF98 000ABD98*/ PPC::Runtime::ASM::b(.L_800AF064);
RUNTIME_PPC_JUMP_LABEL(.L_800AEF9C, 0x800AEF9C) //this is a jump label
/*800AEF9C 000ABD9C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AEFA0 000ABDA0*/ PPC::Runtime::ASM::bne(.L_800AF064);
/*800AEFA4 000ABDA4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AEFA8 000ABDA8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800AEFAC 000ABDAC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AEFB0 000ABDB0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800AEFB4 000ABDB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800AEFB8 000ABDB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800AEFBC 000ABDBC*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*800AEFC0 000ABDC0*/ PPC::Runtime::ASM::b(.L_800AEFE0);
RUNTIME_PPC_JUMP_LABEL(.L_800AEFC4, 0x800AEFC4) //this is a jump label
/*800AEFC4 000ABDC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*800AEFC8 000ABDC8*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800AEFCC 000ABDCC*/ PPC::Runtime::ASM::bne(.L_800AEFD8);
/* 800AEFD0 000ABDD0  34 84 FF FF */ subic. context->r4 , context->r4 , 0x1
/*800AEFD4 000ABDD4*/ PPC::Runtime::ASM::blt(.L_800AEFEC);
RUNTIME_PPC_JUMP_LABEL(.L_800AEFD8, 0x800AEFD8) //this is a jump label
/*800AEFD8 000ABDD8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x18);
/*800AEFDC 000ABDDC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800AEFE0, 0x800AEFE0) //this is a jump label
/*800AEFE0 000ABDE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800AEFE4 000ABDE4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800AEFE8 000ABDE8*/ PPC::Runtime::ASM::bne(.L_800AEFC4);
RUNTIME_PPC_JUMP_LABEL(.L_800AEFEC, 0x800AEFEC) //this is a jump label
/*800AEFEC 000ABDEC*/ PPC::Runtime::ASM::mulli(context->r0, context->r5, 0x18);
/*800AEFF0 000ABDF0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r7, context->r0);
/*800AEFF4 000ABDF4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800AEFF8 000ABDF8*/ PPC::Runtime::ASM::beq(.L_800AF000);
/*800AEFFC 000ABDFC*/ PPC::Runtime::ASM::b(.L_800AF018);
RUNTIME_PPC_JUMP_LABEL(.L_800AF000, 0x800AF000) //this is a jump label
/*800AF000 000ABE00*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_734 @ Get_MemoryOffset_HighBit);
/*800AF004 000ABE04*/ PPC::Runtime::ASM::li(context->r4, 0xb1);
/*800AF008 000ABE08*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_734 @ Get_MemoryOffset_LowBit);
/*800AF00C 000ABE0C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5ED0 @ Get_MemoryOffset_SDA21);
/*800AF010 000ABE10*/ PPC::Runtime::ASM::bl(fn___assert);
/*800AF014 000ABE14*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800AF018, 0x800AF018) //this is a jump label
/*800AF018 000ABE18*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AF01C 000ABE1C*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*800AF020 000ABE20*/ PPC::Runtime::ASM::addi(context->r8, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AF024 000ABE24*/ PPC::Runtime::ASM::li(context->r6, 0x7f);
/*800AF028 000ABE28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*800AF02C 000ABE2C*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 16);
/*800AF030 000ABE30*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*800AF034 000ABE34*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*800AF038 000ABE38*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800AF03C 000ABE3C*/ PPC::Runtime::ASM::li(context->r5, 0x7f);
/*800AF040 000ABE40*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*800AF044 000ABE44*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*800AF048 000ABE48*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*800AF04C 000ABE4C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*800AF050 000ABE50*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*800AF054 000ABE54*/ PPC::Runtime::ASM::bl(fn_playSoundFX);
/*800AF058 000ABE58*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AF05C 000ABE5C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AF060 000ABE60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800AF064, 0x800AF064) //this is a jump label
/*800AF064 000ABE64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF068 000ABE68*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF06C 000ABE6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF070 000ABE70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AF074 000ABE74*/ PPC::Runtime::ASM::blr();
}