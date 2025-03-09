//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GXSetFog.hpp"
#include "fn_COBJ_GetCurrent.hpp"
#include "fn_HSD_Panic.hpp"
#include "fn_HSD_CObjGetFar.hpp"
#include "fn_HSD_CObjGetNear.hpp"
#include "fn_GXSetFog.hpp"
#include "fn_8041B608.hpp"
#include "fn_GXGetViewportv.hpp"
#include "memset.hpp"
#include "fn_803D06DC.hpp"
#include "fn_GXInitFogAdjTable.hpp"
#include "fn_GXSetFogRangeAdj.hpp"
#include "fn_GXSetFogRangeAdj.hpp"



void fn_HSD_FogSet(PPC::Runtime::GCContext* context)
{
/*8041B0FC 00417EFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*8041B100 00417F00*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041B104 00417F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8041B108 00417F08*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8041B10C 00417F0C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*8041B110 00417F10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*8041B114 00417F14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8041B118 00417F18*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8041B11C 00417F1C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/* 8041B120 00417F20  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8041B124 00417F24*/ PPC::Runtime::ASM::bne(.L_8041B150);
/*8041B128 00417F28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B12C 00417F2C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8041B130 00417F30*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6380 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B134 00417F34*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8041B138 00417F38*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8041B13C 00417F3C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8041B140 00417F40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041B144 00417F44*/ PPC::Runtime::ASM::fmr(context->f4, context->f1);
/*8041B148 00417F48*/ PPC::Runtime::ASM::bl(fn_GXSetFog);
/*8041B14C 00417F4C*/ PPC::Runtime::ASM::b(.L_8041B398);
RUNTIME_PPC_JUMP_LABEL(.L_8041B150, 0x8041B150) //this is a jump label
/*8041B150 00417F50*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/* 8041B154 00417F54  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8041B158 00417F58*/ PPC::Runtime::ASM::bne(.L_8041B170);
/*8041B15C 00417F5C*/ PPC::Runtime::ASM::lis(context->r4, lbl_805042EC @ Get_MemoryOffset_HighBit);
/*8041B160 00417F60*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_495 @ Get_MemoryOffset_SDA21);
/*8041B164 00417F64*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_805042EC @ Get_MemoryOffset_LowBit);
/*8041B168 00417F68*/ PPC::Runtime::ASM::li(context->r4, 0x8b);
/*8041B16C 00417F6C*/ PPC::Runtime::ASM::bl(fn_HSD_Panic);
RUNTIME_PPC_JUMP_LABEL(.L_8041B170, 0x8041B170) //this is a jump label
/*8041B170 00417F70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*8041B174 00417F74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041B178 00417F78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041B17C 00417F7C*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetFar);
/*8041B180 00417F80*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8041B184 00417F84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041B188 00417F88*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetNear);
/*8041B18C 00417F8C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8041B190 00417F90*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8041B194 00417F94*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*8041B198 00417F98*/ PPC::Runtime::ASM::fmr(context->f4, context->f31);
/*8041B19C 00417F9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8041B1A0 00417FA0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8041B1A4 00417FA4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
/*8041B1A8 00417FA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8041B1AC 00417FAC*/ PPC::Runtime::ASM::bl(fn_GXSetFog);
/*8041B1B0 00417FB0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8041B1B4 00417FB4*/ PPC::Runtime::ASM::beq(.L_8041B1C0);
/*8041B1B8 00417FB8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8041B1BC 00417FBC*/ PPC::Runtime::ASM::b(.L_8041B1C4);
RUNTIME_PPC_JUMP_LABEL(.L_8041B1C0, 0x8041B1C0) //this is a jump label
/*8041B1C0 00417FC0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8041B1C4, 0x8041B1C4) //this is a jump label
/*8041B1C4 00417FC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041B1C8 00417FC8*/ PPC::Runtime::ASM::bl(fn_8041B608);
/*8041B1CC 00417FCC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041B1D0 00417FD0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8041B1D4 00417FD4*/ PPC::Runtime::ASM::beq(.L_8041B388);
/* 8041B1D8 00417FD8  57 E0 07 7F */ clrlwi. context->r0 , context->r31 , 29
/*8041B1DC 00417FDC*/ PPC::Runtime::ASM::beq(.L_8041B388);
/*8041B1E0 00417FE0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8041B1E4 00417FE4*/ PPC::Runtime::ASM::bl(fn_GXGetViewportv);
/* 8041B1E8 00417FE8  57 E0 07 FF */ clrlwi. context->r0 , context->r31 , 31
/*8041B1EC 00417FEC*/ PPC::Runtime::ASM::beq(.L_8041B24C);
/*8041B1F0 00417FF0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041B1F4 00417FF4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8041B1F8 00417FF8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8041B1FC 00417FFC*/ PPC::Runtime::ASM::beq(.L_8041B208);
/*8041B200 00418000*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8041B204 00418004*/ PPC::Runtime::ASM::b(.L_8041B20C);
RUNTIME_PPC_JUMP_LABEL(.L_8041B208, 0x8041B208) //this is a jump label
/*8041B208 00418008*/ PPC::Runtime::ASM::li(context->r3, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8041B20C, 0x8041B20C) //this is a jump label
/*8041B20C 0041800C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x140);
/*8041B210 00418010*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8041B214 00418014*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*8041B218 00418018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*8041B21C 0041801C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5D28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B220 00418020*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*8041B224 00418024*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B228 00418028*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*8041B22C 0041802C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*8041B230 00418030*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*8041B234 00418034*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8041B238 00418038*/ PPC::Runtime::ASM::fadds(context->f0, context->f4, context->f0);
/*8041B23C 0041803C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8041B240 00418040*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8041B244 00418044*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8041B248 00418048*/ PPC::Runtime::ASM::b(.L_8041B268);
RUNTIME_PPC_JUMP_LABEL(.L_8041B24C, 0x8041B24C) //this is a jump label
/*8041B24C 0041804C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8041B250 00418050*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B254 00418054*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8041B258 00418058*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*8041B25C 0041805C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8041B260 00418060*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8041B264 00418064*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8041B268, 0x8041B268) //this is a jump label
/*8041B268 00418068*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 30, 30);
/*8041B26C 0041806C*/ PPC::Runtime::ASM::beq(.L_8041B288);
/*8041B270 00418070*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041B274 00418074*/ PPC::Runtime::ASM::beq(.L_8041B280);
/*8041B278 00418078*/ PPC::Runtime::ASM::lhz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r30));
/*8041B27C 0041807C*/ PPC::Runtime::ASM::b(.L_8041B298);
RUNTIME_PPC_JUMP_LABEL(.L_8041B280, 0x8041B280) //this is a jump label
/*8041B280 00418080*/ PPC::Runtime::ASM::li(context->r28, -0x1);
/*8041B284 00418084*/ PPC::Runtime::ASM::b(.L_8041B298);
RUNTIME_PPC_JUMP_LABEL(.L_8041B288, 0x8041B288) //this is a jump label
/*8041B288 00418088*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8041B28C 0041808C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8041B290 00418090*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8041B294 00418094*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8041B298, 0x8041B298) //this is a jump label
/*8041B298 00418098*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 29, 29);
/*8041B29C 0041809C*/ PPC::Runtime::ASM::beq(.L_8041B2B8);
/*8041B2A0 004180A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041B2A4 004180A4*/ PPC::Runtime::ASM::beq(.L_8041B2B0);
/*8041B2A8 004180A8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x10);
/*8041B2AC 004180AC*/ PPC::Runtime::ASM::b(.L_8041B364);
RUNTIME_PPC_JUMP_LABEL(.L_8041B2B0, 0x8041B2B0) //this is a jump label
/*8041B2B0 004180B0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8041B2B4 004180B4*/ PPC::Runtime::ASM::b(.L_8041B364);
RUNTIME_PPC_JUMP_LABEL(.L_8041B2B8, 0x8041B2B8) //this is a jump label
/*8041B2B8 004180B8*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x58);
/*8041B2BC 004180BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8041B2C0 004180C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041B2C4 004180C4*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*8041B2C8 004180C8*/ PPC::Runtime::ASM::bl(memset);
/*8041B2CC 004180CC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8041B2D0 004180D0*/ PPC::Runtime::ASM::bl(fn_803D06DC);
/*8041B2D4 004180D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8041B2D8 004180D8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8041B2DC 004180DC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8041B2E0 004180E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*8041B2E4 004180E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8041B2E8 004180E8*/ PPC::Runtime::ASM::beq(.L_8041B2F0);
/*8041B2EC 004180EC*/ PPC::Runtime::ASM::b(.L_8041B32C);
RUNTIME_PPC_JUMP_LABEL(.L_8041B2F0, 0x8041B2F0) //this is a jump label
/*8041B2F0 004180F0*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041B2F4 004180F4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041B2F8 004180F8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041B2FC 004180FC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8041B300 00418100*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8041B304 00418104*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8041B308 00418108*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B30C 0041810C*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8041B310 00418110*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8041B314 00418114*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8041B318 00418118*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8041B31C 0041811C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8041B320 00418120*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8041B324 00418124*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8041B328 00418128*/ PPC::Runtime::ASM::b(.L_8041B364);
RUNTIME_PPC_JUMP_LABEL(.L_8041B32C, 0x8041B32C) //this is a jump label
/*8041B32C 0041812C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041B330 00418130*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041B334 00418134*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041B338 00418138*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8041B33C 0041813C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8041B340 00418140*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8041B344 00418144*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B348 00418148*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8041B34C 0041814C*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8041B350 00418150*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8041B354 00418154*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8041B358 00418158*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8041B35C 0041815C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8041B360 00418160*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8041B364, 0x8041B364) //this is a jump label
/*8041B364 00418164*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8041B368 00418168*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*8041B36C 0041816C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r28, 16);
/*8041B370 00418170*/ PPC::Runtime::ASM::bl(fn_GXInitFogAdjTable);
/*8041B374 00418174*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r29, 16);
/*8041B378 00418178*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x44);
/*8041B37C 0041817C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8041B380 00418180*/ PPC::Runtime::ASM::bl(fn_GXSetFogRangeAdj);
/*8041B384 00418184*/ PPC::Runtime::ASM::b(.L_8041B398);
RUNTIME_PPC_JUMP_LABEL(.L_8041B388, 0x8041B388) //this is a jump label
/*8041B388 00418188*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8041B38C 0041818C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8041B390 00418190*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8041B394 00418194*/ PPC::Runtime::ASM::bl(fn_GXSetFogRangeAdj);
RUNTIME_PPC_JUMP_LABEL(.L_8041B398, 0x8041B398) //this is a jump label
/*8041B398 00418198*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*8041B39C 0041819C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8041B3A0 004181A0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8041B3A4 004181A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*8041B3A8 004181A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8041B3AC 004181AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8041B3B0 004181B0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8041B3B4 004181B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041B3B8 004181B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*8041B3BC 004181BC*/ PPC::Runtime::ASM::blr();
}