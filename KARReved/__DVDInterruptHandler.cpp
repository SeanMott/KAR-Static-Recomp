//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__OSGetSystemTime.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "__OSGetSystemTime.hpp"
#include "fn_Read.hpp"
#include "fn_DVDLowSeek.hpp"
#include "OSClearContext.hpp"
#include "OSSetCurrentContext.hpp"
#include "OSClearContext.hpp"
#include "OSSetCurrentContext.hpp"



void __DVDInterruptHandler(PPC::Runtime::GCContext* context)
{
/*803C409C 003C0E9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C40A0 003C0EA0*/ PPC::Runtime::ASM::lis(context->r3, CommandList_8056CB40 @ Get_MemoryOffset_HighBit);
/*803C40A4 003C0EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C40A8 003C0EA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2f0, context->r1));
/*803C40AC 003C0EAC*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r1));
/*803C40B0 003C0EB0*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*803C40B4 003C0EB4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, CommandList_8056CB40 @ Get_MemoryOffset_LowBit);
/*803C40B8 003C0EB8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803C40BC 003C0EBC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDD80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C40C0 003C0EC0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C40C4 003C0EC4*/ PPC::Runtime::ASM::beq(.L_803C4104);
/*803C40C8 003C0EC8*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*803C40CC 003C0ECC*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDD74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C40D0 003C0ED0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C40D4 003C0ED4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDD70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C40D8 003C0ED8*/ PPC::Runtime::ASM::stw(context->r0, StructValues_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C40DC 003C0EDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r30));
/*803C40E0 003C0EE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r30));
/*803C40E4 003C0EE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
/*803C40E8 003C0EE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r30));
/*803C40EC 003C0EEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r30));
/*803C40F0 003C0EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r30));
/*803C40F4 003C0EF4*/ PPC::Runtime::ASM::lwz(context->r0, StopAtNextInt_805DDD40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C40F8 003C0EF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*803C40FC 003C0EFC*/ PPC::Runtime::ASM::bne(.L_803C4104);
/*803C4100 003C0F00*/ PPC::Runtime::ASM::ori(context->r29, context->r29, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803C4104, 0x803C4104) //this is a jump label
/*803C4104 003C0F04*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4108 003C0F08*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDD80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C410C 003C0F0C*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803C4110 003C0F10*/ PPC::Runtime::ASM::stw(context->r0, StopAtNextInt_805DDD40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4114 003C0F14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6000, context->r3));
/*803C4118 003C0F18*/ PPC::Runtime::ASM::andi.(context->r31, context->r0, 0x2a);
/*803C411C 003C0F1C*/ PPC::Runtime::ASM::andi.(context->r3, context->r0, 0x54);
/*803C4120 003C0F20*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 1);
/*803C4124 003C0F24*/ PPC::Runtime::ASM::and(context->r27, context->r3, context->r0);
/*803C4128 003C0F28*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r27, 0, 25, 25);
/*803C412C 003C0F2C*/ PPC::Runtime::ASM::beq(.L_803C4134);
/*803C4130 003C0F30*/ PPC::Runtime::ASM::ori(context->r29, context->r29, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803C4134, 0x803C4134) //this is a jump label
/*803C4134 003C0F34*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r27, 0, 27, 27);
/*803C4138 003C0F38*/ PPC::Runtime::ASM::beq(.L_803C4140);
/*803C413C 003C0F3C*/ PPC::Runtime::ASM::ori(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C4140, 0x803C4140) //this is a jump label
/*803C4140 003C0F40*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r27, 0, 29, 29);
/*803C4144 003C0F44*/ PPC::Runtime::ASM::beq(.L_803C414C);
/*803C4148 003C0F48*/ PPC::Runtime::ASM::ori(context->r29, context->r29, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_803C414C, 0x803C414C) //this is a jump label
/*803C414C 003C0F4C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*803C4150 003C0F50*/ PPC::Runtime::ASM::beq(.L_803C4164);
/*803C4154 003C0F54*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4158 003C0F58*/ PPC::Runtime::ASM::stw(context->r0, ResetOccurred_805DDD58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C415C 003C0F5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*803C4160 003C0F60*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
RUNTIME_PPC_JUMP_LABEL(.L_803C4164, 0x803C4164) //this is a jump label
/*803C4164 003C0F64*/ PPC::Runtime::ASM::or(context->r0, context->r27, context->r31);
/*803C4168 003C0F68*/ PPC::Runtime::ASM::lis(context->r31, 0xcc00);
/*803C416C 003C0F6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6000, context->r31));
/*803C4170 003C0F70*/ PPC::Runtime::ASM::lwz(context->r0, ResetOccurred_805DDD58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4174 003C0F74*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C4178 003C0F78*/ PPC::Runtime::ASM::beq(.L_803C4218);
/*803C417C 003C0F7C*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*803C4180 003C0F80*/ PPC::Runtime::ASM::lis(context->r5, 0x8000);
/*803C4184 003C0F84*/ PPC::Runtime::ASM::lwz(context->r7, LastResetEnd_805DDD50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4188 003C0F88*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r5));
/*803C418C 003C0F8C*/ PPC::Runtime::ASM::lis(context->r5, 0x1062);
/*803C4190 003C0F90*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4dd3);
/*803C4194 003C0F94*/ PPC::Runtime::ASM::lwz(context->r8, LastResetEnd_805DDD50 + 0x4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4198 003C0F98*/ PPC::Runtime::ASM::srwi(context->r6, context->r6, 2);
/*803C419C 003C0F9C*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r5, context->r6);
/*803C41A0 003C0FA0*/ PPC::Runtime::ASM::srwi(context->r5, context->r5, 6);
/*803C41A4 003C0FA4*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0xc8);
/*803C41A8 003C0FA8*/ PPC::Runtime::ASM::subfc(context->r6, context->r8, context->r4);
/*803C41AC 003C0FAC*/ PPC::Runtime::ASM::subfe(context->r3, context->r7, context->r3);
/*803C41B0 003C0FB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C41B4 003C0FB4*/ PPC::Runtime::ASM::xoris(context->r4, context->r3, 0x8000);
/*803C41B8 003C0FB8*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*803C41BC 003C0FBC*/ PPC::Runtime::ASM::subfc(context->r0, context->r5, context->r6);
/*803C41C0 003C0FC0*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r4);
/*803C41C4 003C0FC4*/ PPC::Runtime::ASM::subfe(context->r3, context->r4, context->r4);
/*803C41C8 003C0FC8*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*803C41CC 003C0FCC*/ PPC::Runtime::ASM::beq(.L_803C4218);
/*803C41D0 003C0FD0*/ PPC::Runtime::ASM::addi(context->r27, context->r31, 0x6000);
/*803C41D4 003C0FD4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*803C41D8 003C0FD8*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 29, 29);
/*803C41DC 003C0FDC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 1, 29, 29);
/*803C41E0 003C0FE0*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r0);
/*803C41E4 003C0FE4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*803C41E8 003C0FE8*/ PPC::Runtime::ASM::beq(.L_803C420C);
/*803C41EC 003C0FEC*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DDD4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C41F0 003C0FF0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803C41F4 003C0FF4*/ PPC::Runtime::ASM::beq(.L_803C4204);
/*803C41F8 003C0FF8*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803C41FC 003C0FFC*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/* 803C4200 003C1000  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803C4204, 0x803C4204) //this is a jump label
/*803C4204 003C1004*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4208 003C1008*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDD4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803C420C, 0x803C420C) //this is a jump label
/*803C420C 003C100C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803C4210 003C1010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803C4214 003C1014*/ PPC::Runtime::ASM::b(.L_803C426C);
RUNTIME_PPC_JUMP_LABEL(.L_803C4218, 0x803C4218) //this is a jump label
/*803C4218 003C1018*/ PPC::Runtime::ASM::lwz(context->r0, WaitingCoverClose_805DDD5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C421C 003C101C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C4220 003C1020*/ PPC::Runtime::ASM::beq(.L_803C4260);
/*803C4224 003C1024*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803C4228 003C1028*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x6000);
/*803C422C 003C102C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803C4230 003C1030*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r0, 0, 30, 30);
/*803C4234 003C1034*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 29, 29);
/*803C4238 003C1038*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 1, 29, 29);
/*803C423C 003C103C*/ PPC::Runtime::ASM::and(context->r3, context->r3, context->r0);
/*803C4240 003C1040*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 29, 29);
/*803C4244 003C1044*/ PPC::Runtime::ASM::beq(.L_803C424C);
/*803C4248 003C1048*/ PPC::Runtime::ASM::ori(context->r29, context->r29, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803C424C, 0x803C424C) //this is a jump label
/*803C424C 003C104C*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r4);
/*803C4250 003C1050*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803C4254 003C1054*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4258 003C1058*/ PPC::Runtime::ASM::stw(context->r0, WaitingCoverClose_805DDD5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C425C 003C105C*/ PPC::Runtime::ASM::b(.L_803C426C);
RUNTIME_PPC_JUMP_LABEL(.L_803C4260, 0x803C4260) //this is a jump label
/*803C4260 003C1060*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803C4264 003C1064*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4268 003C1068*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6004, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803C426C, 0x803C426C) //this is a jump label
/*803C426C 003C106C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r29, 0, 28, 28);
/*803C4270 003C1070*/ PPC::Runtime::ASM::beq(.L_803C4284);
/*803C4274 003C1074*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDD60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4278 003C1078*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C427C 003C107C*/ PPC::Runtime::ASM::bne(.L_803C4284);
/*803C4280 003C1080*/ PPC::Runtime::ASM::rlwinm(context->r29, context->r29, 0, 29, 27);
RUNTIME_PPC_JUMP_LABEL(.L_803C4284, 0x803C4284) //this is a jump label
/* 803C4284 003C1084  57 A0 07 FF */ clrlwi. context->r0 , context->r29 , 31
/*803C4288 003C1088*/ PPC::Runtime::ASM::beq(.L_803C4308);
/*803C428C 003C108C*/ PPC::Runtime::ASM::lwz(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4290 003C1090*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*803C4294 003C1094*/ PPC::Runtime::ASM::lwzx(context->r3, context->r30, context->r0);
/*803C4298 003C1098*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*803C429C 003C109C*/ PPC::Runtime::ASM::bne(.L_803C42CC);
/*803C42A0 003C10A0*/ PPC::Runtime::ASM::lwz(context->r3, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C42A4 003C10A4*/ PPC::Runtime::ASM::add(context->r6, context->r30, context->r0);
/*803C42A8 003C10A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803C42AC 003C10AC*/ PPC::Runtime::ASM::stw(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C42B0 003C10B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803C42B4 003C10B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803C42B8 003C10B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*803C42BC 003C10BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C42C0 003C10C0*/ PPC::Runtime::ASM::bl(fn_Read);
/*803C42C4 003C10C4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C42C8 003C10C8*/ PPC::Runtime::ASM::b(.L_803C42FC);
RUNTIME_PPC_JUMP_LABEL(.L_803C42CC, 0x803C42CC) //this is a jump label
/*803C42CC 003C10CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*803C42D0 003C10D0*/ PPC::Runtime::ASM::bne(.L_803C42F8);
/*803C42D4 003C10D4*/ PPC::Runtime::ASM::lwz(context->r3, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C42D8 003C10D8*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r0);
/*803C42DC 003C10DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803C42E0 003C10E0*/ PPC::Runtime::ASM::stw(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C42E4 003C10E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803C42E8 003C10E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803C42EC 003C10EC*/ PPC::Runtime::ASM::bl(fn_DVDLowSeek);
/*803C42F0 003C10F0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C42F4 003C10F4*/ PPC::Runtime::ASM::b(.L_803C42FC);
RUNTIME_PPC_JUMP_LABEL(.L_803C42F8, 0x803C42F8) //this is a jump label
/*803C42F8 003C10F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803C42FC, 0x803C42FC) //this is a jump label
/*803C42FC 003C10FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C4300 003C1100*/ PPC::Runtime::ASM::beq(.L_803C4318);
/*803C4304 003C1104*/ PPC::Runtime::ASM::b(.L_803C4368);
RUNTIME_PPC_JUMP_LABEL(.L_803C4308, 0x803C4308) //this is a jump label
/*803C4308 003C1108*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803C430C 003C110C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803C4310 003C1110*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4314 003C1114*/ PPC::Runtime::ASM::stw(context->r0, NextCommandNumber_805DDD84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803C4318, 0x803C4318) //this is a jump label
/*803C4318 003C1118*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803C431C 003C111C*/ PPC::Runtime::ASM::bl(OSClearContext);
/*803C4320 003C1120*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803C4324 003C1124*/ PPC::Runtime::ASM::bl(OSSetCurrentContext);
/*803C4328 003C1128*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*803C432C 003C112C*/ PPC::Runtime::ASM::beq(.L_803C4358);
/*803C4330 003C1130*/ PPC::Runtime::ASM::lwz(context->r12, Callback_805DDD48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4334 003C1134*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4338 003C1138*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803C433C 003C113C*/ PPC::Runtime::ASM::stw(context->r0, Callback_805DDD48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4340 003C1140*/ PPC::Runtime::ASM::beq(.L_803C4350);
/*803C4344 003C1144*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803C4348 003C1148*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/* 803C434C 003C114C  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803C4350, 0x803C4350) //this is a jump label
/*803C4350 003C1150*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4354 003C1154*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDD60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803C4358, 0x803C4358) //this is a jump label
/*803C4358 003C1158*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803C435C 003C115C*/ PPC::Runtime::ASM::bl(OSClearContext);
/*803C4360 003C1160*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803C4364 003C1164*/ PPC::Runtime::ASM::bl(OSSetCurrentContext);
RUNTIME_PPC_JUMP_LABEL(.L_803C4368, 0x803C4368) //this is a jump label
/*803C4368 003C1168*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r1));
/*803C436C 003C116C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r1));
/*803C4370 003C1170*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x2f0);
/*803C4374 003C1174*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C4378 003C1178*/ PPC::Runtime::ASM::blr();
}