//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_8020D608.hpp"
#include "fn_8020D608.hpp"
#include "fn_8021D3D8.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FC398.hpp"



void fn_8021D104(PPC::Runtime::GCContext* context)
{
/*8021D104 00219F04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8021D108 00219F08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021D10C 00219F0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021D110 00219F10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021D114 00219F14*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021D118 00219F18*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*8021D11C 00219F1C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021D120 00219F20*/ PPC::Runtime::ASM::beq(.L_8021D250);
/*8021D124 00219F24*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb56, context->r31));
/*8021D128 00219F28*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D12C 00219F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8021D130 00219F30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8021D134 00219F34*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8021D138 00219F38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021D13C 00219F3C*/ PPC::Runtime::ASM::bge(.L_8021D150);
/*8021D140 00219F40*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*8021D144 00219F44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8021D148 00219F48*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8021D14C 00219F4C*/ PPC::Runtime::ASM::blt(.L_8021D160);
RUNTIME_PPC_JUMP_LABEL(.L_8021D150, 0x8021D150) //this is a jump label
/*8021D150 00219F50*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8021D154 00219F54*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021D158 00219F58*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r31));
/*8021D15C 00219F5C*/ PPC::Runtime::ASM::b(.L_8021D208);
RUNTIME_PPC_JUMP_LABEL(.L_8021D160, 0x8021D160) //this is a jump label
/*8021D160 00219F60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8021D164 00219F64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021D168 00219F68*/ PPC::Runtime::ASM::bgt(.L_8021D1D8);
/*8021D16C 00219F6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021D170 00219F70*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8021D174 00219F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r31));
/*8021D178 00219F78*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8021D17C 00219F7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D180 00219F80*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8021D184 00219F84*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D188 00219F88*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D18C 00219F8C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021D190 00219F90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D194 00219F94*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8021D198 00219F98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021D19C 00219F9C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021D1A0 00219FA0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8021D1A4 00219FA4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021D1A8 00219FA8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8021D1AC 00219FAC*/ PPC::Runtime::ASM::bne(.L_8021D208);
/*8021D1B0 00219FB0*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021D1B4 00219FB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D1B8 00219FB8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7960);
/*8021D1BC 00219FBC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D1C0 00219FC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021D1C4 00219FC4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xa0);
/*8021D1C8 00219FC8*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021D1CC 00219FCC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021D1D0 00219FD0*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r31));
/*8021D1D4 00219FD4*/ PPC::Runtime::ASM::b(.L_8021D208);
RUNTIME_PPC_JUMP_LABEL(.L_8021D1D8, 0x8021D1D8) //this is a jump label
/*8021D1D8 00219FD8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r31));
/*8021D1DC 00219FDC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8021D1E0 00219FE0*/ PPC::Runtime::ASM::blt(.L_8021D208);
/*8021D1E4 00219FE4*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021D1E8 00219FE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D1EC 00219FEC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7960);
/*8021D1F0 00219FF0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D1F4 00219FF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021D1F8 00219FF8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xa0);
/*8021D1FC 00219FFC*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021D200 0021A000*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021D204 0021A004*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9a, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8021D208, 0x8021D208) //this is a jump label
/*8021D208 0021A008*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8021D20C 0021A00C*/ PPC::Runtime::ASM::beq(.L_8021D21C);
/*8021D210 0021A010*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D214 0021A014*/ PPC::Runtime::ASM::bl(fn_8021D3D8);
/*8021D218 0021A018*/ PPC::Runtime::ASM::b(.L_8021D250);
RUNTIME_PPC_JUMP_LABEL(.L_8021D21C, 0x8021D21C) //this is a jump label
/*8021D21C 0021A01C*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8021D220 0021A020*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021D224 0021A024*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021D228 0021A028*/ PPC::Runtime::ASM::bne(.L_8021D250);
/*8021D22C 0021A02C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D230 0021A030*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8021D234 0021A034*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D238 0021A038*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D23C 0021A03C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E277C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021D240 0021A040*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*8021D244 0021A044*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021D248 0021A048*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021D24C 0021A04C*/ PPC::Runtime::ASM::bl(fn_801FC398);
RUNTIME_PPC_JUMP_LABEL(.L_8021D250, 0x8021D250) //this is a jump label
/*8021D250 0021A050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021D254 0021A054*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021D258 0021A058*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021D25C 0021A05C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8021D260 0021A060*/ PPC::Runtime::ASM::blr();
}