//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000A4EC.hpp"
#include "fn_8000A4EC.hpp"
#include "fn_8000A570.hpp"
#include "fn_8000A5C4.hpp"
#include "fn_8000A498.hpp"
#include "fn_800064F0.hpp"
#include "fn_8000A498.hpp"
#include "fn_800064F0.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80136864.hpp"
#include "fn_80136D24.hpp"
#include "fn_80137204.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80136960.hpp"
#include "fn_80136E48.hpp"
#include "fn_80137370.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80136A20.hpp"
#include "fn_80136940.hpp"
#include "fn_80136F08.hpp"
#include "fn_80136E28.hpp"
#include "fn_80137450.hpp"
#include "fn_80137350.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80136A00.hpp"
#include "fn_80136980.hpp"
#include "fn_80136EE8.hpp"
#include "fn_80136E68.hpp"
#include "fn_80137430.hpp"
#include "fn_80137390.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80136A00.hpp"
#include "fn_80136980.hpp"
#include "fn_80136EE8.hpp"
#include "fn_80136E68.hpp"
#include "fn_80137430.hpp"
#include "fn_80137390.hpp"



void fn_800425F0(PPC::Runtime::GCContext* context)
{
/*800425F0 0003F3F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800425F4 0003F3F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800425F8 0003F3F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800425FC 0003F3FC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80042600 0003F400*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80042604 0003F404*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80042608 0003F408*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b5, context->r3));
/*8004260C 0003F40C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x25c);
/*80042610 0003F410*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042614 0003F414*/ PPC::Runtime::ASM::bne(.L_8004262C);
/*80042618 0003F418*/ PPC::Runtime::ASM::li(context->r3, 0x19);
/*8004261C 0003F41C*/ PPC::Runtime::ASM::bl(fn_8000A4EC);
/*80042620 0003F420*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80042624 0003F424*/ PPC::Runtime::ASM::bne(.L_8004263C);
/*80042628 0003F428*/ PPC::Runtime::ASM::b(.L_800429C4);
RUNTIME_PPC_JUMP_LABEL(.L_8004262C, 0x8004262C) //this is a jump label
/*8004262C 0003F42C*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80042630 0003F430*/ PPC::Runtime::ASM::bl(fn_8000A4EC);
/*80042634 0003F434*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80042638 0003F438*/ PPC::Runtime::ASM::beq(.L_800429C4);
RUNTIME_PPC_JUMP_LABEL(.L_8004263C, 0x8004263C) //this is a jump label
/*8004263C 0003F43C*/ PPC::Runtime::ASM::bl(fn_8000A570);
/*80042640 0003F440*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*80042644 0003F444*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80042648 0003F448*/ PPC::Runtime::ASM::beq(.L_80042668);
/*8004264C 0003F44C*/ PPC::Runtime::ASM::bl(fn_8000A5C4);
/*80042650 0003F450*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80042654 0003F454*/ PPC::Runtime::ASM::bne(.L_800429C4);
/*80042658 0003F458*/ PPC::Runtime::ASM::li(context->r3, 0x1000);
/*8004265C 0003F45C*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*80042660 0003F460*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80042664 0003F464*/ PPC::Runtime::ASM::b(.L_800429C4);
RUNTIME_PPC_JUMP_LABEL(.L_80042668, 0x80042668) //this is a jump label
/*80042668 0003F468*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*8004266C 0003F46C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80042670 0003F470*/ PPC::Runtime::ASM::ble(.L_80042694);
/*80042674 0003F474*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80042678 0003F478*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004267C 0003F47C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80042680 0003F480*/ PPC::Runtime::ASM::bgt(.L_800429C4);
/*80042684 0003F484*/ PPC::Runtime::ASM::li(context->r3, 0x1000);
/*80042688 0003F488*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*8004268C 0003F48C*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80042690 0003F490*/ PPC::Runtime::ASM::b(.L_800429C4);
RUNTIME_PPC_JUMP_LABEL(.L_80042694, 0x80042694) //this is a jump label
/*80042694 0003F494*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80042698 0003F498*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8004269C, 0x8004269C) //this is a jump label
/*8004269C 0003F49C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800426A0 0003F4A0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*800426A4 0003F4A4*/ PPC::Runtime::ASM::slw(context->r6, context->r0, context->r29);
/*800426A8 0003F4A8*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r6);
/*800426AC 0003F4AC*/ PPC::Runtime::ASM::beq(.L_800428DC);
/*800426B0 0003F4B0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*800426B4 0003F4B4*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800426B8 0003F4B8*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0x44);
/*800426BC 0003F4BC*/ PPC::Runtime::ASM::lis(context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*800426C0 0003F4C0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800426C4 0003F4C4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*800426C8 0003F4C8*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r5);
/*800426CC 0003F4CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800426D0 0003F4D0*/ PPC::Runtime::ASM::ble(.L_800427A0);
/*800426D4 0003F4D4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*800426D8 0003F4D8*/ PPC::Runtime::ASM::andi.(context->r0, context->r4, 0x1160);
/*800426DC 0003F4DC*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800426E0 0003F4E0*/ PPC::Runtime::ASM::beq(.L_800428DC);
/*800426E4 0003F4E4*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x4);
/*800426E8 0003F4E8*/ PPC::Runtime::ASM::lbzx(context->r3, context->r31, context->r0);
/*800426EC 0003F4EC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*800426F0 0003F4F0*/ PPC::Runtime::ASM::bne(.L_80042740);
/*800426F4 0003F4F4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800426F8 0003F4F8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800426FC 0003F4FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80042700 0003F500*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80042704 0003F504*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042708 0003F508*/ PPC::Runtime::ASM::bgt(.L_80042714);
/*8004270C 0003F50C*/ PPC::Runtime::ASM::bl(fn_80136864);
/*80042710 0003F510*/ PPC::Runtime::ASM::b(.L_80042728);
RUNTIME_PPC_JUMP_LABEL(.L_80042714, 0x80042714) //this is a jump label
/*80042714 0003F514*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80042718 0003F518*/ PPC::Runtime::ASM::bne(.L_80042724);
/*8004271C 0003F51C*/ PPC::Runtime::ASM::bl(fn_80136D24);
/*80042720 0003F520*/ PPC::Runtime::ASM::b(.L_80042728);
RUNTIME_PPC_JUMP_LABEL(.L_80042724, 0x80042724) //this is a jump label
/*80042724 0003F524*/ PPC::Runtime::ASM::bl(fn_80137204);
RUNTIME_PPC_JUMP_LABEL(.L_80042728, 0x80042728) //this is a jump label
/*80042728 0003F528*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8004272C 0003F52C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x264, context->r28));
/*80042730 0003F530*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x266, context->r28));
/*80042734 0003F534*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r28));
/*80042738 0003F538*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26a, context->r28));
/*8004273C 0003F53C*/ PPC::Runtime::ASM::b(.L_800429C4);
RUNTIME_PPC_JUMP_LABEL(.L_80042740, 0x80042740) //this is a jump label
/*80042740 0003F540*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80042744 0003F544*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042748 0003F548*/ PPC::Runtime::ASM::bne(.L_800428DC);
/*8004274C 0003F54C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80042750 0003F550*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x25c);
/*80042754 0003F554*/ PPC::Runtime::ASM::extsb(context->r28, context->r29);
/*80042758 0003F558*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*8004275C 0003F55C*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x10);
/*80042760 0003F560*/ PPC::Runtime::ASM::lbzx(context->r3, context->r27, context->r0);
/*80042764 0003F564*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80042768 0003F568*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8004276C 0003F56C*/ PPC::Runtime::ASM::bgt(.L_80042778);
/*80042770 0003F570*/ PPC::Runtime::ASM::bl(fn_80136960);
/*80042774 0003F574*/ PPC::Runtime::ASM::b(.L_8004278C);
RUNTIME_PPC_JUMP_LABEL(.L_80042778, 0x80042778) //this is a jump label
/*80042778 0003F578*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8004277C 0003F57C*/ PPC::Runtime::ASM::bne(.L_80042788);
/*80042780 0003F580*/ PPC::Runtime::ASM::bl(fn_80136E48);
/*80042784 0003F584*/ PPC::Runtime::ASM::b(.L_8004278C);
RUNTIME_PPC_JUMP_LABEL(.L_80042788, 0x80042788) //this is a jump label
/*80042788 0003F588*/ PPC::Runtime::ASM::bl(fn_80137370);
RUNTIME_PPC_JUMP_LABEL(.L_8004278C, 0x8004278C) //this is a jump label
/*8004278C 0003F58C*/ PPC::Runtime::ASM::slwi(context->r3, context->r28, 1);
/*80042790 0003F590*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80042794 0003F594*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*80042798 0003F598*/ PPC::Runtime::ASM::sthx(context->r4, context->r27, context->r0);
/*8004279C 0003F59C*/ PPC::Runtime::ASM::b(.L_800428DC);
RUNTIME_PPC_JUMP_LABEL(.L_800427A0, 0x800427A0) //this is a jump label
/*800427A0 0003F5A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*800427A4 0003F5A4*/ PPC::Runtime::ASM::and.(context->r0, context->r0, context->r6);
/*800427A8 0003F5A8*/ PPC::Runtime::ASM::beq(.L_80042844);
/*800427AC 0003F5AC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 22, 22);
/*800427B0 0003F5B0*/ PPC::Runtime::ASM::beq(.L_800428DC);
/*800427B4 0003F5B4*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*800427B8 0003F5B8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800427BC 0003F5BC*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x25c);
/*800427C0 0003F5C0*/ PPC::Runtime::ASM::extsb(context->r28, context->r29);
/*800427C4 0003F5C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*800427C8 0003F5C8*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r28);
/*800427CC 0003F5CC*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r25));
/*800427D0 0003F5D0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800427D4 0003F5D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800427D8 0003F5D8*/ PPC::Runtime::ASM::bgt(.L_800427E8);
/*800427DC 0003F5DC*/ PPC::Runtime::ASM::bl(fn_80136A20);
/*800427E0 0003F5E0*/ PPC::Runtime::ASM::bl(fn_80136940);
/*800427E4 0003F5E4*/ PPC::Runtime::ASM::b(.L_80042814);
RUNTIME_PPC_JUMP_LABEL(.L_800427E8, 0x800427E8) //this is a jump label
/*800427E8 0003F5E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800427EC 0003F5EC*/ PPC::Runtime::ASM::bne(.L_80042804);
/*800427F0 0003F5F0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800427F4 0003F5F4*/ PPC::Runtime::ASM::bl(fn_80136F08);
/*800427F8 0003F5F8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800427FC 0003F5FC*/ PPC::Runtime::ASM::bl(fn_80136E28);
/*80042800 0003F600*/ PPC::Runtime::ASM::b(.L_80042814);
RUNTIME_PPC_JUMP_LABEL(.L_80042804, 0x80042804) //this is a jump label
/*80042804 0003F604*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80042808 0003F608*/ PPC::Runtime::ASM::bl(fn_80137450);
/*8004280C 0003F60C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80042810 0003F610*/ PPC::Runtime::ASM::bl(fn_80137350);
RUNTIME_PPC_JUMP_LABEL(.L_80042814, 0x80042814) //this is a jump label
/*80042814 0003F614*/ PPC::Runtime::ASM::slwi(context->r3, context->r28, 1);
/*80042818 0003F618*/ PPC::Runtime::ASM::li(context->r4, 0x32);
/*8004281C 0003F61C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80042820 0003F620*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80042824 0003F624*/ PPC::Runtime::ASM::sthx(context->r4, context->r26, context->r3);
/*80042828 0003F628*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004282C 0003F62C*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*80042830 0003F630*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*80042834 0003F634*/ PPC::Runtime::ASM::andc(context->r0, context->r4, context->r0);
/*80042838 0003F638*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*8004283C 0003F63C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*80042840 0003F640*/ PPC::Runtime::ASM::b(.L_800428DC);
RUNTIME_PPC_JUMP_LABEL(.L_80042844, 0x80042844) //this is a jump label
/*80042844 0003F644*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 19, 19);
/*80042848 0003F648*/ PPC::Runtime::ASM::beq(.L_800428DC);
/*8004284C 0003F64C*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*80042850 0003F650*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80042854 0003F654*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x25c);
/*80042858 0003F658*/ PPC::Runtime::ASM::extsb(context->r28, context->r29);
/*8004285C 0003F65C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80042860 0003F660*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r28);
/*80042864 0003F664*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r25));
/*80042868 0003F668*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8004286C 0003F66C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042870 0003F670*/ PPC::Runtime::ASM::bgt(.L_80042880);
/*80042874 0003F674*/ PPC::Runtime::ASM::bl(fn_80136A00);
/*80042878 0003F678*/ PPC::Runtime::ASM::bl(fn_80136980);
/*8004287C 0003F67C*/ PPC::Runtime::ASM::b(.L_800428AC);
RUNTIME_PPC_JUMP_LABEL(.L_80042880, 0x80042880) //this is a jump label
/*80042880 0003F680*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80042884 0003F684*/ PPC::Runtime::ASM::bne(.L_8004289C);
/*80042888 0003F688*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8004288C 0003F68C*/ PPC::Runtime::ASM::bl(fn_80136EE8);
/*80042890 0003F690*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80042894 0003F694*/ PPC::Runtime::ASM::bl(fn_80136E68);
/*80042898 0003F698*/ PPC::Runtime::ASM::b(.L_800428AC);
RUNTIME_PPC_JUMP_LABEL(.L_8004289C, 0x8004289C) //this is a jump label
/*8004289C 0003F69C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800428A0 0003F6A0*/ PPC::Runtime::ASM::bl(fn_80137430);
/*800428A4 0003F6A4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800428A8 0003F6A8*/ PPC::Runtime::ASM::bl(fn_80137390);
RUNTIME_PPC_JUMP_LABEL(.L_800428AC, 0x800428AC) //this is a jump label
/*800428AC 0003F6AC*/ PPC::Runtime::ASM::slwi(context->r3, context->r28, 1);
/*800428B0 0003F6B0*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*800428B4 0003F6B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*800428B8 0003F6B8*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*800428BC 0003F6BC*/ PPC::Runtime::ASM::sthx(context->r4, context->r26, context->r3);
/*800428C0 0003F6C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800428C4 0003F6C4*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r0);
/*800428C8 0003F6C8*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800428CC 0003F6CC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*800428D0 0003F6D0*/ PPC::Runtime::ASM::or(context->r3, context->r4, context->r3);
/*800428D4 0003F6D4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*800428D8 0003F6D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_800428DC, 0x800428DC) //this is a jump label
/*800428DC 0003F6DC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*800428E0 0003F6E0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x2);
/*800428E4 0003F6E4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*800428E8 0003F6E8*/ PPC::Runtime::ASM::blt(.L_8004269C);
/*800428EC 0003F6EC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*800428F0 0003F6F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*800428F4 0003F6F4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*800428F8 0003F6F8*/ PPC::Runtime::ASM::bne(.L_800429C4);
/*800428FC 0003F6FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80042900 0003F700*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80042904 0003F704*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80042908 0003F708*/ PPC::Runtime::ASM::blt(.L_800429BC);
/*8004290C 0003F70C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80042910, 0x80042910) //this is a jump label
/*80042910 0003F710*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x14);
/*80042914 0003F714*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r0);
/*80042918 0003F718*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8004291C 0003F71C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042920 0003F720*/ PPC::Runtime::ASM::bne(.L_800429B0);
/*80042924 0003F724*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80042928 0003F728*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x25c);
/*8004292C 0003F72C*/ PPC::Runtime::ASM::extsb(context->r29, context->r30);
/*80042930 0003F730*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80042934 0003F734*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r29);
/*80042938 0003F738*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r25));
/*8004293C 0003F73C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80042940 0003F740*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80042944 0003F744*/ PPC::Runtime::ASM::bgt(.L_80042954);
/*80042948 0003F748*/ PPC::Runtime::ASM::bl(fn_80136A00);
/*8004294C 0003F74C*/ PPC::Runtime::ASM::bl(fn_80136980);
/*80042950 0003F750*/ PPC::Runtime::ASM::b(.L_80042980);
RUNTIME_PPC_JUMP_LABEL(.L_80042954, 0x80042954) //this is a jump label
/*80042954 0003F754*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80042958 0003F758*/ PPC::Runtime::ASM::bne(.L_80042970);
/*8004295C 0003F75C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80042960 0003F760*/ PPC::Runtime::ASM::bl(fn_80136EE8);
/*80042964 0003F764*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80042968 0003F768*/ PPC::Runtime::ASM::bl(fn_80136E68);
/*8004296C 0003F76C*/ PPC::Runtime::ASM::b(.L_80042980);
RUNTIME_PPC_JUMP_LABEL(.L_80042970, 0x80042970) //this is a jump label
/*80042970 0003F770*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80042974 0003F774*/ PPC::Runtime::ASM::bl(fn_80137430);
/*80042978 0003F778*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8004297C 0003F77C*/ PPC::Runtime::ASM::bl(fn_80137390);
RUNTIME_PPC_JUMP_LABEL(.L_80042980, 0x80042980) //this is a jump label
/*80042980 0003F780*/ PPC::Runtime::ASM::slwi(context->r3, context->r29, 1);
/*80042984 0003F784*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*80042988 0003F788*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*8004298C 0003F78C*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80042990 0003F790*/ PPC::Runtime::ASM::sthx(context->r4, context->r26, context->r3);
/*80042994 0003F794*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80042998 0003F798*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r0);
/*8004299C 0003F79C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800429A0 0003F7A0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*800429A4 0003F7A4*/ PPC::Runtime::ASM::or(context->r3, context->r4, context->r3);
/*800429A8 0003F7A8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r26));
/*800429AC 0003F7AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_800429B0, 0x800429B0) //this is a jump label
/*800429B0 0003F7B0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*800429B4 0003F7B4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*800429B8 0003F7B8*/ PPC::Runtime::ASM::blt(.L_80042910);
RUNTIME_PPC_JUMP_LABEL(.L_800429BC, 0x800429BC) //this is a jump label
/*800429BC 0003F7BC*/ PPC::Runtime::ASM::li(context->r0, 0x14);
/*800429C0 0003F7C0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800429C4, 0x800429C4) //this is a jump label
/*800429C4 0003F7C4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800429C8 0003F7C8*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800429CC 0003F7CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800429D0 0003F7D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800429D4 0003F7D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800429D8 0003F7D8*/ PPC::Runtime::ASM::blr();
}