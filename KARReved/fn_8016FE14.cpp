//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_8016FCFC.hpp"
#include "fn_8016FCFC.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_8016F97C.hpp"
#include "fn_80138AC8.hpp"



void fn_8016FE14(PPC::Runtime::GCContext* context)
{
/*8016FE14 0016CC14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8016FE18 0016CC18*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016FE1C 0016CC1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8016FE20 0016CC20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8016FE24 0016CC24*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8016FE28 0016CC28*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016FE2C 0016CC2C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8016FE30 0016CC30*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8016FE34 0016CC34*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016FE38 0016CC38*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xbec);
/*8016FE3C 0016CC3C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8016FE40 0016CC40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbec, context->r3));
/*8016FE44 0016CC44*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8016FE48 0016CC48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016FE4C 0016CC4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016FE50 0016CC50*/ PPC::Runtime::ASM::bl(fn_80138934);
/*8016FE54 0016CC54*/ PPC::Runtime::ASM::lis(context->r4, fn_8016FCFC @ Get_MemoryOffset_HighBit);
/*8016FE58 0016CC58*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016FE5C 0016CC5C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016FE60 0016CC60*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8016FE64 0016CC64*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8016FCFC @ Get_MemoryOffset_LowBit);
/*8016FE68 0016CC68*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8016FE6C 0016CC6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016FE70 0016CC70*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016FE74 0016CC74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8016FE78 0016CC78*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8016FE7C 0016CC7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016FE80 0016CC80*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8016FE84 0016CC84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016FE88 0016CC88*/ PPC::Runtime::ASM::li(context->r4, 0x9f);
/*8016FE8C 0016CC8C*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8016FE90 0016CC90*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8016FE94 0016CC94*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016FE98 0016CC98*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016FE9C 0016CC9C*/ PPC::Runtime::ASM::bl(fn_8016F97C);
/*8016FEA0 0016CCA0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016FEA4 0016CCA4*/ PPC::Runtime::ASM::bne(.L_8016FEB8);
/*8016FEA8 0016CCA8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C28 @ Get_MemoryOffset_SDA21);
/*8016FEAC 0016CCAC*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8016FEB0 0016CCB0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C30 @ Get_MemoryOffset_SDA21);
/*8016FEB4 0016CCB4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016FEB8, 0x8016FEB8) //this is a jump label
/*8016FEB8 0016CCB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016FEBC 0016CCBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016FEC0 0016CCC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8016FEC4 0016CCC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8016FEC8 0016CCC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016FECC 0016CCCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*8016FED0 0016CCD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8016FED4 0016CCD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8016FED8 0016CCD8*/ PPC::Runtime::ASM::bne(.L_8016FF24);
/*8016FEDC 0016CCDC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016FEE0 0016CCE0*/ PPC::Runtime::ASM::beq(.L_8016FF24);
/*8016FEE4 0016CCE4*/ PPC::Runtime::ASM::bne(.L_8016FEF8);
/*8016FEE8 0016CCE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C28 @ Get_MemoryOffset_SDA21);
/*8016FEEC 0016CCEC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8016FEF0 0016CCF0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C30 @ Get_MemoryOffset_SDA21);
/*8016FEF4 0016CCF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016FEF8, 0x8016FEF8) //this is a jump label
/*8016FEF8 0016CCF8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8016FEFC 0016CCFC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016FF00 0016CD00*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8016FF04 0016CD04*/ PPC::Runtime::ASM::bne(.L_8016FF14);
/*8016FF08 0016CD08*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8016FF0C 0016CD0C*/ PPC::Runtime::ASM::beq(.L_8016FF14);
/*8016FF10 0016CD10*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8016FF14, 0x8016FF14) //this is a jump label
/*8016FF14 0016CD14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8016FF18 0016CD18*/ PPC::Runtime::ASM::bne(.L_8016FF24);
/*8016FF1C 0016CD1C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016FF20 0016CD20*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8016FF24, 0x8016FF24) //this is a jump label
/*8016FF24 0016CD24*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8016FF28 0016CD28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016FF2C 0016CD2C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016FF30 0016CD30*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*8016FF34 0016CD34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8016FF38 0016CD38*/ PPC::Runtime::ASM::bl(fn_80138AC8);
/*8016FF3C 0016CD3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8016FF40 0016CD40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8016FF44 0016CD44*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8016FF48 0016CD48*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016FF4C 0016CD4C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8016FF50 0016CD50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016FF54 0016CD54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8016FF58 0016CD58*/ PPC::Runtime::ASM::blr();
}