//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_loadMainMenuMusic.hpp"
#include "fn_80061620.hpp"
#include "fn_80061620.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_menuGetNextMenuID.hpp"
#include "fn_8003D5B8.hpp"
#include "fn_8003D614.hpp"
#include "fn_800064F0.hpp"
#include "fn_80008220.hpp"
#include "fn_8001A604.hpp"
#include "fn_800088C8.hpp"
#include "fn_800064F0.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_80072AA0.hpp"
#include "fn_80072A68.hpp"
#include "fn_8023295C.hpp"
#include "fn_80277748.hpp"



void fn_80050514(PPC::Runtime::GCContext* context)
{
/*80050514 0004D314*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80050518 0004D318*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005051C 0004D31C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*80050520 0004D320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80050524 0004D324*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80050528 0004D328*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*8005052C 0004D32C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80050530 0004D330*/ PPC::Runtime::ASM::bl(fn_loadMainMenuMusic);
/*80050534 0004D334*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80050538 0004D338*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8005053C 0004D33C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x14);
/*80050540 0004D340*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80050544 0004D344*/ PPC::Runtime::ASM::bge(.L_800505FC);
/*80050548 0004D348*/ PPC::Runtime::ASM::lis(context->r6, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8005054C 0004D34C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80050550 0004D350*/ PPC::Runtime::ASM::addi(context->r11, context->r6, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*80050554 0004D354*/ PPC::Runtime::ASM::mtctr(context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80050558, 0x80050558) //this is a jump label
/*80050558 0004D358*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r3, 24);
/*8005055C 0004D35C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x1);
/*80050560 0004D360*/ PPC::Runtime::ASM::mulli(context->r9, context->r5, 0x44);
/*80050564 0004D364*/ PPC::Runtime::ASM::clrlwi(context->r8, context->r6, 24);
/*80050568 0004D368*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x2);
/*8005056C 0004D36C*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r9);
/*80050570 0004D370*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x3);
/*80050574 0004D374*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r10));
/*80050578 0004D378*/ PPC::Runtime::ASM::mulli(context->r8, context->r8, 0x44);
/*8005057C 0004D37C*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r5, 24);
/*80050580 0004D380*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r10));
/*80050584 0004D384*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r9);
/*80050588 0004D388*/ PPC::Runtime::ASM::add(context->r9, context->r11, context->r8);
/*8005058C 0004D38C*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x4);
/*80050590 0004D390*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*80050594 0004D394*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r6, 24);
/*80050598 0004D398*/ PPC::Runtime::ASM::mulli(context->r7, context->r7, 0x44);
/*8005059C 0004D39C*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r5, 24);
/*800505A0 0004D3A0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r8);
/*800505A4 0004D3A4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*800505A8 0004D3A8*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r10);
/*800505AC 0004D3AC*/ PPC::Runtime::ASM::add(context->r8, context->r11, context->r7);
/*800505B0 0004D3B0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*800505B4 0004D3B4*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0x44);
/*800505B8 0004D3B8*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*800505BC 0004D3BC*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r9);
/*800505C0 0004D3C0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r7);
/*800505C4 0004D3C4*/ PPC::Runtime::ASM::mulli(context->r6, context->r6, 0x44);
/*800505C8 0004D3C8*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r8);
/*800505CC 0004D3CC*/ PPC::Runtime::ASM::add(context->r5, context->r11, context->r5);
/*800505D0 0004D3D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5);
/*800505D4 0004D3D4*/ PPC::Runtime::ASM::add(context->r7, context->r11, context->r6);
/*800505D8 0004D3D8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800505DC 0004D3DC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800505E0 0004D3E0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r6);
/*800505E4 0004D3E4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800505E8 0004D3E8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800505EC 0004D3EC*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r7);
/*800505F0 0004D3F0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r6);
/*800505F4 0004D3F4*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r5);
/*800505F8 0004D3F8*/ PPC::Runtime::ASM::bdnz(.L_80050558);
RUNTIME_PPC_JUMP_LABEL(.L_800505FC, 0x800505FC) //this is a jump label
/*800505FC 0004D3FC*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80050600 0004D400*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80050604 0004D404*/ PPC::Runtime::ASM::and.(context->r3, context->r4, context->r3);
/*80050608 0004D408*/ PPC::Runtime::ASM::beq(.L_80050634);
/*8005060C 0004D40C*/ PPC::Runtime::ASM::bl(fn_80061620);
/*80050610 0004D410*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80050614 0004D414*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80050618 0004D418*/ PPC::Runtime::ASM::bne(.L_80050628);
/*8005061C 0004D41C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80050620 0004D420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80050624 0004D424*/ PPC::Runtime::ASM::b(.L_800507D4);
RUNTIME_PPC_JUMP_LABEL(.L_80050628, 0x80050628) //this is a jump label
/*80050628 0004D428*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8005062C 0004D42C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80050630 0004D430*/ PPC::Runtime::ASM::b(.L_800507D4);
RUNTIME_PPC_JUMP_LABEL(.L_80050634, 0x80050634) //this is a jump label
/*80050634 0004D434*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*80050638 0004D438*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8005063C 0004D43C*/ PPC::Runtime::ASM::and.(context->r3, context->r4, context->r3);
/*80050640 0004D440*/ PPC::Runtime::ASM::beq(.L_8005066C);
/*80050644 0004D444*/ PPC::Runtime::ASM::bl(fn_80061620);
/*80050648 0004D448*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8005064C 0004D44C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80050650 0004D450*/ PPC::Runtime::ASM::bne(.L_80050660);
/*80050654 0004D454*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80050658 0004D458*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8005065C 0004D45C*/ PPC::Runtime::ASM::b(.L_800507D4);
RUNTIME_PPC_JUMP_LABEL(.L_80050660, 0x80050660) //this is a jump label
/*80050660 0004D460*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80050664 0004D464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80050668 0004D468*/ PPC::Runtime::ASM::b(.L_800507D4);
RUNTIME_PPC_JUMP_LABEL(.L_8005066C, 0x8005066C) //this is a jump label
/*8005066C 0004D46C*/ PPC::Runtime::ASM::andi.(context->r3, context->r0, 0x1160);
/*80050670 0004D470*/ PPC::Runtime::ASM::beq(.L_800507A8);
/*80050674 0004D474*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*80050678 0004D478*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8005067C 0004D47C*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80050680 0004D480*/ PPC::Runtime::ASM::addi(context->r4, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*80050684 0004D484*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80050688 0004D488*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8005068C 0004D48C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80050690, 0x80050690) //this is a jump label
/*80050690 0004D490*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 24);
/*80050694 0004D494*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80050698 0004D498*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8005069C 0004D49C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800506A0 0004D4A0*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x1160);
/*800506A4 0004D4A4*/ PPC::Runtime::ASM::beq(.L_800506AC);
/*800506A8 0004D4A8*/ PPC::Runtime::ASM::extsb(context->r30, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_800506AC, 0x800506AC) //this is a jump label
/*800506AC 0004D4AC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*800506B0 0004D4B0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 24);
/*800506B4 0004D4B4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*800506B8 0004D4B8*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800506BC 0004D4BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800506C0 0004D4C0*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x1160);
/*800506C4 0004D4C4*/ PPC::Runtime::ASM::beq(.L_800506CC);
/*800506C8 0004D4C8*/ PPC::Runtime::ASM::extsb(context->r30, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_800506CC, 0x800506CC) //this is a jump label
/*800506CC 0004D4CC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*800506D0 0004D4D0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 24);
/*800506D4 0004D4D4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*800506D8 0004D4D8*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800506DC 0004D4DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800506E0 0004D4E0*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x1160);
/*800506E4 0004D4E4*/ PPC::Runtime::ASM::beq(.L_800506EC);
/*800506E8 0004D4E8*/ PPC::Runtime::ASM::extsb(context->r30, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_800506EC, 0x800506EC) //this is a jump label
/*800506EC 0004D4EC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*800506F0 0004D4F0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 24);
/*800506F4 0004D4F4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*800506F8 0004D4F8*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800506FC 0004D4FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80050700 0004D500*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x1160);
/*80050704 0004D504*/ PPC::Runtime::ASM::beq(.L_8005070C);
/*80050708 0004D508*/ PPC::Runtime::ASM::extsb(context->r30, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8005070C, 0x8005070C) //this is a jump label
/*8005070C 0004D50C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80050710 0004D510*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 24);
/*80050714 0004D514*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80050718 0004D518*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8005071C 0004D51C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80050720 0004D520*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x1160);
/*80050724 0004D524*/ PPC::Runtime::ASM::beq(.L_8005072C);
/*80050728 0004D528*/ PPC::Runtime::ASM::extsb(context->r30, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8005072C, 0x8005072C) //this is a jump label
/*8005072C 0004D52C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80050730 0004D530*/ PPC::Runtime::ASM::bdnz(.L_80050690);
/*80050734 0004D534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80050738 0004D538*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8005073C 0004D53C*/ PPC::Runtime::ASM::beq(.L_80050774);
/*80050740 0004D540*/ PPC::Runtime::ASM::bge(.L_80050790);
/*80050744 0004D544*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80050748 0004D548*/ PPC::Runtime::ASM::bge(.L_80050750);
/*8005074C 0004D54C*/ PPC::Runtime::ASM::b(.L_80050790);
RUNTIME_PPC_JUMP_LABEL(.L_80050750, 0x80050750) //this is a jump label
/*80050750 0004D550*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80050754 0004D554*/ PPC::Runtime::ASM::bl(fn_menuGetNextMenuID);
/*80050758 0004D558*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8005075C 0004D55C*/ PPC::Runtime::ASM::bl(fn_8003D5B8);
/*80050760 0004D560*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80050764 0004D564*/ PPC::Runtime::ASM::bl(fn_8003D614);
/*80050768 0004D568*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*8005076C 0004D56C*/ PPC::Runtime::ASM::bl(fn_80008220);
/*80050770 0004D570*/ PPC::Runtime::ASM::b(.L_800507D4);
RUNTIME_PPC_JUMP_LABEL(.L_80050774, 0x80050774) //this is a jump label
/*80050774 0004D574*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80050778 0004D578*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*8005077C 0004D57C*/ PPC::Runtime::ASM::bl(fn_8001A604);
/*80050780 0004D580*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80050784 0004D584*/ PPC::Runtime::ASM::bl(fn_800088C8);
/*80050788 0004D588*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*8005078C 0004D58C*/ PPC::Runtime::ASM::b(.L_800507D4);
RUNTIME_PPC_JUMP_LABEL(.L_80050790, 0x80050790) //this is a jump label
/*80050790 0004D590*/ PPC::Runtime::ASM::lis(context->r3, String_ "gmlanmenu." Get_MemoryOffset_HighBit);
/*80050794 0004D594*/ PPC::Runtime::ASM::li(context->r4, 0x520);
/*80050798 0004D598*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "gmlanmenu." Get_MemoryOffset_LowBit);
/*8005079C 0004D59C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D51E0 @ Get_MemoryOffset_SDA21);
/*800507A0 0004D5A0*/ PPC::Runtime::ASM::bl(fn___assert);
/*800507A4 0004D5A4*/ PPC::Runtime::ASM::b(.L_800507D4);
RUNTIME_PPC_JUMP_LABEL(.L_800507A8, 0x800507A8) //this is a jump label
/*800507A8 0004D5A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 22, 22);
/*800507AC 0004D5AC*/ PPC::Runtime::ASM::beq(.L_800507D4);
/*800507B0 0004D5B0*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*800507B4 0004D5B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*800507B8 0004D5B8*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*800507BC 0004D5BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*800507C0 0004D5C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800507C4 0004D5C4*/ PPC::Runtime::ASM::bl(fn_80072AA0);
/*800507C8 0004D5C8*/ PPC::Runtime::ASM::bl(fn_80072A68);
/*800507CC 0004D5CC*/ PPC::Runtime::ASM::bl(fn_8023295C);
/*800507D0 0004D5D0*/ PPC::Runtime::ASM::bl(fn_80277748);
RUNTIME_PPC_JUMP_LABEL(.L_800507D4, 0x800507D4) //this is a jump label
/*800507D4 0004D5D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800507D8 0004D5D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800507DC 0004D5DC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800507E0 0004D5E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800507E4 0004D5E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800507E8 0004D5E8*/ PPC::Runtime::ASM::blr();
}