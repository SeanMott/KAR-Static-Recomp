//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CB934.hpp"
#include "fn_80062C4C.hpp"
#include "fn_80062C4C.hpp"
#include "fn_801CC2FC.hpp"
#include "fn_80064C18.hpp"
#include "fn_80064C18.hpp"



void fn_801ECF20(PPC::Runtime::GCContext* context)
{
/*801ECF20 001E9D20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*801ECF24 001E9D24*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ECF28 001E9D28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*801ECF2C 001E9D2C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801ECF30 001E9D30*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801ECF34 001E9D34*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801ECF38 001E9D38*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801ECF3C 001E9D3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801ECF40 001E9D40*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r3));
/*801ECF44 001E9D44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/* 801ECF48 001E9D48  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801ECF4C 001E9D4C*/ PPC::Runtime::ASM::beq(.L_801ED14C);
/*801ECF50 001E9D50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801ECF54 001E9D54*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801ECF58 001E9D58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801ECF5C 001E9D5C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801ECF60 001E9D60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801ECF64 001E9D64*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801ECF68 001E9D68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801ECF6C 001E9D6C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801ECF70 001E9D70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801ECF74 001E9D74*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801ECF78 001E9D78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801ECF7C 001E9D7C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801ECF80 001E9D80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801ECF84 001E9D84*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801ECF88 001E9D88*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r31));
/*801ECF8C 001E9D8C*/ PPC::Runtime::ASM::bl(fn_801CB934);
/*801ECF90 001E9D90*/ PPC::Runtime::ASM::fmr(context->f0, context->f1);
/*801ECF94 001E9D94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801ECF98 001E9D98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1EA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ECF9C 001E9D9C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xd8);
/*801ECFA0 001E9DA0*/ PPC::Runtime::ASM::fmr(context->f30, context->f0);
/*801ECFA4 001E9DA4*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*801ECFA8 001E9DA8*/ PPC::Runtime::ASM::bl(fn_80062C4C);
/*801ECFAC 001E9DAC*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801ECFB0 001E9DB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801ECFB4 001E9DB4*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*801ECFB8 001E9DB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1EA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ECFBC 001E9DBC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xec);
/*801ECFC0 001E9DC0*/ PPC::Runtime::ASM::bl(fn_80062C4C);
/*801ECFC4 001E9DC4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f31);
/*801ECFC8 001E9DC8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x744, context->r31));
/*801ECFCC 001E9DCC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ECFD0 001E9DD0*/ PPC::Runtime::ASM::fmadds(context->f31, context->f1, context->f0, context->f31);
/*801ECFD4 001E9DD4*/ PPC::Runtime::ASM::bl(fn_801CC2FC);
/*801ECFD8 001E9DD8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1EA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ECFDC 001E9DDC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ECFE0 001E9DE0*/ PPC::Runtime::ASM::fdiv(context->f2, context->f1, context->f2);
/*801ECFE4 001E9DE4*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*801ECFE8 001E9DE8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801ECFEC 001E9DEC*/ PPC::Runtime::ASM::ble(.L_801ECFF4);
/*801ECFF0 001E9DF0*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801ECFF4, 0x801ECFF4) //this is a jump label
/*801ECFF4 001E9DF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801ECFF8 001E9DF8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x324);
/*801ECFFC 001E9DFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1E88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ED000 001E9E00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r4));
/*801ED004 001E9E04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801ED008 001E9E08*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f0, context->f1);
/*801ED00C 001E9E0C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
/*801ED010 001E9E10*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801ED014 001E9E14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f0, context->r31));
/*801ED018 001E9E18*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801ED01C 001E9E1C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801ED020 001E9E20*/ PPC::Runtime::ASM::bne(.L_801ED030);
/*801ED024 001E9E24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801ED028 001E9E28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*801ED02C 001E9E2C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801ED030, 0x801ED030) //this is a jump label
/*801ED030 001E9E30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc50, context->r31));
/*801ED034 001E9E34*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801ED038 001E9E38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801ED03C 001E9E3C*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*801ED040 001E9E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801ED044 001E9E44*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1EB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ED048 001E9E48*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801ED04C 001E9E4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r4));
/*801ED050 001E9E50*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801ED054 001E9E54*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*801ED058 001E9E58*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801ED05C 001E9E5C*/ PPC::Runtime::ASM::bge(.L_801ED068);
/*801ED060 001E9E60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r4));
/*801ED064 001E9E64*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801ED068, 0x801ED068) //this is a jump label
/*801ED068 001E9E68*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x738, context->r31));
/*801ED06C 001E9E6C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801ED070 001E9E70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x73c, context->r31));
/*801ED074 001E9E74*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801ED078 001E9E78*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801ED07C 001E9E7C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801ED080 001E9E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ED084 001E9E84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x740, context->r31));
/*801ED088 001E9E88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801ED08C 001E9E8C*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801ED090 001E9E90*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801ED094 001E9E94*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801ED098 001E9E98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ED09C 001E9E9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801ED0A0 001E9EA0*/ PPC::Runtime::ASM::ble(.L_801ED13C);
/*801ED0A4 001E9EA4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f1);
/*801ED0A8 001E9EA8*/ PPC::Runtime::ASM::ble(.L_801ED0E4);
/*801ED0AC 001E9EAC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801ED0B0 001E9EB0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x324);
/*801ED0B4 001E9EB4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801ED0B8 001E9EB8*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801ED0BC 001E9EBC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ED0C0 001E9EC0*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801ED0C4 001E9EC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801ED0C8 001E9EC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ED0CC 001E9ECC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801ED0D0 001E9ED0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801ED0D4 001E9ED4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ED0D8 001E9ED8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801ED0DC 001E9EDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801ED0E0 001E9EE0*/ PPC::Runtime::ASM::b(.L_801ED13C);
RUNTIME_PPC_JUMP_LABEL(.L_801ED0E4, 0x801ED0E4) //this is a jump label
/*801ED0E4 001E9EE4*/ PPC::Runtime::ASM::fsubs(context->f3, context->f1, context->f31);
/*801ED0E8 001E9EE8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ED0EC 001E9EEC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ED0F0 001E9EF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ED0F4 001E9EF4*/ PPC::Runtime::ASM::fdivs(context->f5, context->f3, context->f1);
/*801ED0F8 001E9EF8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f4, context->f5);
/*801ED0FC 001E9EFC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f5);
/*801ED100 001E9F00*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f5);
/*801ED104 001E9F04*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ED108 001E9F08*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ED10C 001E9F0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ED110 001E9F10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801ED114 001E9F14*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*801ED118 001E9F18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801ED11C 001E9F1C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ED120 001E9F20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801ED124 001E9F24*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801ED128 001E9F28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801ED12C 001E9F2C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ED130 001E9F30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801ED134 001E9F34*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801ED138 001E9F38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801ED13C, 0x801ED13C) //this is a jump label
/*801ED13C 001E9F3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc50, context->r31));
/*801ED140 001E9F40*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*801ED144 001E9F44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc50, context->r31));
/*801ED148 001E9F48*/ PPC::Runtime::ASM::b(.L_801ED154);
RUNTIME_PPC_JUMP_LABEL(.L_801ED14C, 0x801ED14C) //this is a jump label
/*801ED14C 001E9F4C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801ED150 001E9F50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc50, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801ED154, 0x801ED154) //this is a jump label
/*801ED154 001E9F54*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801ED158 001E9F58*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801ED15C 001E9F5C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801ED160 001E9F60*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801ED164 001E9F64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*801ED168 001E9F68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801ED16C 001E9F6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ED170 001E9F70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*801ED174 001E9F74*/ PPC::Runtime::ASM::blr();
}