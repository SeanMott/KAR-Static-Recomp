//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803A05B8(PPC::Runtime::GCContext* context)
{
/*803A05B8 0039D3B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803A05BC 0039D3BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A05C0 0039D3C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803A05C4 0039D3C4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803A05C8 0039D3C8*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*803A05CC 0039D3CC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803A05D0 0039D3D0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803A05D4 0039D3D4*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
/*803A05D8 0039D3D8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803A05DC 0039D3DC*/ PPC::Runtime::ASM::b(.L_803A0798);
RUNTIME_PPC_JUMP_LABEL(.L_803A05E0, 0x803A05E0) //this is a jump label
/*803A05E0 0039D3E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A05E4 0039D3E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A05E8 0039D3E8*/ PPC::Runtime::ASM::beq(.L_803A0604);
/*803A05EC 0039D3EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A05F0 0039D3F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A05F4 0039D3F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A05F8 0039D3F8*/ PPC::Runtime::ASM::bctrl();
/*803A05FC 0039D3FC*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*803A0600 0039D400*/ PPC::Runtime::ASM::b(.L_803A0608);
RUNTIME_PPC_JUMP_LABEL(.L_803A0604, 0x803A0604) //this is a jump label
/*803A0604 0039D404*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0608, 0x803A0608) //this is a jump label
/*803A0608 0039D408*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A060C 0039D40C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A0610 0039D410*/ PPC::Runtime::ASM::beq(.L_803A0628);
/*803A0614 0039D414*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A0618 0039D418*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803A061C 0039D41C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0620 0039D420*/ PPC::Runtime::ASM::bctrl();
/*803A0624 0039D424*/ PPC::Runtime::ASM::b(.L_803A062C);
RUNTIME_PPC_JUMP_LABEL(.L_803A0628, 0x803A0628) //this is a jump label
/*803A0628 0039D428*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A062C, 0x803A062C) //this is a jump label
/*803A062C 0039D42C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A0630 0039D430*/ PPC::Runtime::ASM::add(context->r27, context->r3, context->r25);
/*803A0634 0039D434*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*803A0638 0039D438*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803A063C 0039D43C*/ PPC::Runtime::ASM::add(context->r27, context->r0, context->r27);
/*803A0640 0039D440*/ PPC::Runtime::ASM::beq(.L_803A0660);
/*803A0644 0039D444*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A0648 0039D448*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803A064C 0039D44C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803A0650 0039D450*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0654 0039D454*/ PPC::Runtime::ASM::bctrl();
/*803A0658 0039D458*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*803A065C 0039D45C*/ PPC::Runtime::ASM::b(.L_803A0664);
RUNTIME_PPC_JUMP_LABEL(.L_803A0660, 0x803A0660) //this is a jump label
/*803A0660 0039D460*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0664, 0x803A0664) //this is a jump label
/*803A0664 0039D464*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A0668 0039D468*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A066C 0039D46C*/ PPC::Runtime::ASM::beq(.L_803A0684);
/*803A0670 0039D470*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A0674 0039D474*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803A0678 0039D478*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A067C 0039D47C*/ PPC::Runtime::ASM::bctrl();
/*803A0680 0039D480*/ PPC::Runtime::ASM::b(.L_803A0688);
RUNTIME_PPC_JUMP_LABEL(.L_803A0684, 0x803A0684) //this is a jump label
/*803A0684 0039D484*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0688, 0x803A0688) //this is a jump label
/*803A0688 0039D488*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A068C 0039D48C*/ PPC::Runtime::ASM::add(context->r26, context->r3, context->r25);
/*803A0690 0039D490*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803A0694 0039D494*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803A0698 0039D498*/ PPC::Runtime::ASM::add(context->r26, context->r0, context->r26);
/*803A069C 0039D49C*/ PPC::Runtime::ASM::beq(.L_803A06BC);
/*803A06A0 0039D4A0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A06A4 0039D4A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803A06A8 0039D4A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A06AC 0039D4AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A06B0 0039D4B0*/ PPC::Runtime::ASM::bctrl();
/*803A06B4 0039D4B4*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*803A06B8 0039D4B8*/ PPC::Runtime::ASM::b(.L_803A06C0);
RUNTIME_PPC_JUMP_LABEL(.L_803A06BC, 0x803A06BC) //this is a jump label
/*803A06BC 0039D4BC*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A06C0, 0x803A06C0) //this is a jump label
/*803A06C0 0039D4C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A06C4 0039D4C4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A06C8 0039D4C8*/ PPC::Runtime::ASM::beq(.L_803A06E0);
/*803A06CC 0039D4CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A06D0 0039D4D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803A06D4 0039D4D4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A06D8 0039D4D8*/ PPC::Runtime::ASM::bctrl();
/*803A06DC 0039D4DC*/ PPC::Runtime::ASM::b(.L_803A06E4);
RUNTIME_PPC_JUMP_LABEL(.L_803A06E0, 0x803A06E0) //this is a jump label
/*803A06E0 0039D4E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A06E4, 0x803A06E4) //this is a jump label
/*803A06E4 0039D4E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A06E8 0039D4E8*/ PPC::Runtime::ASM::add(context->r24, context->r3, context->r25);
/*803A06EC 0039D4EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*803A06F0 0039D4F0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803A06F4 0039D4F4*/ PPC::Runtime::ASM::add(context->r24, context->r0, context->r24);
/*803A06F8 0039D4F8*/ PPC::Runtime::ASM::beq(.L_803A0718);
/*803A06FC 0039D4FC*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A0700 0039D500*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803A0704 0039D504*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803A0708 0039D508*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A070C 0039D50C*/ PPC::Runtime::ASM::bctrl();
/*803A0710 0039D510*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*803A0714 0039D514*/ PPC::Runtime::ASM::b(.L_803A071C);
RUNTIME_PPC_JUMP_LABEL(.L_803A0718, 0x803A0718) //this is a jump label
/*803A0718 0039D518*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A071C, 0x803A071C) //this is a jump label
/*803A071C 0039D51C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A0720 0039D520*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A0724 0039D524*/ PPC::Runtime::ASM::beq(.L_803A073C);
/*803A0728 0039D528*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A072C 0039D52C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803A0730 0039D530*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0734 0039D534*/ PPC::Runtime::ASM::bctrl();
/*803A0738 0039D538*/ PPC::Runtime::ASM::b(.L_803A0740);
RUNTIME_PPC_JUMP_LABEL(.L_803A073C, 0x803A073C) //this is a jump label
/*803A073C 0039D53C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0740, 0x803A0740) //this is a jump label
/*803A0740 0039D540*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*803A0744 0039D544*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r25);
/*803A0748 0039D548*/ PPC::Runtime::ASM::srwi(context->r4, context->r24, 31);
/*803A074C 0039D54C*/ PPC::Runtime::ASM::srwi(context->r0, context->r27, 31);
/*803A0750 0039D550*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r28);
/*803A0754 0039D554*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x10);
/*803A0758 0039D558*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A075C 0039D55C*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r24);
/*803A0760 0039D560*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803A0764 0039D564*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r30);
/*803A0768 0039D568*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803A076C 0039D56C*/ PPC::Runtime::ASM::srawi(context->r5, context->r5, 1);
/*803A0770 0039D570*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r27);
/*803A0774 0039D574*/ PPC::Runtime::ASM::add(context->r4, context->r7, context->r4);
/*803A0778 0039D578*/ PPC::Runtime::ASM::add(context->r6, context->r26, context->r30);
/*803A077C 0039D57C*/ PPC::Runtime::ASM::srawi(context->r7, context->r0, 1);
/*803A0780 0039D580*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0784 0039D584*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x10);
/*803A0788 0039D588*/ PPC::Runtime::ASM::bctrl();
/*803A078C 0039D58C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*803A0790 0039D590*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*803A0794 0039D594*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1c);
RUNTIME_PPC_JUMP_LABEL(.L_803A0798, 0x803A0798) //this is a jump label
/*803A0798 0039D598*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*803A079C 0039D59C*/ PPC::Runtime::ASM::cmplw(context->r29, context->r0);
/*803A07A0 0039D5A0*/ PPC::Runtime::ASM::blt(.L_803A05E0);
/*803A07A4 0039D5A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*803A07A8 0039D5A8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803A07AC 0039D5AC*/ PPC::Runtime::ASM::beq(.L_803A08F8);
/*803A07B0 0039D5B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A07B4 0039D5B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A07B8 0039D5B8*/ PPC::Runtime::ASM::beq(.L_803A07D4);
/*803A07BC 0039D5BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A07C0 0039D5C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A07C4 0039D5C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A07C8 0039D5C8*/ PPC::Runtime::ASM::bctrl();
/*803A07CC 0039D5CC*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*803A07D0 0039D5D0*/ PPC::Runtime::ASM::b(.L_803A07D8);
RUNTIME_PPC_JUMP_LABEL(.L_803A07D4, 0x803A07D4) //this is a jump label
/*803A07D4 0039D5D4*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A07D8, 0x803A07D8) //this is a jump label
/*803A07D8 0039D5D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A07DC 0039D5DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A07E0 0039D5E0*/ PPC::Runtime::ASM::beq(.L_803A07F8);
/*803A07E4 0039D5E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A07E8 0039D5E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803A07EC 0039D5EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A07F0 0039D5F0*/ PPC::Runtime::ASM::bctrl();
/*803A07F4 0039D5F4*/ PPC::Runtime::ASM::b(.L_803A07FC);
RUNTIME_PPC_JUMP_LABEL(.L_803A07F8, 0x803A07F8) //this is a jump label
/*803A07F8 0039D5F8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A07FC, 0x803A07FC) //this is a jump label
/*803A07FC 0039D5FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A0800 0039D600*/ PPC::Runtime::ASM::add(context->r24, context->r3, context->r26);
/*803A0804 0039D604*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*803A0808 0039D608*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803A080C 0039D60C*/ PPC::Runtime::ASM::add(context->r24, context->r0, context->r24);
/*803A0810 0039D610*/ PPC::Runtime::ASM::beq(.L_803A0830);
/*803A0814 0039D614*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A0818 0039D618*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803A081C 0039D61C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803A0820 0039D620*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0824 0039D624*/ PPC::Runtime::ASM::bctrl();
/*803A0828 0039D628*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*803A082C 0039D62C*/ PPC::Runtime::ASM::b(.L_803A0834);
RUNTIME_PPC_JUMP_LABEL(.L_803A0830, 0x803A0830) //this is a jump label
/*803A0830 0039D630*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0834, 0x803A0834) //this is a jump label
/*803A0834 0039D634*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A0838 0039D638*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A083C 0039D63C*/ PPC::Runtime::ASM::beq(.L_803A0854);
/*803A0840 0039D640*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A0844 0039D644*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803A0848 0039D648*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A084C 0039D64C*/ PPC::Runtime::ASM::bctrl();
/*803A0850 0039D650*/ PPC::Runtime::ASM::b(.L_803A0858);
RUNTIME_PPC_JUMP_LABEL(.L_803A0854, 0x803A0854) //this is a jump label
/*803A0854 0039D654*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0858, 0x803A0858) //this is a jump label
/*803A0858 0039D658*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A085C 0039D65C*/ PPC::Runtime::ASM::add(context->r25, context->r3, context->r26);
/*803A0860 0039D660*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803A0864 0039D664*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803A0868 0039D668*/ PPC::Runtime::ASM::add(context->r25, context->r0, context->r25);
/*803A086C 0039D66C*/ PPC::Runtime::ASM::beq(.L_803A088C);
/*803A0870 0039D670*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A0874 0039D674*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803A0878 0039D678*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803A087C 0039D67C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0880 0039D680*/ PPC::Runtime::ASM::bctrl();
/*803A0884 0039D684*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*803A0888 0039D688*/ PPC::Runtime::ASM::b(.L_803A0890);
RUNTIME_PPC_JUMP_LABEL(.L_803A088C, 0x803A088C) //this is a jump label
/*803A088C 0039D68C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0890, 0x803A0890) //this is a jump label
/*803A0890 0039D690*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*803A0894 0039D694*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A0898 0039D698*/ PPC::Runtime::ASM::beq(.L_803A08B4);
/*803A089C 0039D69C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A08A0 0039D6A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803A08A4 0039D6A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A08A8 0039D6A8*/ PPC::Runtime::ASM::bctrl();
/*803A08AC 0039D6AC*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*803A08B0 0039D6B0*/ PPC::Runtime::ASM::b(.L_803A08B8);
RUNTIME_PPC_JUMP_LABEL(.L_803A08B4, 0x803A08B4) //this is a jump label
/*803A08B4 0039D6B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A08B8, 0x803A08B8) //this is a jump label
/*803A08B8 0039D6B8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*803A08BC 0039D6BC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x90);
/*803A08C0 0039D6C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*803A08C4 0039D6C4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r26);
/*803A08C8 0039D6C8*/ PPC::Runtime::ASM::mulli(context->r9, context->r4, 0x1c);
/*803A08CC 0039D6CC*/ PPC::Runtime::ASM::addi(context->r6, context->r25, 0x18);
/*803A08D0 0039D6D0*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*803A08D4 0039D6D4*/ PPC::Runtime::ASM::subi(context->r7, context->r24, 0x4);
/*803A08D8 0039D6D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803A08DC 0039D6DC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803A08E0 0039D6E0*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r9);
/*803A08E4 0039D6E4*/ PPC::Runtime::ASM::add(context->r6, context->r9, context->r6);
/*803A08E8 0039D6E8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*803A08EC 0039D6EC*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r4);
/*803A08F0 0039D6F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A08F4 0039D6F4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803A08F8, 0x803A08F8) //this is a jump label
/*803A08F8 0039D6F8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803A08FC 0039D6FC*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*803A0900 0039D700*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803A0904 0039D704*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A0908 0039D708*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803A090C 0039D70C*/ PPC::Runtime::ASM::blr();
}