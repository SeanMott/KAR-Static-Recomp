//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296890.hpp"
#include "fn_80296884.hpp"
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296890.hpp"
#include "fn_80296884.hpp"
#include "fn_8029685C.hpp"
#include "fn_80296858.hpp"
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296890.hpp"
#include "fn_80296884.hpp"
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296488.hpp"
#include "fn_80296488.hpp"
#include "fn_80296890.hpp"
#include "fn_8029688C.hpp"
#include "fn_80296884.hpp"
#include "fn_80296860.hpp"
#include "fn_80296890.hpp"
#include "fn_80296884.hpp"
#include "fn_8029685C.hpp"
#include "fn_80296858.hpp"



void fn_80296488(PPC::Runtime::GCContext* context)
{
/*80296488 00293288*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8029648C 0029328C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80296490 00293290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80296494 00293294*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80296498 00293298*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8029649C 0029329C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802964A0 002932A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802964A4 002932A4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802964A8 002932A8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802964AC 002932AC*/ PPC::Runtime::ASM::beq(.L_8029666C);
/*802964B0 002932B0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802964B4 002932B4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*802964B8 002932B8*/ PPC::Runtime::ASM::beq(.L_80296580);
/*802964BC 002932BC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802964C0 002932C0*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*802964C4 002932C4*/ PPC::Runtime::ASM::beq(.L_80296510);
/*802964C8 002932C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802964CC 002932CC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802964D0 002932D0*/ PPC::Runtime::ASM::beq(.L_802964D8);
/*802964D4 002932D4*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802964D8, 0x802964D8) //this is a jump label
/*802964D8 002932D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802964DC 002932DC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802964E0 002932E0*/ PPC::Runtime::ASM::beq(.L_802964EC);
/*802964E4 002932E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802964E8 002932E8*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802964EC, 0x802964EC) //this is a jump label
/*802964EC 002932EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802964F0 002932F0*/ PPC::Runtime::ASM::bl(fn_80296890);
/*802964F4 002932F4*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0xc);
/*802964F8 002932F8*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*802964FC 002932FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296500 00293300*/ PPC::Runtime::ASM::bl(fn_80296884);
/*80296504 00293304*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80296508 00293308*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8029650C 0029330C*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_80296510, 0x80296510) //this is a jump label
/*80296510 00293310*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80296514 00293314*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80296518 00293318*/ PPC::Runtime::ASM::beq(.L_80296568);
/*8029651C 0029331C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80296520 00293320*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80296524 00293324*/ PPC::Runtime::ASM::beq(.L_80296530);
/*80296528 00293328*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029652C 0029332C*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_80296530, 0x80296530) //this is a jump label
/*80296530 00293330*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80296534 00293334*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80296538 00293338*/ PPC::Runtime::ASM::beq(.L_80296544);
/*8029653C 0029333C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296540 00293340*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_80296544, 0x80296544) //this is a jump label
/*80296544 00293344*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296548 00293348*/ PPC::Runtime::ASM::bl(fn_80296890);
/*8029654C 0029334C*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0xc);
/*80296550 00293350*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*80296554 00293354*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296558 00293358*/ PPC::Runtime::ASM::bl(fn_80296884);
/*8029655C 0029335C*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80296560 00293360*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80296564 00293364*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_80296568, 0x80296568) //this is a jump label
/*80296568 00293368*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029656C 0029336C*/ PPC::Runtime::ASM::bl(fn_80296890);
/*80296570 00293370*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296574 00293374*/ PPC::Runtime::ASM::bl(fn_80296884);
/*80296578 00293378*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8029657C 0029337C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80296580, 0x80296580) //this is a jump label
/*80296580 00293380*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80296584 00293384*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80296588 00293388*/ PPC::Runtime::ASM::beq(.L_80296654);
/*8029658C 0029338C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80296590 00293390*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80296594 00293394*/ PPC::Runtime::ASM::beq(.L_802965E4);
/*80296598 00293398*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8029659C 0029339C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802965A0 002933A0*/ PPC::Runtime::ASM::beq(.L_802965AC);
/*802965A4 002933A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802965A8 002933A8*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802965AC, 0x802965AC) //this is a jump label
/*802965AC 002933AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802965B0 002933B0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802965B4 002933B4*/ PPC::Runtime::ASM::beq(.L_802965C0);
/*802965B8 002933B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802965BC 002933BC*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802965C0, 0x802965C0) //this is a jump label
/*802965C0 002933C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802965C4 002933C4*/ PPC::Runtime::ASM::bl(fn_80296890);
/*802965C8 002933C8*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0xc);
/*802965CC 002933CC*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*802965D0 002933D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802965D4 002933D4*/ PPC::Runtime::ASM::bl(fn_80296884);
/*802965D8 002933D8*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*802965DC 002933DC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802965E0 002933E0*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_802965E4, 0x802965E4) //this is a jump label
/*802965E4 002933E4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802965E8 002933E8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*802965EC 002933EC*/ PPC::Runtime::ASM::beq(.L_8029663C);
/*802965F0 002933F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802965F4 002933F4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802965F8 002933F8*/ PPC::Runtime::ASM::beq(.L_80296604);
/*802965FC 002933FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296600 00293400*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_80296604, 0x80296604) //this is a jump label
/*80296604 00293404*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80296608 00293408*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8029660C 0029340C*/ PPC::Runtime::ASM::beq(.L_80296618);
/*80296610 00293410*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296614 00293414*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_80296618, 0x80296618) //this is a jump label
/*80296618 00293418*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029661C 0029341C*/ PPC::Runtime::ASM::bl(fn_80296890);
/*80296620 00293420*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0xc);
/*80296624 00293424*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*80296628 00293428*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029662C 0029342C*/ PPC::Runtime::ASM::bl(fn_80296884);
/*80296630 00293430*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80296634 00293434*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80296638 00293438*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_8029663C, 0x8029663C) //this is a jump label
/*8029663C 0029343C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296640 00293440*/ PPC::Runtime::ASM::bl(fn_80296890);
/*80296644 00293444*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296648 00293448*/ PPC::Runtime::ASM::bl(fn_80296884);
/*8029664C 0029344C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80296650 00293450*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80296654, 0x80296654) //this is a jump label
/*80296654 00293454*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296658 00293458*/ PPC::Runtime::ASM::bl(fn_8029685C);
/*8029665C 0029345C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4);
/*80296660 00293460*/ PPC::Runtime::ASM::bl(fn_80296858);
/*80296664 00293464*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80296668 00293468*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8029666C, 0x8029666C) //this is a jump label
/*8029666C 0029346C*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80296670 00293470*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80296674 00293474*/ PPC::Runtime::ASM::beq(.L_80296838);
/*80296678 00293478*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8029667C 0029347C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80296680 00293480*/ PPC::Runtime::ASM::beq(.L_8029674C);
/*80296684 00293484*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80296688 00293488*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8029668C 0029348C*/ PPC::Runtime::ASM::beq(.L_802966DC);
/*80296690 00293490*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80296694 00293494*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80296698 00293498*/ PPC::Runtime::ASM::beq(.L_802966A4);
/*8029669C 0029349C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802966A0 002934A0*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802966A4, 0x802966A4) //this is a jump label
/*802966A4 002934A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802966A8 002934A8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802966AC 002934AC*/ PPC::Runtime::ASM::beq(.L_802966B8);
/*802966B0 002934B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802966B4 002934B4*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802966B8, 0x802966B8) //this is a jump label
/*802966B8 002934B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802966BC 002934BC*/ PPC::Runtime::ASM::bl(fn_80296890);
/*802966C0 002934C0*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*802966C4 002934C4*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*802966C8 002934C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802966CC 002934CC*/ PPC::Runtime::ASM::bl(fn_80296884);
/*802966D0 002934D0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802966D4 002934D4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802966D8 002934D8*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_802966DC, 0x802966DC) //this is a jump label
/*802966DC 002934DC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802966E0 002934E0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802966E4 002934E4*/ PPC::Runtime::ASM::beq(.L_80296734);
/*802966E8 002934E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802966EC 002934EC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802966F0 002934F0*/ PPC::Runtime::ASM::beq(.L_802966FC);
/*802966F4 002934F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802966F8 002934F8*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802966FC, 0x802966FC) //this is a jump label
/*802966FC 002934FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80296700 00293500*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80296704 00293504*/ PPC::Runtime::ASM::beq(.L_80296710);
/*80296708 00293508*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029670C 0029350C*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_80296710, 0x80296710) //this is a jump label
/*80296710 00293510*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296714 00293514*/ PPC::Runtime::ASM::bl(fn_80296890);
/*80296718 00293518*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*8029671C 0029351C*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*80296720 00293520*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296724 00293524*/ PPC::Runtime::ASM::bl(fn_80296884);
/*80296728 00293528*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8029672C 0029352C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80296730 00293530*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_80296734, 0x80296734) //this is a jump label
/*80296734 00293534*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296738 00293538*/ PPC::Runtime::ASM::bl(fn_80296890);
/*8029673C 0029353C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296740 00293540*/ PPC::Runtime::ASM::bl(fn_80296884);
/*80296744 00293544*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80296748 00293548*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8029674C, 0x8029674C) //this is a jump label
/*8029674C 0029354C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80296750 00293550*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80296754 00293554*/ PPC::Runtime::ASM::beq(.L_80296820);
/*80296758 00293558*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8029675C 0029355C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80296760 00293560*/ PPC::Runtime::ASM::beq(.L_802967B0);
/*80296764 00293564*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80296768 00293568*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8029676C 0029356C*/ PPC::Runtime::ASM::beq(.L_80296778);
/*80296770 00293570*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296774 00293574*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_80296778, 0x80296778) //this is a jump label
/*80296778 00293578*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8029677C 0029357C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80296780 00293580*/ PPC::Runtime::ASM::beq(.L_8029678C);
/*80296784 00293584*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296788 00293588*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_8029678C, 0x8029678C) //this is a jump label
/*8029678C 0029358C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296790 00293590*/ PPC::Runtime::ASM::bl(fn_80296890);
/*80296794 00293594*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*80296798 00293598*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*8029679C 0029359C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802967A0 002935A0*/ PPC::Runtime::ASM::bl(fn_80296884);
/*802967A4 002935A4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802967A8 002935A8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802967AC 002935AC*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_802967B0, 0x802967B0) //this is a jump label
/*802967B0 002935B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802967B4 002935B4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802967B8 002935B8*/ PPC::Runtime::ASM::beq(.L_80296808);
/*802967BC 002935BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802967C0 002935C0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802967C4 002935C4*/ PPC::Runtime::ASM::beq(.L_802967D0);
/*802967C8 002935C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802967CC 002935CC*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802967D0, 0x802967D0) //this is a jump label
/*802967D0 002935D0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802967D4 002935D4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802967D8 002935D8*/ PPC::Runtime::ASM::beq(.L_802967E4);
/*802967DC 002935DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802967E0 002935E0*/ PPC::Runtime::ASM::bl(fn_80296488);
RUNTIME_PPC_JUMP_LABEL(.L_802967E4, 0x802967E4) //this is a jump label
/*802967E4 002935E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802967E8 002935E8*/ PPC::Runtime::ASM::bl(fn_80296890);
/*802967EC 002935EC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*802967F0 002935F0*/ PPC::Runtime::ASM::bl(fn_8029688C);
/*802967F4 002935F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802967F8 002935F8*/ PPC::Runtime::ASM::bl(fn_80296884);
/*802967FC 002935FC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80296800 00293600*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80296804 00293604*/ PPC::Runtime::ASM::bl(fn_80296860);
RUNTIME_PPC_JUMP_LABEL(.L_80296808, 0x80296808) //this is a jump label
/*80296808 00293608*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029680C 0029360C*/ PPC::Runtime::ASM::bl(fn_80296890);
/*80296810 00293610*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296814 00293614*/ PPC::Runtime::ASM::bl(fn_80296884);
/*80296818 00293618*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8029681C 0029361C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80296820, 0x80296820) //this is a jump label
/*80296820 00293620*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80296824 00293624*/ PPC::Runtime::ASM::bl(fn_8029685C);
/*80296828 00293628*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4);
/*8029682C 0029362C*/ PPC::Runtime::ASM::bl(fn_80296858);
/*80296830 00293630*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80296834 00293634*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80296838, 0x80296838) //this is a jump label
/*80296838 00293638*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029683C 0029363C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
/*80296840 00293640*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80296844 00293644*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80296848 00293648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8029684C 0029364C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80296850 00293650*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80296854 00293654*/ PPC::Runtime::ASM::blr();
}