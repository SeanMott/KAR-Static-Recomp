//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E45EC.hpp"
#include "fn_801E45EC.hpp"
#include "fn_801C8E50.hpp"
#include "fn_80055DA0.hpp"
#include "fn_801D5C18.hpp"
#include "fn_801D5C18.hpp"



void fn_801E4284(PPC::Runtime::GCContext* context)
{
/*801E4284 001E1084*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801E4288 001E1088*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E428C 001E108C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801E4290 001E1090*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E4294 001E1094*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801E4298 001E1098*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E429C 001E109C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E42A0 001E10A0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E42A4 001E10A4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801E42A8 001E10A8*/ PPC::Runtime::ASM::lis(context->r4, fn_801E45EC @ Get_MemoryOffset_HighBit);
/*801E42AC 001E10AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*801E42B0 001E10B0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_801E45EC @ Get_MemoryOffset_LowBit);
/*801E42B4 001E10B4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*801E42B8 001E10B8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801E42BC 001E10BC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*801E42C0 001E10C0*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r5, 24);
/*801E42C4 001E10C4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E42C8 001E10C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc08, context->r3));
/*801E42CC 001E10CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc31, context->r3));
/*801E42D0 001E10D0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 7, 24, 24);
/*801E42D4 001E10D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc31, context->r3));
/*801E42D8 001E10D8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r3));
/*801E42DC 001E10DC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r5, 2, 24);
/*801E42E0 001E10E0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*801E42E4 001E10E4*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r0, 6, 24, 25);
/*801E42E8 001E10E8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r3));
/*801E42EC 001E10EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r3));
/*801E42F0 001E10F0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 3, 28, 28);
/*801E42F4 001E10F4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r3));
/*801E42F8 001E10F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r3));
/*801E42FC 001E10FC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 29, 29);
/*801E4300 001E1100*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r3));
/*801E4304 001E1104*/ PPC::Runtime::ASM::bl(fn_801C8E50);
/*801E4308 001E1108*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r30));
/*801E430C 001E110C*/ PPC::Runtime::ASM::bl(fn_80055DA0);
/*801E4310 001E1110*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801E4314 001E1114*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r30));
/*801E4318 001E1118*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801E431C 001E111C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E4320 001E1120*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801E4324 001E1124*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r30));
/*801E4328 001E1128*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnim);
/*801E432C 001E112C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801E4330 001E1130*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r30));
/*801E4334 001E1134*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801E4338 001E1138*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimByFlags);
/*801E433C 001E113C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r30));
/*801E4340 001E1140*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1DC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E4344 001E1144*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801E4348 001E1148*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801E434C 001E114C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r30));
/*801E4350 001E1150*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801E4354 001E1154*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*801E4358 001E1158*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*801E435C 001E115C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b50, context->r30));
/*801E4360 001E1160*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b54, context->r30));
/*801E4364 001E1164*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*801E4368 001E1168*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b58, context->r30));
/*801E436C 001E116C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*801E4370 001E1170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5c, context->r30));
/*801E4374 001E1174*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*801E4378 001E1178*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801E437C 001E117C*/ PPC::Runtime::ASM::beq(.L_801E4394);
/*801E4380 001E1180*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E4384 001E1184*/ PPC::Runtime::ASM::li(context->r4, 0x21);
/*801E4388 001E1188*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E438C 001E118C*/ PPC::Runtime::ASM::bl(fn_801D5C18);
/*801E4390 001E1190*/ PPC::Runtime::ASM::b(.L_801E43A4);
RUNTIME_PPC_JUMP_LABEL(.L_801E4394, 0x801E4394) //this is a jump label
/*801E4394 001E1194*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E4398 001E1198*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*801E439C 001E119C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E43A0 001E11A0*/ PPC::Runtime::ASM::bl(fn_801D5C18);
RUNTIME_PPC_JUMP_LABEL(.L_801E43A4, 0x801E43A4) //this is a jump label
/*801E43A4 001E11A4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801E43A8 001E11A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801E43AC 001E11AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E43B0 001E11B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E43B4 001E11B4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E43B8 001E11B8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E43BC 001E11BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E43C0 001E11C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801E43C4 001E11C4*/ PPC::Runtime::ASM::blr();
}