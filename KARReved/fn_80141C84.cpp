//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_80141C84(PPC::Runtime::GCContext* context)
{
/*80141C84 0013EA84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80141C88 0013EA88*/ PPC::Runtime::ASM::mflr(context->r0);
/*80141C8C 0013EA8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80141C90 0013EA90*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80141C94 0013EA94*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80141C98 0013EA98*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80141C9C 0013EA9C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80141CA0 0013EAA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80141CA4 0013EAA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80141CA8 0013EAA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80141CAC 0013EAAC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80141CB0 0013EAB0*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80141CB4 0013EAB4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80141CB8 0013EAB8*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80141CBC 0013EABC*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80141CC0 0013EAC0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80141CC4 0013EAC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E030C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141CC8 0013EAC8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x28);
/*80141CCC 0013EACC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141CD0 0013EAD0*/ PPC::Runtime::ASM::fdivs(context->f30, context->f30, context->f0);
/*80141CD4 0013EAD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0384 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141CD8 0013EAD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80141CDC 0013EADC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80141CE0 0013EAE0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80141CE4 0013EAE4*/ PPC::Runtime::ASM::bne(.L_80141CEC);
/*80141CE8 0013EAE8*/ PPC::Runtime::ASM::fmr(context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80141CEC, 0x80141CEC) //this is a jump label
/*80141CEC 0013EAEC*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x4);
/*80141CF0 0013EAF0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80141CF4 0013EAF4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80141CF8 0013EAF8*/ PPC::Runtime::ASM::add(context->r30, context->r31, context->r0);
/*80141CFC 0013EAFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80141D00 0013EB00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80141D04 0013EB04*/ PPC::Runtime::ASM::beq(.L_80141D14);
/*80141D08 0013EB08*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*80141D0C 0013EB0C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80141D10 0013EB10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80141D14, 0x80141D14) //this is a jump label
/*80141D14 0013EB14*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80141D18 0013EB18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80141D1C 0013EB1C*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*80141D20 0013EB20*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80141D24 0013EB24*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141D28 0013EB28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80141D2C 0013EB2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80141D30 0013EB30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141D34 0013EB34*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80141D38 0013EB38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141D3C 0013EB3C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80141D40 0013EB40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80141D44 0013EB44*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80141D48 0013EB48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80141D4C 0013EB4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80141D50 0013EB50*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*80141D54 0013EB54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80141D58 0013EB58*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80141D5C 0013EB5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80141D60 0013EB60*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80141D64 0013EB64*/ PPC::Runtime::ASM::beq(.L_80141D7C);
/*80141D68 0013EB68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80141D6C 0013EB6C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80141D70 0013EB70*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80141D74 0013EB74*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80141D78 0013EB78*/ PPC::Runtime::ASM::bl(fn_800644AC);
RUNTIME_PPC_JUMP_LABEL(.L_80141D7C, 0x80141D7C) //this is a jump label
/*80141D7C 0013EB7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80141D80 0013EB80*/ PPC::Runtime::ASM::extsb.(context->r0, context->r29);
/*80141D84 0013EB84*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0430 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141D88 0013EB88*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141D8C 0013EB8C*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f0);
/*80141D90 0013EB90*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141D94 0013EB94*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*80141D98 0013EB98*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80141D9C 0013EB9C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80141DA0 0013EBA0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141DA4 0013EBA4*/ PPC::Runtime::ASM::beq(.L_801420BC);
/*80141DA8 0013EBA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0388 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141DAC 0013EBAC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80141DB0 0013EBB0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80141DB4 0013EBB4*/ PPC::Runtime::ASM::bne(.L_80141E18);
/*80141DB8 0013EBB8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*80141DBC 0013EBBC*/ PPC::Runtime::ASM::lis(context->r5, 0x431c);
/*80141DC0 0013EBC0*/ PPC::Runtime::ASM::lis(context->r4, 0xf);
/*80141DC4 0013EBC4*/ PPC::Runtime::ASM::lis(context->r3, 0x14f9);
/*80141DC8 0013EBC8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4240);
/*80141DCC 0013EBCC*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x217d);
/*80141DD0 0013EBD0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80141DD4 0013EBD4*/ PPC::Runtime::ASM::subi(context->r8, context->r3, 0x4a77);
/*80141DD8 0013EBD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141DDC 0013EBDC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80141DE0 0013EBE0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 80141DE4 0013EBE4  7C A5 38 96 */ mulhw context->r5 , context->r5 , context->r7
/*80141DE8 0013EBE8*/ PPC::Runtime::ASM::srawi(context->r5, context->r5, 18);
/*80141DEC 0013EBEC*/ PPC::Runtime::ASM::srwi(context->r6, context->r5, 31);
/*80141DF0 0013EBF0*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r6);
/*80141DF4 0013EBF4*/ PPC::Runtime::ASM::mullw(context->r0, context->r5, context->r0);
/*80141DF8 0013EBF8*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 80141DFC 0013EBFC  7C 08 00 96 */ mulhw context->r0 , context->r8 , context->r0
/*80141E00 0013EC00*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 13);
/*80141E04 0013EC04*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141E08 0013EC08*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80141E0C 0013EC0C  4C C6 32 42 */ crset context->cr1eq
/*80141E10 0013EC10*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80141E14 0013EC14*/ PPC::Runtime::ASM::b(.L_80141E28);
RUNTIME_PPC_JUMP_LABEL(.L_80141E18, 0x80141E18) //this is a jump label
/*80141E18 0013EC18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141E1C 0013EC1C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 80141E20 0013EC20  4C C6 32 42 */ crset context->cr1eq
/*80141E24 0013EC24*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80141E28, 0x80141E28) //this is a jump label
/*80141E28 0013EC28*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141E2C 0013EC2C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80141E30 0013EC30*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80141E34 0013EC34*/ PPC::Runtime::ASM::bne(.L_80141EA4);
/*80141E38 0013EC38*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*80141E3C 0013EC3C*/ PPC::Runtime::ASM::lis(context->r5, 0x14f9);
/*80141E40 0013EC40*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*80141E44 0013EC44*/ PPC::Runtime::ASM::lis(context->r3, 0x68dc);
/*80141E48 0013EC48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141E4C 0013EC4C*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x4a77);
/*80141E50 0013EC50*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80141E54 0013EC54*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7960);
/*80141E58 0013EC58*/ PPC::Runtime::ASM::subi(context->r8, context->r3, 0x7453);
/*80141E5C 0013EC5C*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80141E60 0013EC60*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80141E64 0013EC64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141E68 0013EC68*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141E6C 0013EC6C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/* 80141E70 0013EC70  7C A5 38 96 */ mulhw context->r5 , context->r5 , context->r7
/*80141E74 0013EC74*/ PPC::Runtime::ASM::srawi(context->r5, context->r5, 13);
/*80141E78 0013EC78*/ PPC::Runtime::ASM::srwi(context->r6, context->r5, 31);
/*80141E7C 0013EC7C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r6);
/*80141E80 0013EC80*/ PPC::Runtime::ASM::mullw(context->r0, context->r5, context->r0);
/*80141E84 0013EC84*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 80141E88 0013EC88  7C 08 00 96 */ mulhw context->r0 , context->r8 , context->r0
/*80141E8C 0013EC8C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 12);
/*80141E90 0013EC90*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141E94 0013EC94*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80141E98 0013EC98  4C C6 32 42 */ crset context->cr1eq
/*80141E9C 0013EC9C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80141EA0 0013ECA0*/ PPC::Runtime::ASM::b(.L_80141EC0);
RUNTIME_PPC_JUMP_LABEL(.L_80141EA4, 0x80141EA4) //this is a jump label
/*80141EA4 0013ECA4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141EA8 0013ECA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141EAC 0013ECAC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141EB0 0013ECB0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/*80141EB4 0013ECB4*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80141EB8 0013ECB8  4C C6 32 42 */ crset context->cr1eq
/*80141EBC 0013ECBC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80141EC0, 0x80141EC0) //this is a jump label
/*80141EC0 0013ECC0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141EC4 0013ECC4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80141EC8 0013ECC8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80141ECC 0013ECCC*/ PPC::Runtime::ASM::bne(.L_80141F34);
/*80141ED0 0013ECD0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*80141ED4 0013ECD4*/ PPC::Runtime::ASM::lis(context->r4, 0x68dc);
/*80141ED8 0013ECD8*/ PPC::Runtime::ASM::lis(context->r3, 0x1062);
/*80141EDC 0013ECDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141EE0 0013ECE0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7453);
/*80141EE4 0013ECE4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141EE8 0013ECE8*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80141EEC 0013ECEC*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x4dd3);
/*80141EF0 0013ECF0*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80141EF4 0013ECF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141EF8 0013ECF8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80141EFC 0013ECFC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/* 80141F00 0013ED00  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*80141F04 0013ED04*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 12);
/*80141F08 0013ED08*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141F0C 0013ED0C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80141F10 0013ED10*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x2710);
/*80141F14 0013ED14*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r6);
/* 80141F18 0013ED18  7C 07 00 96 */ mulhw context->r0 , context->r7 , context->r0
/*80141F1C 0013ED1C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*80141F20 0013ED20*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141F24 0013ED24*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80141F28 0013ED28  4C C6 32 42 */ crset context->cr1eq
/*80141F2C 0013ED2C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80141F30 0013ED30*/ PPC::Runtime::ASM::b(.L_80141F50);
RUNTIME_PPC_JUMP_LABEL(.L_80141F34, 0x80141F34) //this is a jump label
/*80141F34 0013ED34*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141F38 0013ED38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141F3C 0013ED3C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141F40 0013ED40*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/*80141F44 0013ED44*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80141F48 0013ED48  4C C6 32 42 */ crset context->cr1eq
/*80141F4C 0013ED4C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80141F50, 0x80141F50) //this is a jump label
/*80141F50 0013ED50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141F54 0013ED54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80141F58 0013ED58*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80141F5C 0013ED5C*/ PPC::Runtime::ASM::bne(.L_80141FC4);
/*80141F60 0013ED60*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*80141F64 0013ED64*/ PPC::Runtime::ASM::lis(context->r4, 0x1062);
/*80141F68 0013ED68*/ PPC::Runtime::ASM::lis(context->r3, 0x51ec);
/*80141F6C 0013ED6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141F70 0013ED70*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4dd3);
/*80141F74 0013ED74*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141F78 0013ED78*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80141F7C 0013ED7C*/ PPC::Runtime::ASM::subi(context->r7, context->r3, 0x7ae1);
/*80141F80 0013ED80*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80141F84 0013ED84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141F88 0013ED88*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80141F8C 0013ED8C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/* 80141F90 0013ED90  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*80141F94 0013ED94*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*80141F98 0013ED98*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141F9C 0013ED9C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80141FA0 0013EDA0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3e8);
/*80141FA4 0013EDA4*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r6);
/* 80141FA8 0013EDA8  7C 07 00 96 */ mulhw context->r0 , context->r7 , context->r0
/*80141FAC 0013EDAC*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80141FB0 0013EDB0*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141FB4 0013EDB4*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80141FB8 0013EDB8  4C C6 32 42 */ crset context->cr1eq
/*80141FBC 0013EDBC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80141FC0 0013EDC0*/ PPC::Runtime::ASM::b(.L_80141FE0);
RUNTIME_PPC_JUMP_LABEL(.L_80141FC4, 0x80141FC4) //this is a jump label
/*80141FC4 0013EDC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141FC8 0013EDC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141FCC 0013EDCC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80141FD0 0013EDD0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/*80141FD4 0013EDD4*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80141FD8 0013EDD8  4C C6 32 42 */ crset context->cr1eq
/*80141FDC 0013EDDC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80141FE0, 0x80141FE0) //this is a jump label
/*80141FE0 0013EDE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141FE4 0013EDE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80141FE8 0013EDE8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80141FEC 0013EDEC*/ PPC::Runtime::ASM::bne(.L_80142054);
/*80141FF0 0013EDF0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*80141FF4 0013EDF4*/ PPC::Runtime::ASM::lis(context->r4, 0x51ec);
/*80141FF8 0013EDF8*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80141FFC 0013EDFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142000 0013EE00*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7ae1);
/*80142004 0013EE04*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80142008 0013EE08*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014200C 0013EE0C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x6667);
/*80142010 0013EE10*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80142014 0013EE14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142018 0013EE18*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014201C 0013EE1C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/* 80142020 0013EE20  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*80142024 0013EE24*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80142028 0013EE28*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8014202C 0013EE2C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80142030 0013EE30*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x64);
/*80142034 0013EE34*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r6);
/* 80142038 0013EE38  7C 07 00 96 */ mulhw context->r0 , context->r7 , context->r0
/*8014203C 0013EE3C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*80142040 0013EE40*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80142044 0013EE44*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80142048 0013EE48  4C C6 32 42 */ crset context->cr1eq
/*8014204C 0013EE4C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80142050 0013EE50*/ PPC::Runtime::ASM::b(.L_80142070);
RUNTIME_PPC_JUMP_LABEL(.L_80142054, 0x80142054) //this is a jump label
/*80142054 0013EE54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142058 0013EE58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014205C 0013EE5C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80142060 0013EE60*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/*80142064 0013EE64*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80142068 0013EE68  4C C6 32 42 */ crset context->cr1eq
/*8014206C 0013EE6C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80142070, 0x80142070) //this is a jump label
/*80142070 0013EE70*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*80142074 0013EE74*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80142078 0013EE78*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014207C 0013EE7C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*80142080 0013EE80*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80142084 0013EE84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142088 0013EE88*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014208C 0013EE8C*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80142090 0013EE90*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80142094 0013EE94*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 80142098 0013EE98  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*8014209C 0013EE9C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*801420A0 0013EEA0*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801420A4 0013EEA4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*801420A8 0013EEA8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*801420AC 0013EEAC*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r6);
/* 801420B0 0013EEB0  4C C6 32 42 */ crset context->cr1eq
/*801420B4 0013EEB4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801420B8 0013EEB8*/ PPC::Runtime::ASM::b(.L_80142158);
RUNTIME_PPC_JUMP_LABEL(.L_801420BC, 0x801420BC) //this is a jump label
/*801420BC 0013EEBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801420C0 0013EEC0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/* 801420C4 0013EEC4  4C C6 32 42 */ crset context->cr1eq
/*801420C8 0013EEC8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801420CC 0013EECC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801420D0 0013EED0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801420D4 0013EED4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801420D8 0013EED8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*801420DC 0013EEDC*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 801420E0 0013EEE0  4C C6 32 42 */ crset context->cr1eq
/*801420E4 0013EEE4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801420E8 0013EEE8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801420EC 0013EEEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801420F0 0013EEF0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801420F4 0013EEF4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*801420F8 0013EEF8*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 801420FC 0013EEFC  4C C6 32 42 */ crset context->cr1eq
/*80142100 0013EF00*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80142104 0013EF04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142108 0013EF08*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014210C 0013EF0C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80142110 0013EF10*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*80142114 0013EF14*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80142118 0013EF18  4C C6 32 42 */ crset context->cr1eq
/*8014211C 0013EF1C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80142120 0013EF20*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142124 0013EF24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142128 0013EF28*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014212C 0013EF2C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*80142130 0013EF30*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80142134 0013EF34  4C C6 32 42 */ crset context->cr1eq
/*80142138 0013EF38*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8014213C 0013EF3C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142140 0013EF40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142144 0013EF44*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80142148 0013EF48*/ PPC::Runtime::ASM::li(context->r4, lbl_805D665C @ Get_MemoryOffset_SDA21);
/*8014214C 0013EF4C*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80142150 0013EF50  4C C6 32 42 */ crset context->cr1eq
/*80142154 0013EF54*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80142158, 0x80142158) //this is a jump label
/*80142158 0013EF58*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014215C 0013EF5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142160 0013EF60*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80142164 0013EF64*/ PPC::Runtime::ASM::li(context->r4, lbl_805D664C @ Get_MemoryOffset_SDA21);
/*80142168 0013EF68*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 8014216C 0013EF6C  4C C6 32 42 */ crset context->cr1eq
/*80142170 0013EF70*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80142174 0013EF74*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E03F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142178 0013EF78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014217C 0013EF7C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80142180 0013EF80*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6650 @ Get_MemoryOffset_SDA21);
/*80142184 0013EF84*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/* 80142188 0013EF88  4C C6 32 42 */ crset context->cr1eq
/*8014218C 0013EF8C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80142190 0013EF90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142194 0013EF94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142198 0013EF98*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014219C 0013EF9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801421A0 0013EFA0*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801421A4 0013EFA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421A8 0013EFA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801421AC 0013EFAC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421B0 0013EFB0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801421B4 0013EFB4*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801421B8 0013EFB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421BC 0013EFBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801421C0 0013EFC0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421C4 0013EFC4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801421C8 0013EFC8*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801421CC 0013EFCC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421D0 0013EFD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801421D4 0013EFD4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421D8 0013EFD8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801421DC 0013EFDC*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801421E0 0013EFE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421E4 0013EFE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801421E8 0013EFE8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421EC 0013EFEC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801421F0 0013EFF0*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801421F4 0013EFF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E03D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801421F8 0013EFF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801421FC 0013EFFC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142200 0013F000*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80142204 0013F004*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80142208 0013F008*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014220C 0013F00C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142210 0013F010*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142214 0013F014*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80142218 0013F018*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8014221C 0013F01C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142220 0013F020*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80142224 0013F024*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80142228 0013F028*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8014222C 0013F02C*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80142230 0013F030*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80142234 0013F034*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80142238 0013F038*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8014223C 0013F03C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80142240 0013F040*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80142244 0013F044*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80142248 0013F048*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014224C 0013F04C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80142250 0013F050*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80142254 0013F054*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80142258 0013F058*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8014225C 0013F05C*/ PPC::Runtime::ASM::blr();
}