//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A5D34.hpp"
#include "fn_802A5D34.hpp"
#include "fn_802AA574.hpp"



void fn_802AA2DC(PPC::Runtime::GCContext* context)
{
/*802AA2DC 002A70DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AA2E0 002A70E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AA2E4 002A70E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA2E8 002A70E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA2EC 002A70EC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AA2F0 002A70F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AA2F4 002A70F4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AA2F8 002A70F8*/ PPC::Runtime::ASM::beq(.L_802AA558);
/*802AA2FC 002A70FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C1570 @ Get_MemoryOffset_HighBit);
/*802AA300 002A7100*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x568);
/*802AA304 002A7104*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C1570 @ Get_MemoryOffset_LowBit);
/*802AA308 002A7108*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AA30C 002A710C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AA310 002A7110*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA314 002A7114*/ PPC::Runtime::ASM::beq(.L_802AA338);
/*802AA318 002A7118*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x568, context->r30));
/*802AA31C 002A711C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802AA320 002A7120*/ PPC::Runtime::ASM::beq(.L_802AA338);
/*802AA324 002A7124*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802AA328 002A7128*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802AA32C 002A712C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802AA330 002A7130*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA334 002A7134*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA338, 0x802AA338) //this is a jump label
/*802AA338 002A7138*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x564);
/*802AA33C 002A713C*/ PPC::Runtime::ASM::beq(.L_802AA360);
/*802AA340 002A7140*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x564, context->r30));
/*802AA344 002A7144*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802AA348 002A7148*/ PPC::Runtime::ASM::beq(.L_802AA360);
/*802AA34C 002A714C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802AA350 002A7150*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802AA354 002A7154*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802AA358 002A7158*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA35C 002A715C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA360, 0x802AA360) //this is a jump label
/*802AA360 002A7160*/ PPC::Runtime::ASM::lis(context->r4, fn_802A5D34 @ Get_MemoryOffset_HighBit);
/*802AA364 002A7164*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x554);
/*802AA368 002A7168*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802A5D34 @ Get_MemoryOffset_LowBit);
/*802AA36C 002A716C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802AA370 002A7170*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802AA374 002A7174*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802AA378 002A7178*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x504);
/*802AA37C 002A717C*/ PPC::Runtime::ASM::beq(.L_802AA46C);
/*802AA380 002A7180*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC4A4 @ Get_MemoryOffset_HighBit);
/*802AA384 002A7184*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x548);
/*802AA388 002A7188*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BC4A4 @ Get_MemoryOffset_LowBit);
/*802AA38C 002A718C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r30));
/*802AA390 002A7190*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802AA394 002A7194*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x548, context->r30));
/*802AA398 002A7198*/ PPC::Runtime::ASM::beq(.L_802AA3A8);
/*802AA39C 002A719C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802AA3A0 002A71A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802AA3A4 002A71A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x548, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA3A8, 0x802AA3A8) //this is a jump label
/*802AA3A8 002A71A8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x504);
/*802AA3AC 002A71AC*/ PPC::Runtime::ASM::beq(.L_802AA46C);
/*802AA3B0 002A71B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802AA3B4 002A71B4*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x534);
/*802AA3B8 002A71B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802AA3BC 002A71BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r30));
/*802AA3C0 002A71C0*/ PPC::Runtime::ASM::beq(.L_802AA3F4);
/*802AA3C4 002A71C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802AA3C8 002A71C8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AA3CC 002A71CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802AA3D0 002A71D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x534, context->r30));
/*802AA3D4 002A71D4*/ PPC::Runtime::ASM::beq(.L_802AA3F4);
/*802AA3D8 002A71D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802AA3DC 002A71DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802AA3E0 002A71E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x534, context->r30));
/*802AA3E4 002A71E4*/ PPC::Runtime::ASM::beq(.L_802AA3F4);
/*802AA3E8 002A71E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802AA3EC 002A71EC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802AA3F0 002A71F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x534, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA3F4, 0x802AA3F4) //this is a jump label
/*802AA3F4 002A71F4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x504);
/*802AA3F8 002A71F8*/ PPC::Runtime::ASM::beq(.L_802AA46C);
/*802AA3FC 002A71FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AA400 002A7200*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x52c);
/*802AA404 002A7204*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AA408 002A7208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r30));
/*802AA40C 002A720C*/ PPC::Runtime::ASM::beq(.L_802AA430);
/*802AA410 002A7210*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AA414 002A7214*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AA418 002A7218*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AA41C 002A721C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52c, context->r30));
/*802AA420 002A7220*/ PPC::Runtime::ASM::beq(.L_802AA430);
/*802AA424 002A7224*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AA428 002A7228*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AA42C 002A722C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA430, 0x802AA430) //this is a jump label
/*802AA430 002A7230*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x504);
/*802AA434 002A7234*/ PPC::Runtime::ASM::beq(.L_802AA46C);
/*802AA438 002A7238*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AA43C 002A723C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x504);
/*802AA440 002A7240*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AA444 002A7244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r30));
/*802AA448 002A7248*/ PPC::Runtime::ASM::beq(.L_802AA46C);
/*802AA44C 002A724C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AA450 002A7250*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x504);
/*802AA454 002A7254*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AA458 002A7258*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r30));
/*802AA45C 002A725C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r30));
/*802AA460 002A7260*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AA464 002A7264*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA468 002A7268*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA46C, 0x802AA46C) //this is a jump label
/*802AA46C 002A726C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*802AA470 002A7270*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802AA474 002A7274*/ PPC::Runtime::ASM::bl(fn_802AA574);
/*802AA478 002A7278*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AA47C 002A727C*/ PPC::Runtime::ASM::beq(.L_802AA548);
/*802AA480 002A7280*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802AA484 002A7284*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802AA488 002A7288*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802AA48C 002A728C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AA490 002A7290*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AA494 002A7294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA498 002A7298*/ PPC::Runtime::ASM::beq(.L_802AA4BC);
/*802AA49C 002A729C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AA4A0 002A72A0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802AA4A4 002A72A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AA4A8 002A72A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802AA4AC 002A72AC*/ PPC::Runtime::ASM::beq(.L_802AA4BC);
/*802AA4B0 002A72B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AA4B4 002A72B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AA4B8 002A72B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA4BC, 0x802AA4BC) //this is a jump label
/*802AA4BC 002A72BC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AA4C0 002A72C0*/ PPC::Runtime::ASM::beq(.L_802AA534);
/*802AA4C4 002A72C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AA4C8 002A72C8*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802AA4CC 002A72CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AA4D0 002A72D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA4D4 002A72D4*/ PPC::Runtime::ASM::beq(.L_802AA4F8);
/*802AA4D8 002A72D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AA4DC 002A72DC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AA4E0 002A72E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AA4E4 002A72E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802AA4E8 002A72E8*/ PPC::Runtime::ASM::beq(.L_802AA4F8);
/*802AA4EC 002A72EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AA4F0 002A72F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AA4F4 002A72F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA4F8, 0x802AA4F8) //this is a jump label
/*802AA4F8 002A72F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AA4FC 002A72FC*/ PPC::Runtime::ASM::beq(.L_802AA534);
/*802AA500 002A7300*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AA504 002A7304*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AA508 002A7308*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AA50C 002A730C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA510 002A7310*/ PPC::Runtime::ASM::beq(.L_802AA534);
/*802AA514 002A7314*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AA518 002A7318*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802AA51C 002A731C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AA520 002A7320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA524 002A7324*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA528 002A7328*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AA52C 002A732C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA530 002A7330*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA534, 0x802AA534) //this is a jump label
/*802AA534 002A7334*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AA538 002A7338*/ PPC::Runtime::ASM::beq(.L_802AA548);
/*802AA53C 002A733C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802AA540 002A7340*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802AA544 002A7344*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA548, 0x802AA548) //this is a jump label
/*802AA548 002A7348*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AA54C 002A734C*/ PPC::Runtime::ASM::ble(.L_802AA558);
/*802AA550 002A7350*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA554 002A7354*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AA558, 0x802AA558) //this is a jump label
/*802AA558 002A7358*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA55C 002A735C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA560 002A7360*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA564 002A7364*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AA568 002A7368*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AA56C 002A736C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AA570 002A7370*/ PPC::Runtime::ASM::blr();
}