//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190A88.hpp"
#include "fn_removeAbilityUponGettingAbility.hpp"
#include "fn_801915C4.hpp"
#include "fn_8022EE00.hpp"
#include "fn_removeAbilityUponGettingAbility.hpp"
#include "fn_801915C4.hpp"
#include "fn_801AA414.hpp"
#include "fn_fireCrackerInit.hpp"
#include "fn_801AA414.hpp"
#include "fn_801B684C.hpp"
#include "fn_801AA414.hpp"
#include "fn_801B6FD0.hpp"
#include "fn_801AA414.hpp"
#include "fn_801B7AB4.hpp"
#include "fn_801B4E7C.hpp"
#include "fn_801B7844.hpp"
#include "fn_801B80D4.hpp"
#include "fn_801B7E0C.hpp"
#include "fn_ground_chargeAnimation.hpp"



void fn_801A8630(PPC::Runtime::GCContext* context)
{
/*801A8630 001A5430*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A8634 001A5434*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A8638 001A5438*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A863C 001A543C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A8640 001A5440*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A8644 001A5444*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A8648 001A5448*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A864C 001A544C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801A8650 001A5450*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x458, context->r3));
/*801A8654 001A5454*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801A8658 001A5458*/ PPC::Runtime::ASM::beq(.L_801A86C4);
/*801A865C 001A545C*/ PPC::Runtime::ASM::bl(fn_80190A88);
/*801A8660 001A5460*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x458, context->r28));
/*801A8664 001A5464*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*801A8668 001A5468*/ PPC::Runtime::ASM::beq(.L_801A86B0);
/*801A866C 001A546C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AF4F0 @ Get_MemoryOffset_HighBit);
/*801A8670 001A5470*/ PPC::Runtime::ASM::slwi(context->r30, context->r29, 2);
/*801A8674 001A5474*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804AF4F0 @ Get_MemoryOffset_LowBit);
/*801A8678 001A5478*/ PPC::Runtime::ASM::lwzx(context->r0, context->r31, context->r30);
/*801A867C 001A547C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A8680 001A5480*/ PPC::Runtime::ASM::beq(.L_801A86B0);
/*801A8684 001A5484*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8688 001A5488*/ PPC::Runtime::ASM::bl(fn_removeAbilityUponGettingAbility);
/*801A868C 001A548C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8690 001A5490*/ PPC::Runtime::ASM::bl(fn_801915C4);
/*801A8694 001A5494*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*801A8698 001A5498*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801A869C 001A549C*/ PPC::Runtime::ASM::bl(fn_8022EE00);
/*801A86A0 001A54A0*/ PPC::Runtime::ASM::lwzx(context->r12, context->r31, context->r30);
/*801A86A4 001A54A4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A86A8 001A54A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801A86AC 001A54AC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801A86B0, 0x801A86B0) //this is a jump label
/*801A86B0 001A54B0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801A86B4 001A54B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A86B8 001A54B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x458, context->r28));
/*801A86BC 001A54BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r28));
/*801A86C0 001A54C0*/ PPC::Runtime::ASM::b(.L_801A877C);
RUNTIME_PPC_JUMP_LABEL(.L_801A86C4, 0x801A86C4) //this is a jump label
/*801A86C4 001A54C4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r28));
/*801A86C8 001A54C8*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*801A86CC 001A54CC*/ PPC::Runtime::ASM::beq(.L_801A8778);
/*801A86D0 001A54D0*/ PPC::Runtime::ASM::bl(fn_removeAbilityUponGettingAbility);
/*801A86D4 001A54D4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A86D8 001A54D8*/ PPC::Runtime::ASM::bl(fn_801915C4);
/*801A86DC 001A54DC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*801A86E0 001A54E0*/ PPC::Runtime::ASM::beq(.L_801A8734);
/*801A86E4 001A54E4*/ PPC::Runtime::ASM::bge(.L_801A86F8);
/*801A86E8 001A54E8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*801A86EC 001A54EC*/ PPC::Runtime::ASM::beq(.L_801A8704);
/*801A86F0 001A54F0*/ PPC::Runtime::ASM::bge(.L_801A871C);
/*801A86F4 001A54F4*/ PPC::Runtime::ASM::b(.L_801A8764);
RUNTIME_PPC_JUMP_LABEL(.L_801A86F8, 0x801A86F8) //this is a jump label
/*801A86F8 001A54F8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*801A86FC 001A54FC*/ PPC::Runtime::ASM::bge(.L_801A8764);
/*801A8700 001A5500*/ PPC::Runtime::ASM::b(.L_801A874C);
RUNTIME_PPC_JUMP_LABEL(.L_801A8704, 0x801A8704) //this is a jump label
/*801A8704 001A5504*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8708 001A5508*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801A870C 001A550C*/ PPC::Runtime::ASM::bl(fn_801AA414);
/*801A8710 001A5510*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8714 001A5514*/ PPC::Runtime::ASM::bl(fn_fireCrackerInit);
/*801A8718 001A5518*/ PPC::Runtime::ASM::b(.L_801A8764);
RUNTIME_PPC_JUMP_LABEL(.L_801A871C, 0x801A871C) //this is a jump label
/*801A871C 001A551C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8720 001A5520*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801A8724 001A5524*/ PPC::Runtime::ASM::bl(fn_801AA414);
/*801A8728 001A5528*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A872C 001A552C*/ PPC::Runtime::ASM::bl(fn_801B684C);
/*801A8730 001A5530*/ PPC::Runtime::ASM::b(.L_801A8764);
RUNTIME_PPC_JUMP_LABEL(.L_801A8734, 0x801A8734) //this is a jump label
/*801A8734 001A5534*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8738 001A5538*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801A873C 001A553C*/ PPC::Runtime::ASM::bl(fn_801AA414);
/*801A8740 001A5540*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8744 001A5544*/ PPC::Runtime::ASM::bl(fn_801B6FD0);
/*801A8748 001A5548*/ PPC::Runtime::ASM::b(.L_801A8764);
RUNTIME_PPC_JUMP_LABEL(.L_801A874C, 0x801A874C) //this is a jump label
/*801A874C 001A554C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8750 001A5550*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801A8754 001A5554*/ PPC::Runtime::ASM::bl(fn_801AA414);
/*801A8758 001A5558*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A875C 001A555C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A8760 001A5560*/ PPC::Runtime::ASM::bl(fn_801B7AB4);
RUNTIME_PPC_JUMP_LABEL(.L_801A8764, 0x801A8764) //this is a jump label
/*801A8764 001A5564*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801A8768 001A5568*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A876C 001A556C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x458, context->r28));
/*801A8770 001A5570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r28));
/*801A8774 001A5574*/ PPC::Runtime::ASM::b(.L_801A877C);
RUNTIME_PPC_JUMP_LABEL(.L_801A8778, 0x801A8778) //this is a jump label
/*801A8778 001A5578*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A877C, 0x801A877C) //this is a jump label
/*801A877C 001A557C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A8780 001A5580*/ PPC::Runtime::ASM::beq(.L_801A878C);
/*801A8784 001A5584*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A8788 001A5588*/ PPC::Runtime::ASM::b(.L_801A8800);
RUNTIME_PPC_JUMP_LABEL(.L_801A878C, 0x801A878C) //this is a jump label
/*801A878C 001A558C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A8790 001A5590*/ PPC::Runtime::ASM::bl(fn_801B4E7C);
/*801A8794 001A5594*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A8798 001A5598*/ PPC::Runtime::ASM::beq(.L_801A87A4);
/*801A879C 001A559C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A87A0 001A55A0*/ PPC::Runtime::ASM::b(.L_801A8800);
RUNTIME_PPC_JUMP_LABEL(.L_801A87A4, 0x801A87A4) //this is a jump label
/*801A87A4 001A55A4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A87A8 001A55A8*/ PPC::Runtime::ASM::bl(fn_801B7844);
/*801A87AC 001A55AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A87B0 001A55B0*/ PPC::Runtime::ASM::beq(.L_801A87BC);
/*801A87B4 001A55B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A87B8 001A55B8*/ PPC::Runtime::ASM::b(.L_801A8800);
RUNTIME_PPC_JUMP_LABEL(.L_801A87BC, 0x801A87BC) //this is a jump label
/*801A87BC 001A55BC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A87C0 001A55C0*/ PPC::Runtime::ASM::bl(fn_801B80D4);
/*801A87C4 001A55C4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A87C8 001A55C8*/ PPC::Runtime::ASM::beq(.L_801A87D4);
/*801A87CC 001A55CC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A87D0 001A55D0*/ PPC::Runtime::ASM::b(.L_801A8800);
RUNTIME_PPC_JUMP_LABEL(.L_801A87D4, 0x801A87D4) //this is a jump label
/*801A87D4 001A55D4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A87D8 001A55D8*/ PPC::Runtime::ASM::bl(fn_801B7E0C);
/*801A87DC 001A55DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A87E0 001A55E0*/ PPC::Runtime::ASM::beq(.L_801A87EC);
/*801A87E4 001A55E4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A87E8 001A55E8*/ PPC::Runtime::ASM::b(.L_801A8800);
RUNTIME_PPC_JUMP_LABEL(.L_801A87EC, 0x801A87EC) //this is a jump label
/*801A87EC 001A55EC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A87F0 001A55F0*/ PPC::Runtime::ASM::bl(fn_ground_chargeAnimation);
/*801A87F4 001A55F4*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*801A87F8 001A55F8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*801A87FC 001A55FC*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_801A8800, 0x801A8800) //this is a jump label
/*801A8800 001A5600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A8804 001A5604*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A8808 001A5608*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A880C 001A560C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A8810 001A5610*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A8814 001A5614*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A8818 001A5618*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A881C 001A561C*/ PPC::Runtime::ASM::blr();
}