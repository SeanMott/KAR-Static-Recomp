//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A419C(PPC::Runtime::GCContext* context)
{
/*802A419C 002A0F9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A41A0 002A0FA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A41A4 002A0FA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A41A8 002A0FA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A41AC 002A0FAC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A41B0 002A0FB0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A41B4 002A0FB4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A41B8 002A0FB8*/ PPC::Runtime::ASM::beq(.L_802A43F8);
/*802A41BC 002A0FBC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C3C90 @ Get_MemoryOffset_HighBit);
/*802A41C0 002A0FC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2c54);
/*802A41C4 002A0FC4*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C3C90 @ Get_MemoryOffset_LowBit);
/*802A41C8 002A0FC8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A41CC 002A0FCC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A41D0 002A0FD0*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A41D4 002A0FD4*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A41D8 002A0FD8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A41DC 002A0FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A41E0 002A0FE0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A41E4 002A0FE4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b50);
/*802A41E8 002A0FE8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A41EC 002A0FEC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A41F0 002A0FF0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2a4c);
/*802A41F4 002A0FF4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A41F8 002A0FF8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A41FC 002A0FFC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2948);
/*802A4200 002A1000*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4204 002A1004*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4208 002A1008*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2844);
/*802A420C 002A100C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4210 002A1010*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4214 002A1014*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2740);
/*802A4218 002A1018*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A421C 002A101C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4220 002A1020*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x263c);
/*802A4224 002A1024*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4228 002A1028*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A422C 002A102C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2538);
/*802A4230 002A1030*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4234 002A1034*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4238 002A1038*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2434);
/*802A423C 002A103C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4240 002A1040*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4244 002A1044*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2330);
/*802A4248 002A1048*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A424C 002A104C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4250 002A1050*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x222c);
/*802A4254 002A1054*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4258 002A1058*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A425C 002A105C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2128);
/*802A4260 002A1060*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4264 002A1064*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4268 002A1068*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2024);
/*802A426C 002A106C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4270 002A1070*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4274 002A1074*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1f20);
/*802A4278 002A1078*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A427C 002A107C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4280 002A1080*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1e1c);
/*802A4284 002A1084*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4288 002A1088*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A428C 002A108C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1d18);
/*802A4290 002A1090*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4294 002A1094*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4298 002A1098*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c14);
/*802A429C 002A109C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42A0 002A10A0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42A4 002A10A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1b10);
/*802A42A8 002A10A8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42AC 002A10AC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42B0 002A10B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1a0c);
/*802A42B4 002A10B4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42B8 002A10B8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42BC 002A10BC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1908);
/*802A42C0 002A10C0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42C4 002A10C4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42C8 002A10C8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1804);
/*802A42CC 002A10CC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42D0 002A10D0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42D4 002A10D4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1700);
/*802A42D8 002A10D8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42DC 002A10DC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42E0 002A10E0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x15fc);
/*802A42E4 002A10E4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42E8 002A10E8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42EC 002A10EC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14f8);
/*802A42F0 002A10F0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A42F4 002A10F4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A42F8 002A10F8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x13f4);
/*802A42FC 002A10FC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4300 002A1100*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4304 002A1104*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12f0);
/*802A4308 002A1108*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A430C 002A110C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4310 002A1110*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x11ec);
/*802A4314 002A1114*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4318 002A1118*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A431C 002A111C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10e8);
/*802A4320 002A1120*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4324 002A1124*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4328 002A1128*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfe4);
/*802A432C 002A112C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4330 002A1130*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4334 002A1134*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xee0);
/*802A4338 002A1138*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A433C 002A113C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4340 002A1140*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*802A4344 002A1144*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4348 002A1148*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A434C 002A114C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*802A4350 002A1150*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4354 002A1154*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4358 002A1158*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*802A435C 002A115C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4360 002A1160*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4364 002A1164*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*802A4368 002A1168*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A436C 002A116C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4370 002A1170*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*802A4374 002A1174*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4378 002A1178*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A437C 002A117C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A4380 002A1180*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4384 002A1184*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4388 002A1188*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A438C 002A118C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4390 002A1190*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4394 002A1194*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A4398 002A1198*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A439C 002A119C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A43A0 002A11A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A43A4 002A11A4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A43A8 002A11A8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A43AC 002A11AC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A43B0 002A11B0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A43B4 002A11B4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A43B8 002A11B8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A43BC 002A11BC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A43C0 002A11C0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A43C4 002A11C4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A43C8 002A11C8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A43CC 002A11CC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A43D0 002A11D0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A43D4 002A11D4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A43D8 002A11D8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A43DC 002A11DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A43E0 002A11E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A43E4 002A11E4*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A43E8 002A11E8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A43EC 002A11EC*/ PPC::Runtime::ASM::ble(.L_802A43F8);
/*802A43F0 002A11F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A43F4 002A11F4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A43F8, 0x802A43F8) //this is a jump label
/*802A43F8 002A11F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A43FC 002A11FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4400 002A1200*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A4404 002A1204*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A4408 002A1208*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A440C 002A120C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A4410 002A1210*/ PPC::Runtime::ASM::blr();
}