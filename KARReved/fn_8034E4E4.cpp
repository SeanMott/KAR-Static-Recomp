//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8034E4E4(PPC::Runtime::GCContext* context)
{
/*8034E4E4 0034B2E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8034E4E8 0034B2E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8034E4EC 0034B2EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8034E4F0 0034B2F0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8034E4F4 0034B2F4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8034E4F8 0034B2F8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8034E4FC 0034B2FC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8034E500 0034B300*/ PPC::Runtime::ASM::lis(context->r5, lbl_804EA548 @ Get_MemoryOffset_HighBit);
/*8034E504 0034B304*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8034E508 0034B308*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8034E50C 0034B30C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034E510 0034B310*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_804EA548 @ Get_MemoryOffset_LowBit);
/*8034E514 0034B314*/ PPC::Runtime::ASM::b(.L_8034E528);
RUNTIME_PPC_JUMP_LABEL(.L_8034E518, 0x8034E518) //this is a jump label
/*8034E518 0034B318*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E51C 0034B31C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E520 0034B320*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E524 0034B324*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E528, 0x8034E528) //this is a jump label
/*8034E528 0034B328*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*8034E52C 0034B32C*/ PPC::Runtime::ASM::blt(.L_8034E518);
/*8034E530 0034B330*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa64);
/*8034E534 0034B334*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E538 0034B338*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E53C 0034B33C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034E540 0034B340*/ PPC::Runtime::ASM::b(.L_8034E554);
RUNTIME_PPC_JUMP_LABEL(.L_8034E544, 0x8034E544) //this is a jump label
/*8034E544 0034B344*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E548 0034B348*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E54C 0034B34C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E550 0034B350*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E554, 0x8034E554) //this is a jump label
/*8034E554 0034B354*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*8034E558 0034B358*/ PPC::Runtime::ASM::blt(.L_8034E544);
/*8034E55C 0034B35C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB370 @ Get_MemoryOffset_SDA21);
/*8034E560 0034B360*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E564 0034B364*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E568 0034B368*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E56C 0034B36C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E570 0034B370*/ PPC::Runtime::ASM::b(.L_8034E584);
RUNTIME_PPC_JUMP_LABEL(.L_8034E574, 0x8034E574) //this is a jump label
/*8034E574 0034B374*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E578 0034B378*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E57C 0034B37C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E580 0034B380*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E584, 0x8034E584) //this is a jump label
/*8034E584 0034B384*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E588 0034B388*/ PPC::Runtime::ASM::blt(.L_8034E574);
/*8034E58C 0034B38C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB370 @ Get_MemoryOffset_SDA21);
/*8034E590 0034B390*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E594 0034B394*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E598 0034B398*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E59C 0034B39C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E5A0 0034B3A0*/ PPC::Runtime::ASM::b(.L_8034E5B4);
RUNTIME_PPC_JUMP_LABEL(.L_8034E5A4, 0x8034E5A4) //this is a jump label
/*8034E5A4 0034B3A4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E5A8 0034B3A8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E5AC 0034B3AC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E5B0 0034B3B0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E5B4, 0x8034E5B4) //this is a jump label
/*8034E5B4 0034B3B4*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E5B8 0034B3B8*/ PPC::Runtime::ASM::blt(.L_8034E5A4);
/*8034E5BC 0034B3BC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8c0);
/*8034E5C0 0034B3C0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E5C4 0034B3C4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E5C8 0034B3C8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E5CC 0034B3CC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E5D0 0034B3D0*/ PPC::Runtime::ASM::b(.L_8034E5E4);
RUNTIME_PPC_JUMP_LABEL(.L_8034E5D4, 0x8034E5D4) //this is a jump label
/*8034E5D4 0034B3D4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E5D8 0034B3D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E5DC 0034B3DC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E5E0 0034B3E0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E5E4, 0x8034E5E4) //this is a jump label
/*8034E5E4 0034B3E4*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E5E8 0034B3E8*/ PPC::Runtime::ASM::blt(.L_8034E5D4);
/*8034E5EC 0034B3EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8034E5F0 0034B3F0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8d0);
/*8034E5F4 0034B3F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8034E5F8 0034B3F8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8034E5FC 0034B3FC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/* 8034E600 0034B400  4C C6 32 42 */ crset context->cr1eq
/*8034E604 0034B404*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E608 0034B408*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8034E60C 0034B40C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E610 0034B410*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E614 0034B414*/ PPC::Runtime::ASM::b(.L_8034E628);
RUNTIME_PPC_JUMP_LABEL(.L_8034E618, 0x8034E618) //this is a jump label
/*8034E618 0034B418*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E61C 0034B41C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E620 0034B420*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E624 0034B424*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E628, 0x8034E628) //this is a jump label
/*8034E628 0034B428*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E62C 0034B42C*/ PPC::Runtime::ASM::blt(.L_8034E618);
/*8034E630 0034B430*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8ec);
/*8034E634 0034B434*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034E638 0034B438*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E63C 0034B43C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E640 0034B440*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E644 0034B444*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E648 0034B448*/ PPC::Runtime::ASM::b(.L_8034E65C);
RUNTIME_PPC_JUMP_LABEL(.L_8034E64C, 0x8034E64C) //this is a jump label
/*8034E64C 0034B44C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E650 0034B450*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E654 0034B454*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E658 0034B458*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E65C, 0x8034E65C) //this is a jump label
/*8034E65C 0034B45C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E660 0034B460*/ PPC::Runtime::ASM::blt(.L_8034E64C);
/*8034E664 0034B464*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034E668 0034B468*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034E66C 0034B46C  4C C6 32 42 */ crset context->cr1eq
/*8034E670 0034B470*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E674 0034B474*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8034E678 0034B478*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E67C 0034B47C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E680 0034B480*/ PPC::Runtime::ASM::b(.L_8034E694);
RUNTIME_PPC_JUMP_LABEL(.L_8034E684, 0x8034E684) //this is a jump label
/*8034E684 0034B484*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E688 0034B488*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E68C 0034B48C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E690 0034B490*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E694, 0x8034E694) //this is a jump label
/*8034E694 0034B494*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E698 0034B498*/ PPC::Runtime::ASM::blt(.L_8034E684);
/*8034E69C 0034B49C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8fc);
/*8034E6A0 0034B4A0*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034E6A4 0034B4A4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E6A8 0034B4A8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E6AC 0034B4AC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E6B0 0034B4B0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E6B4 0034B4B4*/ PPC::Runtime::ASM::b(.L_8034E6C8);
RUNTIME_PPC_JUMP_LABEL(.L_8034E6B8, 0x8034E6B8) //this is a jump label
/*8034E6B8 0034B4B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E6BC 0034B4BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E6C0 0034B4C0*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E6C4 0034B4C4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E6C8, 0x8034E6C8) //this is a jump label
/*8034E6C8 0034B4C8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E6CC 0034B4CC*/ PPC::Runtime::ASM::blt(.L_8034E6B8);
/*8034E6D0 0034B4D0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034E6D4 0034B4D4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034E6D8 0034B4D8  4C C6 32 42 */ crset context->cr1eq
/*8034E6DC 0034B4DC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E6E0 0034B4E0*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8034E6E4 0034B4E4*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E6E8 0034B4E8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E6EC 0034B4EC*/ PPC::Runtime::ASM::b(.L_8034E700);
RUNTIME_PPC_JUMP_LABEL(.L_8034E6F0, 0x8034E6F0) //this is a jump label
/*8034E6F0 0034B4F0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E6F4 0034B4F4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E6F8 0034B4F8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E6FC 0034B4FC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E700, 0x8034E700) //this is a jump label
/*8034E700 0034B500*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E704 0034B504*/ PPC::Runtime::ASM::blt(.L_8034E6F0);
/*8034E708 0034B508*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x90c);
/*8034E70C 0034B50C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034E710 0034B510*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E714 0034B514*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E718 0034B518*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034E71C 0034B51C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E720 0034B520*/ PPC::Runtime::ASM::b(.L_8034E734);
RUNTIME_PPC_JUMP_LABEL(.L_8034E724, 0x8034E724) //this is a jump label
/*8034E724 0034B524*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E728 0034B528*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E72C 0034B52C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E730 0034B530*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E734, 0x8034E734) //this is a jump label
/*8034E734 0034B534*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E738 0034B538*/ PPC::Runtime::ASM::blt(.L_8034E724);
/*8034E73C 0034B53C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034E740 0034B540*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034E744 0034B544  4C C6 32 42 */ crset context->cr1eq
/*8034E748 0034B548*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E74C 0034B54C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E750 0034B550*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E754 0034B554*/ PPC::Runtime::ASM::b(.L_8034E768);
RUNTIME_PPC_JUMP_LABEL(.L_8034E758, 0x8034E758) //this is a jump label
/*8034E758 0034B558*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E75C 0034B55C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E760 0034B560*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E764 0034B564*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E768, 0x8034E768) //this is a jump label
/*8034E768 0034B568*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E76C 0034B56C*/ PPC::Runtime::ASM::blt(.L_8034E758);
/*8034E770 0034B570*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*8034E774 0034B574*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E778 0034B578*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E77C 0034B57C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E780 0034B580*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E784 0034B584*/ PPC::Runtime::ASM::b(.L_8034E798);
RUNTIME_PPC_JUMP_LABEL(.L_8034E788, 0x8034E788) //this is a jump label
/*8034E788 0034B588*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E78C 0034B58C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E790 0034B590*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E794 0034B594*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E798, 0x8034E798) //this is a jump label
/*8034E798 0034B598*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E79C 0034B59C*/ PPC::Runtime::ASM::blt(.L_8034E788);
/*8034E7A0 0034B5A0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x92c);
/*8034E7A4 0034B5A4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034E7A8 0034B5A8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E7AC 0034B5AC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E7B0 0034B5B0*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E7B4 0034B5B4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E7B8 0034B5B8*/ PPC::Runtime::ASM::b(.L_8034E7CC);
RUNTIME_PPC_JUMP_LABEL(.L_8034E7BC, 0x8034E7BC) //this is a jump label
/*8034E7BC 0034B5BC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E7C0 0034B5C0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E7C4 0034B5C4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E7C8 0034B5C8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E7CC, 0x8034E7CC) //this is a jump label
/*8034E7CC 0034B5CC*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E7D0 0034B5D0*/ PPC::Runtime::ASM::blt(.L_8034E7BC);
/*8034E7D4 0034B5D4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*8034E7D8 0034B5D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E7DC 0034B5DC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E7E0 0034B5E0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034E7E4 0034B5E4*/ PPC::Runtime::ASM::mr(context->r27, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8034E7E8, 0x8034E7E8) //this is a jump label
/*8034E7E8 0034B5E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*8034E7EC 0034B5EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 8034E7F0 0034B5F0  4C C6 32 42 */ crset context->cr1eq
/*8034E7F4 0034B5F4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E7F8 0034B5F8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8034E7FC 0034B5FC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*8034E800 0034B600*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x4);
/*8034E804 0034B604*/ PPC::Runtime::ASM::blt(.L_8034E7E8);
/*8034E808 0034B608*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*8034E80C 0034B60C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E810 0034B610*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E814 0034B614*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8034E818 0034B618*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E81C 0034B61C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E820 0034B620*/ PPC::Runtime::ASM::b(.L_8034E834);
RUNTIME_PPC_JUMP_LABEL(.L_8034E824, 0x8034E824) //this is a jump label
/*8034E824 0034B624*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E828 0034B628*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E82C 0034B62C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E830 0034B630*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E834, 0x8034E834) //this is a jump label
/*8034E834 0034B634*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E838 0034B638*/ PPC::Runtime::ASM::blt(.L_8034E824);
/*8034E83C 0034B63C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa0c);
/*8034E840 0034B640*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034E844 0034B644*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E848 0034B648*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E84C 0034B64C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E850 0034B650*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E854 0034B654*/ PPC::Runtime::ASM::b(.L_8034E868);
RUNTIME_PPC_JUMP_LABEL(.L_8034E858, 0x8034E858) //this is a jump label
/*8034E858 0034B658*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E85C 0034B65C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E860 0034B660*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E864 0034B664*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E868, 0x8034E868) //this is a jump label
/*8034E868 0034B668*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E86C 0034B66C*/ PPC::Runtime::ASM::blt(.L_8034E858);
/*8034E870 0034B670*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034E874 0034B674*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034E878 0034B678  4C C6 32 42 */ crset context->cr1eq
/*8034E87C 0034B67C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E880 0034B680*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8034E884 0034B684*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E888 0034B688*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E88C 0034B68C*/ PPC::Runtime::ASM::b(.L_8034E8A0);
RUNTIME_PPC_JUMP_LABEL(.L_8034E890, 0x8034E890) //this is a jump label
/*8034E890 0034B690*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E894 0034B694*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E898 0034B698*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E89C 0034B69C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E8A0, 0x8034E8A0) //this is a jump label
/*8034E8A0 0034B6A0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E8A4 0034B6A4*/ PPC::Runtime::ASM::blt(.L_8034E890);
/*8034E8A8 0034B6A8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa78);
/*8034E8AC 0034B6AC*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034E8B0 0034B6B0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E8B4 0034B6B4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E8B8 0034B6B8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034E8BC 0034B6BC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E8C0 0034B6C0*/ PPC::Runtime::ASM::b(.L_8034E8D4);
RUNTIME_PPC_JUMP_LABEL(.L_8034E8C4, 0x8034E8C4) //this is a jump label
/*8034E8C4 0034B6C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E8C8 0034B6C8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E8CC 0034B6CC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E8D0 0034B6D0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E8D4, 0x8034E8D4) //this is a jump label
/*8034E8D4 0034B6D4*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034E8D8 0034B6D8*/ PPC::Runtime::ASM::blt(.L_8034E8C4);
/*8034E8DC 0034B6DC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034E8E0 0034B6E0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034E8E4 0034B6E4  4C C6 32 42 */ crset context->cr1eq
/*8034E8E8 0034B6E8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E8EC 0034B6EC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8034E8F0 0034B6F0*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x1);
/*8034E8F4 0034B6F4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E8F8 0034B6F8*/ PPC::Runtime::ASM::b(.L_8034E90C);
RUNTIME_PPC_JUMP_LABEL(.L_8034E8FC, 0x8034E8FC) //this is a jump label
/*8034E8FC 0034B6FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E900 0034B700*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E904 0034B704*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E908 0034B708*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E90C, 0x8034E90C) //this is a jump label
/*8034E90C 0034B70C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r29);
/*8034E910 0034B710*/ PPC::Runtime::ASM::blt(.L_8034E8FC);
/*8034E914 0034B714*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa8c);
/*8034E918 0034B718*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034E91C 0034B71C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E920 0034B720*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E924 0034B724*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x1);
/*8034E928 0034B728*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034E92C 0034B72C*/ PPC::Runtime::ASM::b(.L_8034E940);
RUNTIME_PPC_JUMP_LABEL(.L_8034E930, 0x8034E930) //this is a jump label
/*8034E930 0034B730*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E934 0034B734*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E938 0034B738*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E93C 0034B73C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E940, 0x8034E940) //this is a jump label
/*8034E940 0034B740*/ PPC::Runtime::ASM::cmplw(context->r27, context->r29);
/*8034E944 0034B744*/ PPC::Runtime::ASM::blt(.L_8034E930);
/*8034E948 0034B748*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034E94C 0034B74C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034E950 0034B750  4C C6 32 42 */ crset context->cr1eq
/*8034E954 0034B754*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E958 0034B758*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034E95C 0034B75C*/ PPC::Runtime::ASM::b(.L_8034E970);
RUNTIME_PPC_JUMP_LABEL(.L_8034E960, 0x8034E960) //this is a jump label
/*8034E960 0034B760*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034E964 0034B764*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E968 0034B768*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E96C 0034B76C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034E970, 0x8034E970) //this is a jump label
/*8034E970 0034B770*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*8034E974 0034B774*/ PPC::Runtime::ASM::blt(.L_8034E960);
/*8034E978 0034B778*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*8034E97C 0034B77C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034E980 0034B780*/ PPC::Runtime::ASM::bl(OSReport);
/*8034E984 0034B784*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8034E988 0034B788*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8034E98C 0034B78C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8034E990 0034B790*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8034E994 0034B794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8034E998 0034B798*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8034E99C 0034B79C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8034E9A0 0034B7A0*/ PPC::Runtime::ASM::blr();
}