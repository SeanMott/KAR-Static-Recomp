//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___strtoul(PPC::Runtime::GCContext* context)
{
/*803B9534 003B6334*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*803B9538 003B6338*/ PPC::Runtime::ASM::mflr(context->r0);
/*803B953C 003B633C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803B9540 003B6340*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803B9544 003B6344*/ PPC::Runtime::ASM::stmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 803B9548 003B6348  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*803B954C 003B634C*/ PPC::Runtime::ASM::mr(context->r24, context->r9);
/*803B9550 003B6350*/ PPC::Runtime::ASM::mr(context->r21, context->r8);
/*803B9554 003B6354*/ PPC::Runtime::ASM::mr(context->r22, context->r4);
/*803B9558 003B6358*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*803B955C 003B635C*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*803B9560 003B6360*/ PPC::Runtime::ASM::mr(context->r20, context->r7);
/*803B9564 003B6364*/ PPC::Runtime::ASM::li(context->r25, 0x1);
/*803B9568 003B6368*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803B956C 003B636C*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*803B9570 003B6370*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*803B9574 003B6374*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*803B9578 003B6378*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803B957C 003B637C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803B9580 003B6380*/ PPC::Runtime::ASM::blt(.L_803B959C);
/*803B9584 003B6384*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*803B9588 003B6388*/ PPC::Runtime::ASM::beq(.L_803B959C);
/*803B958C 003B638C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x24);
/*803B9590 003B6390*/ PPC::Runtime::ASM::bgt(.L_803B959C);
/*803B9594 003B6394*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x1);
/*803B9598 003B6398*/ PPC::Runtime::ASM::bge(.L_803B95A4);
RUNTIME_PPC_JUMP_LABEL(.L_803B959C, 0x803B959C) //this is a jump label
/*803B959C 003B639C*/ PPC::Runtime::ASM::li(context->r25, 0x40);
/*803B95A0 003B63A0*/ PPC::Runtime::ASM::b(.L_803B95C4);
RUNTIME_PPC_JUMP_LABEL(.L_803B95A4, 0x803B95A4) //this is a jump label
/*803B95A4 003B63A4*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B95A8 003B63A8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B95AC 003B63AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B95B0 003B63B0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803B95B4 003B63B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B95B8 003B63B8*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*803B95BC 003B63BC*/ PPC::Runtime::ASM::bctrl();
/*803B95C0 003B63C0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803B95C4, 0x803B95C4) //this is a jump label
/*803B95C4 003B63C4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803B95C8 003B63C8*/ PPC::Runtime::ASM::beq(.L_803B9844);
/*803B95CC 003B63CC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803B95D0 003B63D0*/ PPC::Runtime::ASM::divwu(context->r26, context->r0, context->r29);
/*803B95D4 003B63D4*/ PPC::Runtime::ASM::b(.L_803B9844);
RUNTIME_PPC_JUMP_LABEL(.L_803B95D8, 0x803B95D8) //this is a jump label
/*803B95D8 003B63D8*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x10);
/*803B95DC 003B63DC*/ PPC::Runtime::ASM::bgt(.L_803B9844);
/*803B95E0 003B63E0*/ PPC::Runtime::ASM::lis(context->r3, jumptable_804F916C @ Get_MemoryOffset_HighBit);
/*803B95E4 003B63E4*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 2);
/*803B95E8 003B63E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_804F916C @ Get_MemoryOffset_LowBit);
/*803B95EC 003B63EC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*803B95F0 003B63F0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803B95F4 003B63F4*/ PPC::Runtime::ASM::bctr();
/*803B95F8 003B63F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8AF0 @ Get_MemoryOffset_HighBit);
/*803B95FC 003B63FC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*803B9600 003B6400*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F8AF0 @ Get_MemoryOffset_LowBit);
/*803B9604 003B6404*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*803B9608 003B6408*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 30);
/*803B960C 003B640C*/ PPC::Runtime::ASM::beq(.L_803B9634);
/*803B9610 003B6410*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B9614 003B6414*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B9618 003B6418*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B961C 003B641C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803B9620 003B6420*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B9624 003B6424*/ PPC::Runtime::ASM::bctrl();
/*803B9628 003B6428*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803B962C 003B642C*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*803B9630 003B6430*/ PPC::Runtime::ASM::b(.L_803B9844);
RUNTIME_PPC_JUMP_LABEL(.L_803B9634, 0x803B9634) //this is a jump label
/*803B9634 003B6434*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x2b);
/*803B9638 003B6438*/ PPC::Runtime::ASM::bne(.L_803B9660);
/*803B963C 003B643C*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B9640 003B6440*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B9644 003B6444*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B9648 003B6448*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803B964C 003B644C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B9650 003B6450*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*803B9654 003B6454*/ PPC::Runtime::ASM::bctrl();
/*803B9658 003B6458*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803B965C 003B645C*/ PPC::Runtime::ASM::b(.L_803B9690);
RUNTIME_PPC_JUMP_LABEL(.L_803B9660, 0x803B9660) //this is a jump label
/*803B9660 003B6460*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x2d);
/*803B9664 003B6464*/ PPC::Runtime::ASM::bne(.L_803B9690);
/*803B9668 003B6468*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B966C 003B646C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B9670 003B6470*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B9674 003B6474*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803B9678 003B6478*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B967C 003B647C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*803B9680 003B6480*/ PPC::Runtime::ASM::bctrl();
/*803B9684 003B6484*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803B9688 003B6488*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803B968C 003B648C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_803B9690, 0x803B9690) //this is a jump label
/*803B9690 003B6490*/ PPC::Runtime::ASM::li(context->r25, 0x2);
/*803B9694 003B6494*/ PPC::Runtime::ASM::b(.L_803B9844);
/*803B9698 003B6498*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803B969C 003B649C*/ PPC::Runtime::ASM::beq(.L_803B96A8);
/*803B96A0 003B64A0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x10);
/*803B96A4 003B64A4*/ PPC::Runtime::ASM::bne(.L_803B96D8);
RUNTIME_PPC_JUMP_LABEL(.L_803B96A8, 0x803B96A8) //this is a jump label
/*803B96A8 003B64A8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x30);
/*803B96AC 003B64AC*/ PPC::Runtime::ASM::bne(.L_803B96D8);
/*803B96B0 003B64B0*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B96B4 003B64B4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B96B8 003B64B8*/ PPC::Runtime::ASM::li(context->r25, 0x4);
/*803B96BC 003B64BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B96C0 003B64C0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803B96C4 003B64C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B96C8 003B64C8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*803B96CC 003B64CC*/ PPC::Runtime::ASM::bctrl();
/*803B96D0 003B64D0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803B96D4 003B64D4*/ PPC::Runtime::ASM::b(.L_803B9844);
RUNTIME_PPC_JUMP_LABEL(.L_803B96D8, 0x803B96D8) //this is a jump label
/*803B96D8 003B64D8*/ PPC::Runtime::ASM::li(context->r25, 0x8);
/*803B96DC 003B64DC*/ PPC::Runtime::ASM::b(.L_803B9844);
/*803B96E0 003B64E0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x58);
/*803B96E4 003B64E4*/ PPC::Runtime::ASM::beq(.L_803B96F0);
/*803B96E8 003B64E8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x78);
/*803B96EC 003B64EC*/ PPC::Runtime::ASM::bne(.L_803B971C);
RUNTIME_PPC_JUMP_LABEL(.L_803B96F0, 0x803B96F0) //this is a jump label
/*803B96F0 003B64F0*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B96F4 003B64F4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B96F8 003B64F8*/ PPC::Runtime::ASM::li(context->r29, 0x10);
/*803B96FC 003B64FC*/ PPC::Runtime::ASM::li(context->r25, 0x8);
/*803B9700 003B6500*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B9704 003B6504*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803B9708 003B6508*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B970C 003B650C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*803B9710 003B6510*/ PPC::Runtime::ASM::bctrl();
/*803B9714 003B6514*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803B9718 003B6518*/ PPC::Runtime::ASM::b(.L_803B9844);
RUNTIME_PPC_JUMP_LABEL(.L_803B971C, 0x803B971C) //this is a jump label
/*803B971C 003B651C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803B9720 003B6520*/ PPC::Runtime::ASM::bne(.L_803B9728);
/*803B9724 003B6524*/ PPC::Runtime::ASM::li(context->r29, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803B9728, 0x803B9728) //this is a jump label
/*803B9728 003B6528*/ PPC::Runtime::ASM::li(context->r25, 0x10);
/*803B972C 003B652C*/ PPC::Runtime::ASM::b(.L_803B9844);
/*803B9730 003B6530*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803B9734 003B6534*/ PPC::Runtime::ASM::bne(.L_803B973C);
/*803B9738 003B6538*/ PPC::Runtime::ASM::li(context->r29, 0xa);
RUNTIME_PPC_JUMP_LABEL(.L_803B973C, 0x803B973C) //this is a jump label
/*803B973C 003B653C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*803B9740 003B6540*/ PPC::Runtime::ASM::bne(.L_803B974C);
/*803B9744 003B6544*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803B9748 003B6548*/ PPC::Runtime::ASM::divwu(context->r26, context->r0, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_803B974C, 0x803B974C) //this is a jump label
/*803B974C 003B654C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8AF0 @ Get_MemoryOffset_HighBit);
/*803B9750 003B6550*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r4, 24);
/*803B9754 003B6554*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F8AF0 @ Get_MemoryOffset_LowBit);
/*803B9758 003B6558*/ PPC::Runtime::ASM::lbzx(context->r3, context->r3, context->r5);
/*803B975C 003B655C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 27, 27);
/*803B9760 003B6560*/ PPC::Runtime::ASM::beq(.L_803B978C);
/*803B9764 003B6564*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x30);
/*803B9768 003B6568*/ PPC::Runtime::ASM::cmpw(context->r4, context->r29);
/*803B976C 003B656C*/ PPC::Runtime::ASM::blt(.L_803B97F4);
/*803B9770 003B6570*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x10);
/*803B9774 003B6574*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*803B9778 003B6578*/ PPC::Runtime::ASM::bne(.L_803B9780);
/*803B977C 003B657C*/ PPC::Runtime::ASM::li(context->r0, 0x20);
RUNTIME_PPC_JUMP_LABEL(.L_803B9780, 0x803B9780) //this is a jump label
/*803B9780 003B6580*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
/*803B9784 003B6584*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x30);
/*803B9788 003B6588*/ PPC::Runtime::ASM::b(.L_803B9844);
RUNTIME_PPC_JUMP_LABEL(.L_803B978C, 0x803B978C) //this is a jump label
/*803B978C 003B658C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 24, 25);
/*803B9790 003B6590*/ PPC::Runtime::ASM::beq(.L_803B97BC);
/*803B9794 003B6594*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*803B9798 003B6598*/ PPC::Runtime::ASM::bne(.L_803B97A4);
/*803B979C 003B659C*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803B97A0 003B65A0*/ PPC::Runtime::ASM::b(.L_803B97B0);
RUNTIME_PPC_JUMP_LABEL(.L_803B97A4, 0x803B97A4) //this is a jump label
/*803B97A4 003B65A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8CF0 @ Get_MemoryOffset_HighBit);
/*803B97A8 003B65A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F8CF0 @ Get_MemoryOffset_LowBit);
/*803B97AC 003B65AC*/ PPC::Runtime::ASM::lbzx(context->r3, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_803B97B0, 0x803B97B0) //this is a jump label
/*803B97B0 003B65B0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x37);
/*803B97B4 003B65B4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r29);
/*803B97B8 003B65B8*/ PPC::Runtime::ASM::blt(.L_803B97D4);
RUNTIME_PPC_JUMP_LABEL(.L_803B97BC, 0x803B97BC) //this is a jump label
/*803B97BC 003B65BC*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x10);
/*803B97C0 003B65C0*/ PPC::Runtime::ASM::bne(.L_803B97CC);
/*803B97C4 003B65C4*/ PPC::Runtime::ASM::li(context->r25, 0x20);
/*803B97C8 003B65C8*/ PPC::Runtime::ASM::b(.L_803B9844);
RUNTIME_PPC_JUMP_LABEL(.L_803B97CC, 0x803B97CC) //this is a jump label
/*803B97CC 003B65CC*/ PPC::Runtime::ASM::li(context->r25, 0x40);
/*803B97D0 003B65D0*/ PPC::Runtime::ASM::b(.L_803B9844);
RUNTIME_PPC_JUMP_LABEL(.L_803B97D4, 0x803B97D4) //this is a jump label
/*803B97D4 003B65D4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*803B97D8 003B65D8*/ PPC::Runtime::ASM::bne(.L_803B97E4);
/*803B97DC 003B65DC*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803B97E0 003B65E0*/ PPC::Runtime::ASM::b(.L_803B97F0);
RUNTIME_PPC_JUMP_LABEL(.L_803B97E4, 0x803B97E4) //this is a jump label
/*803B97E4 003B65E4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8CF0 @ Get_MemoryOffset_HighBit);
/*803B97E8 003B65E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F8CF0 @ Get_MemoryOffset_LowBit);
/*803B97EC 003B65EC*/ PPC::Runtime::ASM::lbzx(context->r3, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_803B97F0, 0x803B97F0) //this is a jump label
/*803B97F0 003B65F0*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x37);
RUNTIME_PPC_JUMP_LABEL(.L_803B97F4, 0x803B97F4) //this is a jump label
/*803B97F4 003B65F4*/ PPC::Runtime::ASM::cmplw(context->r27, context->r26);
/*803B97F8 003B65F8*/ PPC::Runtime::ASM::ble(.L_803B9804);
/*803B97FC 003B65FC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803B9800 003B6600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_803B9804, 0x803B9804) //this is a jump label
/*803B9804 003B6604*/ PPC::Runtime::ASM::mullw(context->r27, context->r27, context->r29);
/*803B9808 003B6608*/ PPC::Runtime::ASM::subfic(context->r0, context->r27, -0x1);
/*803B980C 003B660C*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803B9810 003B6610*/ PPC::Runtime::ASM::ble(.L_803B981C);
/*803B9814 003B6614*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803B9818 003B6618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_803B981C, 0x803B981C) //this is a jump label
/*803B981C 003B661C*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B9820 003B6620*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B9824 003B6624*/ PPC::Runtime::ASM::add(context->r27, context->r27, context->r4);
/*803B9828 003B6628*/ PPC::Runtime::ASM::li(context->r25, 0x10);
/*803B982C 003B662C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B9830 003B6630*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803B9834 003B6634*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B9838 003B6638*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*803B983C 003B663C*/ PPC::Runtime::ASM::bctrl();
/*803B9840 003B6640*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803B9844, 0x803B9844) //this is a jump label
/*803B9844 003B6644*/ PPC::Runtime::ASM::cmpw(context->r31, context->r22);
/*803B9848 003B6648*/ PPC::Runtime::ASM::bgt(.L_803B985C);
/*803B984C 003B664C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*803B9850 003B6650*/ PPC::Runtime::ASM::beq(.L_803B985C);
/*803B9854 003B6654*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r25, 0, 25, 26);
/*803B9858 003B6658*/ PPC::Runtime::ASM::beq(.L_803B95D8);
RUNTIME_PPC_JUMP_LABEL(.L_803B985C, 0x803B985C) //this is a jump label
/*803B985C 003B665C*/ PPC::Runtime::ASM::andi.(context->r0, context->r25, 0x34);
/*803B9860 003B6660*/ PPC::Runtime::ASM::bne(.L_803B9874);
/*803B9864 003B6664*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803B9868 003B6668*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*803B986C 003B666C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*803B9870 003B6670*/ PPC::Runtime::ASM::b(.L_803B9880);
RUNTIME_PPC_JUMP_LABEL(.L_803B9874, 0x803B9874) //this is a jump label
/*803B9874 003B6674*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r23);
/*803B9878 003B6678*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803B987C 003B667C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
RUNTIME_PPC_JUMP_LABEL(.L_803B9880, 0x803B9880) //this is a jump label
/*803B9880 003B6680*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*803B9884 003B6684*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803B9888 003B6688*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803B988C 003B668C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B9890 003B6690*/ PPC::Runtime::ASM::bctrl();
/*803B9894 003B6694*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803B9898 003B6698*/ PPC::Runtime::ASM::lmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B989C 003B669C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803B98A0 003B66A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803B98A4 003B66A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*803B98A8 003B66A8*/ PPC::Runtime::ASM::blr();
}