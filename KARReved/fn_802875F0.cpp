//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802875F0(PPC::Runtime::GCContext* context)
{
/*802875F0 002843F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802875F4 002843F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802875F8 002843F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802875FC 002843FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80287600 00284400*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80287604 00284404*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80287608 00284408*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028760C 0028440C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80287610 00284410*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80287614 00284414*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80287618 00284418*/ PPC::Runtime::ASM::beq(.L_80287634);
/*8028761C 0028441C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287620 00284420*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80287624 00284424*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287628 00284428*/ PPC::Runtime::ASM::bctrl();
/*8028762C 0028442C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80287630 00284430*/ PPC::Runtime::ASM::b(.L_80287638);
RUNTIME_PPC_JUMP_LABEL(.L_80287634, 0x80287634) //this is a jump label
/*80287634 00284434*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80287638, 0x80287638) //this is a jump label
/*80287638 00284438*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8028763C 0028443C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80287640 00284440*/ PPC::Runtime::ASM::beq(.L_80287658);
/*80287644 00284444*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287648 00284448*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8028764C 0028444C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287650 00284450*/ PPC::Runtime::ASM::bctrl();
/*80287654 00284454*/ PPC::Runtime::ASM::b(.L_8028765C);
RUNTIME_PPC_JUMP_LABEL(.L_80287658, 0x80287658) //this is a jump label
/*80287658 00284458*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8028765C, 0x8028765C) //this is a jump label
/*8028765C 0028445C*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80287660 00284460*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r29);
/*80287664 00284464*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80287668 00284468*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8028766C 0028446C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80287670 00284470*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*80287674 00284474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*80287678 00284478*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028767C 0028447C*/ PPC::Runtime::ASM::beq(.L_80287698);
/*80287680 00284480*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287684 00284484*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80287688 00284488*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028768C 0028448C*/ PPC::Runtime::ASM::bctrl();
/*80287690 00284490*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80287694 00284494*/ PPC::Runtime::ASM::b(.L_8028769C);
RUNTIME_PPC_JUMP_LABEL(.L_80287698, 0x80287698) //this is a jump label
/*80287698 00284498*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8028769C, 0x8028769C) //this is a jump label
/*8028769C 0028449C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802876A0 002844A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802876A4 002844A4*/ PPC::Runtime::ASM::beq(.L_802876BC);
/*802876A8 002844A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802876AC 002844AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802876B0 002844B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802876B4 002844B4*/ PPC::Runtime::ASM::bctrl();
/*802876B8 002844B8*/ PPC::Runtime::ASM::b(.L_802876C0);
RUNTIME_PPC_JUMP_LABEL(.L_802876BC, 0x802876BC) //this is a jump label
/*802876BC 002844BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802876C0, 0x802876C0) //this is a jump label
/*802876C0 002844C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*802876C4 002844C4*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r29);
/*802876C8 002844C8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a, context->r31));
/*802876CC 002844CC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802876D0 002844D0*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r30);
/*802876D4 002844D4*/ PPC::Runtime::ASM::beq(.L_802876F4);
/*802876D8 002844D8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802876DC 002844DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802876E0 002844E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802876E4 002844E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802876E8 002844E8*/ PPC::Runtime::ASM::bctrl();
/*802876EC 002844EC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802876F0 002844F0*/ PPC::Runtime::ASM::b(.L_802876F8);
RUNTIME_PPC_JUMP_LABEL(.L_802876F4, 0x802876F4) //this is a jump label
/*802876F4 002844F4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802876F8, 0x802876F8) //this is a jump label
/*802876F8 002844F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*802876FC 002844FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80287700 00284500*/ PPC::Runtime::ASM::beq(.L_80287718);
/*80287704 00284504*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287708 00284508*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8028770C 0028450C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287710 00284510*/ PPC::Runtime::ASM::bctrl();
/*80287714 00284514*/ PPC::Runtime::ASM::b(.L_8028771C);
RUNTIME_PPC_JUMP_LABEL(.L_80287718, 0x80287718) //this is a jump label
/*80287718 00284518*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8028771C, 0x8028771C) //this is a jump label
/*8028771C 0028451C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*80287720 00284520*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r29);
/*80287724 00284524*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r31));
/*80287728 00284528*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8028772C 0028452C*/ PPC::Runtime::ASM::subf(context->r3, context->r30, context->r0);
/*80287730 00284530*/ PPC::Runtime::ASM::srwi(context->r0, context->r3, 31);
/*80287734 00284534*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*80287738 00284538*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 1);
/*8028773C 0028453C*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*80287740 00284540*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96, context->r31));
/*80287744 00284544*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*80287748 00284548*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028774C 0028454C*/ PPC::Runtime::ASM::beq(.L_80287768);
/*80287750 00284550*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287754 00284554*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80287758 00284558*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028775C 0028455C*/ PPC::Runtime::ASM::bctrl();
/*80287760 00284560*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80287764 00284564*/ PPC::Runtime::ASM::b(.L_8028776C);
RUNTIME_PPC_JUMP_LABEL(.L_80287768, 0x80287768) //this is a jump label
/*80287768 00284568*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8028776C, 0x8028776C) //this is a jump label
/*8028776C 0028456C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*80287770 00284570*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80287774 00284574*/ PPC::Runtime::ASM::beq(.L_8028778C);
/*80287778 00284578*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028777C 0028457C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*80287780 00284580*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287784 00284584*/ PPC::Runtime::ASM::bctrl();
/*80287788 00284588*/ PPC::Runtime::ASM::b(.L_80287790);
RUNTIME_PPC_JUMP_LABEL(.L_8028778C, 0x8028778C) //this is a jump label
/*8028778C 0028458C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80287790, 0x80287790) //this is a jump label
/*80287790 00284590*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*80287794 00284594*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r29);
/*80287798 00284598*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8028779C 0028459C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802877A0 002845A0*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r30);
/*802877A4 002845A4*/ PPC::Runtime::ASM::beq(.L_802877C4);
/*802877A8 002845A8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802877AC 002845AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802877B0 002845B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802877B4 002845B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802877B8 002845B8*/ PPC::Runtime::ASM::bctrl();
/*802877BC 002845BC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802877C0 002845C0*/ PPC::Runtime::ASM::b(.L_802877C8);
RUNTIME_PPC_JUMP_LABEL(.L_802877C4, 0x802877C4) //this is a jump label
/*802877C4 002845C4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802877C8, 0x802877C8) //this is a jump label
/*802877C8 002845C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802877CC 002845CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802877D0 002845D0*/ PPC::Runtime::ASM::beq(.L_802877E8);
/*802877D4 002845D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802877D8 002845D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802877DC 002845DC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802877E0 002845E0*/ PPC::Runtime::ASM::bctrl();
/*802877E4 002845E4*/ PPC::Runtime::ASM::b(.L_802877EC);
RUNTIME_PPC_JUMP_LABEL(.L_802877E8, 0x802877E8) //this is a jump label
/*802877E8 002845E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802877EC, 0x802877EC) //this is a jump label
/*802877EC 002845EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*802877F0 002845F0*/ PPC::Runtime::ASM::add(context->r28, context->r3, context->r29);
/*802877F4 002845F4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a, context->r31));
/*802877F8 002845F8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802877FC 002845FC*/ PPC::Runtime::ASM::add(context->r28, context->r0, context->r28);
/*80287800 00284600*/ PPC::Runtime::ASM::beq(.L_80287820);
/*80287804 00284604*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80287808 00284608*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8028780C 0028460C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80287810 00284610*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287814 00284614*/ PPC::Runtime::ASM::bctrl();
/*80287818 00284618*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8028781C 0028461C*/ PPC::Runtime::ASM::b(.L_80287824);
RUNTIME_PPC_JUMP_LABEL(.L_80287820, 0x80287820) //this is a jump label
/*80287820 00284620*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80287824, 0x80287824) //this is a jump label
/*80287824 00284624*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*80287828 00284628*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028782C 0028462C*/ PPC::Runtime::ASM::beq(.L_80287844);
/*80287830 00284630*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287834 00284634*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80287838 00284638*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028783C 0028463C*/ PPC::Runtime::ASM::bctrl();
/*80287840 00284640*/ PPC::Runtime::ASM::b(.L_80287848);
RUNTIME_PPC_JUMP_LABEL(.L_80287844, 0x80287844) //this is a jump label
/*80287844 00284644*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80287848, 0x80287848) //this is a jump label
/*80287848 00284648*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r29);
/*8028784C 0028464C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80287850 00284650*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r28);
/*80287854 00284654*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*80287858 00284658*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8028785C 0028465C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80287860 00284660*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80287864 00284664*/ PPC::Runtime::ASM::sth(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r31));
/*80287868 00284668*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8028786C 0028466C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80287870 00284670*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80287874 00284674*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80287878 00284678*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028787C 0028467C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80287880 00284680*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80287884 00284684*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80287888 00284688*/ PPC::Runtime::ASM::blr();
}