//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038FE20(PPC::Runtime::GCContext* context)
{
/*8038FE20 0038CC20*/ PPC::Runtime::ASM::mullw(context->r6, context->r6, context->r4);
/*8038FE24 0038CC24*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8038FE28 0038CC28*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8038FE2C 0038CC2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8038FE30 0038CC30*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r7);
/*8038FE34 0038CC34*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4EA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038FE38 0038CC38*/ PPC::Runtime::ASM::add(context->r7, context->r5, context->r6);
/*8038FE3C 0038CC3C*/ PPC::Runtime::ASM::xoris(context->r6, context->r0, 0x8000);
/*8038FE40 0038CC40*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*8038FE44 0038CC44*/ PPC::Runtime::ASM::ble(.L_8038FF2C);
/* 8038FE48 0038CC48  54 80 F0 BF */ srwi. context->r0 , context->r4 , 2
/*8038FE4C 0038CC4C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8038FE50 0038CC50*/ PPC::Runtime::ASM::beq(.L_8038FEF8);
RUNTIME_PPC_JUMP_LABEL(.L_8038FE54, 0x8038FE54) //this is a jump label
/*8038FE54 0038CC54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8038FE58 0038CC58*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FE5C 0038CC5C*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr4);
/*8038FE60 0038CC60*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FE64 0038CC64*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FE68 0038CC68*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FE6C 0038CC6C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FE70 0038CC70*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FE74 0038CC74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038FE78 0038CC78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*8038FE7C 0038CC7C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FE80 0038CC80*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr4);
/*8038FE84 0038CC84*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FE88 0038CC88*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FE8C 0038CC8C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FE90 0038CC90*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FE94 0038CC94*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FE98 0038CC98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038FE9C 0038CC9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*8038FEA0 0038CCA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FEA4 0038CCA4*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr4);
/*8038FEA8 0038CCA8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FEAC 0038CCAC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FEB0 0038CCB0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FEB4 0038CCB4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FEB8 0038CCB8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FEBC 0038CCBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8038FEC0 0038CCC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r7));
/*8038FEC4 0038CCC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FEC8 0038CCC8*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr4);
/*8038FECC 0038CCCC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4);
/*8038FED0 0038CCD0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FED4 0038CCD4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FED8 0038CCD8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FEDC 0038CCDC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FEE0 0038CCE0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FEE4 0038CCE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8038FEE8 0038CCE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*8038FEEC 0038CCEC*/ PPC::Runtime::ASM::bdnz(.L_8038FE54);
/*8038FEF0 0038CCF0*/ PPC::Runtime::ASM::andi.(context->r4, context->r4, 0x3);
/*8038FEF4 0038CCF4*/ PPC::Runtime::ASM::beq(.L_8038FF2C);
RUNTIME_PPC_JUMP_LABEL(.L_8038FEF8, 0x8038FEF8) //this is a jump label
/*8038FEF8 0038CCF8*/ PPC::Runtime::ASM::mtctr(context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8038FEFC, 0x8038FEFC) //this is a jump label
/*8038FEFC 0038CCFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8038FF00 0038CD00*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FF04 0038CD04*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr4);
/*8038FF08 0038CD08*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8038FF0C 0038CD0C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FF10 0038CD10*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FF14 0038CD14*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FF18 0038CD18*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FF1C 0038CD1C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FF20 0038CD20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038FF24 0038CD24*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8038FF28 0038CD28*/ PPC::Runtime::ASM::bdnz(.L_8038FEFC);
RUNTIME_PPC_JUMP_LABEL(.L_8038FF2C, 0x8038FF2C) //this is a jump label
/*8038FF2C 0038CD2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8038FF30 0038CD30*/ PPC::Runtime::ASM::blr();
}