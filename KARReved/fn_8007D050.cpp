//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A4EC.hpp"
#include "fn_8008C3EC.hpp"
#include "fn_8007EA40.hpp"
#include "fn_DebugMenu_Callback_WhenAStarIsAttemptedToBeSpawned.hpp"
#include "fn_InlineReturnBlr.hpp"
#include "fn_8008062C.hpp"
#include "fn_80080710.hpp"
#include "fn_8008108C.hpp"
#include "fn_80098B28.hpp"
#include "fn_80095F10.hpp"
#include "fn_80083058.hpp"
#include "fn_80083D8C.hpp"
#include "fn_80081600.hpp"
#include "fn_80083E4C.hpp"
#include "fn_80085C48.hpp"
#include "fn_8007EDA8.hpp"
#include "fn_8008CEE8.hpp"
#include "fn_80096D34.hpp"
#include "fn_800AACC0.hpp"



void fn_8007D050(PPC::Runtime::GCContext* context)
{
/*8007D050 00079E50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8007D054 00079E54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007D058 00079E58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007D05C 00079E5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007D060 00079E60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007D064 00079E64*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007D068 00079E68*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8007D06C 00079E6C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1DbLevel @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D070 00079E70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8007D074 00079E74*/ PPC::Runtime::ASM::blt(.L_8007D40C);
/*8007D078 00079E78*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552D88 @ Get_MemoryOffset_HighBit);
/*8007D07C 00079E7C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8007D080 00079E80*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_180552D88 @ Get_MemoryOffset_LowBit);
/*8007D084 00079E84*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8007D088, 0x8007D088) //this is a jump label
/*8007D088 00079E88*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8007D08C 00079E8C*/ PPC::Runtime::ASM::bl(fn_8000A4EC);
/*8007D090 00079E90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8007D094 00079E94*/ PPC::Runtime::ASM::bne(.L_8007D0A4);
/*8007D098 00079E98*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8007D09C 00079E9C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8007D0A0 00079EA0*/ PPC::Runtime::ASM::b(.L_8007D0C0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D0A4, 0x8007D0A4) //this is a jump label
/*8007D0A4 00079EA4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*8007D0A8 00079EA8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_HighBit);
/*8007D0AC 00079EAC*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x44);
/*8007D0B0 00079EB0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_LowBit);
/*8007D0B4 00079EB4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8007D0B8 00079EB8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8007D0BC 00079EBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8007D0C0, 0x8007D0C0) //this is a jump label
/*8007D0C0 00079EC0*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r4, 0, 28, 28);
/*8007D0C4 00079EC4*/ PPC::Runtime::ASM::beq(.L_8007D0E8);
/* 8007D0C8 00079EC8  54 83 07 FF */ clrlwi. context->r3 , context->r4 , 31
/*8007D0CC 00079ECC*/ PPC::Runtime::ASM::beq(.L_8007D0D8);
/*8007D0D0 00079ED0*/ PPC::Runtime::ASM::li(context->r3, -0xa);
/*8007D0D4 00079ED4*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8007D0D8, 0x8007D0D8) //this is a jump label
/*8007D0D8 00079ED8*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r4, 0, 30, 30);
/*8007D0DC 00079EDC*/ PPC::Runtime::ASM::beq(.L_8007D0E8);
/*8007D0E0 00079EE0*/ PPC::Runtime::ASM::li(context->r3, -0xb);
/*8007D0E4 00079EE4*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8007D0E8, 0x8007D0E8) //this is a jump label
/*8007D0E8 00079EE8*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r4, 0, 29, 29);
/*8007D0EC 00079EEC*/ PPC::Runtime::ASM::beq(.L_8007D10C);
/* 8007D0F0 00079EF0  54 83 07 FF */ clrlwi. context->r3 , context->r4 , 31
/*8007D0F4 00079EF4*/ PPC::Runtime::ASM::beq(.L_8007D100);
/*8007D0F8 00079EF8*/ PPC::Runtime::ASM::li(context->r3, -0x6);
/*8007D0FC 00079EFC*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8007D100, 0x8007D100) //this is a jump label
/*8007D100 00079F00*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r4, 0, 30, 30);
/*8007D104 00079F04*/ PPC::Runtime::ASM::beq(.L_8007D10C);
/*8007D108 00079F08*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 31, 28);
RUNTIME_PPC_JUMP_LABEL(.L_8007D10C, 0x8007D10C) //this is a jump label
/*8007D10C 00079F0C*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r0, 0, 28, 28);
/*8007D110 00079F10*/ PPC::Runtime::ASM::beq(.L_8007D134);
/* 8007D114 00079F14  54 03 07 FF */ clrlwi. context->r3 , context->r0 , 31
/*8007D118 00079F18*/ PPC::Runtime::ASM::beq(.L_8007D124);
/*8007D11C 00079F1C*/ PPC::Runtime::ASM::li(context->r3, -0xa);
/*8007D120 00079F20*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8007D124, 0x8007D124) //this is a jump label
/*8007D124 00079F24*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r0, 0, 30, 30);
/*8007D128 00079F28*/ PPC::Runtime::ASM::beq(.L_8007D134);
/*8007D12C 00079F2C*/ PPC::Runtime::ASM::li(context->r3, -0xb);
/*8007D130 00079F30*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8007D134, 0x8007D134) //this is a jump label
/*8007D134 00079F34*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r0, 0, 29, 29);
/*8007D138 00079F38*/ PPC::Runtime::ASM::beq(.L_8007D158);
/* 8007D13C 00079F3C  54 03 07 FF */ clrlwi. context->r3 , context->r0 , 31
/*8007D140 00079F40*/ PPC::Runtime::ASM::beq(.L_8007D14C);
/*8007D144 00079F44*/ PPC::Runtime::ASM::li(context->r3, -0x6);
/*8007D148 00079F48*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8007D14C, 0x8007D14C) //this is a jump label
/*8007D14C 00079F4C*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r0, 0, 30, 30);
/*8007D150 00079F50*/ PPC::Runtime::ASM::beq(.L_8007D158);
/*8007D154 00079F54*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 31, 28);
RUNTIME_PPC_JUMP_LABEL(.L_8007D158, 0x8007D158) //this is a jump label
/*8007D158 00079F58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8007D15C 00079F5C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D160 00079F60*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D164 00079F64*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8007D168 00079F68*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8007D16C 00079F6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8007D170 00079F70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8007D174 00079F74*/ PPC::Runtime::ASM::xor(context->r3, context->r3, context->r4);
/*8007D178 00079F78*/ PPC::Runtime::ASM::and(context->r3, context->r4, context->r3);
/*8007D17C 00079F7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8007D180 00079F80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8007D184 00079F84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8007D188 00079F88*/ PPC::Runtime::ASM::xor(context->r3, context->r4, context->r3);
/*8007D18C 00079F8C*/ PPC::Runtime::ASM::and(context->r3, context->r4, context->r3);
/*8007D190 00079F90*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8007D194 00079F94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8007D198 00079F98*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x14);
/*8007D19C 00079F9C*/ PPC::Runtime::ASM::blt(.L_8007D088);
/*8007D1A0 00079FA0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_HighBit);
/*8007D1A4 00079FA4*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*8007D1A8 00079FA8*/ PPC::Runtime::ASM::addi(context->r29, context->r3, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_LowBit);
/*8007D1AC 00079FAC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D1B0, 0x8007D1B0) //this is a jump label
/*8007D1B0 00079FB0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r28, 24);
/*8007D1B4 00079FB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8007D1B8 00079FB8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*8007D1BC 00079FBC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8007D1C0 00079FC0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8007D1C4 00079FC4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8007D1C8 00079FC8*/ PPC::Runtime::ASM::add(context->r7, context->r29, context->r0);
/*8007D1CC 00079FCC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*8007D1D0 00079FD0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*8007D1D4 00079FD4*/ PPC::Runtime::ASM::bl(fn_8008C3EC);
/*8007D1D8 00079FD8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8007D1DC 00079FDC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x14);
/*8007D1E0 00079FE0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*8007D1E4 00079FE4*/ PPC::Runtime::ASM::blt(.L_8007D1B0);
/*8007D1E8 00079FE8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8007D1EC 00079FEC*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8007D1F0, 0x8007D1F0) //this is a jump label
/*8007D1F0 00079FF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007D1F4 00079FF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8007D1F8 00079FF8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8007D1FC 00079FFC*/ PPC::Runtime::ASM::bl(fn_8007EA40);
/*8007D200 0007A000*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8007D204 0007A004*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x14);
/*8007D208 0007A008*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*8007D20C 0007A00C*/ PPC::Runtime::ASM::blt(.L_8007D1F0);
/*8007D210 0007A010*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D214, 0x8007D214) //this is a jump label
/*8007D214 0007A014*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D218 0007A018*/ PPC::Runtime::ASM::bl(fn_DebugMenu_Callback_WhenAStarIsAttemptedToBeSpawned);
/*8007D21C 0007A01C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D220 0007A020*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D224 0007A024*/ PPC::Runtime::ASM::blt(.L_8007D214);
/*8007D228 0007A028*/ PPC::Runtime::ASM::bl(fn_InlineReturnBlr);
/*8007D22C 0007A02C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D230, 0x8007D230) //this is a jump label
/*8007D230 0007A030*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D234 0007A034*/ PPC::Runtime::ASM::bl(fn_8008062C);
/*8007D238 0007A038*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D23C 0007A03C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D240 0007A040*/ PPC::Runtime::ASM::blt(.L_8007D230);
/*8007D244 0007A044*/ PPC::Runtime::ASM::bl(fn_80080710);
/*8007D248 0007A048*/ PPC::Runtime::ASM::bl(fn_8008108C);
/*8007D24C 0007A04C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8007D250 0007A050*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8007D254 0007A054*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x460);
/*8007D258 0007A058*/ PPC::Runtime::ASM::bne(.L_8007D280);
/*8007D25C 0007A05C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8007D260 0007A060*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8007D264 0007A064*/ PPC::Runtime::ASM::beq(.L_8007D280);
/*8007D268 0007A068*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D26C 0007A06C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8007D270 0007A070*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*8007D274 0007A074*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D278 0007A078*/ PPC::Runtime::ASM::blt(.L_8007D280);
/*8007D27C 0007A07C*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8007D280, 0x8007D280) //this is a jump label
/*8007D280 0007A080*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x14);
/*8007D284 0007A084*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8007D288 0007A088*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x460);
/*8007D28C 0007A08C*/ PPC::Runtime::ASM::bne(.L_8007D2B4);
/*8007D290 0007A090*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8007D294 0007A094*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8007D298 0007A098*/ PPC::Runtime::ASM::beq(.L_8007D2B4);
/*8007D29C 0007A09C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D2A0 0007A0A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8007D2A4 0007A0A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*8007D2A8 0007A0A8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D2AC 0007A0AC*/ PPC::Runtime::ASM::blt(.L_8007D2B4);
/*8007D2B0 0007A0B0*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8007D2B4, 0x8007D2B4) //this is a jump label
/*8007D2B4 0007A0B4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8007D2B8 0007A0B8*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x460);
/*8007D2BC 0007A0BC*/ PPC::Runtime::ASM::bne(.L_8007D2E4);
/*8007D2C0 0007A0C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8007D2C4 0007A0C4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8007D2C8 0007A0C8*/ PPC::Runtime::ASM::beq(.L_8007D2E4);
/*8007D2CC 0007A0CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D2D0 0007A0D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8007D2D4 0007A0D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*8007D2D8 0007A0D8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D2DC 0007A0DC*/ PPC::Runtime::ASM::blt(.L_8007D2E4);
/*8007D2E0 0007A0E0*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8007D2E4, 0x8007D2E4) //this is a jump label
/*8007D2E4 0007A0E4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8007D2E8 0007A0E8*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x460);
/*8007D2EC 0007A0EC*/ PPC::Runtime::ASM::bne(.L_8007D314);
/*8007D2F0 0007A0F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8007D2F4 0007A0F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8007D2F8 0007A0F8*/ PPC::Runtime::ASM::beq(.L_8007D314);
/*8007D2FC 0007A0FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D300 0007A100*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8007D304 0007A104*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*8007D308 0007A108*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D30C 0007A10C*/ PPC::Runtime::ASM::blt(.L_8007D314);
/*8007D310 0007A110*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8007D314, 0x8007D314) //this is a jump label
/*8007D314 0007A114*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D318, 0x8007D318) //this is a jump label
/*8007D318 0007A118*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D31C 0007A11C*/ PPC::Runtime::ASM::bl(fn_80098B28);
/*8007D320 0007A120*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D324 0007A124*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D328 0007A128*/ PPC::Runtime::ASM::blt(.L_8007D318);
/*8007D32C 0007A12C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D330, 0x8007D330) //this is a jump label
/*8007D330 0007A130*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D334 0007A134*/ PPC::Runtime::ASM::bl(fn_80095F10);
/*8007D338 0007A138*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D33C 0007A13C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D340 0007A140*/ PPC::Runtime::ASM::blt(.L_8007D330);
/*8007D344 0007A144*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D348, 0x8007D348) //this is a jump label
/*8007D348 0007A148*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D34C 0007A14C*/ PPC::Runtime::ASM::bl(fn_80083058);
/*8007D350 0007A150*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D354 0007A154*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D358 0007A158*/ PPC::Runtime::ASM::blt(.L_8007D348);
/*8007D35C 0007A15C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D360, 0x8007D360) //this is a jump label
/*8007D360 0007A160*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D364 0007A164*/ PPC::Runtime::ASM::bl(fn_80083D8C);
/*8007D368 0007A168*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D36C 0007A16C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D370 0007A170*/ PPC::Runtime::ASM::blt(.L_8007D360);
/*8007D374 0007A174*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D378, 0x8007D378) //this is a jump label
/*8007D378 0007A178*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D37C 0007A17C*/ PPC::Runtime::ASM::bl(fn_80081600);
/*8007D380 0007A180*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D384 0007A184*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D388 0007A188*/ PPC::Runtime::ASM::blt(.L_8007D378);
/*8007D38C 0007A18C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D390, 0x8007D390) //this is a jump label
/*8007D390 0007A190*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D394 0007A194*/ PPC::Runtime::ASM::bl(fn_80083E4C);
/*8007D398 0007A198*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D39C 0007A19C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D3A0 0007A1A0*/ PPC::Runtime::ASM::blt(.L_8007D390);
/*8007D3A4 0007A1A4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D3A8, 0x8007D3A8) //this is a jump label
/*8007D3A8 0007A1A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D3AC 0007A1AC*/ PPC::Runtime::ASM::bl(fn_80085C48);
/*8007D3B0 0007A1B0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D3B4 0007A1B4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D3B8 0007A1B8*/ PPC::Runtime::ASM::blt(.L_8007D3A8);
/*8007D3BC 0007A1BC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D3C0, 0x8007D3C0) //this is a jump label
/*8007D3C0 0007A1C0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D3C4 0007A1C4*/ PPC::Runtime::ASM::bl(fn_8007EDA8);
/*8007D3C8 0007A1C8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D3CC 0007A1CC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D3D0 0007A1D0*/ PPC::Runtime::ASM::blt(.L_8007D3C0);
/*8007D3D4 0007A1D4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D3D8, 0x8007D3D8) //this is a jump label
/*8007D3D8 0007A1D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D3DC 0007A1DC*/ PPC::Runtime::ASM::bl(fn_8008CEE8);
/*8007D3E0 0007A1E0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D3E4 0007A1E4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D3E8 0007A1E8*/ PPC::Runtime::ASM::blt(.L_8007D3D8);
/*8007D3EC 0007A1EC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D3F0, 0x8007D3F0) //this is a jump label
/*8007D3F0 0007A1F0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007D3F4 0007A1F4*/ PPC::Runtime::ASM::bl(fn_80096D34);
/*8007D3F8 0007A1F8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8007D3FC 0007A1FC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8007D400 0007A200*/ PPC::Runtime::ASM::blt(.L_8007D3F0);
/*8007D404 0007A204*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8007D408 0007A208*/ PPC::Runtime::ASM::bl(fn_800AACC0);
RUNTIME_PPC_JUMP_LABEL(.L_8007D40C, 0x8007D40C) //this is a jump label
/*8007D40C 0007A20C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007D410 0007A210*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007D414 0007A214*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007D418 0007A218*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007D41C 0007A21C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8007D420 0007A220*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007D424 0007A224*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8007D428 0007A228*/ PPC::Runtime::ASM::blr();
}