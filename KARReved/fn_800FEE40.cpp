//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7534.hpp"
#include "fn_801C8458.hpp"
#include "fn_80204628.hpp"
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"



void fn_800FEE40(PPC::Runtime::GCContext* context)
{
/*800FEE40 000FBC40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800FEE44 000FBC44*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FEE48 000FBC48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FEE4C 000FBC4C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800FEE50 000FBC50*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800FEE54 000FBC54*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800FEE58 000FBC58*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*800FEE5C 000FBC5C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*800FEE60 000FBC60*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x6667);
/*800FEE64 000FBC64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FEE68 000FBC68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r29));
/*800FEE6C 000FBC6C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FEE70 000FBC70*/ PPC::Runtime::ASM::b(.L_800FEFEC);
RUNTIME_PPC_JUMP_LABEL(.L_800FEE74, 0x800FEE74) //this is a jump label
/*800FEE74 000FBC74*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 3);
/*800FEE78 000FBC78*/ PPC::Runtime::ASM::add(context->r28, context->r29, context->r0);
/*800FEE7C 000FBC7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r28));
/*800FEE80 000FBC80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FEE84 000FBC84*/ PPC::Runtime::ASM::ble(.L_800FEE90);
/*800FEE88 000FBC88*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800FEE8C 000FBC8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800FEE90, 0x800FEE90) //this is a jump label
/*800FEE90 000FBC90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r28));
/*800FEE94 000FBC94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FEE98 000FBC98*/ PPC::Runtime::ASM::bgt(.L_800FEFD0);
/*800FEE9C 000FBC9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*800FEEA0 000FBCA0*/ PPC::Runtime::ASM::lwz(context->r25, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FEEA4 000FBCA4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800FEEA8 000FBCA8*/ PPC::Runtime::ASM::beq(.L_800FEFD0);
/*800FEEAC 000FBCAC*/ PPC::Runtime::ASM::bge(.L_800FEFD0);
/*800FEEB0 000FBCB0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FEEB4 000FBCB4*/ PPC::Runtime::ASM::bge(.L_800FEEBC);
/*800FEEB8 000FBCB8*/ PPC::Runtime::ASM::b(.L_800FEFD0);
RUNTIME_PPC_JUMP_LABEL(.L_800FEEBC, 0x800FEEBC) //this is a jump label
/*800FEEBC 000FBCBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r28));
/*800FEEC0 000FBCC0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800FEEC4 000FBCC4*/ PPC::Runtime::ASM::bne(.L_800FEEE0);
/*800FEEC8 000FBCC8*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1011 @ Get_MemoryOffset_HighBit);
/*800FEECC 000FBCCC*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1012 @ Get_MemoryOffset_HighBit);
/*800FEED0 000FBCD0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1011 @ Get_MemoryOffset_LowBit);
/*800FEED4 000FBCD4*/ PPC::Runtime::ASM::li(context->r4, 0x93);
/*800FEED8 000FBCD8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_1012 @ Get_MemoryOffset_LowBit);
/*800FEEDC 000FBCDC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FEEE0, 0x800FEEE0) //this is a jump label
/*800FEEE0 000FBCE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r28));
/*800FEEE4 000FBCE4*/ PPC::Runtime::ASM::bl(fn_801C7534);
/*800FEEE8 000FBCE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FEEEC 000FBCEC*/ PPC::Runtime::ASM::beq(.L_800FEF1C);
/*800FEEF0 000FBCF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*800FEEF4 000FBCF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800FEEF8 000FBCF8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800FEEFC 000FBCFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800FEF00 000FBD00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r28));
/*800FEF04 000FBD04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800FEF08 000FBD08*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800FEF0C 000FBD0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FEF10 000FBD10*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*800FEF14 000FBD14*/ PPC::Runtime::ASM::bl(fn_801C8458);
/*800FEF18 000FBD18*/ PPC::Runtime::ASM::b(.L_800FEF64);
RUNTIME_PPC_JUMP_LABEL(.L_800FEF1C, 0x800FEF1C) //this is a jump label
/*800FEF1C 000FBD1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r28));
/*800FEF20 000FBD20*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FEF24 000FBD24*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x15);
/*800FEF28 000FBD28*/ PPC::Runtime::ASM::bne(.L_800FEF64);
/*800FEF2C 000FBD2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*800FEF30 000FBD30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800FEF34 000FBD34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*800FEF38 000FBD38*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800FEF3C 000FBD3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800FEF40 000FBD40*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FEF44 000FBD44*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*800FEF48 000FBD48*/ PPC::Runtime::ASM::bl(fn_80204628);
/*800FEF4C 000FBD4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*800FEF50 000FBD50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FEF54 000FBD54*/ PPC::Runtime::ASM::ble(.L_800FEF64);
/*800FEF58 000FBD58*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*800FEF5C 000FBD5C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FEF60 000FBD60*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FEF64, 0x800FEF64) //this is a jump label
/*800FEF64 000FBD64*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FEF68 000FBD68*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*800FEF6C 000FBD6C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r28));
/*800FEF70 000FBD70*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*800FEF74 000FBD74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF928 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FEF78 000FBD78*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FEF7C 000FBD7C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r28));
/*800FEF80 000FBD80*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*800FEF84 000FBD84*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FEF88 000FBD88*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF92C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FEF8C 000FBD8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r29));
/*800FEF90 000FBD90*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*800FEF94 000FBD94*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FEF98 000FBD98*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800FEF9C 000FBD9C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r29));
/*800FEFA0 000FBDA0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r29));
/* 800FEFA4 000FBDA4  7C 00 40 96 */ mulhw context->r0 , context->r0 , context->r8
/*800FEFA8 000FBDA8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*800FEFAC 000FBDAC*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*800FEFB0 000FBDB0*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*800FEFB4 000FBDB4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*800FEFB8 000FBDB8*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r8);
/*800FEFBC 000FBDBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r29));
/*800FEFC0 000FBDC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800FEFC4 000FBDC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r29));
/*800FEFC8 000FBDC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*800FEFCC 000FBDCC*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_800FEFD0, 0x800FEFD0) //this is a jump label
/*800FEFD0 000FBDD0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1);
/* 800FEFD4 000FBDD4  7C 1A 20 96 */ mulhw context->r0 , context->r26 , context->r4
/*800FEFD8 000FBDD8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*800FEFDC 000FBDDC*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*800FEFE0 000FBDE0*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*800FEFE4 000FBDE4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*800FEFE8 000FBDE8*/ PPC::Runtime::ASM::subf(context->r31, context->r0, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_800FEFEC, 0x800FEFEC) //this is a jump label
/*800FEFEC 000FBDEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r29));
/*800FEFF0 000FBDF0*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*800FEFF4 000FBDF4*/ PPC::Runtime::ASM::bne(.L_800FEE74);
/*800FEFF8 000FBDF8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800FEFFC 000FBDFC*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800FF000 000FBE00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FF004 000FBE04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FF008 000FBE08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800FF00C 000FBE0C*/ PPC::Runtime::ASM::blr();
}