//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A08A8.hpp"
#include "fn_800A1614.hpp"
#include "fn_800A0DD0.hpp"
#include "fn_800A0DD0.hpp"
#include "fn_800A0DD0.hpp"
#include "fn_800A0DD0.hpp"



void fn_800A8FF4(PPC::Runtime::GCContext* context)
{
/*800A8FF4 000A5DF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800A8FF8 000A5DF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A8FFC 000A5DFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800A9000 000A5E00*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800A9004 000A5E04*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800A9008 000A5E08*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800A900C 000A5E0C*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_25 @ Get_MemoryOffset_HighBit);
/*800A9010 000A5E10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r25));
/*800A9014 000A5E14*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*800A9018 000A5E18*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*800A901C 000A5E1C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, StructWithFuncPtrs_25 @ Get_MemoryOffset_LowBit);
/*800A9020 000A5E20*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A9024 000A5E24*/ PPC::Runtime::ASM::bne(.L_800A9038);
/*800A9028 000A5E28*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*800A902C 000A5E2C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1c);
/*800A9030 000A5E30*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*800A9034 000A5E34*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A9038, 0x800A9038) //this is a jump label
/*800A9038 000A5E38*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800A903C 000A5E3C*/ PPC::Runtime::ASM::xor(context->r0, context->r26, context->r0);
/*800A9040 000A5E40*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800A9044 000A5E44*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r26);
/*800A9048 000A5E48*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 800A904C 000A5E4C  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800A9050 000A5E50*/ PPC::Runtime::ASM::beq(.L_800A9080);
/*800A9054 000A5E54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r25));
/*800A9058 000A5E58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A905C 000A5E5C*/ PPC::Runtime::ASM::beq(.L_800A9068);
/*800A9060 000A5E60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A9064 000A5E64*/ PPC::Runtime::ASM::b(.L_800A906C);
RUNTIME_PPC_JUMP_LABEL(.L_800A9068, 0x800A9068) //this is a jump label
/*800A9068 000A5E68*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A906C, 0x800A906C) //this is a jump label
/*800A906C 000A5E6C*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r26);
/*800A9070 000A5E70*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800A9074 000A5E74*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*800A9078 000A5E78*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*800A907C 000A5E7C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_800A9080, 0x800A9080) //this is a jump label
/*800A9080 000A5E80*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A9084 000A5E84*/ PPC::Runtime::ASM::bne(.L_800A90A8);
/*800A9088 000A5E88*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800A908C 000A5E8C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*800A9090 000A5E90*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800A9094 000A5E94*/ PPC::Runtime::ASM::bl(OSReport);
/*800A9098 000A5E98*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*800A909C 000A5E9C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x3c);
/*800A90A0 000A5EA0*/ PPC::Runtime::ASM::li(context->r4, 0x114);
/*800A90A4 000A5EA4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A90A8, 0x800A90A8) //this is a jump label
/*800A90A8 000A5EA8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A90AC 000A5EAC*/ PPC::Runtime::ASM::slwi(context->r29, context->r26, 2);
/*800A90B0 000A5EB0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r25));
/*800A90B4 000A5EB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A90B8 000A5EB8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800A90BC 000A5EBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A90C0 000A5EC0*/ PPC::Runtime::ASM::lwzx(context->r30, context->r4, context->r29);
/*800A90C4 000A5EC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800A90C8 000A5EC8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800A90CC 000A5ECC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A90D0 000A5ED0*/ PPC::Runtime::ASM::bne(.L_800A90E4);
/*800A90D4 000A5ED4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*800A90D8 000A5ED8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x80);
/*800A90DC 000A5EDC*/ PPC::Runtime::ASM::li(context->r4, 0x134);
/*800A90E0 000A5EE0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A90E4, 0x800A90E4) //this is a jump label
/*800A90E4 000A5EE4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A90E8 000A5EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r25));
/*800A90EC 000A5EEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A90F0 000A5EF0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A90F4 000A5EF4*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A90F8 000A5EF8*/ PPC::Runtime::ASM::bne(.L_800A910C);
/*800A90FC 000A5EFC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*800A9100 000A5F00*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1c);
/*800A9104 000A5F04*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*800A9108 000A5F08*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A910C, 0x800A910C) //this is a jump label
/*800A910C 000A5F0C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800A9110 000A5F10*/ PPC::Runtime::ASM::xor(context->r0, context->r26, context->r0);
/*800A9114 000A5F14*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800A9118 000A5F18*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r26);
/*800A911C 000A5F1C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 800A9120 000A5F20  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800A9124 000A5F24*/ PPC::Runtime::ASM::beq(.L_800A9154);
/*800A9128 000A5F28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r25));
/*800A912C 000A5F2C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A9130 000A5F30*/ PPC::Runtime::ASM::beq(.L_800A913C);
/*800A9134 000A5F34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A9138 000A5F38*/ PPC::Runtime::ASM::b(.L_800A9140);
RUNTIME_PPC_JUMP_LABEL(.L_800A913C, 0x800A913C) //this is a jump label
/*800A913C 000A5F3C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A9140, 0x800A9140) //this is a jump label
/*800A9140 000A5F40*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r26);
/*800A9144 000A5F44*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800A9148 000A5F48*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*800A914C 000A5F4C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*800A9150 000A5F50*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_800A9154, 0x800A9154) //this is a jump label
/*800A9154 000A5F54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A9158 000A5F58*/ PPC::Runtime::ASM::bne(.L_800A917C);
/*800A915C 000A5F5C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800A9160 000A5F60*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*800A9164 000A5F64*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800A9168 000A5F68*/ PPC::Runtime::ASM::bl(OSReport);
/*800A916C 000A5F6C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*800A9170 000A5F70*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x3c);
/*800A9174 000A5F74*/ PPC::Runtime::ASM::li(context->r4, 0x114);
/*800A9178 000A5F78*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A917C, 0x800A917C) //this is a jump label
/*800A917C 000A5F7C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r25));
/*800A9180 000A5F80*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800A9184 000A5F84*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r24));
/*800A9188 000A5F88*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*800A918C 000A5F8C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800A9190 000A5F90*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800A9194 000A5F94*/ PPC::Runtime::ASM::lwzx(context->r6, context->r5, context->r29);
/*800A9198 000A5F98*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800A919C 000A5F9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800A91A0 000A5FA0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800A91A4 000A5FA4*/ PPC::Runtime::ASM::lwzx(context->r24, context->r7, context->r0);
/*800A91A8 000A5FA8*/ PPC::Runtime::ASM::bl(fn_800A08A8);
/*800A91AC 000A5FAC*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800A91B0 000A5FB0*/ PPC::Runtime::ASM::bl(fn_800A1614);
/*800A91B4 000A5FB4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800A91B8 000A5FB8*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*800A91BC 000A5FBC*/ PPC::Runtime::ASM::b(.L_800A9228);
RUNTIME_PPC_JUMP_LABEL(.L_800A91C0, 0x800A91C0) //this is a jump label
/*800A91C0 000A5FC0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*800A91C4 000A5FC4*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x1);
/*800A91C8 000A5FC8*/ PPC::Runtime::ASM::slwi(context->r5, context->r0, 3);
/*800A91CC 000A5FCC*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r25);
/*800A91D0 000A5FD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A91D4 000A5FD4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800A91D8 000A5FD8*/ PPC::Runtime::ASM::bne(.L_800A91FC);
/*800A91DC 000A5FDC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A91E0 000A5FE0*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*800A91E4 000A5FE4*/ PPC::Runtime::ASM::lfsx(context->f2, context->r6, context->r5);
/*800A91E8 000A5FE8*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*800A91EC 000A5FEC*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*800A91F0 000A5FF0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D5BA0 @ Get_MemoryOffset_SDA21);
/*800A91F4 000A5FF4*/ PPC::Runtime::ASM::bl(fn_800A0DD0);
/*800A91F8 000A5FF8*/ PPC::Runtime::ASM::b(.L_800A9220);
RUNTIME_PPC_JUMP_LABEL(.L_800A91FC, 0x800A91FC) //this is a jump label
/*800A91FC 000A5FFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800A9200 000A6000*/ PPC::Runtime::ASM::li(context->r4, lbl_805D5BA4 @ Get_MemoryOffset_SDA21);
/*800A9204 000A6004*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A9208 000A6008*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*800A920C 000A600C*/ PPC::Runtime::ASM::lfsx(context->f2, context->r6, context->r5);
/*800A9210 000A6010*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*800A9214 000A6014*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*800A9218 000A6018*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*800A921C 000A601C*/ PPC::Runtime::ASM::bl(fn_800A0DD0);
RUNTIME_PPC_JUMP_LABEL(.L_800A9220, 0x800A9220) //this is a jump label
/*800A9220 000A6020*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x8);
/*800A9224 000A6024*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A9228, 0x800A9228) //this is a jump label
/*800A9228 000A6028*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800A922C 000A602C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800A9230 000A6030*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800A9234 000A6034*/ PPC::Runtime::ASM::blt(.L_800A91C0);
/*800A9238 000A6038*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*800A923C 000A603C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800A9240 000A6040*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800A9244 000A6044*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A9248 000A6048*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800A924C 000A604C*/ PPC::Runtime::ASM::bne(.L_800A9270);
/*800A9250 000A6050*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A9254 000A6054*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*800A9258 000A6058*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A925C 000A605C*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*800A9260 000A6060*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*800A9264 000A6064*/ PPC::Runtime::ASM::li(context->r4, lbl_805D5BA0 @ Get_MemoryOffset_SDA21);
/*800A9268 000A6068*/ PPC::Runtime::ASM::bl(fn_800A0DD0);
/*800A926C 000A606C*/ PPC::Runtime::ASM::b(.L_800A9294);
RUNTIME_PPC_JUMP_LABEL(.L_800A9270, 0x800A9270) //this is a jump label
/*800A9270 000A6070*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800A9274 000A6074*/ PPC::Runtime::ASM::li(context->r4, lbl_805D5BA4 @ Get_MemoryOffset_SDA21);
/*800A9278 000A6078*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A927C 000A607C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*800A9280 000A6080*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A9284 000A6084*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*800A9288 000A6088*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*800A928C 000A608C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*800A9290 000A6090*/ PPC::Runtime::ASM::bl(fn_800A0DD0);
RUNTIME_PPC_JUMP_LABEL(.L_800A9294, 0x800A9294) //this is a jump label
/*800A9294 000A6094*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800A9298 000A6098*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800A929C 000A609C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800A92A0 000A60A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A92A4 000A60A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800A92A8 000A60A8*/ PPC::Runtime::ASM::blr();
}