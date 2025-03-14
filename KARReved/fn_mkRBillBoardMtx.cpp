//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_PSMTXConcat.hpp"
#include "fn_mkBillBoardMtx.hpp"
#include "fn_mkVBillBoardMtx.hpp"
#include "fn_mkHBillBoardMtx.hpp"
#include "fn_8040EE24.hpp"
#include "fn_HSD_Panic.hpp"
#include "fn_PSMTXConcat.hpp"



void fn_mkRBillBoardMtx(PPC::Runtime::GCContext* context)
{
/*8040F00C 0040BE0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8040F010 0040BE10*/ PPC::Runtime::ASM::mflr(context->r0);
/*8040F014 0040BE14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8040F018 0040BE18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8040F01C 0040BE1C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8040F020 0040BE20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8040F024 0040BE24*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8040F028 0040BE28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8040F02C 0040BE2C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 20, 22);
/*8040F030 0040BE30*/ PPC::Runtime::ASM::beq(.L_8040F0E8);
/*8040F034 0040BE34*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8040F038 0040BE38*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*8040F03C 0040BE3C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8040F040 0040BE40*/ PPC::Runtime::ASM::bl(fn_PSMTXConcat);
/*8040F044 0040BE44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8040F048 0040BE48*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 20, 22);
/*8040F04C 0040BE4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x600);
/*8040F050 0040BE50*/ PPC::Runtime::ASM::beq(.L_8040F0A4);
/*8040F054 0040BE54*/ PPC::Runtime::ASM::bge(.L_8040F070);
/*8040F058 0040BE58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x400);
/*8040F05C 0040BE5C*/ PPC::Runtime::ASM::beq(.L_8040F090);
/*8040F060 0040BE60*/ PPC::Runtime::ASM::bge(.L_8040F0CC);
/*8040F064 0040BE64*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x200);
/*8040F068 0040BE68*/ PPC::Runtime::ASM::beq(.L_8040F07C);
/*8040F06C 0040BE6C*/ PPC::Runtime::ASM::b(.L_8040F0CC);
RUNTIME_PPC_JUMP_LABEL(.L_8040F070, 0x8040F070) //this is a jump label
/*8040F070 0040BE70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x800);
/*8040F074 0040BE74*/ PPC::Runtime::ASM::beq(.L_8040F0B8);
/*8040F078 0040BE78*/ PPC::Runtime::ASM::b(.L_8040F0CC);
RUNTIME_PPC_JUMP_LABEL(.L_8040F07C, 0x8040F07C) //this is a jump label
/*8040F07C 0040BE7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8040F080 0040BE80*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8040F084 0040BE84*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8040F088 0040BE88*/ PPC::Runtime::ASM::bl(fn_mkBillBoardMtx);
/*8040F08C 0040BE8C*/ PPC::Runtime::ASM::b(.L_8040F0F4);
RUNTIME_PPC_JUMP_LABEL(.L_8040F090, 0x8040F090) //this is a jump label
/*8040F090 0040BE90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8040F094 0040BE94*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8040F098 0040BE98*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8040F09C 0040BE9C*/ PPC::Runtime::ASM::bl(fn_mkVBillBoardMtx);
/*8040F0A0 0040BEA0*/ PPC::Runtime::ASM::b(.L_8040F0F4);
RUNTIME_PPC_JUMP_LABEL(.L_8040F0A4, 0x8040F0A4) //this is a jump label
/*8040F0A4 0040BEA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8040F0A8 0040BEA8*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8040F0AC 0040BEAC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8040F0B0 0040BEB0*/ PPC::Runtime::ASM::bl(fn_mkHBillBoardMtx);
/*8040F0B4 0040BEB4*/ PPC::Runtime::ASM::b(.L_8040F0F4);
RUNTIME_PPC_JUMP_LABEL(.L_8040F0B8, 0x8040F0B8) //this is a jump label
/*8040F0B8 0040BEB8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8040F0BC 0040BEBC*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8040F0C0 0040BEC0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8040F0C4 0040BEC4*/ PPC::Runtime::ASM::bl(fn_8040EE24);
/*8040F0C8 0040BEC8*/ PPC::Runtime::ASM::b(.L_8040F0F4);
RUNTIME_PPC_JUMP_LABEL(.L_8040F0CC, 0x8040F0CC) //this is a jump label
/*8040F0CC 0040BECC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503BA0 @ Get_MemoryOffset_HighBit);
/*8040F0D0 0040BED0*/ PPC::Runtime::ASM::lis(context->r5, lbl_80503BB0 @ Get_MemoryOffset_HighBit);
/*8040F0D4 0040BED4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80503BA0 @ Get_MemoryOffset_LowBit);
/*8040F0D8 0040BED8*/ PPC::Runtime::ASM::li(context->r4, 0x16e);
/*8040F0DC 0040BEDC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80503BB0 @ Get_MemoryOffset_LowBit);
/*8040F0E0 0040BEE0*/ PPC::Runtime::ASM::bl(fn_HSD_Panic);
/*8040F0E4 0040BEE4*/ PPC::Runtime::ASM::b(.L_8040F0F4);
RUNTIME_PPC_JUMP_LABEL(.L_8040F0E8, 0x8040F0E8) //this is a jump label
/*8040F0E8 0040BEE8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8040F0EC 0040BEEC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*8040F0F0 0040BEF0*/ PPC::Runtime::ASM::bl(fn_PSMTXConcat);
RUNTIME_PPC_JUMP_LABEL(.L_8040F0F4, 0x8040F0F4) //this is a jump label
/*8040F0F4 0040BEF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8040F0F8 0040BEF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8040F0FC 0040BEFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8040F100 0040BF00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8040F104 0040BF04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8040F108 0040BF08*/ PPC::Runtime::ASM::blr();
}