//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802A24F8.hpp"
#include "fn_802A2454.hpp"
#include "fn_802A2368.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802A2B9C.hpp"
#include "fn_802A2B9C.hpp"
#include "fn_802A2B9C.hpp"
#include "fn_802A2B9C.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802A2B9C.hpp"
#include "fn_802A2258.hpp"
#include "fn_802A2258.hpp"
#include "fn_80285130.hpp"



void fn_802A2114(PPC::Runtime::GCContext* context)
{
/*802A2114 0029EF14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A2118 0029EF18*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A211C 0029EF1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A2120 0029EF20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A2124 0029EF24*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A2128 0029EF28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A212C 0029EF2C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A2130 0029EF30*/ PPC::Runtime::ASM::beq(.L_802A223C);
/*802A2134 0029EF34*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C43B0 @ Get_MemoryOffset_HighBit);
/*802A2138 0029EF38*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*802A213C 0029EF3C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C43B0 @ Get_MemoryOffset_LowBit);
/*802A2140 0029EF40*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A2144 0029EF44*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A2148 0029EF48*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A214C 0029EF4C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A2150 0029EF50*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A2154 0029EF54*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x67e8);
/*802A2158 0029EF58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A215C 0029EF5C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A2160 0029EF60*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*802A2164 0029EF64*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A2168 0029EF68*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x68ec);
/*802A216C 0029EF6C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A2170 0029EF70*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*802A2174 0029EF74*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A2178 0029EF78*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x74c8);
/*802A217C 0029EF7C*/ PPC::Runtime::ASM::bl(fn_802A24F8);
/*802A2180 0029EF80*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*802A2184 0029EF84*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A2188 0029EF88*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x7f9c);
/*802A218C 0029EF8C*/ PPC::Runtime::ASM::bl(fn_802A2454);
/*802A2190 0029EF90*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x67e0);
/*802A2194 0029EF94*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A2198 0029EF98*/ PPC::Runtime::ASM::bl(fn_802A2368);
/*802A219C 0029EF9C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x66dc);
/*802A21A0 0029EFA0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21A4 0029EFA4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A21A8 0029EFA8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x65d8);
/*802A21AC 0029EFAC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21B0 0029EFB0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A21B4 0029EFB4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x624c);
/*802A21B8 0029EFB8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21BC 0029EFBC*/ PPC::Runtime::ASM::bl(fn_802A2B9C);
/*802A21C0 0029EFC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5ec0);
/*802A21C4 0029EFC4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21C8 0029EFC8*/ PPC::Runtime::ASM::bl(fn_802A2B9C);
/*802A21CC 0029EFCC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5b34);
/*802A21D0 0029EFD0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21D4 0029EFD4*/ PPC::Runtime::ASM::bl(fn_802A2B9C);
/*802A21D8 0029EFD8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x57a8);
/*802A21DC 0029EFDC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21E0 0029EFE0*/ PPC::Runtime::ASM::bl(fn_802A2B9C);
/*802A21E4 0029EFE4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x56a4);
/*802A21E8 0029EFE8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21EC 0029EFEC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A21F0 0029EFF0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x55a0);
/*802A21F4 0029EFF4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A21F8 0029EFF8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A21FC 0029EFFC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5214);
/*802A2200 0029F000*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A2204 0029F004*/ PPC::Runtime::ASM::bl(fn_802A2B9C);
/*802A2208 0029F008*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x29e0);
/*802A220C 0029F00C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A2210 0029F010*/ PPC::Runtime::ASM::bl(fn_802A2258);
/*802A2214 0029F014*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A2218 0029F018*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A221C 0029F01C*/ PPC::Runtime::ASM::bl(fn_802A2258);
/*802A2220 0029F020*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A2224 0029F024*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A2228 0029F028*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A222C 0029F02C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A2230 0029F030*/ PPC::Runtime::ASM::ble(.L_802A223C);
/*802A2234 0029F034*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A2238 0029F038*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A223C, 0x802A223C) //this is a jump label
/*802A223C 0029F03C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A2240 0029F040*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A2244 0029F044*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A2248 0029F048*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A224C 0029F04C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A2250 0029F050*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A2254 0029F054*/ PPC::Runtime::ASM::blr();
}