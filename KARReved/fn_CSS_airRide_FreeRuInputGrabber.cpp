//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_80020638.hpp"
#include "fn_8000A444.hpp"
#include "fn_800092FC.hpp"
#include "fn_80135D08.hpp"
#include "fn_8000A594.hpp"
#include "fn_8005E5D0.hpp"
#include "fn_8003D6BC.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_8000A444.hpp"
#include "fn_8000A498.hpp"
#include "fn_800064F0.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_CSS_airRide_colorChanger.hpp"
#include "fn_CSS_airRide_colorChanger.hpp"
#include "fn_CSS_playSoundFX.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133E48.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80133F08.hpp"
#include "fn_80134500.hpp"
#include "fn_801340C8.hpp"
#include "fn_80134328.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133F08.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80134500.hpp"
#include "fn_?loadData2.hpp"
#include "fn_801340C8.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80134328.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133FC8.hpp"
#include "fn_playSoundFX_errorNoise.hpp"
#include "fn_playSoundFX_errorNoise.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_80134388.hpp"
#include "fn_801340A8.hpp"
#include "fn_80134110.hpp"
#include "fn_80134198.hpp"
#include "fn_80021EE8.hpp"
#include "fn_801342E4.hpp"
#include "fn_801344A0.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_CSS_airRide_colorChanger.hpp"
#include "fn_CSS_airRide_colorChanger.hpp"
#include "fn_CSS_playSoundFX.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133E48.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80133F08.hpp"
#include "fn_80134500.hpp"
#include "fn_801340C8.hpp"
#include "fn_80134328.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133F08.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80134500.hpp"
#include "fn_?loadData2.hpp"
#include "fn_801340C8.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80134328.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133FC8.hpp"
#include "fn_playSoundFX_errorNoise.hpp"
#include "fn_playSoundFX_errorNoise.hpp"
#include "fn_80061690.hpp"
#include "fn_80134458.hpp"
#include "fn_801343D8.hpp"
#include "fn_801341B8.hpp"
#include "fn_801341D8.hpp"
#include "fn_80134368.hpp"
#include "fn_80023B68.hpp"
#include "fn_800615F0.hpp"
#include "fn_80134418.hpp"
#include "fn_80134438.hpp"



void fn_CSS_airRide_FreeRuInputGrabber(PPC::Runtime::GCContext* context)
{
/*80027FA4 00024DA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80027FA8 00024DA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80027FAC 00024DAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80027FB0 00024DB0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80027FB4 00024DB4*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*80027FB8 00024DB8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80027FBC 00024DBC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80027FC0 00024DC0*/ PPC::Runtime::ASM::lis(context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*80027FC4 00024DC4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80027FC8 00024DC8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x10a);
/*80027FCC 00024DCC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*80027FD0 00024DD0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80027FD4 00024DD4*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r0);
/*80027FD8 00024DD8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80027FDC 00024DDC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r4));
/*80027FE0 00024DE0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80027FE4 00024DE4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80027FE8 00024DE8*/ PPC::Runtime::ASM::bne(.L_80027FF4);
/*80027FEC 00024DEC*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r7);
/*80027FF0 00024DF0*/ PPC::Runtime::ASM::extsb(context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80027FF4, 0x80027FF4) //this is a jump label
/*80027FF4 00024DF4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80027FF8 00024DF8*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80027FFC 00024DFC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80028000 00024E00*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r0);
/*80028004 00024E04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r4));
/*80028008 00024E08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002800C 00024E0C*/ PPC::Runtime::ASM::bne(.L_8002801C);
/*80028010 00024E10*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r7);
/*80028014 00024E14*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*80028018 00024E18*/ PPC::Runtime::ASM::extsb(context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002801C, 0x8002801C) //this is a jump label
/*8002801C 00024E1C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80028020 00024E20*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*80028024 00024E24*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80028028 00024E28*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r0);
/*8002802C 00024E2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r4));
/*80028030 00024E30*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80028034 00024E34*/ PPC::Runtime::ASM::bne(.L_80028044);
/*80028038 00024E38*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r7);
/*8002803C 00024E3C*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*80028040 00024E40*/ PPC::Runtime::ASM::extsb(context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80028044, 0x80028044) //this is a jump label
/*80028044 00024E44*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80028048 00024E48*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*8002804C 00024E4C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80028050 00024E50*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r0);
/*80028054 00024E54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r4));
/*80028058 00024E58*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002805C 00024E5C*/ PPC::Runtime::ASM::bne(.L_8002806C);
/*80028060 00024E60*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r7);
/*80028064 00024E64*/ PPC::Runtime::ASM::or(context->r0, context->r6, context->r0);
/*80028068 00024E68*/ PPC::Runtime::ASM::extsb(context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002806C, 0x8002806C) //this is a jump label
/*8002806C 00024E6C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80028070 00024E70*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*80028074 00024E74*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*80028078 00024E78*/ PPC::Runtime::ASM::lbz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8002807C 00024E7C*/ PPC::Runtime::ASM::addi(context->r23, context->r3, 0x8);
/*80028080 00024E80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*80028084 00024E84*/ PPC::Runtime::ASM::mulli(context->r4, context->r30, 0x44);
/*80028088 00024E88*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002808C 00024E8C*/ PPC::Runtime::ASM::lwzx(context->r26, context->r23, context->r4);
/*80028090 00024E90*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*80028094 00024E94*/ PPC::Runtime::ASM::beq(.L_800280E8);
/*80028098 00024E98*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r26, 0, 19, 19);
/*8002809C 00024E9C*/ PPC::Runtime::ASM::beq(.L_800280E8);
/*800280A0 00024EA0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800280A4 00024EA4*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*800280A8 00024EA8*/ PPC::Runtime::ASM::bl(fn_80020638);
/*800280AC 00024EAC*/ PPC::Runtime::ASM::extsb(context->r3, context->r30);
/*800280B0 00024EB0*/ PPC::Runtime::ASM::bl(fn_8000A444);
/*800280B4 00024EB4*/ PPC::Runtime::ASM::bl(fn_800092FC);
/*800280B8 00024EB8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800280BC 00024EBC*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*800280C0 00024EC0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800280C4 00024EC4*/ PPC::Runtime::ASM::bl(fn_80135D08);
/*800280C8 00024EC8*/ PPC::Runtime::ASM::li(context->r3, 0x12);
/*800280CC 00024ECC*/ PPC::Runtime::ASM::bl(fn_8000A594);
/*800280D0 00024ED0*/ PPC::Runtime::ASM::bl(fn_8005E5D0);
/*800280D4 00024ED4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800280D8 00024ED8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800280DC 00024EDC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*800280E0 00024EE0*/ PPC::Runtime::ASM::bl(fn_8003D6BC);
/*800280E4 00024EE4*/ PPC::Runtime::ASM::b(.L_800285F4);
RUNTIME_PPC_JUMP_LABEL(.L_800280E8, 0x800280E8) //this is a jump label
/*800280E8 00024EE8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 22, 22);
/*800280EC 00024EEC*/ PPC::Runtime::ASM::beq(.L_8002812C);
/*800280F0 00024EF0*/ PPC::Runtime::ASM::extsb(context->r22, context->r30);
/*800280F4 00024EF4*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r22);
/*800280F8 00024EF8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*800280FC 00024EFC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80028100 00024F00*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80028104 00024F04*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80028108 00024F08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1e);
/*8002810C 00024F0C*/ PPC::Runtime::ASM::ble(.L_8002813C);
/*80028110 00024F10*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*80028114 00024F14*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80028118 00024F18*/ PPC::Runtime::ASM::bl(fn_8000A444);
/*8002811C 00024F1C*/ PPC::Runtime::ASM::li(context->r3, 0x200);
/*80028120 00024F20*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*80028124 00024F24*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80028128 00024F28*/ PPC::Runtime::ASM::b(.L_8002813C);
RUNTIME_PPC_JUMP_LABEL(.L_8002812C, 0x8002812C) //this is a jump label
/*8002812C 00024F2C*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80028130 00024F30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80028134 00024F34*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80028138 00024F38*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8002813C, 0x8002813C) //this is a jump label
/*8002813C 00024F3C*/ PPC::Runtime::ASM::extsb(context->r28, context->r30);
/*80028140 00024F40*/ PPC::Runtime::ASM::add(context->r27, context->r31, context->r28);
/*80028144 00024F44*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r27));
/*80028148 00024F48*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r27));
/*8002814C 00024F4C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80028150 00024F50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80028154 00024F54*/ PPC::Runtime::ASM::beq(.L_800285A0);
/*80028158 00024F58*/ PPC::Runtime::ASM::bge(.L_8002816C);
/*8002815C 00024F5C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80028160 00024F60*/ PPC::Runtime::ASM::beq(.L_800285A0);
/*80028164 00024F64*/ PPC::Runtime::ASM::bge(.L_800283A0);
/*80028168 00024F68*/ PPC::Runtime::ASM::b(.L_800285A0);
RUNTIME_PPC_JUMP_LABEL(.L_8002816C, 0x8002816C) //this is a jump label
/*8002816C 00024F6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80028170 00024F70*/ PPC::Runtime::ASM::bge(.L_800285A0);
/*80028174 00024F74*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80028178 00024F78*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r28, 24);
/*8002817C 00024F7C*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x10a);
/*80028180 00024F80*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80028184 00024F84*/ PPC::Runtime::ASM::add(context->r3, context->r24, context->r28);
/*80028188 00024F88*/ PPC::Runtime::ASM::lbz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*8002818C 00024F8C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r23, context->r0);
/*80028190 00024F90*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 20, 21);
/*80028194 00024F94*/ PPC::Runtime::ASM::beq(.L_800282F8);
/*80028198 00024F98*/ PPC::Runtime::ASM::extsb(context->r23, context->r25);
/*8002819C 00024F9C*/ PPC::Runtime::ASM::add(context->r3, context->r24, context->r23);
/*800281A0 00024FA0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r3));
/*800281A4 00024FA4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*800281A8 00024FA8*/ PPC::Runtime::ASM::bne(.L_800281B4);
/*800281AC 00024FAC*/ PPC::Runtime::ASM::cmpw(context->r23, context->r28);
/*800281B0 00024FB0*/ PPC::Runtime::ASM::beq(.L_800281C0);
RUNTIME_PPC_JUMP_LABEL(.L_800281B4, 0x800281B4) //this is a jump label
/*800281B4 00024FB4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800281B8 00024FB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800281BC 00024FBC*/ PPC::Runtime::ASM::bne(.L_800282EC);
RUNTIME_PPC_JUMP_LABEL(.L_800281C0, 0x800281C0) //this is a jump label
/*800281C0 00024FC0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800281C4 00024FC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800281C8 00024FC8*/ PPC::Runtime::ASM::bne(.L_800281D4);
/*800281CC 00024FCC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800281D0 00024FD0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_800281D4, 0x800281D4) //this is a jump label
/*800281D4 00024FD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 21, 21);
/*800281D8 00024FD8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800281DC 00024FDC*/ PPC::Runtime::ASM::beq(.L_800281F0);
/*800281E0 00024FE0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800281E4 00024FE4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800281E8 00024FE8*/ PPC::Runtime::ASM::bl(fn_CSS_airRide_colorChanger);
/*800281EC 00024FEC*/ PPC::Runtime::ASM::b(.L_80028204);
RUNTIME_PPC_JUMP_LABEL(.L_800281F0, 0x800281F0) //this is a jump label
/*800281F0 00024FF0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 20, 20);
/*800281F4 00024FF4*/ PPC::Runtime::ASM::beq(.L_80028204);
/*800281F8 00024FF8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800281FC 00024FFC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80028200 00025000*/ PPC::Runtime::ASM::bl(fn_CSS_airRide_colorChanger);
RUNTIME_PPC_JUMP_LABEL(.L_80028204, 0x80028204) //this is a jump label
/*80028204 00025004*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80028208 00025008*/ PPC::Runtime::ASM::beq(.L_800282E4);
/*8002820C 0002500C*/ PPC::Runtime::ASM::bl(fn_CSS_playSoundFX);
/*80028210 00025010*/ PPC::Runtime::ASM::add(context->r24, context->r24, context->r23);
/*80028214 00025014*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r24));
/*80028218 00025018*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r24));
/*8002821C 0002501C*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80028220 00025020*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80028224 00025024*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028228 00025028*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*8002822C 0002502C*/ PPC::Runtime::ASM::bl(fn_80133E48);
/*80028230 00025030*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r24));
/*80028234 00025034*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80028238 00025038*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r23);
/*8002823C 0002503C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x157, context->r3));
/*80028240 00025040*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80028244 00025044*/ PPC::Runtime::ASM::bne(.L_8002827C);
/*80028248 00025048*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8002824C 0002504C*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80028250 00025050*/ PPC::Runtime::ASM::bl(fn_80133F08);
/*80028254 00025054*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028258 00025058*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*8002825C 0002505C*/ PPC::Runtime::ASM::bl(fn_80134500);
/*80028260 00025060*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028264 00025064*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*80028268 00025068*/ PPC::Runtime::ASM::bl(fn_801340C8);
/*8002826C 0002506C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028270 00025070*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80028274 00025074*/ PPC::Runtime::ASM::bl(fn_80134328);
/*80028278 00025078*/ PPC::Runtime::ASM::b(.L_800282F0);
RUNTIME_PPC_JUMP_LABEL(.L_8002827C, 0x8002827C) //this is a jump label
/*8002827C 0002507C*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80028280 00025080*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80028284 00025084*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80028288 00025088*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8002828C 0002508C*/ PPC::Runtime::ASM::bl(fn_80133F08);
/*80028290 00025090*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80028294 00025094*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80028298 00025098*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8002829C 0002509C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800282A0 000250A0*/ PPC::Runtime::ASM::bl(fn_80134500);
/*800282A4 000250A4*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800282A8 000250A8*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800282AC 000250AC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800282B0 000250B0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800282B4 000250B4*/ PPC::Runtime::ASM::bl(fn_801340C8);
/*800282B8 000250B8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800282BC 000250BC*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800282C0 000250C0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800282C4 000250C4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800282C8 000250C8*/ PPC::Runtime::ASM::bl(fn_80134328);
/*800282CC 000250CC*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800282D0 000250D0*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800282D4 000250D4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800282D8 000250D8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800282DC 000250DC*/ PPC::Runtime::ASM::bl(fn_80133FC8);
/*800282E0 000250E0*/ PPC::Runtime::ASM::b(.L_800282F0);
RUNTIME_PPC_JUMP_LABEL(.L_800282E4, 0x800282E4) //this is a jump label
/*800282E4 000250E4*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
/*800282E8 000250E8*/ PPC::Runtime::ASM::b(.L_800282F0);
RUNTIME_PPC_JUMP_LABEL(.L_800282EC, 0x800282EC) //this is a jump label
/*800282EC 000250EC*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
RUNTIME_PPC_JUMP_LABEL(.L_800282F0, 0x800282F0) //this is a jump label
/*800282F0 000250F0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800282F4 000250F4*/ PPC::Runtime::ASM::b(.L_800282FC);
RUNTIME_PPC_JUMP_LABEL(.L_800282F8, 0x800282F8) //this is a jump label
/*800282F8 000250F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800282FC, 0x800282FC) //this is a jump label
/*800282FC 000250FC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80028300 00025100*/ PPC::Runtime::ASM::bne(.L_800285A0);
/*80028304 00025104*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r26, 0, 22, 22);
/*80028308 00025108*/ PPC::Runtime::ASM::beq(.L_800285A0);
/*8002830C 0002510C*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*80028310 00025110*/ PPC::Runtime::ASM::extsb(context->r23, context->r29);
/*80028314 00025114*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80028318 00025118*/ PPC::Runtime::ASM::add(context->r22, context->r31, context->r23);
/*8002831C 0002511C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80028320 00025120*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r22));
/*80028324 00025124*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80028328 00025128*/ PPC::Runtime::ASM::add(context->r5, context->r31, context->r0);
/*8002832C 0002512C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r5));
/*80028330 00025130*/ PPC::Runtime::ASM::bl(fn_80134388);
/*80028334 00025134*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028338 00025138*/ PPC::Runtime::ASM::bl(fn_801340A8);
/*8002833C 0002513C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r22));
/*80028340 00025140*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028344 00025144*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80028348 00025148*/ PPC::Runtime::ASM::bl(fn_80134110);
/*8002834C 0002514C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028350 00025150*/ PPC::Runtime::ASM::bl(fn_80134198);
/*80028354 00025154*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028358 00025158*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002835C 0002515C*/ PPC::Runtime::ASM::bl(fn_80021EE8);
/*80028360 00025160*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r22));
/*80028364 00025164*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028368 00025168*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8002836C 0002516C*/ PPC::Runtime::ASM::bl(fn_801342E4);
/*80028370 00025170*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80028374 00025174*/ PPC::Runtime::ASM::bl(fn_801344A0);
/*80028378 00025178*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8002837C 0002517C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80028380 00025180*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r22));
/*80028384 00025184*/ PPC::Runtime::ASM::mr(context->r0, context->r23);
/*80028388 00025188*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*8002838C 0002518C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r27));
/*80028390 00025190*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80028394 00025194*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*80028398 00025198*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*8002839C 0002519C*/ PPC::Runtime::ASM::b(.L_800285A0);
RUNTIME_PPC_JUMP_LABEL(.L_800283A0, 0x800283A0) //this is a jump label
/*800283A0 000251A0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800283A4 000251A4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r28, 24);
/*800283A8 000251A8*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x10a);
/*800283AC 000251AC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*800283B0 000251B0*/ PPC::Runtime::ASM::add(context->r3, context->r24, context->r28);
/*800283B4 000251B4*/ PPC::Runtime::ASM::lbz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*800283B8 000251B8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r23, context->r0);
/*800283BC 000251BC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 20, 21);
/*800283C0 000251C0*/ PPC::Runtime::ASM::beq(.L_80028524);
/*800283C4 000251C4*/ PPC::Runtime::ASM::extsb(context->r23, context->r25);
/*800283C8 000251C8*/ PPC::Runtime::ASM::add(context->r3, context->r24, context->r23);
/*800283CC 000251CC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r3));
/*800283D0 000251D0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*800283D4 000251D4*/ PPC::Runtime::ASM::bne(.L_800283E0);
/*800283D8 000251D8*/ PPC::Runtime::ASM::cmpw(context->r23, context->r28);
/*800283DC 000251DC*/ PPC::Runtime::ASM::beq(.L_800283EC);
RUNTIME_PPC_JUMP_LABEL(.L_800283E0, 0x800283E0) //this is a jump label
/*800283E0 000251E0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800283E4 000251E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800283E8 000251E8*/ PPC::Runtime::ASM::bne(.L_80028518);
RUNTIME_PPC_JUMP_LABEL(.L_800283EC, 0x800283EC) //this is a jump label
/*800283EC 000251EC*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800283F0 000251F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800283F4 000251F4*/ PPC::Runtime::ASM::bne(.L_80028400);
/*800283F8 000251F8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800283FC 000251FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_80028400, 0x80028400) //this is a jump label
/*80028400 00025200*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 21, 21);
/*80028404 00025204*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80028408 00025208*/ PPC::Runtime::ASM::beq(.L_8002841C);
/*8002840C 0002520C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028410 00025210*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80028414 00025214*/ PPC::Runtime::ASM::bl(fn_CSS_airRide_colorChanger);
/*80028418 00025218*/ PPC::Runtime::ASM::b(.L_80028430);
RUNTIME_PPC_JUMP_LABEL(.L_8002841C, 0x8002841C) //this is a jump label
/*8002841C 0002521C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 20, 20);
/*80028420 00025220*/ PPC::Runtime::ASM::beq(.L_80028430);
/*80028424 00025224*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028428 00025228*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002842C 0002522C*/ PPC::Runtime::ASM::bl(fn_CSS_airRide_colorChanger);
RUNTIME_PPC_JUMP_LABEL(.L_80028430, 0x80028430) //this is a jump label
/*80028430 00025230*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80028434 00025234*/ PPC::Runtime::ASM::beq(.L_80028510);
/*80028438 00025238*/ PPC::Runtime::ASM::bl(fn_CSS_playSoundFX);
/*8002843C 0002523C*/ PPC::Runtime::ASM::add(context->r24, context->r24, context->r23);
/*80028440 00025240*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r24));
/*80028444 00025244*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r24));
/*80028448 00025248*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*8002844C 0002524C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80028450 00025250*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028454 00025254*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*80028458 00025258*/ PPC::Runtime::ASM::bl(fn_80133E48);
/*8002845C 0002525C*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r24));
/*80028460 00025260*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80028464 00025264*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r23);
/*80028468 00025268*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x157, context->r3));
/*8002846C 0002526C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80028470 00025270*/ PPC::Runtime::ASM::bne(.L_800284A8);
/*80028474 00025274*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028478 00025278*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8002847C 0002527C*/ PPC::Runtime::ASM::bl(fn_80133F08);
/*80028480 00025280*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028484 00025284*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*80028488 00025288*/ PPC::Runtime::ASM::bl(fn_80134500);
/*8002848C 0002528C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028490 00025290*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*80028494 00025294*/ PPC::Runtime::ASM::bl(fn_801340C8);
/*80028498 00025298*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8002849C 0002529C*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*800284A0 000252A0*/ PPC::Runtime::ASM::bl(fn_80134328);
/*800284A4 000252A4*/ PPC::Runtime::ASM::b(.L_8002851C);
RUNTIME_PPC_JUMP_LABEL(.L_800284A8, 0x800284A8) //this is a jump label
/*800284A8 000252A8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800284AC 000252AC*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800284B0 000252B0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800284B4 000252B4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800284B8 000252B8*/ PPC::Runtime::ASM::bl(fn_80133F08);
/*800284BC 000252BC*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800284C0 000252C0*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800284C4 000252C4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800284C8 000252C8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800284CC 000252CC*/ PPC::Runtime::ASM::bl(fn_80134500);
/*800284D0 000252D0*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800284D4 000252D4*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800284D8 000252D8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800284DC 000252DC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800284E0 000252E0*/ PPC::Runtime::ASM::bl(fn_801340C8);
/*800284E4 000252E4*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800284E8 000252E8*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800284EC 000252EC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800284F0 000252F0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800284F4 000252F4*/ PPC::Runtime::ASM::bl(fn_80134328);
/*800284F8 000252F8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800284FC 000252FC*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80028500 00025300*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80028504 00025304*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80028508 00025308*/ PPC::Runtime::ASM::bl(fn_80133FC8);
/*8002850C 0002530C*/ PPC::Runtime::ASM::b(.L_8002851C);
RUNTIME_PPC_JUMP_LABEL(.L_80028510, 0x80028510) //this is a jump label
/*80028510 00025310*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
/*80028514 00025314*/ PPC::Runtime::ASM::b(.L_8002851C);
RUNTIME_PPC_JUMP_LABEL(.L_80028518, 0x80028518) //this is a jump label
/*80028518 00025318*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
RUNTIME_PPC_JUMP_LABEL(.L_8002851C, 0x8002851C) //this is a jump label
/*8002851C 0002531C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80028520 00025320*/ PPC::Runtime::ASM::b(.L_80028528);
RUNTIME_PPC_JUMP_LABEL(.L_80028524, 0x80028524) //this is a jump label
/*80028524 00025324*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80028528, 0x80028528) //this is a jump label
/*80028528 00025328*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002852C 0002532C*/ PPC::Runtime::ASM::bne(.L_800285A0);
/*80028530 00025330*/ PPC::Runtime::ASM::andi.(context->r0, context->r26, 0x1160);
/*80028534 00025334*/ PPC::Runtime::ASM::beq(.L_80028598);
/*80028538 00025338*/ PPC::Runtime::ASM::bl(fn_80061690);
/*8002853C 0002533C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80028540 00025340*/ PPC::Runtime::ASM::bl(fn_80134458);
/*80028544 00025344*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80028548 00025348*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8002854C 0002534C*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*80028550 00025350*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80028554 00025354*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r4));
/*80028558 00025358*/ PPC::Runtime::ASM::bl(fn_801343D8);
/*8002855C 0002535C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028560 00025360*/ PPC::Runtime::ASM::bl(fn_801341B8);
/*80028564 00025364*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028568 00025368*/ PPC::Runtime::ASM::bl(fn_801341D8);
/*8002856C 0002536C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80028570 00025370*/ PPC::Runtime::ASM::bl(fn_80134368);
/*80028574 00025374*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80028578 00025378*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8002857C 0002537C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r27));
/*80028580 00025380*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80028584 00025384*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*80028588 00025388*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*8002858C 0002538C*/ PPC::Runtime::ASM::andc(context->r0, context->r3, context->r0);
/*80028590 00025390*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80028594 00025394*/ PPC::Runtime::ASM::b(.L_800285A0);
RUNTIME_PPC_JUMP_LABEL(.L_80028598, 0x80028598) //this is a jump label
/*80028598 00025398*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8002859C 0002539C*/ PPC::Runtime::ASM::bl(fn_80023B68);
RUNTIME_PPC_JUMP_LABEL(.L_800285A0, 0x800285A0) //this is a jump label
/*800285A0 000253A0*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r28);
/*800285A4 000253A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r3));
/*800285A8 000253A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800285AC 000253AC*/ PPC::Runtime::ASM::bne(.L_800285DC);
/*800285B0 000253B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*800285B4 000253B4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800285B8 000253B8*/ PPC::Runtime::ASM::bne(.L_800285F4);
/*800285BC 000253BC*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*800285C0 000253C0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x7);
/*800285C4 000253C4*/ PPC::Runtime::ASM::bl(fn_800615F0);
/*800285C8 000253C8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7a, context->r31));
/*800285CC 000253CC*/ PPC::Runtime::ASM::bl(fn_80134418);
/*800285D0 000253D0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800285D4 000253D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*800285D8 000253D8*/ PPC::Runtime::ASM::b(.L_800285F4);
RUNTIME_PPC_JUMP_LABEL(.L_800285DC, 0x800285DC) //this is a jump label
/*800285DC 000253DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*800285E0 000253E0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800285E4 000253E4*/ PPC::Runtime::ASM::beq(.L_800285F4);
/*800285E8 000253E8*/ PPC::Runtime::ASM::bl(fn_80134438);
/*800285EC 000253EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800285F0 000253F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800285F4, 0x800285F4) //this is a jump label
/*800285F4 000253F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800285F8 000253F8*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*800285FC 000253FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80028600 00025400*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80028604 00025404*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80028608 00025408*/ PPC::Runtime::ASM::blr();
}