//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80242508(PPC::Runtime::GCContext* context)
{
/*80242508 0023F308*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8024250C 0023F30C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80242510 0023F310*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x1c);
/*80242514 0023F314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80242518 0023F318*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 24);
/*8024251C 0023F31C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B56D8 @ Get_MemoryOffset_HighBit);
/*80242520 0023F320*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80242524 0023F324*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80242528 0023F328*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_804B56D8 @ Get_MemoryOffset_LowBit);
/*8024252C 0023F32C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80242530 0023F330*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80242534 0023F334*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80242538 0023F338*/ PPC::Runtime::ASM::add(context->r30, context->r29, context->r4);
/*8024253C 0023F33C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80242540 0023F340*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*80242544 0023F344*/ PPC::Runtime::ASM::bne(.L_80242694);
/*80242548 0023F348*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8024254C 0023F34C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80242550 0023F350*/ PPC::Runtime::ASM::bne(.L_80242564);
/*80242554 0023F354*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80242558 0023F358*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x10);
/*8024255C 0023F35C*/ PPC::Runtime::ASM::li(context->r4, 0x103);
/*80242560 0023F360*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80242564, 0x80242564) //this is a jump label
/*80242564 0023F364*/ PPC::Runtime::ASM::mulli(context->r5, context->r28, 0x2c);
/*80242568 0023F368*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8024256C 0023F36C*/ PPC::Runtime::ASM::b(.L_802425D8);
RUNTIME_PPC_JUMP_LABEL(.L_80242570, 0x80242570) //this is a jump label
/*80242570 0023F370*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80242574 0023F374*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80242578 0023F378*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r5);
/*8024257C 0023F37C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2c);
/*80242580 0023F380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*80242584 0023F384*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r6));
/*80242588 0023F388*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8024258C 0023F38C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80242590 0023F390*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r6));
/*80242594 0023F394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r6));
/*80242598 0023F398*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8024259C 0023F39C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*802425A0 0023F3A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r6));
/*802425A4 0023F3A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r6));
/*802425A8 0023F3A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*802425AC 0023F3AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*802425B0 0023F3B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r6));
/*802425B4 0023F3B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r6));
/*802425B8 0023F3B8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*802425BC 0023F3BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*802425C0 0023F3C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r6));
/*802425C4 0023F3C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*802425C8 0023F3C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*802425CC 0023F3CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*802425D0 0023F3D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*802425D4 0023F3D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_802425D8, 0x802425D8) //this is a jump label
/*802425D8 0023F3D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802425DC 0023F3DC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802425E0 0023F3E0*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*802425E4 0023F3E4*/ PPC::Runtime::ASM::blt(.L_80242570);
/*802425E8 0023F3E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802425EC 0023F3EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802425F0 0023F3F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802425F4 0023F3F4*/ PPC::Runtime::ASM::bne(.L_80242930);
/*802425F8 0023F3F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r29));
/*802425FC 0023F3FC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80242600 0023F400*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80242604 0023F404*/ PPC::Runtime::ASM::mtctr(context->r4);
/*80242608 0023F408*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8024260C 0023F40C*/ PPC::Runtime::ASM::ble(.L_80242628);
RUNTIME_PPC_JUMP_LABEL(.L_80242610, 0x80242610) //this is a jump label
/*80242610 0023F410*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
/*80242614 0023F414*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*80242618 0023F418*/ PPC::Runtime::ASM::beq(.L_80242628);
/*8024261C 0023F41C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80242620 0023F420*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80242624 0023F424*/ PPC::Runtime::ASM::bdnz(.L_80242610);
RUNTIME_PPC_JUMP_LABEL(.L_80242628, 0x80242628) //this is a jump label
/*80242628 0023F428*/ PPC::Runtime::ASM::cmpw(context->r28, context->r4);
/*8024262C 0023F42C*/ PPC::Runtime::ASM::bne(.L_80242640);
/*80242630 0023F430*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80242634 0023F434*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x20);
/*80242638 0023F438*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*8024263C 0023F43C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80242640, 0x80242640) //this is a jump label
/*80242640 0023F440*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*80242644 0023F444*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*80242648 0023F448*/ PPC::Runtime::ASM::b(.L_80242658);
RUNTIME_PPC_JUMP_LABEL(.L_8024264C, 0x8024264C) //this is a jump label
/*8024264C 0023F44C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r3));
/*80242650 0023F450*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80242654 0023F454*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80242658, 0x80242658) //this is a jump label
/*80242658 0023F458*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r29));
/*8024265C 0023F45C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80242660 0023F460*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*80242664 0023F464*/ PPC::Runtime::ASM::blt(.L_8024264C);
/*80242668 0023F468*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8024266C 0023F46C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80242670 0023F470*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*80242674 0023F474*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r3));
/*80242678 0023F478*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r29));
/*8024267C 0023F47C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80242680 0023F480*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r29));
/*80242684 0023F484*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80242688 0023F488*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 30);
/*8024268C 0023F48C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80242690 0023F490*/ PPC::Runtime::ASM::b(.L_80242930);
RUNTIME_PPC_JUMP_LABEL(.L_80242694, 0x80242694) //this is a jump label
/*80242694 0023F494*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*80242698 0023F498*/ PPC::Runtime::ASM::bne(.L_802427E8);
/*8024269C 0023F49C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802426A0 0023F4A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802426A4 0023F4A4*/ PPC::Runtime::ASM::bne(.L_802426B8);
/*802426A8 0023F4A8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*802426AC 0023F4AC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x10);
/*802426B0 0023F4B0*/ PPC::Runtime::ASM::li(context->r4, 0x103);
/*802426B4 0023F4B4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802426B8, 0x802426B8) //this is a jump label
/*802426B8 0023F4B8*/ PPC::Runtime::ASM::mulli(context->r5, context->r28, 0x2c);
/*802426BC 0023F4BC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*802426C0 0023F4C0*/ PPC::Runtime::ASM::b(.L_8024272C);
RUNTIME_PPC_JUMP_LABEL(.L_802426C4, 0x802426C4) //this is a jump label
/*802426C4 0023F4C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802426C8 0023F4C8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802426CC 0023F4CC*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r5);
/*802426D0 0023F4D0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2c);
/*802426D4 0023F4D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*802426D8 0023F4D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r6));
/*802426DC 0023F4DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802426E0 0023F4E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*802426E4 0023F4E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r6));
/*802426E8 0023F4E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r6));
/*802426EC 0023F4EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*802426F0 0023F4F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*802426F4 0023F4F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r6));
/*802426F8 0023F4F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r6));
/*802426FC 0023F4FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*80242700 0023F500*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*80242704 0023F504*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r6));
/*80242708 0023F508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r6));
/*8024270C 0023F50C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80242710 0023F510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80242714 0023F514*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r6));
/*80242718 0023F518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*8024271C 0023F51C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*80242720 0023F520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*80242724 0023F524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*80242728 0023F528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_8024272C, 0x8024272C) //this is a jump label
/*8024272C 0023F52C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80242730 0023F530*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80242734 0023F534*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80242738 0023F538*/ PPC::Runtime::ASM::blt(.L_802426C4);
/*8024273C 0023F53C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80242740 0023F540*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80242744 0023F544*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80242748 0023F548*/ PPC::Runtime::ASM::bne(.L_80242930);
/*8024274C 0023F54C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r29));
/*80242750 0023F550*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80242754 0023F554*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80242758 0023F558*/ PPC::Runtime::ASM::mtctr(context->r4);
/*8024275C 0023F55C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80242760 0023F560*/ PPC::Runtime::ASM::ble(.L_8024277C);
RUNTIME_PPC_JUMP_LABEL(.L_80242764, 0x80242764) //this is a jump label
/*80242764 0023F564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r3));
/*80242768 0023F568*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*8024276C 0023F56C*/ PPC::Runtime::ASM::beq(.L_8024277C);
/*80242770 0023F570*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80242774 0023F574*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80242778 0023F578*/ PPC::Runtime::ASM::bdnz(.L_80242764);
RUNTIME_PPC_JUMP_LABEL(.L_8024277C, 0x8024277C) //this is a jump label
/*8024277C 0023F57C*/ PPC::Runtime::ASM::cmpw(context->r28, context->r4);
/*80242780 0023F580*/ PPC::Runtime::ASM::bne(.L_80242794);
/*80242784 0023F584*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80242788 0023F588*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x20);
/*8024278C 0023F58C*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*80242790 0023F590*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80242794, 0x80242794) //this is a jump label
/*80242794 0023F594*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*80242798 0023F598*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*8024279C 0023F59C*/ PPC::Runtime::ASM::b(.L_802427AC);
RUNTIME_PPC_JUMP_LABEL(.L_802427A0, 0x802427A0) //this is a jump label
/*802427A0 0023F5A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r3));
/*802427A4 0023F5A4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*802427A8 0023F5A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802427AC, 0x802427AC) //this is a jump label
/*802427AC 0023F5AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r29));
/*802427B0 0023F5B0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802427B4 0023F5B4*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*802427B8 0023F5B8*/ PPC::Runtime::ASM::blt(.L_802427A0);
/*802427BC 0023F5BC*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*802427C0 0023F5C0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802427C4 0023F5C4*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*802427C8 0023F5C8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r3));
/*802427CC 0023F5CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r29));
/*802427D0 0023F5D0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802427D4 0023F5D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r29));
/*802427D8 0023F5D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*802427DC 0023F5DC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 31, 29);
/*802427E0 0023F5E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*802427E4 0023F5E4*/ PPC::Runtime::ASM::b(.L_80242930);
RUNTIME_PPC_JUMP_LABEL(.L_802427E8, 0x802427E8) //this is a jump label
/*802427E8 0023F5E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*802427EC 0023F5EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802427F0 0023F5F0*/ PPC::Runtime::ASM::bne(.L_80242804);
/*802427F4 0023F5F4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*802427F8 0023F5F8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x10);
/*802427FC 0023F5FC*/ PPC::Runtime::ASM::li(context->r4, 0x103);
/*80242800 0023F600*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80242804, 0x80242804) //this is a jump label
/*80242804 0023F604*/ PPC::Runtime::ASM::mulli(context->r5, context->r28, 0x2c);
/*80242808 0023F608*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8024280C 0023F60C*/ PPC::Runtime::ASM::b(.L_80242878);
RUNTIME_PPC_JUMP_LABEL(.L_80242810, 0x80242810) //this is a jump label
/*80242810 0023F610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80242814 0023F614*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80242818 0023F618*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r5);
/*8024281C 0023F61C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2c);
/*80242820 0023F620*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*80242824 0023F624*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r6));
/*80242828 0023F628*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8024282C 0023F62C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80242830 0023F630*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r6));
/*80242834 0023F634*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r6));
/*80242838 0023F638*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8024283C 0023F63C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80242840 0023F640*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r6));
/*80242844 0023F644*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r6));
/*80242848 0023F648*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*8024284C 0023F64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*80242850 0023F650*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r6));
/*80242854 0023F654*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r6));
/*80242858 0023F658*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*8024285C 0023F65C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80242860 0023F660*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r6));
/*80242864 0023F664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*80242868 0023F668*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*8024286C 0023F66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*80242870 0023F670*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*80242874 0023F674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_80242878, 0x80242878) //this is a jump label
/*80242878 0023F678*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8024287C 0023F67C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80242880 0023F680*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80242884 0023F684*/ PPC::Runtime::ASM::blt(.L_80242810);
/*80242888 0023F688*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8024288C 0023F68C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80242890 0023F690*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80242894 0023F694*/ PPC::Runtime::ASM::bne(.L_80242930);
/*80242898 0023F698*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r29));
/*8024289C 0023F69C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802428A0 0023F6A0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*802428A4 0023F6A4*/ PPC::Runtime::ASM::mtctr(context->r4);
/*802428A8 0023F6A8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*802428AC 0023F6AC*/ PPC::Runtime::ASM::ble(.L_802428C8);
RUNTIME_PPC_JUMP_LABEL(.L_802428B0, 0x802428B0) //this is a jump label
/*802428B0 0023F6B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r3));
/*802428B4 0023F6B4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*802428B8 0023F6B8*/ PPC::Runtime::ASM::beq(.L_802428C8);
/*802428BC 0023F6BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802428C0 0023F6C0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*802428C4 0023F6C4*/ PPC::Runtime::ASM::bdnz(.L_802428B0);
RUNTIME_PPC_JUMP_LABEL(.L_802428C8, 0x802428C8) //this is a jump label
/*802428C8 0023F6C8*/ PPC::Runtime::ASM::cmpw(context->r28, context->r4);
/*802428CC 0023F6CC*/ PPC::Runtime::ASM::bne(.L_802428E0);
/*802428D0 0023F6D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*802428D4 0023F6D4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x20);
/*802428D8 0023F6D8*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*802428DC 0023F6DC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802428E0, 0x802428E0) //this is a jump label
/*802428E0 0023F6E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*802428E4 0023F6E4*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*802428E8 0023F6E8*/ PPC::Runtime::ASM::b(.L_802428F8);
RUNTIME_PPC_JUMP_LABEL(.L_802428EC, 0x802428EC) //this is a jump label
/*802428EC 0023F6EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r3));
/*802428F0 0023F6F0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*802428F4 0023F6F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802428F8, 0x802428F8) //this is a jump label
/*802428F8 0023F6F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r29));
/*802428FC 0023F6FC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80242900 0023F700*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*80242904 0023F704*/ PPC::Runtime::ASM::blt(.L_802428EC);
/*80242908 0023F708*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8024290C 0023F70C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80242910 0023F710*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*80242914 0023F714*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*80242918 0023F718*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r29));
/*8024291C 0023F71C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80242920 0023F720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r29));
/*80242924 0023F724*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80242928 0023F728*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 30, 28);
/*8024292C 0023F72C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80242930, 0x80242930) //this is a jump label
/*80242930 0023F730*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80242934 0023F734*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242938 0023F738*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8024293C 0023F73C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/* 80242940 0023F740  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80242944 0023F744*/ PPC::Runtime::ASM::beq(.L_80242964);
/*80242948 0023F748*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8024294C 0023F74C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80242950 0023F750*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80242954 0023F754*/ PPC::Runtime::ASM::bge(.L_80242964);
/*80242958 0023F758*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8024295C 0023F75C*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*80242960 0023F760*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80242964, 0x80242964) //this is a jump label
/*80242964 0023F764*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80242968 0023F768*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*8024296C 0023F76C*/ PPC::Runtime::ASM::beq(.L_8024298C);
/*80242970 0023F770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80242974 0023F774*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80242978 0023F778*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8024297C 0023F77C*/ PPC::Runtime::ASM::bge(.L_8024298C);
/*80242980 0023F780*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80242984 0023F784*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*80242988 0023F788*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8024298C, 0x8024298C) //this is a jump label
/*8024298C 0023F78C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80242990 0023F790*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*80242994 0023F794*/ PPC::Runtime::ASM::beq(.L_802429B0);
/*80242998 0023F798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8024299C 0023F79C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802429A0 0023F7A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802429A4 0023F7A4*/ PPC::Runtime::ASM::bge(.L_802429B0);
/*802429A8 0023F7A8*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*802429AC 0023F7AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802429B0, 0x802429B0) //this is a jump label
/*802429B0 0023F7B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802429B4 0023F7B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802429B8 0023F7B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802429BC 0023F7BC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802429C0 0023F7C0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802429C4 0023F7C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802429C8 0023F7C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802429CC 0023F7CC*/ PPC::Runtime::ASM::blr();
}