//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_800094C4.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_800094C4.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80114BA4.hpp"
#include "fn_80125E78.hpp"
#include "fn_80125E78.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_800095C0.hpp"
#include "fn_?loadData2.hpp"
#include "fn_800094C4.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_800094C4.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80115174.hpp"
#include "fn_80115114.hpp"
#include "fn_80115174.hpp"
#include "fn_80115114.hpp"



void fn_80125FD0(PPC::Runtime::GCContext* context)
{
/*80125FD0 00122DD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80125FD4 00122DD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80125FD8 00122DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80125FDC 00122DDC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80125FE0 00122DE0*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80125FE4 00122DE4*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80125FE8 00122DE8*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*80125FEC 00122DEC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125FF0 00122DF0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80125FF4 00122DF4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80125FF8 00122DF8*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0xb0c);
/*80125FFC 00122DFC*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*80126000 00122E00*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126004 00122E04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80126008 00122E08*/ PPC::Runtime::ASM::bne(.L_8012603C);
/*8012600C 00122E0C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80126010 00122E10*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126014 00122E14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80126018 00122E18*/ PPC::Runtime::ASM::beq(.L_80126290);
/*8012601C 00122E1C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80126020 00122E20*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126024 00122E24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80126028 00122E28*/ PPC::Runtime::ASM::bne(.L_80126034);
/*8012602C 00122E2C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80126030 00122E30*/ PPC::Runtime::ASM::b(.L_801260AC);
RUNTIME_PPC_JUMP_LABEL(.L_80126034, 0x80126034) //this is a jump label
/*80126034 00122E34*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80126038 00122E38*/ PPC::Runtime::ASM::b(.L_801260AC);
RUNTIME_PPC_JUMP_LABEL(.L_8012603C, 0x8012603C) //this is a jump label
/*8012603C 00122E3C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80126040 00122E40*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*80126044 00122E44*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126048 00122E48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8012604C 00122E4C*/ PPC::Runtime::ASM::bne(.L_80126080);
/*80126050 00122E50*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80126054 00122E54*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126058 00122E58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8012605C 00122E5C*/ PPC::Runtime::ASM::beq(.L_80126290);
/*80126060 00122E60*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80126064 00122E64*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126068 00122E68*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8012606C 00122E6C*/ PPC::Runtime::ASM::bne(.L_80126078);
/*80126070 00122E70*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80126074 00122E74*/ PPC::Runtime::ASM::b(.L_801260AC);
RUNTIME_PPC_JUMP_LABEL(.L_80126078, 0x80126078) //this is a jump label
/*80126078 00122E78*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8012607C 00122E7C*/ PPC::Runtime::ASM::b(.L_801260AC);
RUNTIME_PPC_JUMP_LABEL(.L_80126080, 0x80126080) //this is a jump label
/*80126080 00122E80*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80126084 00122E84*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126088 00122E88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8012608C 00122E8C*/ PPC::Runtime::ASM::beq(.L_80126290);
/*80126090 00122E90*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80126094 00122E94*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126098 00122E98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8012609C 00122E9C*/ PPC::Runtime::ASM::bne(.L_801260A8);
/*801260A0 00122EA0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801260A4 00122EA4*/ PPC::Runtime::ASM::b(.L_801260AC);
RUNTIME_PPC_JUMP_LABEL(.L_801260A8, 0x801260A8) //this is a jump label
/*801260A8 00122EA8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801260AC, 0x801260AC) //this is a jump label
/*801260AC 00122EAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*801260B0 00122EB0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*801260B4 00122EB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801260B8 00122EB8*/ PPC::Runtime::ASM::bl(fn_80114BA4);
/*801260BC 00122EBC*/ PPC::Runtime::ASM::lis(context->r4, fn_80125E78 @ Get_MemoryOffset_HighBit);
/*801260C0 00122EC0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801260C4 00122EC4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801260C8 00122EC8*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*801260CC 00122ECC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80125E78 @ Get_MemoryOffset_LowBit);
/*801260D0 00122ED0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801260D4 00122ED4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFF10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801260D8 00122ED8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801260DC 00122EDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*801260E0 00122EE0*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801260E4 00122EE4*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*801260E8 00122EE8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801260EC 00122EEC*/ PPC::Runtime::ASM::mr(context->r5, context->r25);
/*801260F0 00122EF0*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*801260F4 00122EF4*/ PPC::Runtime::ASM::li(context->r4, 0x21);
/*801260F8 00122EF8*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*801260FC 00122EFC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80126100 00122F00*/ PPC::Runtime::ASM::bl(fn_800095C0);
/*80126104 00122F04*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80126108 00122F08*/ PPC::Runtime::ASM::addi(context->r27, context->r25, 0x1);
/*8012610C 00122F0C*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80126110 00122F10*/ PPC::Runtime::ASM::extsb(context->r28, context->r3);
/*80126114 00122F14*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80126118 00122F18*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*8012611C 00122F1C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126120 00122F20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80126124 00122F24*/ PPC::Runtime::ASM::bne(.L_80126184);
/*80126128 00122F28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012612C 00122F2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80126130 00122F30*/ PPC::Runtime::ASM::bne(.L_8012615C);
/*80126134 00122F34*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80126138 00122F38*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8012613C 00122F3C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80126140 00122F40*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80126144 00122F44*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80126148 00122F48*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
/*8012614C 00122F4C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80126150 00122F50*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80126154 00122F54*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80126158 00122F58*/ PPC::Runtime::ASM::b(.L_8012624C);
RUNTIME_PPC_JUMP_LABEL(.L_8012615C, 0x8012615C) //this is a jump label
/*8012615C 00122F5C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80126160 00122F60*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80126164 00122F64*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80126168 00122F68*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8012616C 00122F6C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80126170 00122F70*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
/*80126174 00122F74*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80126178 00122F78*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012617C 00122F7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80126180 00122F80*/ PPC::Runtime::ASM::b(.L_8012624C);
RUNTIME_PPC_JUMP_LABEL(.L_80126184, 0x80126184) //this is a jump label
/*80126184 00122F84*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80126188 00122F88*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*8012618C 00122F8C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80126190 00122F90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80126194 00122F94*/ PPC::Runtime::ASM::bne(.L_801261F4);
/*80126198 00122F98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012619C 00122F9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801261A0 00122FA0*/ PPC::Runtime::ASM::bne(.L_801261CC);
/*801261A4 00122FA4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801261A8 00122FA8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801261AC 00122FAC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801261B0 00122FB0*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*801261B4 00122FB4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801261B8 00122FB8*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
/*801261BC 00122FBC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801261C0 00122FC0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801261C4 00122FC4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801261C8 00122FC8*/ PPC::Runtime::ASM::b(.L_8012624C);
RUNTIME_PPC_JUMP_LABEL(.L_801261CC, 0x801261CC) //this is a jump label
/*801261CC 00122FCC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801261D0 00122FD0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801261D4 00122FD4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801261D8 00122FD8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*801261DC 00122FDC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801261E0 00122FE0*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
/*801261E4 00122FE4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801261E8 00122FE8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801261EC 00122FEC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801261F0 00122FF0*/ PPC::Runtime::ASM::b(.L_8012624C);
RUNTIME_PPC_JUMP_LABEL(.L_801261F4, 0x801261F4) //this is a jump label
/*801261F4 00122FF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801261F8 00122FF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801261FC 00122FFC*/ PPC::Runtime::ASM::bne(.L_80126228);
/*80126200 00123000*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80126204 00123004*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80126208 00123008*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012620C 0012300C*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80126210 00123010*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80126214 00123014*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
/*80126218 00123018*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8012621C 0012301C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80126220 00123020*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80126224 00123024*/ PPC::Runtime::ASM::b(.L_8012624C);
RUNTIME_PPC_JUMP_LABEL(.L_80126228, 0x80126228) //this is a jump label
/*80126228 00123028*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012622C 0012302C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80126230 00123030*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80126234 00123034*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80126238 00123038*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012623C 0012303C*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
/*80126240 00123040*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80126244 00123044*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80126248 00123048*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8012624C, 0x8012624C) //this is a jump label
/*8012624C 0012304C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFF10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80126250 00123050*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80126254 00123054*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80126258 00123058*/ PPC::Runtime::ASM::bl(fn_80115174);
/*8012625C 0012305C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80126260 00123060*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80126264 00123064*/ PPC::Runtime::ASM::bl(fn_80115114);
/*80126268 00123068*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFF10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012626C 0012306C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80126270 00123070*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80126274 00123074*/ PPC::Runtime::ASM::bl(fn_80115174);
/*80126278 00123078*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8012627C 0012307C*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80126280 00123080*/ PPC::Runtime::ASM::bl(fn_80115114);
/*80126284 00123084*/ PPC::Runtime::ASM::slwi(context->r0, context->r26, 2);
/*80126288 00123088*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8012628C 0012308C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80126290, 0x80126290) //this is a jump label
/*80126290 00123090*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80126294 00123094*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80126298 00123098*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8012629C 0012309C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801262A0 001230A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801262A4 001230A4*/ PPC::Runtime::ASM::blr();
}