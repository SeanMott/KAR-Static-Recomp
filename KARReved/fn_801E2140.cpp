//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A188.hpp"
#include "fn_801D5CA0.hpp"
#include "fn_801DC548.hpp"



void fn_801E2140(PPC::Runtime::GCContext* context)
{
/*801E2140 001DEF40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801E2144 001DEF44*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E2148 001DEF48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E214C 001DEF4C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801E2150 001DEF50*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801E2154 001DEF54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801E2158 001DEF58*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801E215C 001DEF5C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E2160 001DEF60*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801E2164 001DEF64*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801E2168 001DEF68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b0, context->r3));
/*801E216C 001DEF6C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801E2170 001DEF70*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*801E2174 001DEF74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b0, context->r3));
/*801E2178 001DEF78*/ PPC::Runtime::ASM::bl(fn_8000A188);
/*801E217C 001DEF7C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E2180 001DEF80*/ PPC::Runtime::ASM::beq(.L_801E219C);
/*801E2184 001DEF84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4cc, context->r29));
/*801E2188 001DEF88*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r29));
/*801E218C 001DEF8C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801E2190 001DEF90*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*801E2194 001DEF94*/ PPC::Runtime::ASM::bge(.L_801E219C);
/*801E2198 001DEF98*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801E219C, 0x801E219C) //this is a jump label
/*801E219C 001DEF9C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E21A0 001DEFA0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801E21A4 001DEFA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E21A8 001DEFA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*801E21AC 001DEFAC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E1D10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E21B0 001DEFB0*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*801E21B4 001DEFB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E21B8 001DEFB8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E21BC 001DEFBC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801E21C0 001DEFC0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801E21C4 001DEFC4*/ PPC::Runtime::ASM::bge(.L_801E21D0);
/*801E21C8 001DEFC8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E21CC 001DEFCC*/ PPC::Runtime::ASM::b(.L_801E21DC);
RUNTIME_PPC_JUMP_LABEL(.L_801E21D0, 0x801E21D0) //this is a jump label
/*801E21D0 001DEFD0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f31);
/*801E21D4 001DEFD4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E21D8 001DEFD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801E21DC, 0x801E21DC) //this is a jump label
/*801E21DC 001DEFDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba8, context->r29));
/*801E21E0 001DEFE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801E21E4 001DEFE4*/ PPC::Runtime::ASM::bne(.L_801E2210);
/*801E21E8 001DEFE8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801E21EC 001DEFEC*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*801E21F0 001DEFF0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E21F4 001DEFF4*/ PPC::Runtime::ASM::bl(fn_801D5CA0);
/*801E21F8 001DEFF8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*801E21FC 001DEFFC*/ PPC::Runtime::ASM::bne(.L_801E2210);
/*801E2200 001DF000*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801E2204 001DF004*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*801E2208 001DF008*/ PPC::Runtime::ASM::li(context->r5, -0x2);
/*801E220C 001DF00C*/ PPC::Runtime::ASM::bl(fn_801DC548);
RUNTIME_PPC_JUMP_LABEL(.L_801E2210, 0x801E2210) //this is a jump label
/*801E2210 001DF010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba8, context->r29));
/*801E2214 001DF014*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*801E2218 001DF018*/ PPC::Runtime::ASM::ble(.L_801E2220);
/*801E221C 001DF01C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xba8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801E2220, 0x801E2220) //this is a jump label
/*801E2220 001DF020*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801E2224 001DF024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E2228 001DF028*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801E222C 001DF02C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801E2230 001DF030*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801E2234 001DF034*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E2238 001DF038*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E223C 001DF03C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801E2240 001DF040*/ PPC::Runtime::ASM::blr();
}