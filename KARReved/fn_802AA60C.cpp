//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A5D34.hpp"
#include "fn_802A5D34.hpp"
#include "fn_802AA8A4.hpp"



void fn_802AA60C(PPC::Runtime::GCContext* context)
{
/*802AA60C 002A740C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AA610 002A7410*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AA614 002A7414*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA618 002A7418*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA61C 002A741C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AA620 002A7420*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AA624 002A7424  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AA628 002A7428*/ PPC::Runtime::ASM::beq(.L_802AA888);
/*802AA62C 002A742C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C13CC @ Get_MemoryOffset_HighBit);
/*802AA630 002A7430*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x464);
/*802AA634 002A7434*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C13CC @ Get_MemoryOffset_LowBit);
/*802AA638 002A7438*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AA63C 002A743C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AA640 002A7440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA644 002A7444*/ PPC::Runtime::ASM::beq(.L_802AA668);
/*802AA648 002A7448*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r30));
/*802AA64C 002A744C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802AA650 002A7450*/ PPC::Runtime::ASM::beq(.L_802AA668);
/*802AA654 002A7454*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802AA658 002A7458*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802AA65C 002A745C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802AA660 002A7460*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA664 002A7464*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA668, 0x802AA668) //this is a jump label
/*802AA668 002A7468*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x460);
/*802AA66C 002A746C*/ PPC::Runtime::ASM::beq(.L_802AA690);
/*802AA670 002A7470*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r30));
/*802AA674 002A7474*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802AA678 002A7478*/ PPC::Runtime::ASM::beq(.L_802AA690);
/*802AA67C 002A747C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802AA680 002A7480*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802AA684 002A7484*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802AA688 002A7488*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA68C 002A748C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA690, 0x802AA690) //this is a jump label
/*802AA690 002A7490*/ PPC::Runtime::ASM::lis(context->r4, fn_802A5D34 @ Get_MemoryOffset_HighBit);
/*802AA694 002A7494*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x450);
/*802AA698 002A7498*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802A5D34 @ Get_MemoryOffset_LowBit);
/*802AA69C 002A749C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802AA6A0 002A74A0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802AA6A4 002A74A4*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802AA6A8 002A74A8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x400);
/*802AA6AC 002A74AC*/ PPC::Runtime::ASM::beq(.L_802AA79C);
/*802AA6B0 002A74B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC4A4 @ Get_MemoryOffset_HighBit);
/*802AA6B4 002A74B4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x444);
/*802AA6B8 002A74B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BC4A4 @ Get_MemoryOffset_LowBit);
/*802AA6BC 002A74BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r30));
/*802AA6C0 002A74C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802AA6C4 002A74C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r30));
/*802AA6C8 002A74C8*/ PPC::Runtime::ASM::beq(.L_802AA6D8);
/*802AA6CC 002A74CC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802AA6D0 002A74D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802AA6D4 002A74D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA6D8, 0x802AA6D8) //this is a jump label
/*802AA6D8 002A74D8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x400);
/*802AA6DC 002A74DC*/ PPC::Runtime::ASM::beq(.L_802AA79C);
/*802AA6E0 002A74E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802AA6E4 002A74E4*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x430);
/*802AA6E8 002A74E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802AA6EC 002A74EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r30));
/*802AA6F0 002A74F0*/ PPC::Runtime::ASM::beq(.L_802AA724);
/*802AA6F4 002A74F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802AA6F8 002A74F8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AA6FC 002A74FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802AA700 002A7500*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x430, context->r30));
/*802AA704 002A7504*/ PPC::Runtime::ASM::beq(.L_802AA724);
/*802AA708 002A7508*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802AA70C 002A750C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802AA710 002A7510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x430, context->r30));
/*802AA714 002A7514*/ PPC::Runtime::ASM::beq(.L_802AA724);
/*802AA718 002A7518*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802AA71C 002A751C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802AA720 002A7520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x430, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA724, 0x802AA724) //this is a jump label
/*802AA724 002A7524*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x400);
/*802AA728 002A7528*/ PPC::Runtime::ASM::beq(.L_802AA79C);
/*802AA72C 002A752C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AA730 002A7530*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x428);
/*802AA734 002A7534*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AA738 002A7538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r30));
/*802AA73C 002A753C*/ PPC::Runtime::ASM::beq(.L_802AA760);
/*802AA740 002A7540*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AA744 002A7544*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AA748 002A7548*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AA74C 002A754C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x428, context->r30));
/*802AA750 002A7550*/ PPC::Runtime::ASM::beq(.L_802AA760);
/*802AA754 002A7554*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AA758 002A7558*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AA75C 002A755C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x428, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA760, 0x802AA760) //this is a jump label
/*802AA760 002A7560*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x400);
/*802AA764 002A7564*/ PPC::Runtime::ASM::beq(.L_802AA79C);
/*802AA768 002A7568*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AA76C 002A756C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x400);
/*802AA770 002A7570*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AA774 002A7574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r30));
/*802AA778 002A7578*/ PPC::Runtime::ASM::beq(.L_802AA79C);
/*802AA77C 002A757C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AA780 002A7580*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x400);
/*802AA784 002A7584*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AA788 002A7588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r30));
/*802AA78C 002A758C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r30));
/*802AA790 002A7590*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AA794 002A7594*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA798 002A7598*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA79C, 0x802AA79C) //this is a jump label
/*802AA79C 002A759C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*802AA7A0 002A75A0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802AA7A4 002A75A4*/ PPC::Runtime::ASM::bl(fn_802AA8A4);
/*802AA7A8 002A75A8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AA7AC 002A75AC*/ PPC::Runtime::ASM::beq(.L_802AA878);
/*802AA7B0 002A75B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802AA7B4 002A75B4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802AA7B8 002A75B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802AA7BC 002A75BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AA7C0 002A75C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802AA7C4 002A75C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA7C8 002A75C8*/ PPC::Runtime::ASM::beq(.L_802AA7EC);
/*802AA7CC 002A75CC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AA7D0 002A75D0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802AA7D4 002A75D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AA7D8 002A75D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802AA7DC 002A75DC*/ PPC::Runtime::ASM::beq(.L_802AA7EC);
/*802AA7E0 002A75E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AA7E4 002A75E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AA7E8 002A75E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA7EC, 0x802AA7EC) //this is a jump label
/*802AA7EC 002A75EC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AA7F0 002A75F0*/ PPC::Runtime::ASM::beq(.L_802AA864);
/*802AA7F4 002A75F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802AA7F8 002A75F8*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802AA7FC 002A75FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802AA800 002A7600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA804 002A7604*/ PPC::Runtime::ASM::beq(.L_802AA828);
/*802AA808 002A7608*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802AA80C 002A760C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802AA810 002A7610*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802AA814 002A7614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802AA818 002A7618*/ PPC::Runtime::ASM::beq(.L_802AA828);
/*802AA81C 002A761C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802AA820 002A7620*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802AA824 002A7624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA828, 0x802AA828) //this is a jump label
/*802AA828 002A7628*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AA82C 002A762C*/ PPC::Runtime::ASM::beq(.L_802AA864);
/*802AA830 002A7630*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802AA834 002A7634*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802AA838 002A7638*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802AA83C 002A763C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA840 002A7640*/ PPC::Runtime::ASM::beq(.L_802AA864);
/*802AA844 002A7644*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802AA848 002A7648*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802AA84C 002A764C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802AA850 002A7650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA854 002A7654*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA858 002A7658*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802AA85C 002A765C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802AA860 002A7660*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802AA864, 0x802AA864) //this is a jump label
/*802AA864 002A7664*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802AA868 002A7668*/ PPC::Runtime::ASM::beq(.L_802AA878);
/*802AA86C 002A766C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802AA870 002A7670*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802AA874 002A7674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802AA878, 0x802AA878) //this is a jump label
/*802AA878 002A7678*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AA87C 002A767C*/ PPC::Runtime::ASM::ble(.L_802AA888);
/*802AA880 002A7680*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA884 002A7684*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AA888, 0x802AA888) //this is a jump label
/*802AA888 002A7688*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA88C 002A768C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA890 002A7690*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA894 002A7694*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AA898 002A7698*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AA89C 002A769C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AA8A0 002A76A0*/ PPC::Runtime::ASM::blr();
}