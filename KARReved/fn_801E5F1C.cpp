//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E7108.hpp"
#include "fn_801E5ABC.hpp"
#include "fn_801E5ABC.hpp"
#include "fn_800E7354.hpp"
#include "fn_800E75B0.hpp"
#include "fn_800E77D0.hpp"
#include "fn_801E5B7C.hpp"



void fn_801E5F1C(PPC::Runtime::GCContext* context)
{
/*801E5F1C 001E2D1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*801E5F20 001E2D20*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E5F24 001E2D24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801E5F28 001E2D28*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801E5F2C 001E2D2C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801E5F30 001E2D30*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801E5F34 001E2D34*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801E5F38 001E2D38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801E5F3C 001E2D3C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801E5F40 001E2D40*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E5F44 001E2D44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E5F48 001E2D48*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r3));
/* 801E5F4C 001E2D4C  54 60 FF FF */ extrwi. context->r0 , context->r3 , 1 , 30
/*801E5F50 001E2D50*/ PPC::Runtime::ASM::bne(.L_801E610C);
/* 801E5F54 001E2D54  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*801E5F58 001E2D58*/ PPC::Runtime::ASM::bne(.L_801E610C);
/*801E5F5C 001E2D5C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/* 801E5F60 001E2D60  54 00 D7 BF */ extrwi. context->r0 , context->r0 , 2 , 24
/*801E5F64 001E2D64*/ PPC::Runtime::ASM::bne(.L_801E610C);
/*801E5F68 001E2D68*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r31));
/*801E5F6C 001E2D6C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801E5F70 001E2D70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801E5F74 001E2D74*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801E5F78 001E2D78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E5F7C 001E2D7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*801E5F80 001E2D80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r31));
/*801E5F84 001E2D84*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801E5F88 001E2D88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E5F8C 001E2D8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801E5F90 001E2D90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r31));
/*801E5F94 001E2D94*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801E5F98 001E2D98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801E5F9C 001E2D9C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801E5FA0 001E2DA0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E5FA4 001E2DA4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801E5FA8 001E2DA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*801E5FAC 001E2DAC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801E5FB0 001E2DB0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801E5FB4 001E2DB4*/ PPC::Runtime::ASM::bne(.L_801E60F8);
/*801E5FB8 001E2DB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801E5FBC 001E2DBC*/ PPC::Runtime::ASM::bl(fn_800E7108);
/*801E5FC0 001E2DC0*/ PPC::Runtime::ASM::lis(context->r4, fn_801E5ABC @ Get_MemoryOffset_HighBit);
/*801E5FC4 001E2DC4*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*801E5FC8 001E2DC8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801E5ABC @ Get_MemoryOffset_LowBit);
/*801E5FCC 001E2DCC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E5FD0 001E2DD0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801E5FD4 001E2DD4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r31));
/*801E5FD8 001E2DD8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x354);
/*801E5FDC 001E2DDC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E5FE0 001E2DE0*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*801E5FE4 001E2DE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r31));
/*801E5FE8 001E2DE8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*801E5FEC 001E2DEC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E5FF0 001E2DF0*/ PPC::Runtime::ASM::fdivs(context->f4, context->f1, context->f31);
/*801E5FF4 001E2DF4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801E5FF8 001E2DF8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f4);
/*801E5FFC 001E2DFC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f4);
/*801E6000 001E2E00*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f4);
/*801E6004 001E2E04*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*801E6008 001E2E08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E600C 001E2E0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x404, context->r31));
/*801E6010 001E2E10*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f2);
/*801E6014 001E2E14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E6018 001E2E18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x408, context->r31));
/*801E601C 001E2E1C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*801E6020 001E2E20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E6024 001E2E24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40c, context->r31));
/*801E6028 001E2E28*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*801E602C 001E2E2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E6030 001E2E30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r31));
/*801E6034 001E2E34*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f2);
/*801E6038 001E2E38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E603C 001E2E3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x414, context->r31));
/*801E6040 001E2E40*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*801E6044 001E2E44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E6048 001E2E48*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801E604C 001E2E4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c4, context->r31));
/*801E6050 001E2E50*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E6054 001E2E54*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
/*801E6058 001E2E58*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*801E605C 001E2E5C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f0);
/*801E6060 001E2E60*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f2);
/*801E6064 001E2E64*/ PPC::Runtime::ASM::bge(.L_801E606C);
/*801E6068 001E2E68*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_801E606C, 0x801E606C) //this is a jump label
/*801E606C 001E2E6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E6070 001E2E70*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801E6074 001E2E74*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801E6078 001E2E78*/ PPC::Runtime::ASM::bl(fn_800E7354);
/*801E607C 001E2E7C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*801E6080 001E2E80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E6084 001E2E84*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*801E6088 001E2E88*/ PPC::Runtime::ASM::bl(fn_800E75B0);
/*801E608C 001E2E8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r31));
/*801E6090 001E2E90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E6094 001E2E94*/ PPC::Runtime::ASM::bl(fn_800E77D0);
/*801E6098 001E2E98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c0, context->r31));
/*801E609C 001E2E9C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801E60A0 001E2EA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801E60A4 001E2EA4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801E60A8 001E2EA8*/ PPC::Runtime::ASM::xoris(context->r3, context->r4, 0x8000);
/*801E60AC 001E2EAC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E1E08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E60B0 001E2EB0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801E60B4 001E2EB4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1E00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E60B8 001E2EB8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801E60BC 001E2EBC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*801E60C0 001E2EC0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801E60C4 001E2EC4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E60C8 001E2EC8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f0);
/*801E60CC 001E2ECC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*801E60D0 001E2ED0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801E60D4 001E2ED4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*801E60D8 001E2ED8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E60DC 001E2EDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*801E60E0 001E2EE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*801E60E4 001E2EE4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E60E8 001E2EE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*801E60EC 001E2EEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*801E60F0 001E2EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*801E60F4 001E2EF4*/ PPC::Runtime::ASM::b(.L_801E60FC);
RUNTIME_PPC_JUMP_LABEL(.L_801E60F8, 0x801E60F8) //this is a jump label
/*801E60F8 001E2EF8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801E60FC, 0x801E60FC) //this is a jump label
/*801E60FC 001E2EFC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801E6100 001E2F00*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8f4);
/*801E6104 001E2F04*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*801E6108 001E2F08*/ PPC::Runtime::ASM::bl(fn_801E5B7C);
RUNTIME_PPC_JUMP_LABEL(.L_801E610C, 0x801E610C) //this is a jump label
/*801E610C 001E2F0C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801E6110 001E2F10*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801E6114 001E2F14*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801E6118 001E2F18*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801E611C 001E2F1C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801E6120 001E2F20*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801E6124 001E2F24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801E6128 001E2F28*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E612C 001E2F2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E6130 001E2F30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*801E6134 001E2F34*/ PPC::Runtime::ASM::blr();
}