//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_80252C9C.hpp"
#include "fn_80252D28.hpp"
#include "fn_80252C44.hpp"
#include "fn_8022C568.hpp"
#include "fn_80252C24.hpp"
#include "fn_800B8054.hpp"
#include "fn_80067438.hpp"
#include "fn_80115490.hpp"
#include "fn_801152CC.hpp"
#include "fn_80114F1C.hpp"



void fn_80121CA4(PPC::Runtime::GCContext* context)
{
/*80121CA4 0011EAA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*80121CA8 0011EAA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80121CAC 0011EAAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80121CB0 0011EAB0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80121CB4 0011EAB4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*80121CB8 0011EAB8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*80121CBC 0011EABC*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80121CC0 0011EAC0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80121CC4 0011EAC4*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80121CC8 0011EAC8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80121CCC 0011EACC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80121CD0 0011EAD0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*80121CD4 0011EAD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/* 80121CD8 0011EAD8  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*80121CDC 0011EADC*/ PPC::Runtime::ASM::beq(.L_80121FD8);
/*80121CE0 0011EAE0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80121CE4 0011EAE4*/ PPC::Runtime::ASM::bne(.L_80121CF4);
/*80121CE8 0011EAE8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121CEC 0011EAEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80121CF0 0011EAF0*/ PPC::Runtime::ASM::b(.L_80121D04);
RUNTIME_PPC_JUMP_LABEL(.L_80121CF4, 0x80121CF4) //this is a jump label
/*80121CF4 0011EAF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80121CF8 0011EAF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80121CFC 0011EAFC*/ PPC::Runtime::ASM::bne(.L_80121FCC);
/*80121D00 0011EB00*/ PPC::Runtime::ASM::b(.L_80121FD8);
RUNTIME_PPC_JUMP_LABEL(.L_80121D04, 0x80121D04) //this is a jump label
/*80121D04 0011EB04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80121D08 0011EB08*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80121D0C 0011EB0C*/ PPC::Runtime::ASM::extrwi(context->r25, context->r0, 4, 24);
/*80121D10 0011EB10*/ PPC::Runtime::ASM::extrwi(context->r24, context->r0, 2, 28);
/*80121D14 0011EB14*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80121D18 0011EB18*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80121D1C 0011EB1C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80121D20 0011EB20*/ PPC::Runtime::ASM::bl(fn_80252C9C);
/*80121D24 0011EB24*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80121D28 0011EB28*/ PPC::Runtime::ASM::bne(.L_80121D34);
/*80121D2C 0011EB2C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121D30 0011EB30*/ PPC::Runtime::ASM::b(.L_80121E2C);
RUNTIME_PPC_JUMP_LABEL(.L_80121D34, 0x80121D34) //this is a jump label
/*80121D34 0011EB34*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80121D38 0011EB38*/ PPC::Runtime::ASM::bl(fn_80252D28);
/*80121D3C 0011EB3C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80121D40 0011EB40*/ PPC::Runtime::ASM::bne(.L_80121D4C);
/*80121D44 0011EB44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121D48 0011EB48*/ PPC::Runtime::ASM::b(.L_80121E2C);
RUNTIME_PPC_JUMP_LABEL(.L_80121D4C, 0x80121D4C) //this is a jump label
/*80121D4C 0011EB4C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80121D50 0011EB50*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80121D54 0011EB54*/ PPC::Runtime::ASM::bl(fn_80252C44);
/*80121D58 0011EB58*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80121D5C 0011EB5C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80121D60 0011EB60*/ PPC::Runtime::ASM::bl(fn_8022C568);
/*80121D64 0011EB64*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80121D68 0011EB68*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80121D6C 0011EB6C*/ PPC::Runtime::ASM::bl(fn_803D22CC);
/*80121D70 0011EB70*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFE28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80121D74 0011EB74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80121D78 0011EB78*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80121D7C 0011EB7C*/ PPC::Runtime::ASM::bne(.L_80121D88);
/*80121D80 0011EB80*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121D84 0011EB84*/ PPC::Runtime::ASM::b(.L_80121E2C);
RUNTIME_PPC_JUMP_LABEL(.L_80121D88, 0x80121D88) //this is a jump label
/*80121D88 0011EB88*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80121D8C 0011EB8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80121D90 0011EB90*/ PPC::Runtime::ASM::bl(fn_803D22CC);
/*80121D94 0011EB94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFE2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80121D98 0011EB98*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80121D9C 0011EB9C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80121DA0 0011EBA0*/ PPC::Runtime::ASM::bne(.L_80121DAC);
/*80121DA4 0011EBA4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121DA8 0011EBA8*/ PPC::Runtime::ASM::b(.L_80121E2C);
RUNTIME_PPC_JUMP_LABEL(.L_80121DAC, 0x80121DAC) //this is a jump label
/*80121DAC 0011EBAC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80121DB0 0011EBB0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80121DB4 0011EBB4*/ PPC::Runtime::ASM::bl(fn_80252C24);
/*80121DB8 0011EBB8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80121DBC 0011EBBC*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80121DC0 0011EBC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80121DC4 0011EBC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFE30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80121DC8 0011EBC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*80121DCC 0011EBCC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f2);
/*80121DD0 0011EBD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80121DD4 0011EBD4*/ PPC::Runtime::ASM::bl(fn_800B8054);
/*80121DD8 0011EBD8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80121DDC 0011EBDC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*80121DE0 0011EBE0*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80121DE4 0011EBE4*/ PPC::Runtime::ASM::bl(fn_80067438);
/*80121DE8 0011EBE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80121DEC 0011EBEC*/ PPC::Runtime::ASM::bne(.L_80121DF8);
/*80121DF0 0011EBF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121DF4 0011EBF4*/ PPC::Runtime::ASM::b(.L_80121E2C);
RUNTIME_PPC_JUMP_LABEL(.L_80121DF8, 0x80121DF8) //this is a jump label
/*80121DF8 0011EBF8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFE34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80121DFC 0011EBFC*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*80121E00 0011EC00*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80121E04 0011EC04*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*80121E08 0011EC08*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80121E0C 0011EC0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFE38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80121E10 0011EC10*/ PPC::Runtime::ASM::fmr(context->f4, context->f1);
/*80121E14 0011EC14*/ PPC::Runtime::ASM::bl(fn_80115490);
/*80121E18 0011EC18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80121E1C 0011EC1C*/ PPC::Runtime::ASM::bne(.L_80121E28);
/*80121E20 0011EC20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121E24 0011EC24*/ PPC::Runtime::ASM::b(.L_80121E2C);
RUNTIME_PPC_JUMP_LABEL(.L_80121E28, 0x80121E28) //this is a jump label
/*80121E28 0011EC28*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80121E2C, 0x80121E2C) //this is a jump label
/*80121E2C 0011EC2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80121E30 0011EC30*/ PPC::Runtime::ASM::bne(.L_80121E40);
/*80121E34 0011EC34*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80121E38 0011EC38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80121E3C 0011EC3C*/ PPC::Runtime::ASM::b(.L_80121FD8);
RUNTIME_PPC_JUMP_LABEL(.L_80121E40, 0x80121E40) //this is a jump label
/*80121E40 0011EC40*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80121E44 0011EC44*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80121E48 0011EC48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFE3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80121E4C 0011EC4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80121E50 0011EC50*/ PPC::Runtime::ASM::fmuls(context->f31, context->f2, context->f1);
/*80121E54 0011EC54*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80121E58 0011EC58*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80121E5C 0011EC5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80121E60 0011EC60*/ PPC::Runtime::ASM::bne(.L_80121E74);
/*80121E64 0011EC64*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6478 @ Get_MemoryOffset_SDA21);
/*80121E68 0011EC68*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*80121E6C 0011EC6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6480 @ Get_MemoryOffset_SDA21);
/*80121E70 0011EC70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80121E74, 0x80121E74) //this is a jump label
/*80121E74 0011EC74*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80121E78 0011EC78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80121E7C 0011EC7C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80121E80 0011EC80*/ PPC::Runtime::ASM::bne(.L_80121ECC);
/*80121E84 0011EC84*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80121E88 0011EC88*/ PPC::Runtime::ASM::beq(.L_80121ECC);
/*80121E8C 0011EC8C*/ PPC::Runtime::ASM::bne(.L_80121EA0);
/*80121E90 0011EC90*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6478 @ Get_MemoryOffset_SDA21);
/*80121E94 0011EC94*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80121E98 0011EC98*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6480 @ Get_MemoryOffset_SDA21);
/*80121E9C 0011EC9C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80121EA0, 0x80121EA0) //this is a jump label
/*80121EA0 0011ECA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80121EA4 0011ECA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80121EA8 0011ECA8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80121EAC 0011ECAC*/ PPC::Runtime::ASM::bne(.L_80121EBC);
/*80121EB0 0011ECB0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80121EB4 0011ECB4*/ PPC::Runtime::ASM::beq(.L_80121EBC);
/*80121EB8 0011ECB8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80121EBC, 0x80121EBC) //this is a jump label
/*80121EBC 0011ECBC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80121EC0 0011ECC0*/ PPC::Runtime::ASM::bne(.L_80121ECC);
/*80121EC4 0011ECC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80121EC8 0011ECC8*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80121ECC, 0x80121ECC) //this is a jump label
/*80121ECC 0011ECCC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80121ED0 0011ECD0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80121ED4 0011ECD4*/ PPC::Runtime::ASM::fneg(context->f31, context->f0);
/*80121ED8 0011ECD8*/ PPC::Runtime::ASM::bne(.L_80121EEC);
/*80121EDC 0011ECDC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6478 @ Get_MemoryOffset_SDA21);
/*80121EE0 0011ECE0*/ PPC::Runtime::ASM::li(context->r4, 0x3c6);
/*80121EE4 0011ECE4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6480 @ Get_MemoryOffset_SDA21);
/*80121EE8 0011ECE8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80121EEC, 0x80121EEC) //this is a jump label
/*80121EEC 0011ECEC*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*80121EF0 0011ECF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80121EF4 0011ECF4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80121EF8 0011ECF8*/ PPC::Runtime::ASM::bne(.L_80121F44);
/*80121EFC 0011ECFC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80121F00 0011ED00*/ PPC::Runtime::ASM::beq(.L_80121F44);
/*80121F04 0011ED04*/ PPC::Runtime::ASM::bne(.L_80121F18);
/*80121F08 0011ED08*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6478 @ Get_MemoryOffset_SDA21);
/*80121F0C 0011ED0C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80121F10 0011ED10*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6480 @ Get_MemoryOffset_SDA21);
/*80121F14 0011ED14*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80121F18, 0x80121F18) //this is a jump label
/*80121F18 0011ED18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80121F1C 0011ED1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80121F20 0011ED20*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80121F24 0011ED24*/ PPC::Runtime::ASM::bne(.L_80121F34);
/*80121F28 0011ED28*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80121F2C 0011ED2C*/ PPC::Runtime::ASM::beq(.L_80121F34);
/*80121F30 0011ED30*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80121F34, 0x80121F34) //this is a jump label
/*80121F34 0011ED34*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80121F38 0011ED38*/ PPC::Runtime::ASM::bne(.L_80121F44);
/*80121F3C 0011ED3C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80121F40 0011ED40*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80121F44, 0x80121F44) //this is a jump label
/*80121F44 0011ED44*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80121F48 0011ED48*/ PPC::Runtime::ASM::bne(.L_80121F5C);
/*80121F4C 0011ED4C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6478 @ Get_MemoryOffset_SDA21);
/*80121F50 0011ED50*/ PPC::Runtime::ASM::li(context->r4, 0x3d4);
/*80121F54 0011ED54*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6480 @ Get_MemoryOffset_SDA21);
/*80121F58 0011ED58*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80121F5C, 0x80121F5C) //this is a jump label
/*80121F5C 0011ED5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFE34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80121F60 0011ED60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*80121F64 0011ED64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80121F68 0011ED68*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80121F6C 0011ED6C*/ PPC::Runtime::ASM::bne(.L_80121FB8);
/*80121F70 0011ED70*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80121F74 0011ED74*/ PPC::Runtime::ASM::beq(.L_80121FB8);
/*80121F78 0011ED78*/ PPC::Runtime::ASM::bne(.L_80121F8C);
/*80121F7C 0011ED7C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6478 @ Get_MemoryOffset_SDA21);
/*80121F80 0011ED80*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80121F84 0011ED84*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6480 @ Get_MemoryOffset_SDA21);
/*80121F88 0011ED88*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80121F8C, 0x80121F8C) //this is a jump label
/*80121F8C 0011ED8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80121F90 0011ED90*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80121F94 0011ED94*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80121F98 0011ED98*/ PPC::Runtime::ASM::bne(.L_80121FA8);
/*80121F9C 0011ED9C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80121FA0 0011EDA0*/ PPC::Runtime::ASM::beq(.L_80121FA8);
/*80121FA4 0011EDA4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80121FA8, 0x80121FA8) //this is a jump label
/*80121FA8 0011EDA8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80121FAC 0011EDAC*/ PPC::Runtime::ASM::bne(.L_80121FB8);
/*80121FB0 0011EDB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80121FB4 0011EDB4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80121FB8, 0x80121FB8) //this is a jump label
/*80121FB8 0011EDB8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80121FBC 0011EDBC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80121FC0 0011EDC0*/ PPC::Runtime::ASM::bl(fn_801152CC);
/*80121FC4 0011EDC4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80121FC8 0011EDC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80121FCC, 0x80121FCC) //this is a jump label
/*80121FCC 0011EDCC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80121FD0 0011EDD0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80121FD4 0011EDD4*/ PPC::Runtime::ASM::bl(fn_80114F1C);
RUNTIME_PPC_JUMP_LABEL(.L_80121FD8, 0x80121FD8) //this is a jump label
/*80121FD8 0011EDD8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*80121FDC 0011EDDC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*80121FE0 0011EDE0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80121FE4 0011EDE4*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*80121FE8 0011EDE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80121FEC 0011EDEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80121FF0 0011EDF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*80121FF4 0011EDF4*/ PPC::Runtime::ASM::blr();
}