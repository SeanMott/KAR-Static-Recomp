//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8037B33C.hpp"



void fn_802E3F00(PPC::Runtime::GCContext* context)
{
/*802E3F00 002E0D00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802E3F04 002E0D04*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E3F08 002E0D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E3F0C 002E0D0C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E3F10 002E0D10*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802E3F14 002E0D14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E3F18 002E0D18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E3F1C 002E0D1C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E3F20 002E0D20*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E3F24 002E0D24*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E3F28 002E0D28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*802E3F2C 002E0D2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E3F30 002E0D30*/ PPC::Runtime::ASM::beq(.L_802E42F0);
/*802E3F34 002E0D34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r29));
/*802E3F38 002E0D38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E3F3C 002E0D3C*/ PPC::Runtime::ASM::bne(.L_802E40CC);
/*802E3F40 002E0D40*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r29));
/*802E3F44 002E0D44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E3F48 002E0D48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802E3F4C 002E0D4C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802E3F50 002E0D50*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802E3F54 002E0D54*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*802E3F58 002E0D58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E3F5C 002E0D5C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E3F60 002E0D60*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*802E3F64 002E0D64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E3F68 002E0D68*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802E3F6C 002E0D6C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802E3F70 002E0D70*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3928 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E3F74 002E0D74*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r4));
/*802E3F78 002E0D78*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E3F7C 002E0D7C*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E3F80 002E0D80*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E3F84 002E0D84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E3F88 002E0D88*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802E3F8C 002E0D8C  4C C6 32 42 */ crset context->cr1eq
/*802E3F90 002E0D90*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E3F94 002E0D94*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802E3F98 002E0D98*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802E3F9C 002E0D9C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802E3FA0 002E0DA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E3FA4 002E0DA4*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802E3FA8 002E0DA8*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E3FAC 002E0DAC*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802E3FB0 002E0DB0*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802E3FB4 002E0DB4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802E3FB8 002E0DB8*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E3FBC 002E0DBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E3FC0 002E0DC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E3FC4 002E0DC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E3FC8 002E0DC8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r12));
/*802E3FCC 002E0DCC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E3FD0 002E0DD0*/ PPC::Runtime::ASM::bctrl();
/* 802E3FD4 002E0DD4  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E3FD8 002E0DD8*/ PPC::Runtime::ASM::bne(.L_802E4014);
/*802E3FDC 002E0DDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E3FE0 002E0DE0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E3FE4 002E0DE4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x54c);
/*802E3FE8 002E0DE8*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x8);
/*802E3FEC 002E0DEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E3FF0 002E0DF0*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*802E3FF4 002E0DF4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E3FF8 002E0DF8*/ PPC::Runtime::ASM::mr(context->r7, context->r29);
/*802E3FFC 002E0DFC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E4000 002E0E00*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802E4004 002E0E04*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802E4008 002E0E08*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*802E400C 002E0E0C*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*802E4010 002E0E10*/ PPC::Runtime::ASM::b(.L_802E4048);
RUNTIME_PPC_JUMP_LABEL(.L_802E4014, 0x802E4014) //this is a jump label
/*802E4014 002E0E14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E4018 002E0E18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E401C 002E0E1C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x54c);
/*802E4020 002E0E20*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x8);
/*802E4024 002E0E24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802E4028 002E0E28*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*802E402C 002E0E2C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802E4030 002E0E30*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*802E4034 002E0E34*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*802E4038 002E0E38*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802E403C 002E0E3C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802E4040 002E0E40*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*802E4044 002E0E44*/ PPC::Runtime::ASM::bl(fn_8037B028);
RUNTIME_PPC_JUMP_LABEL(.L_802E4048, 0x802E4048) //this is a jump label
/*802E4048 002E0E48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E404C 002E0E4C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x494, context->r3));
/*802E4050 002E0E50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4054 002E0E54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802E4058 002E0E58*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802E405C 002E0E5C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802E4060 002E0E60*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*802E4064 002E0E64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4068 002E0E68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E406C 002E0E6C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*802E4070 002E0E70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E4074 002E0E74*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802E4078 002E0E78*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802E407C 002E0E7C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3928 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4080 002E0E80*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x494, context->r4));
/*802E4084 002E0E84*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E4088 002E0E88*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E408C 002E0E8C*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E4090 002E0E90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4094 002E0E94*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802E4098 002E0E98  4C C6 32 42 */ crset context->cr1eq
/*802E409C 002E0E9C*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E40A0 002E0EA0*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802E40A4 002E0EA4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802E40A8 002E0EA8*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802E40AC 002E0EAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E40B0 002E0EB0*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802E40B4 002E0EB4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E40B8 002E0EB8*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802E40BC 002E0EBC*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802E40C0 002E0EC0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802E40C4 002E0EC4*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E40C8 002E0EC8*/ PPC::Runtime::ASM::b(.L_802E43B8);
RUNTIME_PPC_JUMP_LABEL(.L_802E40CC, 0x802E40CC) //this is a jump label
/*802E40CC 002E0ECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r29));
/*802E40D0 002E0ED0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E40D4 002E0ED4*/ PPC::Runtime::ASM::bne(.L_802E4188);
/*802E40D8 002E0ED8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x488, context->r29));
/*802E40DC 002E0EDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E40E0 002E0EE0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802E40E4 002E0EE4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802E40E8 002E0EE8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802E40EC 002E0EEC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*802E40F0 002E0EF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E40F4 002E0EF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E40F8 002E0EF8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*802E40FC 002E0EFC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E4100 002E0F00*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802E4104 002E0F04*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802E4108 002E0F08*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E410C 002E0F0C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x488, context->r4));
/*802E4110 002E0F10*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E4114 002E0F14*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E4118 002E0F18*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E411C 002E0F1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4120 002E0F20*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802E4124 002E0F24  4C C6 32 42 */ crset context->cr1eq
/*802E4128 002E0F28*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E412C 002E0F2C*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802E4130 002E0F30*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802E4134 002E0F34*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802E4138 002E0F38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E413C 002E0F3C*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802E4140 002E0F40*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E4144 002E0F44*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802E4148 002E0F48*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802E414C 002E0F4C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802E4150 002E0F50*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E4154 002E0F54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E4158 002E0F58*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjClearFlags @ Get_MemoryOffset_HighBit);
/*802E415C 002E0F5C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjClearFlags @ Get_MemoryOffset_LowBit);
/*802E4160 002E0F60*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802E4164 002E0F64*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x488, context->r4));
/*802E4168 002E0F68*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E416C 002E0F6C*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E4170 002E0F70*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E4174 002E0F74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*802E4178 002E0F78*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802E417C 002E0F7C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802E4180 002E0F80*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E4184 002E0F84*/ PPC::Runtime::ASM::b(.L_802E43B8);
RUNTIME_PPC_JUMP_LABEL(.L_802E4188, 0x802E4188) //this is a jump label
/*802E4188 002E0F88*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa);
/*802E418C 002E0F8C*/ PPC::Runtime::ASM::bne(.L_802E4240);
/*802E4190 002E0F90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x484, context->r29));
/*802E4194 002E0F94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4198 002E0F98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802E419C 002E0F9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802E41A0 002E0FA0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802E41A4 002E0FA4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*802E41A8 002E0FA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E41AC 002E0FAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E41B0 002E0FB0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*802E41B4 002E0FB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E41B8 002E0FB8*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802E41BC 002E0FBC*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802E41C0 002E0FC0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E41C4 002E0FC4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x484, context->r4));
/*802E41C8 002E0FC8*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E41CC 002E0FCC*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E41D0 002E0FD0*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E41D4 002E0FD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E41D8 002E0FD8*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802E41DC 002E0FDC  4C C6 32 42 */ crset context->cr1eq
/*802E41E0 002E0FE0*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E41E4 002E0FE4*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802E41E8 002E0FE8*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802E41EC 002E0FEC*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802E41F0 002E0FF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E41F4 002E0FF4*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802E41F8 002E0FF8*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E41FC 002E0FFC*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802E4200 002E1000*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802E4204 002E1004*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802E4208 002E1008*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E420C 002E100C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E4210 002E1010*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802E4214 002E1014*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802E4218 002E1018*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802E421C 002E101C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x488, context->r4));
/*802E4220 002E1020*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E4224 002E1024*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E4228 002E1028*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E422C 002E102C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*802E4230 002E1030*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802E4234 002E1034*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802E4238 002E1038*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E423C 002E103C*/ PPC::Runtime::ASM::b(.L_802E43B8);
RUNTIME_PPC_JUMP_LABEL(.L_802E4240, 0x802E4240) //this is a jump label
/*802E4240 002E1040*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4244 002E1044*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4248 002E1048*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802E424C 002E104C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4250 002E1050*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4254 002E1054*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802E4258 002E1058*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E425C 002E105C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4260 002E1060*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*802E4264 002E1064*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3894 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4268 002E1068*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*802E426C 002E106C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3898 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4270 002E1070*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*802E4274 002E1074*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f2);
/*802E4278 002E1078*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E427C 002E107C*/ PPC::Runtime::ASM::bge(.L_802E43B8);
/*802E4280 002E1080*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E4284 002E1084*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4288 002E1088*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E428C 002E108C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802E4290 002E1090*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4294 002E1094*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4298 002E1098*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802E429C 002E109C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E42A0 002E10A0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E42A4 002E10A4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*802E42A8 002E10A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3894 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E42AC 002E10AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E42B0 002E10B0*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_HighBit);
/*802E42B4 002E10B4*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_LowBit);
/*802E42B8 002E10B8*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*802E42BC 002E10BC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f1);
/*802E42C0 002E10C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802E42C4 002E10C4*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E42C8 002E10C8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E42CC 002E10CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r4));
/*802E42D0 002E10D0*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E42D4 002E10D4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f2);
/*802E42D8 002E10D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802E42DC 002E10DC*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E42E0 002E10E0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/* 802E42E4 002E10E4  4C C6 32 42 */ crset context->cr1eq
/*802E42E8 002E10E8*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E42EC 002E10EC*/ PPC::Runtime::ASM::b(.L_802E43B8);
RUNTIME_PPC_JUMP_LABEL(.L_802E42F0, 0x802E42F0) //this is a jump label
/*802E42F0 002E10F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r29));
/*802E42F4 002E10F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E42F8 002E10F8*/ PPC::Runtime::ASM::bne(.L_802E43B8);
/*802E42FC 002E10FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r29));
/*802E4300 002E1100*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4304 002E1104*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802E4308 002E1108*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802E430C 002E110C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802E4310 002E1110*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*802E4314 002E1114*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4318 002E1118*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3870 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E431C 002E111C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*802E4320 002E1120*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E4324 002E1124*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802E4328 002E1128*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802E432C 002E112C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3928 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4330 002E1130*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r4));
/*802E4334 002E1134*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E4338 002E1138*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E433C 002E113C*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E4340 002E1140*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4344 002E1144*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802E4348 002E1148  4C C6 32 42 */ crset context->cr1eq
/*802E434C 002E114C*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E4350 002E1150*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802E4354 002E1154*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802E4358 002E1158*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802E435C 002E115C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802E4360 002E1160*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802E4364 002E1164*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802E4368 002E1168*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802E436C 002E116C*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802E4370 002E1170*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802E4374 002E1174*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E4378 002E1178*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E437C 002E117C*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_HighBit);
/*802E4380 002E1180*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_LowBit);
/*802E4384 002E1184*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3928 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4388 002E1188*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r4));
/*802E438C 002E118C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802E4390 002E1190*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802E4394 002E1194*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*802E4398 002E1198*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802E439C 002E119C*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/* 802E43A0 002E11A0  4C C6 32 42 */ crset context->cr1eq
/*802E43A4 002E11A4*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802E43A8 002E11A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802E43AC 002E11AC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E43B0 002E11B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x54c);
/*802E43B4 002E11B4*/ PPC::Runtime::ASM::bl(fn_8037B33C);
RUNTIME_PPC_JUMP_LABEL(.L_802E43B8, 0x802E43B8) //this is a jump label
/*802E43B8 002E11B8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802E43BC 002E11BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E43C0 002E11C0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E43C4 002E11C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E43C8 002E11C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E43CC 002E11CC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E43D0 002E11D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E43D4 002E11D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802E43D8 002E11D8*/ PPC::Runtime::ASM::blr();
}