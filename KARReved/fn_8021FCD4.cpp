//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80221AE0.hpp"
#include "fn_80221AE0.hpp"
#include "fn_80222460.hpp"



void fn_8021FCD4(PPC::Runtime::GCContext* context)
{
/*8021FCD4 0021CAD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8021FCD8 0021CAD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021FCDC 0021CADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8021FCE0 0021CAE0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8021FCE4 0021CAE4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8021FCE8 0021CAE8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8021FCEC 0021CAEC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8021FCF0 0021CAF0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8021FCF4 0021CAF4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8021FCF8 0021CAF8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8021FCFC 0021CAFC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8021FD00 0021CB00*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021FD04 0021CB04*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8021FD08 0021CB08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r30));
/*8021FD0C 0021CB0C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x58);
/*8021FD10 0021CB10*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x1c);
/*8021FD14 0021CB14*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8021FD18 0021CB18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*8021FD1C 0021CB1C*/ PPC::Runtime::ASM::fctiwz(context->f2, context->f2);
/*8021FD20 0021CB20*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8021FD24 0021CB24*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*8021FD28 0021CB28*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8021FD2C 0021CB2C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*8021FD30 0021CB30*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021FD34 0021CB34*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021FD38 0021CB38*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021FD3C 0021CB3C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021FD40 0021CB40*/ PPC::Runtime::ASM::beq(.L_8021FD98);
/*8021FD44 0021CB44*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8021FD48 0021CB48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021FD4C 0021CB4C*/ PPC::Runtime::ASM::bl(fn_80221AE0);
/*8021FD50 0021CB50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r30));
/*8021FD54 0021CB54*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8021FD58 0021CB58*/ PPC::Runtime::ASM::beq(.L_8021FD80);
/*8021FD5C 0021CB5C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021FD60 0021CB60*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8021FD64 0021CB64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8021FD68 0021CB68*/ PPC::Runtime::ASM::bctrl();
/*8021FD6C 0021CB6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021FD70 0021CB70*/ PPC::Runtime::ASM::beq(.L_8021FD80);
/*8021FD74 0021CB74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8021FD78 0021CB78*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8021FD7C 0021CB7C*/ PPC::Runtime::ASM::b(.L_8021FEAC);
RUNTIME_PPC_JUMP_LABEL(.L_8021FD80, 0x8021FD80) //this is a jump label
/*8021FD80 0021CB80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8021FD84 0021CB84*/ PPC::Runtime::ASM::li(context->r28, 0x1);
/*8021FD88 0021CB88*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8021FD8C 0021CB8C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021FD90 0021CB90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021FD94 0021CB94*/ PPC::Runtime::ASM::b(.L_8021FE5C);
RUNTIME_PPC_JUMP_LABEL(.L_8021FD98, 0x8021FD98) //this is a jump label
/*8021FD98 0021CB98*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*8021FD9C 0021CB9C*/ PPC::Runtime::ASM::beq(.L_8021FDD4);
/*8021FDA0 0021CBA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r30));
/*8021FDA4 0021CBA4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8021FDA8 0021CBA8*/ PPC::Runtime::ASM::beq(.L_8021FDCC);
/*8021FDAC 0021CBAC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021FDB0 0021CBB0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8021FDB4 0021CBB4*/ PPC::Runtime::ASM::bctrl();
/*8021FDB8 0021CBB8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021FDBC 0021CBBC*/ PPC::Runtime::ASM::beq(.L_8021FDCC);
/*8021FDC0 0021CBC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8021FDC4 0021CBC4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8021FDC8 0021CBC8*/ PPC::Runtime::ASM::b(.L_8021FEAC);
RUNTIME_PPC_JUMP_LABEL(.L_8021FDCC, 0x8021FDCC) //this is a jump label
/*8021FDCC 0021CBCC*/ PPC::Runtime::ASM::mr(context->r29, context->r26);
/*8021FDD0 0021CBD0*/ PPC::Runtime::ASM::b(.L_8021FE5C);
RUNTIME_PPC_JUMP_LABEL(.L_8021FDD4, 0x8021FDD4) //this is a jump label
/*8021FDD4 0021CBD4*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*8021FDD8 0021CBD8*/ PPC::Runtime::ASM::beq(.L_8021FE24);
/*8021FDDC 0021CBDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8021FDE0 0021CBE0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B4338 @ Get_MemoryOffset_HighBit);
/*8021FDE4 0021CBE4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B4338 @ Get_MemoryOffset_LowBit);
/*8021FDE8 0021CBE8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8021FDEC 0021CBEC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8021FDF0 0021CBF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8021FDF4 0021CBF4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8021FDF8 0021CBF8*/ PPC::Runtime::ASM::beq(.L_8021FE1C);
/*8021FDFC 0021CBFC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021FE00 0021CC00*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8021FE04 0021CC04*/ PPC::Runtime::ASM::bctrl();
/*8021FE08 0021CC08*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021FE0C 0021CC0C*/ PPC::Runtime::ASM::beq(.L_8021FE1C);
/*8021FE10 0021CC10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8021FE14 0021CC14*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8021FE18 0021CC18*/ PPC::Runtime::ASM::b(.L_8021FEAC);
RUNTIME_PPC_JUMP_LABEL(.L_8021FE1C, 0x8021FE1C) //this is a jump label
/*8021FE1C 0021CC1C*/ PPC::Runtime::ASM::mr(context->r29, context->r27);
/*8021FE20 0021CC20*/ PPC::Runtime::ASM::b(.L_8021FE5C);
RUNTIME_PPC_JUMP_LABEL(.L_8021FE24, 0x8021FE24) //this is a jump label
/*8021FE24 0021CC24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*8021FE28 0021CC28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8021FE2C 0021CC2C*/ PPC::Runtime::ASM::beq(.L_8021FE5C);
/*8021FE30 0021CC30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r30));
/*8021FE34 0021CC34*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8021FE38 0021CC38*/ PPC::Runtime::ASM::beq(.L_8021FE5C);
/*8021FE3C 0021CC3C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021FE40 0021CC40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8021FE44 0021CC44*/ PPC::Runtime::ASM::bctrl();
/*8021FE48 0021CC48*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021FE4C 0021CC4C*/ PPC::Runtime::ASM::beq(.L_8021FE5C);
/*8021FE50 0021CC50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8021FE54 0021CC54*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8021FE58 0021CC58*/ PPC::Runtime::ASM::b(.L_8021FEAC);
RUNTIME_PPC_JUMP_LABEL(.L_8021FE5C, 0x8021FE5C) //this is a jump label
/*8021FE5C 0021CC5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021FE60 0021CC60*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*8021FE64 0021CC64*/ PPC::Runtime::ASM::bne(.L_8021FE7C);
/*8021FE68 0021CC68*/ PPC::Runtime::ASM::fcmpu(cr0, context->f30, context->f0);
/*8021FE6C 0021CC6C*/ PPC::Runtime::ASM::beq(.L_8021FE7C);
/*8021FE70 0021CC70*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8021FE74 0021CC74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021FE78 0021CC78*/ PPC::Runtime::ASM::bl(fn_80221AE0);
RUNTIME_PPC_JUMP_LABEL(.L_8021FE7C, 0x8021FE7C) //this is a jump label
/*8021FE7C 0021CC7C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021FE80 0021CC80*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8021FE84 0021CC84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*8021FE88 0021CC88*/ PPC::Runtime::ASM::beq(.L_8021FEAC);
/*8021FE8C 0021CC8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8021FE90 0021CC90*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8021FE94 0021CC94*/ PPC::Runtime::ASM::beq(.L_8021FEAC);
/*8021FE98 0021CC98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021FE9C 0021CC9C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8021FEA0 0021CCA0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8021FEA4 0021CCA4*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8021FEA8 0021CCA8*/ PPC::Runtime::ASM::bl(fn_80222460);
RUNTIME_PPC_JUMP_LABEL(.L_8021FEAC, 0x8021FEAC) //this is a jump label
/*8021FEAC 0021CCAC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8021FEB0 0021CCB0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8021FEB4 0021CCB4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8021FEB8 0021CCB8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8021FEBC 0021CCBC*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8021FEC0 0021CCC0*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8021FEC4 0021CCC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8021FEC8 0021CCC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021FECC 0021CCCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8021FED0 0021CCD0*/ PPC::Runtime::ASM::blr();
}