//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECDotProduct.hpp"



void fn_Shadows_SmoothEdges_Math(PPC::Runtime::GCContext* context)
{
/*8041E014 0041AE14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xa0, context->r1));
/*8041E018 0041AE18*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041E01C 0041AE1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8041E020 0041AE20*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8041E024 0041AE24*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8041E028 0041AE28*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8041E02C 0041AE2C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8041E030 0041AE30*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8041E034 0041AE34*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8041E038 0041AE38*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8041E03C 0041AE3C*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8041E040 0041AE40*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8041E044 0041AE44*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8041E048 0041AE48*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8041E04C 0041AE4C*/ PPC::Runtime::ASM::psq_st(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8041E050 0041AE50*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8041E054 0041AE54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/* 8041E058 0041AE58  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8041E05C 0041AE5C*/ PPC::Runtime::ASM::fmr(context->f26, context->f1);
/*8041E060 0041AE60*/ PPC::Runtime::ASM::fmr(context->f27, context->f2);
/*8041E064 0041AE64*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8041E068 0041AE68*/ PPC::Runtime::ASM::fmr(context->f28, context->f3);
/*8041E06C 0041AE6C*/ PPC::Runtime::ASM::fmr(context->f29, context->f4);
/*8041E070 0041AE70*/ PPC::Runtime::ASM::bne(.L_8041E088);
/*8041E074 0041AE74*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504528 @ Get_MemoryOffset_HighBit);
/*8041E078 0041AE78*/ PPC::Runtime::ASM::li(context->r4, 0x362);
/*8041E07C 0041AE7C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504528 @ Get_MemoryOffset_LowBit);
/*8041E080 0041AE80*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_485 @ Get_MemoryOffset_SDA21);
/*8041E084 0041AE84*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8041E088, 0x8041E088) //this is a jump label
/*8041E088 0041AE88*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8041E08C 0041AE8C*/ PPC::Runtime::ASM::bne(.L_8041E0A8);
/*8041E090 0041AE90*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504528 @ Get_MemoryOffset_HighBit);
/*8041E094 0041AE94*/ PPC::Runtime::ASM::lis(context->r5, lbl_805046A8 @ Get_MemoryOffset_HighBit);
/*8041E098 0041AE98*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504528 @ Get_MemoryOffset_LowBit);
/*8041E09C 0041AE9C*/ PPC::Runtime::ASM::li(context->r4, 0x363);
/*8041E0A0 0041AEA0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_805046A8 @ Get_MemoryOffset_LowBit);
/*8041E0A4 0041AEA4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8041E0A8, 0x8041E0A8) //this is a jump label
/*8041E0A8 0041AEA8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/* 8041E0AC 0041AEAC  54 00 C8 02 */ extlwi context->r0 , context->r0 , 2 , 25
/*8041E0B0 0041AEB0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 31);
/*8041E0B4 0041AEB4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8041E0B8 0041AEB8*/ PPC::Runtime::ASM::bne(.L_8041E1DC);
/*8041E0BC 0041AEBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8041E0C0 0041AEC0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8041E0C4 0041AEC4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8041E0C8 0041AEC8*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*8041E0CC 0041AECC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8041E0D0 0041AED0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x30);
/*8041E0D4 0041AED4*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*8041E0D8 0041AED8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/* 8041E0DC 0041AEDC  54 00 C0 02 */ extlwi context->r0 , context->r0 , 2 , 24
/*8041E0E0 0041AEE0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 31);
/*8041E0E4 0041AEE4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8041E0E8 0041AEE8*/ PPC::Runtime::ASM::beq(.L_8041E154);
/*8041E0EC 0041AEEC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5DC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041E0F0 0041AEF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8041E0F4 0041AEF4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041E0F8 0041AEF8*/ PPC::Runtime::ASM::beq(.L_8041E1DC);
/*8041E0FC 0041AEFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8041E100 0041AF00*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8041E104 0041AF04*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8041E108 0041AF08*/ PPC::Runtime::ASM::fdivs(context->f30, context->f0, context->f1);
/*8041E10C 0041AF0C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8041E110 0041AF10*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*8041E114 0041AF14*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8041E118 0041AF18*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x24);
/*8041E11C 0041AF1C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8041E120 0041AF20*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*8041E124 0041AF24*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x18);
/*8041E128 0041AF28*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8041E12C 0041AF2C*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*8041E130 0041AF30*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8041E134 0041AF34*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8041E138 0041AF38*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8041E13C 0041AF3C*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*8041E140 0041AF40*/ PPC::Runtime::ASM::fmuls(context->f26, context->f26, context->f30);
/*8041E144 0041AF44*/ PPC::Runtime::ASM::fmuls(context->f27, context->f27, context->f30);
/*8041E148 0041AF48*/ PPC::Runtime::ASM::fmuls(context->f28, context->f28, context->f30);
/*8041E14C 0041AF4C*/ PPC::Runtime::ASM::fmuls(context->f29, context->f29, context->f30);
/*8041E150 0041AF50*/ PPC::Runtime::ASM::b(.L_8041E18C);
RUNTIME_PPC_JUMP_LABEL(.L_8041E154, 0x8041E154) //this is a jump label
/*8041E154 0041AF54*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x30);
/*8041E158 0041AF58*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8041E15C 0041AF5C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*8041E160 0041AF60*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8041E164 0041AF64*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8041E168 0041AF68*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8041E16C 0041AF6C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*8041E170 0041AF70*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x18);
/*8041E174 0041AF74*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8041E178 0041AF78*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*8041E17C 0041AF7C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8041E180 0041AF80*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8041E184 0041AF84*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8041E188 0041AF88*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
RUNTIME_PPC_JUMP_LABEL(.L_8041E18C, 0x8041E18C) //this is a jump label
/*8041E18C 0041AF8C*/ PPC::Runtime::ASM::fadds(context->f2, context->f31, context->f29);
/*8041E190 0041AF90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*8041E194 0041AF94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8041E198 0041AF98*/ PPC::Runtime::ASM::ble(.L_8041E1A0);
/*8041E19C 0041AF9C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8041E1A0, 0x8041E1A0) //this is a jump label
/*8041E1A0 0041AFA0*/ PPC::Runtime::ASM::fadds(context->f2, context->f31, context->f28);
/*8041E1A4 0041AFA4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*8041E1A8 0041AFA8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8041E1AC 0041AFAC*/ PPC::Runtime::ASM::bge(.L_8041E1B4);
/*8041E1B0 0041AFB0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8041E1B4, 0x8041E1B4) //this is a jump label
/*8041E1B4 0041AFB4*/ PPC::Runtime::ASM::fadds(context->f2, context->f1, context->f26);
/*8041E1B8 0041AFB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8041E1BC 0041AFBC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8041E1C0 0041AFC0*/ PPC::Runtime::ASM::ble(.L_8041E1C8);
/*8041E1C4 0041AFC4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8041E1C8, 0x8041E1C8) //this is a jump label
/*8041E1C8 0041AFC8*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f27);
/*8041E1CC 0041AFCC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*8041E1D0 0041AFD0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8041E1D4 0041AFD4*/ PPC::Runtime::ASM::bge(.L_8041E1DC);
/*8041E1D8 0041AFD8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8041E1DC, 0x8041E1DC) //this is a jump label
/*8041E1DC 0041AFDC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8041E1E0 0041AFE0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8041E1E4 0041AFE4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8041E1E8 0041AFE8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8041E1EC 0041AFEC*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8041E1F0 0041AFF0*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8041E1F4 0041AFF4*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8041E1F8 0041AFF8*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8041E1FC 0041AFFC*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8041E200 0041B000*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8041E204 0041B004*/ PPC::Runtime::ASM::psq_l(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8041E208 0041B008*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8041E20C 0041B00C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8041E210 0041B010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8041E214 0041B014*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8041E218 0041B018*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041E21C 0041B01C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xa0);
/*8041E220 0041B020*/ PPC::Runtime::ASM::blr();
}