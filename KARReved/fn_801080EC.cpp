//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7B0C.hpp"
#include "fn_800D7AD0.hpp"
#include "fn_800F7044.hpp"
#include "fn_800E9F30.hpp"
#include "fn_800D4BF4.hpp"
#include "fn_800E9F50.hpp"
#include "fn_80061168.hpp"
#include "fn_800EA13C.hpp"
#include "fn_800F7A64.hpp"
#include "fn_DrawableModel_Draw_TakeNoParams.hpp"
#include "fn_killWhispy.hpp"



void fn_801080EC(PPC::Runtime::GCContext* context)
{
/*801080EC 00104EEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801080F0 00104EF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801080F4 00104EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801080F8 00104EF8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*801080FC 00104EFC*/ PPC::Runtime::ASM::bl(_savegpr_18);
/*80108100 00104F00*/ PPC::Runtime::ASM::mr(context->r18, context->r3);
/*80108104 00104F04*/ PPC::Runtime::ASM::mr(context->r19, context->r4);
/*80108108 00104F08*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010810C 00104F0C*/ PPC::Runtime::ASM::lis(context->r9, StructWithFuncPtrs_122 @ Get_MemoryOffset_HighBit);
/*80108110 00104F10*/ PPC::Runtime::ASM::slwi(context->r28, context->r4, 2);
/*80108114 00104F14*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80108118 00104F18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8010811C 00104F1C*/ PPC::Runtime::ASM::mr(context->r20, context->r5);
/*80108120 00104F20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r26));
/*80108124 00104F24*/ PPC::Runtime::ASM::mr(context->r21, context->r6);
/*80108128 00104F28*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010812C 00104F2C*/ PPC::Runtime::ASM::mr(context->r22, context->r7);
/*80108130 00104F30*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r28);
/*80108134 00104F34*/ PPC::Runtime::ASM::mr(context->r23, context->r8);
/*80108138 00104F38*/ PPC::Runtime::ASM::addi(context->r31, context->r9, StructWithFuncPtrs_122 @ Get_MemoryOffset_LowBit);
/*8010813C 00104F3C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80108140 00104F40*/ PPC::Runtime::ASM::bl(fn_800D7B0C);
/*80108144 00104F44*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80108148 00104F48*/ PPC::Runtime::ASM::beq(.L_80108364);
/*8010814C 00104F4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r26));
/*80108150 00104F50*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80108154 00104F54*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r28);
/*80108158 00104F58*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*8010815C 00104F5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r26));
/*80108160 00104F60*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80108164 00104F64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r26));
/*80108168 00104F68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r25));
/*8010816C 00104F6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80108170 00104F70*/ PPC::Runtime::ASM::beq(.L_80108194);
/*80108174 00104F74*/ PPC::Runtime::ASM::mulli(context->r0, context->r19, 0x14);
/*80108178 00104F78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8010817C 00104F7C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*80108180 00104F80*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80108184 00104F84*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80108188 00104F88*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8010818C 00104F8C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r5, context->r0);
/*80108190 00104F90*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_80108194, 0x80108194) //this is a jump label
/*80108194 00104F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r25));
/*80108198 00104F98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8010819C 00104F9C*/ PPC::Runtime::ASM::ble(.L_801081B0);
/*801081A0 00104FA0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*801081A4 00104FA4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xdc);
/*801081A8 00104FA8*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*801081AC 00104FAC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801081B0, 0x801081B0) //this is a jump label
/*801081B0 00104FB0*/ PPC::Runtime::ASM::mulli(context->r27, context->r19, 0x14);
/*801081B4 00104FB4*/ PPC::Runtime::ASM::mr(context->r29, context->r26);
/*801081B8 00104FB8*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*801081BC 00104FBC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801081C0 00104FC0*/ PPC::Runtime::ASM::b(.L_80108204);
RUNTIME_PPC_JUMP_LABEL(.L_801081C4, 0x801081C4) //this is a jump label
/*801081C4 00104FC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*801081C8 00104FC8*/ PPC::Runtime::ASM::mr(context->r3, context->r18);
/*801081CC 00104FCC*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r25));
/*801081D0 00104FD0*/ PPC::Runtime::ASM::mr(context->r6, context->r20);
/*801081D4 00104FD4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x8);
/*801081D8 00104FD8*/ PPC::Runtime::ASM::mr(context->r7, context->r21);
/*801081DC 00104FDC*/ PPC::Runtime::ASM::lwzx(context->r5, context->r27, context->r0);
/*801081E0 00104FE0*/ PPC::Runtime::ASM::mr(context->r8, context->r22);
/*801081E4 00104FE4*/ PPC::Runtime::ASM::add(context->r4, context->r9, context->r30);
/*801081E8 00104FE8*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*801081EC 00104FEC*/ PPC::Runtime::ASM::bl(fn_800F7044);
/*801081F0 00104FF0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r29));
/*801081F4 00104FF4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1c);
/*801081F8 00104FF8*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*801081FC 00104FFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r29));
/*80108200 00105000*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80108204, 0x80108204) //this is a jump label
/*80108204 00105004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r25));
/*80108208 00105008*/ PPC::Runtime::ASM::cmpw(context->r24, context->r0);
/*8010820C 0010500C*/ PPC::Runtime::ASM::blt(.L_801081C4);
/*80108210 00105010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r26));
/*80108214 00105014*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80108218 00105018*/ PPC::Runtime::ASM::ble(.L_801082BC);
/*8010821C 0010501C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80108220 00105020*/ PPC::Runtime::ASM::bgt(.L_80108234);
/*80108224 00105024*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*80108228 00105028*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xb0);
/*8010822C 0010502C*/ PPC::Runtime::ASM::li(context->r4, 0x9c);
/*80108230 00105030*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80108234, 0x80108234) //this is a jump label
/*80108234 00105034*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r26));
/*80108238 00105038*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r28);
/*8010823C 0010503C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80108240 00105040*/ PPC::Runtime::ASM::bne(.L_80108294);
/*80108244 00105044*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80108248 00105048*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8010824C 0010504C*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80108250 00105050*/ PPC::Runtime::ASM::lwz(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80108254 00105054*/ PPC::Runtime::ASM::bl(fn_800E9F30);
/*80108258 00105058*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r26));
/*8010825C 0010505C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80108260 00105060*/ PPC::Runtime::ASM::stwx(context->r3, context->r5, context->r28);
/*80108264 00105064*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*80108268 00105068*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r27);
/*8010826C 0010506C*/ PPC::Runtime::ASM::bl(fn_800D4BF4);
/*80108270 00105070*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r26));
/*80108274 00105074*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80108278 00105078*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r20));
/*8010827C 0010507C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r28);
/*80108280 00105080*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r20));
/*80108284 00105084*/ PPC::Runtime::ASM::bl(fn_800E9F50);
/*80108288 00105088*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r26));
/*8010828C 0010508C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r28);
/*80108290 00105090*/ PPC::Runtime::ASM::bl(fn_80061168);
RUNTIME_PPC_JUMP_LABEL(.L_80108294, 0x80108294) //this is a jump label
/*80108294 00105094*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r26));
/*80108298 00105098*/ PPC::Runtime::ASM::addi(context->r7, context->r26, 0x128);
/*8010829C 0010509C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r26));
/*801082A0 001050A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801082A4 001050A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 801082A8 001050A8  54 00 C0 02 */ extlwi context->r0 , context->r0 , 2 , 24
/*801082AC 001050AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r26));
/*801082B0 001050B0*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r28);
/*801082B4 001050B4*/ PPC::Runtime::ASM::srawi(context->r6, context->r0, 31);
/*801082B8 001050B8*/ PPC::Runtime::ASM::bl(fn_800EA13C);
RUNTIME_PPC_JUMP_LABEL(.L_801082BC, 0x801082BC) //this is a jump label
/*801082BC 001050BC*/ PPC::Runtime::ASM::mr(context->r3, context->r18);
/*801082C0 001050C0*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*801082C4 001050C4*/ PPC::Runtime::ASM::mr(context->r20, context->r3);
/*801082C8 001050C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801082CC 001050CC*/ PPC::Runtime::ASM::cmpwi(context->r20, 0x24);
/*801082D0 001050D0*/ PPC::Runtime::ASM::blt(.L_801082E0);
/*801082D4 001050D4*/ PPC::Runtime::ASM::cmpwi(context->r20, 0x26);
/*801082D8 001050D8*/ PPC::Runtime::ASM::bgt(.L_801082E0);
/*801082DC 001050DC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801082E0, 0x801082E0) //this is a jump label
/*801082E0 001050E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801082E4 001050E4*/ PPC::Runtime::ASM::bne(.L_801082F8);
/*801082E8 001050E8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*801082EC 001050EC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x5c);
/*801082F0 001050F0*/ PPC::Runtime::ASM::li(context->r4, 0x3b);
/*801082F4 001050F4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801082F8, 0x801082F8) //this is a jump label
/*801082F8 001050F8*/ PPC::Runtime::ASM::subi(context->r0, context->r20, 0x24);
/*801082FC 001050FC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*80108300 00105100*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80108304 00105104*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80108308 00105108*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8010830C 0010510C*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80108310 00105110*/ PPC::Runtime::ASM::beq(.L_80108324);
/*80108314 00105114*/ PPC::Runtime::ASM::mr(context->r3, context->r18);
/*80108318 00105118*/ PPC::Runtime::ASM::mr(context->r4, context->r19);
/*8010831C 0010511C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80108320 00105120*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80108324, 0x80108324) //this is a jump label
/*80108324 00105124*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x5);
/*80108328 00105128*/ PPC::Runtime::ASM::beq(.L_80108338);
/*8010832C 0010512C*/ PPC::Runtime::ASM::mr(context->r3, context->r18);
/*80108330 00105130*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*80108334 00105134*/ PPC::Runtime::ASM::bl(fn_DrawableModel_Draw_TakeNoParams);
RUNTIME_PPC_JUMP_LABEL(.L_80108338, 0x80108338) //this is a jump label
/*80108338 00105138*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8010833C 0010513C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80108340 00105140*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80108344 00105144*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80108348 00105148*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r27);
/*8010834C 0010514C*/ PPC::Runtime::ASM::lwzx(context->r6, context->r6, context->r27);
/*80108350 00105150*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80108354 00105154*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*80108358 00105158*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010835C 0010515C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80108360 00105160*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80108364, 0x80108364) //this is a jump label
/*80108364 00105164*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80108368 00105168*/ PPC::Runtime::ASM::bl(_restgpr_18);
/*8010836C 0010516C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80108370 00105170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80108374 00105174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80108378 00105178*/ PPC::Runtime::ASM::blr();
}