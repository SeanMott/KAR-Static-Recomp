//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8021F7DC.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_80222708.hpp"
#include "fn_80225E60.hpp"
#include "fn_80225E60.hpp"
#include "fn_80236C40.hpp"
#include "fn_80226438.hpp"
#include "fn_80236C40.hpp"
#include "fn_8007A5B8.hpp"
#include "fn_8007A920.hpp"
#include "fn_80225724.hpp"
#include "fn_80225724.hpp"



void fn_80225F90(PPC::Runtime::GCContext* context)
{
/*80225F90 00222D90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80225F94 00222D94*/ PPC::Runtime::ASM::mflr(context->r0);
/*80225F98 00222D98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2950 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80225F9C 00222D9C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80225FA0 00222DA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80225FA4 00222DA4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80225FA8 00222DA8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80225FAC 00222DAC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2954 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80225FB0 00222DB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80225FB4 00222DB4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80225FB8 00222DB8*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*80225FBC 00222DBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*80225FC0 00222DC0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80225FC4 00222DC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*80225FC8 00222DC8*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*80225FCC 00222DCC*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*80225FD0 00222DD0*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*80225FD4 00222DD4*/ PPC::Runtime::ASM::beq(.L_80225FE8);
/*80225FD8 00222DD8*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
/*80225FDC 00222DDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80225FE0 00222DE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*80225FE4 00222DE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80225FE8, 0x80225FE8) //this is a jump label
/*80225FE8 00222DE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*80225FEC 00222DEC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80225FF0 00222DF0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80225FF4 00222DF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80225FF8 00222DF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r31));
/*80225FFC 00222DFC*/ PPC::Runtime::ASM::bl(fn_80222708);
/*80226000 00222E00*/ PPC::Runtime::ASM::lis(context->r3, fn_80225E60 @ Get_MemoryOffset_HighBit);
/*80226004 00222E04*/ PPC::Runtime::ASM::lis(context->r4, 0x4);
/*80226008 00222E08*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_80225E60 @ Get_MemoryOffset_LowBit);
/*8022600C 00222E0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80226010 00222E10*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*80226014 00222E14*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x5677);
/*80226018 00222E18*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8022601C 00222E1C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80226020 00222E20*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*80226024 00222E24*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r31));
/*80226028 00222E28*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8022602C 00222E2C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80226030 00222E30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r31));
/*80226034 00222E34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80226038 00222E38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2950 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022603C 00222E3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*80226040 00222E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80226044 00222E44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80226048 00222E48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8022604C 00222E4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80226050 00222E50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*80226054 00222E54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80226058 00222E58*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r4));
/*8022605C 00222E5C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*80226060 00222E60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80226064 00222E64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80226068 00222E68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*8022606C 00222E6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80226070 00222E70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80226074 00222E74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*80226078 00222E78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022607C 00222E7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80226080 00222E80*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80226084 00222E84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*80226088 00222E88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022608C 00222E8C*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80226090 00222E90*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80226094 00222E94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80226098 00222E98*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*8022609C 00222E9C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802260A0 00222EA0*/ PPC::Runtime::ASM::fsubs(context->f3, context->f4, context->f3);
/*802260A4 00222EA4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*802260A8 00222EA8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f3, context->f1);
/*802260AC 00222EAC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*802260B0 00222EB0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*802260B4 00222EB4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*802260B8 00222EB8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*802260BC 00222EBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*802260C0 00222EC0*/ PPC::Runtime::ASM::bl(fn_80226438);
/*802260C4 00222EC4*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*802260C8 00222EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802260CC 00222ECC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*802260D0 00222ED0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x5a5e);
/*802260D4 00222ED4*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0xac);
/*802260D8 00222ED8*/ PPC::Runtime::ASM::li(context->r6, 0x1fe);
/*802260DC 00222EDC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802260E0 00222EE0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802260E4 00222EE4*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*802260E8 00222EE8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*802260EC 00222EEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*802260F0 00222EF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*802260F4 00222EF4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x40);
/*802260F8 00222EF8*/ PPC::Runtime::ASM::bl(fn_8007A5B8);
/*802260FC 00222EFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80226100 00222F00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80226104 00222F04*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80226108 00222F08*/ PPC::Runtime::ASM::beq(.L_80226140);
/*8022610C 00222F0C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*80226110 00222F10*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80226114 00222F14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*80226118 00222F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022611C 00222F1C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80226120 00222F20*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80226124 00222F24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*80226128 00222F28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8022612C 00222F2C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80226130 00222F30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r5));
/*80226134 00222F34*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80226138 00222F38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022613C 00222F3C*/ PPC::Runtime::ASM::bl(fn_8007A920);
RUNTIME_PPC_JUMP_LABEL(.L_80226140, 0x80226140) //this is a jump label
/*80226140 00222F40*/ PPC::Runtime::ASM::lis(context->r3, fn_80225724 @ Get_MemoryOffset_HighBit);
/*80226144 00222F44*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80225724 @ Get_MemoryOffset_LowBit);
/*80226148 00222F48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r31));
/*8022614C 00222F4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80226150 00222F50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80226154 00222F54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80226158 00222F58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8022615C 00222F5C*/ PPC::Runtime::ASM::blr();
}