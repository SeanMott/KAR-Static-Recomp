//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062ECC.hpp"
#include "fn_80064DAC.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80063F1C.hpp"
#include "fn_8019407C.hpp"
#include "fn_801C868C.hpp"
#include "fn_8021F428.hpp"
#include "fn_8019BFB4.hpp"



void fn_spawnFireBullet(PPC::Runtime::GCContext* context)
{
/*801A8F68 001A5D68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb0, context->r1));
/*801A8F6C 001A5D6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A8F70 001A5D70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*801A8F74 001A5D74*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*801A8F78 001A5D78*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*801A8F7C 001A5D7C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*801A8F80 001A5D80*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*801A8F84 001A5D84*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*801A8F88 001A5D88*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801A8F8C 001A5D8C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A8F90 001A5D90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801A8F94 001A5D94*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*801A8F98 001A5D98*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801A8F9C 001A5D9C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E134C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A8FA0 001A5DA0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801A8FA4 001A5DA4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801A8FA8 001A5DA8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*801A8FAC 001A5DAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801A8FB0 001A5DB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*801A8FB4 001A5DB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A8FB8 001A5DB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A8FBC 001A5DBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A8FC0 001A5DC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A8FC4 001A5DC4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801A8FC8 001A5DC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r5));
/*801A8FCC 001A5DCC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A8FD0 001A5DD0*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*801A8FD4 001A5DD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1350 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A8FD8 001A5DD8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801A8FDC 001A5DDC*/ PPC::Runtime::ASM::bge(.L_801A8FEC);
/*801A8FE0 001A5DE0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*801A8FE4 001A5DE4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801A8FE8 001A5DE8*/ PPC::Runtime::ASM::bl(fn_80064DAC);
RUNTIME_PPC_JUMP_LABEL(.L_801A8FEC, 0x801A8FEC) //this is a jump label
/*801A8FEC 001A5DEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A8FF0 001A5DF0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*801A8FF4 001A5DF4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*801A8FF8 001A5DF8*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*801A8FFC 001A5DFC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801A9000 001A5E00*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801A9004 001A5E04*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*801A9008 001A5E08*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*801A900C 001A5E0C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*801A9010 001A5E10*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A9014 001A5E14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801A9018 001A5E18*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801A901C 001A5E1C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801A9020 001A5E20*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801A9024 001A5E24*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801A9028 001A5E28*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801A902C 001A5E2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A9030 001A5E30*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801A9034 001A5E34*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E134C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A9038 001A5E38*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801A903C 001A5E3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1354 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A9040 001A5E40*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801A9044 001A5E44*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801A9048 001A5E48*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801A904C 001A5E4C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801A9050 001A5E50*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801A9054 001A5E54*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801A9058 001A5E58*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801A905C 001A5E5C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801A9060 001A5E60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801A9064 001A5E64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801A9068 001A5E68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801A906C 001A5E6C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801A9070 001A5E70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*801A9074 001A5E74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801A9078 001A5E78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*801A907C 001A5E7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801A9080 001A5E80*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r4));
/*801A9084 001A5E84*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*801A9088 001A5E88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*801A908C 001A5E8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801A9090 001A5E90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801A9094 001A5E94*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r4));
/*801A9098 001A5E98*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801A909C 001A5E9C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*801A90A0 001A5EA0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801A90A4 001A5EA4*/ PPC::Runtime::ASM::fmr(context->f0, context->f1);
/*801A90A8 001A5EA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801A90AC 001A5EAC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801A90B0 001A5EB0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801A90B4 001A5EB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A90B8 001A5EB8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801A90BC 001A5EBC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A90C0 001A5EC0*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
/*801A90C4 001A5EC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801A90C8 001A5EC8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A90CC 001A5ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A90D0 001A5ED0*/ PPC::Runtime::ASM::bl(fn_80063F1C);
/*801A90D4 001A5ED4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A90D8 001A5ED8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A90DC 001A5EDC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A90E0 001A5EE0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801A90E4 001A5EE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A90E8 001A5EE8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801A90EC 001A5EEC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801A90F0 001A5EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*801A90F4 001A5EF4*/ PPC::Runtime::ASM::bl(fn_8019407C);
/*801A90F8 001A5EF8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A90FC 001A5EFC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801A9100 001A5F00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801A9104 001A5F04*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A9108 001A5F08*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801A910C 001A5F0C*/ PPC::Runtime::ASM::fadds(context->f4, context->f1, context->f0);
/*801A9110 001A5F10*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A9114 001A5F14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*801A9118 001A5F18*/ PPC::Runtime::ASM::fadds(context->f2, context->f3, context->f2);
/*801A911C 001A5F1C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*801A9120 001A5F20*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801A9124 001A5F24*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801A9128 001A5F28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*801A912C 001A5F2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*801A9130 001A5F30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801A9134 001A5F34*/ PPC::Runtime::ASM::bl(fn_801C868C);
/*801A9138 001A5F38*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*801A913C 001A5F3C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*801A9140 001A5F40*/ PPC::Runtime::ASM::bl(fn_8021F428);
/*801A9144 001A5F44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A9148 001A5F48*/ PPC::Runtime::ASM::li(context->r4, 0x1f);
/*801A914C 001A5F4C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A9150 001A5F50*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*801A9154 001A5F54*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*801A9158 001A5F58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*801A915C 001A5F5C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*801A9160 001A5F60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*801A9164 001A5F64*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*801A9168 001A5F68*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*801A916C 001A5F6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A9170 001A5F70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xb0);
/*801A9174 001A5F74*/ PPC::Runtime::ASM::blr();
}