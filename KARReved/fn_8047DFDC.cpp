//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"



void fn_8047DFDC(PPC::Runtime::GCContext* context)
{
/*8047DFDC 0047ADDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047DFE0 0047ADE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047DFE4 0047ADE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8047DFE8 0047ADE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047DFEC 0047ADEC*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*8047DFF0 0047ADF0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047DFF4 0047ADF4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8047DFF8 0047ADF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x264, context->r3));
/*8047DFFC 0047ADFC*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047E000 0047AE00  4E 80 00 21 */ blrl
/*8047E004 0047AE04*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8047E008 0047AE08*/ PPC::Runtime::ASM::beq(.L_8047E1FC);
/*8047E00C 0047AE0C*/ PPC::Runtime::ASM::bge(.L_8047E020);
/*8047E010 0047AE10*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*8047E014 0047AE14*/ PPC::Runtime::ASM::beq(.L_8047E55C);
/*8047E018 0047AE18*/ PPC::Runtime::ASM::bge(.L_8047E390);
/*8047E01C 0047AE1C*/ PPC::Runtime::ASM::b(.L_8047E55C);
RUNTIME_PPC_JUMP_LABEL(.L_8047E020, 0x8047E020) //this is a jump label
/*8047E020 0047AE20*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8047E024 0047AE24*/ PPC::Runtime::ASM::bge(.L_8047E55C);
/*8047E028 0047AE28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E02C 0047AE2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*8047E030 0047AE30*/ PPC::Runtime::ASM::bgt(.L_8047E55C);
/*8047E034 0047AE34*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80534398 @ Get_MemoryOffset_HighBit);
/*8047E038 0047AE38*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80534398 @ Get_MemoryOffset_LowBit);
/*8047E03C 0047AE3C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8047E040 0047AE40*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8047E044 0047AE44*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8047E048 0047AE48*/ PPC::Runtime::ASM::bctr();
/*8047E04C 0047AE4C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r30));
/*8047E050 0047AE50*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E054 0047AE54*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8047E058 0047AE58*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8047E05C 0047AE5C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8047E060 0047AE60*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E064 0047AE64*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E068 0047AE68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047E06C 0047AE6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8047E070 0047AE70*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8047E074 0047AE74*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8047E078 0047AE78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E07C 0047AE7C*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E080 0047AE80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8047E084 0047AE84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E088 0047AE88*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E08C 0047AE8C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8047E090 0047AE90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E094 0047AE94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E098 0047AE98*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E09C 0047AE9C*/ PPC::Runtime::ASM::ble(.L_8047E0C0);
/*8047E0A0 0047AEA0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E0A4 0047AEA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E0A8 0047AEA8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E0AC 0047AEAC*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0x21c);
/*8047E0B0 0047AEB0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E0B4 0047AEB4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E0B8 0047AEB8*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r30));
/*8047E0BC 0047AEBC*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047E0C0, 0x8047E0C0) //this is a jump label
/*8047E0C0 0047AEC0*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E0C4 0047AEC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E0C8 0047AEC8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E0CC 0047AECC*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E0D0 0047AED0*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E0D4 0047AED4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8047E0D8 0047AED8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E0DC 0047AEDC*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E0E0 0047AEE0*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E0E4 0047AEE4*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*8047E0E8 0047AEE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E0EC 0047AEEC*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E0F0 0047AEF0*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E0F4 0047AEF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E0F8 0047AEF8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E0FC 0047AEFC*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E100 0047AF00*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E104 0047AF04*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8047E108 0047AF08*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E10C 0047AF0C*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E110 0047AF10*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E114 0047AF14*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*8047E118 0047AF18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E11C 0047AF1C*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E120 0047AF20*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E124 0047AF24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E128 0047AF28*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E12C 0047AF2C*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E130 0047AF30*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E134 0047AF34*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8047E138 0047AF38*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E13C 0047AF3C*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E140 0047AF40*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E144 0047AF44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r30));
/*8047E148 0047AF48*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E14C 0047AF4C*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047E150 0047AF50  4E 80 00 21 */ blrl
/*8047E154 0047AF54*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*8047E158 0047AF58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E15C 0047AF5C*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E160 0047AF60*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E164 0047AF64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E168 0047AF68*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E16C 0047AF6C*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E170 0047AF70*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E174 0047AF74*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8047E178 0047AF78*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E17C 0047AF7C*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E180 0047AF80*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E184 0047AF84*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E188 0047AF88*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x238);
/*8047E18C 0047AF8C*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8047E190 0047AF90*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r30));
/*8047E194 0047AF94*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E198 0047AF98*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047E19C 0047AF9C  4E 80 00 21 */ blrl
/*8047E1A0 0047AFA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E1A4 0047AFA4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E1A8 0047AFA8*/ PPC::Runtime::ASM::ble(.L_8047E1CC);
/*8047E1AC 0047AFAC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E1B0 0047AFB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E1B4 0047AFB4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E1B8 0047AFB8*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0x21c);
/*8047E1BC 0047AFBC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E1C0 0047AFC0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E1C4 0047AFC4*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r30));
/*8047E1C8 0047AFC8*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047E1CC, 0x8047E1CC) //this is a jump label
/*8047E1CC 0047AFCC*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E1D0 0047AFD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E1D4 0047AFD4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E1D8 0047AFD8*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E1DC 0047AFDC*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E1E0 0047AFE0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8047E1E4 0047AFE4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E1E8 0047AFE8*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E1EC 0047AFEC*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E1F0 0047AFF0*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*8047E1F4 0047AFF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E1F8 0047AFF8*/ PPC::Runtime::ASM::b(.L_8047E55C);
RUNTIME_PPC_JUMP_LABEL(.L_8047E1FC, 0x8047E1FC) //this is a jump label
/*8047E1FC 0047AFFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E200 0047B000*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*8047E204 0047B004*/ PPC::Runtime::ASM::bgt(.L_8047E55C);
/*8047E208 0047B008*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80534370 @ Get_MemoryOffset_HighBit);
/*8047E20C 0047B00C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80534370 @ Get_MemoryOffset_LowBit);
/*8047E210 0047B010*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8047E214 0047B014*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8047E218 0047B018*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8047E21C 0047B01C*/ PPC::Runtime::ASM::bctr();
/*8047E220 0047B020*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r30));
/*8047E224 0047B024*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E228 0047B028*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8047E22C 0047B02C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8047E230 0047B030*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8047E234 0047B034*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E238 0047B038*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E23C 0047B03C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047E240 0047B040*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8047E244 0047B044*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8047E248 0047B048*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8047E24C 0047B04C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E250 0047B050*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E254 0047B054*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8047E258 0047B058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E25C 0047B05C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E260 0047B060*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8047E264 0047B064*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E268 0047B068*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E26C 0047B06C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E270 0047B070*/ PPC::Runtime::ASM::ble(.L_8047E294);
/*8047E274 0047B074*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E278 0047B078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E27C 0047B07C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E280 0047B080*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0x21c);
/*8047E284 0047B084*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E288 0047B088*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E28C 0047B08C*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r30));
/*8047E290 0047B090*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047E294, 0x8047E294) //this is a jump label
/*8047E294 0047B094*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E298 0047B098*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047E29C 0047B09C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E2A0 0047B0A0*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E2A4 0047B0A4*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x4);
/*8047E2A8 0047B0A8*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8047E2AC 0047B0AC*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E2B0 0047B0B0*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047E2B4 0047B0B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E2B8 0047B0B8*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E2BC 0047B0BC*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E2C0 0047B0C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047E2C4 0047B0C4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E2C8 0047B0C8*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E2CC 0047B0CC*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x4);
/*8047E2D0 0047B0D0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8047E2D4 0047B0D4*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E2D8 0047B0D8*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E2DC 0047B0DC*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E2E0 0047B0E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047E2E4 0047B0E4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E2E8 0047B0E8*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E2EC 0047B0EC*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x4);
/*8047E2F0 0047B0F0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8047E2F4 0047B0F4*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E2F8 0047B0F8*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E2FC 0047B0FC*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E300 0047B100*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047E304 0047B104*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E308 0047B108*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E30C 0047B10C*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x4);
/*8047E310 0047B110*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8047E314 0047B114*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E318 0047B118*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047E31C 0047B11C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E320 0047B120*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E324 0047B124*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x238);
/*8047E328 0047B128*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8047E32C 0047B12C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r30));
/*8047E330 0047B130*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E334 0047B134*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047E338 0047B138  4E 80 00 21 */ blrl
/*8047E33C 0047B13C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E340 0047B140*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E344 0047B144*/ PPC::Runtime::ASM::ble(.L_8047E368);
/*8047E348 0047B148*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E34C 0047B14C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E350 0047B150*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E354 0047B154*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0x21c);
/*8047E358 0047B158*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E35C 0047B15C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E360 0047B160*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r30));
/*8047E364 0047B164*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047E368, 0x8047E368) //this is a jump label
/*8047E368 0047B168*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E36C 0047B16C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047E370 0047B170*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E374 0047B174*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E378 0047B178*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x4);
/*8047E37C 0047B17C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8047E380 0047B180*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E384 0047B184*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047E388 0047B188*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E38C 0047B18C*/ PPC::Runtime::ASM::b(.L_8047E55C);
RUNTIME_PPC_JUMP_LABEL(.L_8047E390, 0x8047E390) //this is a jump label
/*8047E390 0047B190*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E394 0047B194*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*8047E398 0047B198*/ PPC::Runtime::ASM::bgt(.L_8047E55C);
/*8047E39C 0047B19C*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80534348 @ Get_MemoryOffset_HighBit);
/*8047E3A0 0047B1A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80534348 @ Get_MemoryOffset_LowBit);
/*8047E3A4 0047B1A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8047E3A8 0047B1A8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8047E3AC 0047B1AC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8047E3B0 0047B1B0*/ PPC::Runtime::ASM::bctr();
/*8047E3B4 0047B1B4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r30));
/*8047E3B8 0047B1B8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E3BC 0047B1BC*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8047E3C0 0047B1C0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8047E3C4 0047B1C4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8047E3C8 0047B1C8*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E3CC 0047B1CC*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E3D0 0047B1D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047E3D4 0047B1D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8047E3D8 0047B1D8*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8047E3DC 0047B1DC*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8047E3E0 0047B1E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E3E4 0047B1E4*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E3E8 0047B1E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8047E3EC 0047B1EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E3F0 0047B1F0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E3F4 0047B1F4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8047E3F8 0047B1F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E3FC 0047B1FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E400 0047B200*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E404 0047B204*/ PPC::Runtime::ASM::ble(.L_8047E428);
/*8047E408 0047B208*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E40C 0047B20C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E410 0047B210*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E414 0047B214*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0x21c);
/*8047E418 0047B218*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E41C 0047B21C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E420 0047B220*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r30));
/*8047E424 0047B224*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047E428, 0x8047E428) //this is a jump label
/*8047E428 0047B228*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E42C 0047B22C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E430 0047B230*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E434 0047B234*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8047E438 0047B238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E43C 0047B23C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8047E440 0047B240*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E444 0047B244*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E448 0047B248*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E44C 0047B24C*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E450 0047B250*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047E454 0047B254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E458 0047B258*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E45C 0047B25C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E460 0047B260*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E464 0047B264*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E468 0047B268*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8047E46C 0047B26C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E470 0047B270*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8047E474 0047B274*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E478 0047B278*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E47C 0047B27C*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E480 0047B280*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E484 0047B284*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E488 0047B288*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E48C 0047B28C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E490 0047B290*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E494 0047B294*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8047E498 0047B298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E49C 0047B29C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8047E4A0 0047B2A0*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E4A4 0047B2A4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E4A8 0047B2A8*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E4AC 0047B2AC*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E4B0 0047B2B0*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E4B4 0047B2B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E4B8 0047B2B8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E4BC 0047B2BC*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E4C0 0047B2C0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8047E4C4 0047B2C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E4C8 0047B2C8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8047E4CC 0047B2CC*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E4D0 0047B2D0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E4D4 0047B2D4*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E4D8 0047B2D8*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E4DC 0047B2DC*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047E4E0 0047B2E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8047E4E4 0047B2E4*/ PPC::Runtime::ASM::b(.L_8047E55C);
/*8047E4E8 0047B2E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x238);
/*8047E4EC 0047B2EC*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8047E4F0 0047B2F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r30));
/*8047E4F4 0047B2F4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E4F8 0047B2F8*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047E4FC 0047B2FC  4E 80 00 21 */ blrl
/*8047E500 0047B300*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E504 0047B304*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E508 0047B308*/ PPC::Runtime::ASM::ble(.L_8047E52C);
/*8047E50C 0047B30C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E510 0047B310*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047E514 0047B314*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E518 0047B318*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0x21c);
/*8047E51C 0047B31C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8047E520 0047B320*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E524 0047B324*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r30));
/*8047E528 0047B328*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047E52C, 0x8047E52C) //this is a jump label
/*8047E52C 0047B32C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E530 0047B330*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047E534 0047B334*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*8047E538 0047B338*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8047E53C 0047B33C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8047E540 0047B340*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8047E544 0047B344*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047E548 0047B348*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8047E54C 0047B34C*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*8047E550 0047B350*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E554 0047B354*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047E558 0047B358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8047E55C, 0x8047E55C) //this is a jump label
/*8047E55C 0047B35C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047E560 0047B360*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047E564 0047B364*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047E568 0047B368*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8047E56C 0047B36C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047E570 0047B370*/ PPC::Runtime::ASM::blr();
}