//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802CBC50(PPC::Runtime::GCContext* context)
{
/*802CBC50 002C8A50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802CBC54 002C8A54*/ PPC::Runtime::ASM::mflr(context->r0);
/*802CBC58 002C8A58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802CBC5C 002C8A5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802CBC60 002C8A60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802CBC64 002C8A64*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802CBC68 002C8A68*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802CBC6C 002C8A6C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802CBC70 002C8A70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802CBC74 002C8A74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBC78 002C8A78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBC7C 002C8A7C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBC80 002C8A80*/ PPC::Runtime::ASM::bctrl();
/* 802CBC84 002C8A84  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802CBC88 002C8A88*/ PPC::Runtime::ASM::beq(.L_802CBEE8);
/*802CBC8C 002C8A8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802CBC90 002C8A90*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802CBC94 002C8A94*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*802CBC98 002C8A98*/ PPC::Runtime::ASM::bne(.L_802CBCAC);
/*802CBC9C 002C8A9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*802CBCA0 002C8AA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*802CBCA4 002C8AA4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBCA8 002C8AA8*/ PPC::Runtime::ASM::bne(.L_802CBCCC);
RUNTIME_PPC_JUMP_LABEL(.L_802CBCAC, 0x802CBCAC) //this is a jump label
/*802CBCAC 002C8AAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802CBCB0 002C8AB0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBCB4 002C8AB4*/ PPC::Runtime::ASM::beq(.L_802CBCCC);
/*802CBCB8 002C8AB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r31));
/*802CBCBC 002C8ABC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBCC0 002C8AC0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBCC4 002C8AC4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBCC8 002C8AC8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBCCC, 0x802CBCCC) //this is a jump label
/*802CBCCC 002C8ACC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*802CBCD0 002C8AD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*802CBCD4 002C8AD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBCD8 002C8AD8*/ PPC::Runtime::ASM::bne(.L_802CBEC4);
/*802CBCDC 002C8ADC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802CBCE0 002C8AE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBCE4 002C8AE4*/ PPC::Runtime::ASM::bne(.L_802CBDD0);
/*802CBCE8 002C8AE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*802CBCEC 002C8AEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBCF0 002C8AF0*/ PPC::Runtime::ASM::beq(.L_802CBDA4);
/*802CBCF4 002C8AF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802CBCF8 002C8AF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBCFC 002C8AFC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBD00 002C8B00*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBD04 002C8B04*/ PPC::Runtime::ASM::bctrl();
/*802CBD08 002C8B08*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*802CBD0C 002C8B0C*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*802CBD10 002C8B10*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_802CBD14, 0x802CBD14) //this is a jump label
/*802CBD14 002C8B14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*802CBD18 002C8B18*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x58);
/*802CBD1C 002C8B1C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*802CBD20 002C8B20*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*802CBD24 002C8B24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*802CBD28 002C8B28*/ PPC::Runtime::ASM::bge(.L_802CBD90);
/*802CBD2C 002C8B2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*802CBD30 002C8B30*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBD34 002C8B34*/ PPC::Runtime::ASM::beq(.L_802CBD70);
/*802CBD38 002C8B38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r28));
/*802CBD3C 002C8B3C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBD40 002C8B40*/ PPC::Runtime::ASM::bne(.L_802CBD5C);
/*802CBD44 002C8B44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r28));
/*802CBD48 002C8B48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBD4C 002C8B4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBD50 002C8B50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBD54 002C8B54*/ PPC::Runtime::ASM::bctrl();
/*802CBD58 002C8B58*/ PPC::Runtime::ASM::b(.L_802CBD70);
RUNTIME_PPC_JUMP_LABEL(.L_802CBD5C, 0x802CBD5C) //this is a jump label
/*802CBD5C 002C8B5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*802CBD60 002C8B60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBD64 002C8B64*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBD68 002C8B68*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBD6C 002C8B6C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBD70, 0x802CBD70) //this is a jump label
/*802CBD70 002C8B70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*802CBD74 002C8B74*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBD78 002C8B78*/ PPC::Runtime::ASM::beq(.L_802CBD90);
/*802CBD7C 002C8B7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r28));
/*802CBD80 002C8B80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBD84 002C8B84*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBD88 002C8B88*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBD8C 002C8B8C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBD90, 0x802CBD90) //this is a jump label
/*802CBD90 002C8B90*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*802CBD94 002C8B94*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*802CBD98 002C8B98*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x4);
/*802CBD9C 002C8B9C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x9);
/*802CBDA0 002C8BA0*/ PPC::Runtime::ASM::blt(.L_802CBD14);
RUNTIME_PPC_JUMP_LABEL(.L_802CBDA4, 0x802CBDA4) //this is a jump label
/*802CBDA4 002C8BA4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*802CBDA8 002C8BA8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBDAC 002C8BAC*/ PPC::Runtime::ASM::beq(.L_802CBDD0);
/*802CBDB0 002C8BB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*802CBDB4 002C8BB4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x5a);
/*802CBDB8 002C8BB8*/ PPC::Runtime::ASM::bge(.L_802CBDD0);
/*802CBDBC 002C8BBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*802CBDC0 002C8BC0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBDC4 002C8BC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBDC8 002C8BC8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBDCC 002C8BCC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBDD0, 0x802CBDD0) //this is a jump label
/*802CBDD0 002C8BD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*802CBDD4 002C8BD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBDD8 002C8BD8*/ PPC::Runtime::ASM::beq(.L_802CBE1C);
/*802CBDDC 002C8BDC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*802CBDE0 002C8BE0*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_802CBDE4, 0x802CBDE4) //this is a jump label
/*802CBDE4 002C8BE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r28));
/*802CBDE8 002C8BE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBDEC 002C8BEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBDF0 002C8BF0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBDF4 002C8BF4*/ PPC::Runtime::ASM::bctrl();
/*802CBDF8 002C8BF8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*802CBDFC 002C8BFC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*802CBE00 002C8C00*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x5);
/*802CBE04 002C8C04*/ PPC::Runtime::ASM::blt(.L_802CBDE4);
/*802CBE08 002C8C08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*802CBE0C 002C8C0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBE10 002C8C10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBE14 002C8C14*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBE18 002C8C18*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBE1C, 0x802CBE1C) //this is a jump label
/*802CBE1C 002C8C1C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*802CBE20 002C8C20*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBE24 002C8C24*/ PPC::Runtime::ASM::beq(.L_802CBE60);
/*802CBE28 002C8C28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r31));
/*802CBE2C 002C8C2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBE30 002C8C30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBE34 002C8C34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBE38 002C8C38*/ PPC::Runtime::ASM::bctrl();
/*802CBE3C 002C8C3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r31));
/*802CBE40 002C8C40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBE44 002C8C44*/ PPC::Runtime::ASM::beq(.L_802CBE80);
/*802CBE48 002C8C48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r31));
/*802CBE4C 002C8C4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBE50 002C8C50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBE54 002C8C54*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBE58 002C8C58*/ PPC::Runtime::ASM::bctrl();
/*802CBE5C 002C8C5C*/ PPC::Runtime::ASM::b(.L_802CBE80);
RUNTIME_PPC_JUMP_LABEL(.L_802CBE60, 0x802CBE60) //this is a jump label
/*802CBE60 002C8C60*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802CBE64 002C8C64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBE68 002C8C68*/ PPC::Runtime::ASM::beq(.L_802CBE80);
/*802CBE6C 002C8C6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r31));
/*802CBE70 002C8C70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBE74 002C8C74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBE78 002C8C78*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBE7C 002C8C7C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBE80, 0x802CBE80) //this is a jump label
/*802CBE80 002C8C80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
/*802CBE84 002C8C84*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802CBE88 002C8C88*/ PPC::Runtime::ASM::beq(.L_802CBED4);
/*802CBE8C 002C8C8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*802CBE90 002C8C90*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x3c);
/*802CBE94 002C8C94*/ PPC::Runtime::ASM::bge(.L_802CBED4);
/*802CBE98 002C8C98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*802CBE9C 002C8C9C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBEA0 002C8CA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBEA4 002C8CA4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBEA8 002C8CA8*/ PPC::Runtime::ASM::bctrl();
/*802CBEAC 002C8CAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802CBEB0 002C8CB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBEB4 002C8CB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBEB8 002C8CB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBEBC 002C8CBC*/ PPC::Runtime::ASM::bctrl();
/*802CBEC0 002C8CC0*/ PPC::Runtime::ASM::b(.L_802CBED4);
RUNTIME_PPC_JUMP_LABEL(.L_802CBEC4, 0x802CBEC4) //this is a jump label
/*802CBEC4 002C8CC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBEC8 002C8CC8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802CBECC 002C8CCC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBED0 002C8CD0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBED4, 0x802CBED4) //this is a jump label
/*802CBED4 002C8CD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*802CBED8 002C8CD8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802CBEDC 002C8CDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802CBEE0 002C8CE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802CBEE4 002C8CE4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802CBEE8, 0x802CBEE8) //this is a jump label
/*802CBEE8 002C8CE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802CBEEC 002C8CEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802CBEF0 002C8CF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802CBEF4 002C8CF4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802CBEF8 002C8CF8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802CBEFC 002C8CFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802CBF00 002C8D00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802CBF04 002C8D04*/ PPC::Runtime::ASM::blr();
}