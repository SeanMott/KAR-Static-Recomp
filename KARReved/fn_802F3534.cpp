//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DE0E4.hpp"



void fn_802F3534(PPC::Runtime::GCContext* context)
{
/*802F3534 002F0334*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*802F3538 002F0338*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F353C 002F033C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802F3540 002F0340*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F3544 002F0344*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F3548 002F0348*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F354C 002F034C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F3550 002F0350*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F3554 002F0354*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F3558 002F0358*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802F355C 002F035C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r12));
/*802F3560 002F0360*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F3564 002F0364*/ PPC::Runtime::ASM::bctrl();
/*802F3568 002F0368*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802F356C 002F036C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F3570 002F0370*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x8);
/*802F3574 002F0374*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20f8, context->r3));
/*802F3578 002F0378*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F357C 002F037C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r5));
/*802F3580 002F0380*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802F3584 002F0384*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802F3588 002F0388*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802F358C 002F038C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F3590 002F0390*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r5));
/*802F3594 002F0394*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802F3598 002F0398  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802F359C 002F039C*/ PPC::Runtime::ASM::bne(.L_802F35B0);
/*802F35A0 002F03A0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F35A4 002F03A4*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*802F35A8 002F03A8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F35AC 002F03AC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F35B0, 0x802F35B0) //this is a jump label
/*802F35B0 002F03B0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802F35B4 002F03B4*/ PPC::Runtime::ASM::bne(.L_802F35C8);
/*802F35B8 002F03B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F35BC 002F03BC*/ PPC::Runtime::ASM::li(context->r4, 0x317);
/*802F35C0 002F03C0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9814 @ Get_MemoryOffset_SDA21);
/*802F35C4 002F03C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F35C8, 0x802F35C8) //this is a jump label
/*802F35C8 002F03C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802F35CC 002F03CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*802F35D0 002F03D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802F35D4 002F03D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802F35D8 002F03D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F35DC 002F03DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F35E0 002F03E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F35E4 002F03E4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802F35E8 002F03E8*/ PPC::Runtime::ASM::bne(.L_802F3634);
/*802F35EC 002F03EC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802F35F0 002F03F0*/ PPC::Runtime::ASM::beq(.L_802F3634);
/*802F35F4 002F03F4*/ PPC::Runtime::ASM::bne(.L_802F3608);
/*802F35F8 002F03F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F35FC 002F03FC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F3600 002F0400*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F3604 002F0404*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3608, 0x802F3608) //this is a jump label
/*802F3608 002F0408*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F360C 002F040C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F3610 002F0410*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F3614 002F0414*/ PPC::Runtime::ASM::bne(.L_802F3624);
/*802F3618 002F0418*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F361C 002F041C*/ PPC::Runtime::ASM::beq(.L_802F3624);
/*802F3620 002F0420*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F3624, 0x802F3624) //this is a jump label
/* 802F3624 002F0424  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F3628 002F0428*/ PPC::Runtime::ASM::bne(.L_802F3634);
/*802F362C 002F042C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F3630 002F0430*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802F3634, 0x802F3634) //this is a jump label
/*802F3634 002F0434*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F3638 002F0438*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F363C 002F043C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r5));
/*802F3640 002F0440*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x8);
/*802F3644 002F0444*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802F3648 002F0448  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802F364C 002F044C*/ PPC::Runtime::ASM::bne(.L_802F3660);
/*802F3650 002F0450*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F3654 002F0454*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*802F3658 002F0458*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F365C 002F045C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3660, 0x802F3660) //this is a jump label
/*802F3660 002F0460*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802F3664 002F0464*/ PPC::Runtime::ASM::bne(.L_802F367C);
/*802F3668 002F0468*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D8FB8 @ Get_MemoryOffset_HighBit);
/*802F366C 002F046C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F3670 002F0470*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804D8FB8 @ Get_MemoryOffset_LowBit);
/*802F3674 002F0474*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*802F3678 002F0478*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F367C, 0x802F367C) //this is a jump label
/*802F367C 002F047C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802F3680 002F0480*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*802F3684 002F0484*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F3688 002F0488*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*802F368C 002F048C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802F3690 002F0490*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*802F3694 002F0494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802F3698 002F0498*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802F369C 002F049C*/ PPC::Runtime::ASM::bne(.L_802F36E8);
/*802F36A0 002F04A0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802F36A4 002F04A4*/ PPC::Runtime::ASM::beq(.L_802F36E8);
/*802F36A8 002F04A8*/ PPC::Runtime::ASM::bne(.L_802F36BC);
/*802F36AC 002F04AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F36B0 002F04B0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F36B4 002F04B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F36B8 002F04B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F36BC, 0x802F36BC) //this is a jump label
/*802F36BC 002F04BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802F36C0 002F04C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F36C4 002F04C4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F36C8 002F04C8*/ PPC::Runtime::ASM::bne(.L_802F36D8);
/*802F36CC 002F04CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F36D0 002F04D0*/ PPC::Runtime::ASM::beq(.L_802F36D8);
/*802F36D4 002F04D4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F36D8, 0x802F36D8) //this is a jump label
/* 802F36D8 002F04D8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F36DC 002F04DC*/ PPC::Runtime::ASM::bne(.L_802F36E8);
/*802F36E0 002F04E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802F36E4 002F04E4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802F36E8, 0x802F36E8) //this is a jump label
/*802F36E8 002F04E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F36EC 002F04EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802F36F0 002F04F0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802F36F4 002F04F4*/ PPC::Runtime::ASM::bl(fn_atan2?);
/*802F36F8 002F04F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F36FC 002F04FC*/ PPC::Runtime::ASM::frsp(context->f31, context->f1);
/*802F3700 002F0500*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F3704 002F0504*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802F3708 002F0508*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802F370C 002F050C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802F3710 002F0510*/ PPC::Runtime::ASM::bne(.L_802F3724);
/*802F3714 002F0514*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F3718 002F0518*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*802F371C 002F051C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F3720 002F0520*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3724, 0x802F3724) //this is a jump label
/*802F3724 002F0524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802F3728 002F0528*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*802F372C 002F052C*/ PPC::Runtime::ASM::beq(.L_802F3744);
/*802F3730 002F0530*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D8FC4 @ Get_MemoryOffset_HighBit);
/*802F3734 002F0534*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F3738 002F0538*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804D8FC4 @ Get_MemoryOffset_LowBit);
/*802F373C 002F053C*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*802F3740 002F0540*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3744, 0x802F3744) //this is a jump label
/*802F3744 002F0544*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*802F3748 002F0548*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802F374C 002F054C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802F3750 002F0550*/ PPC::Runtime::ASM::bne(.L_802F379C);
/*802F3754 002F0554*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802F3758 002F0558*/ PPC::Runtime::ASM::beq(.L_802F379C);
/*802F375C 002F055C*/ PPC::Runtime::ASM::bne(.L_802F3770);
/*802F3760 002F0560*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F3764 002F0564*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F3768 002F0568*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F376C 002F056C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3770, 0x802F3770) //this is a jump label
/*802F3770 002F0570*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802F3774 002F0574*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F3778 002F0578*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F377C 002F057C*/ PPC::Runtime::ASM::bne(.L_802F378C);
/*802F3780 002F0580*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F3784 002F0584*/ PPC::Runtime::ASM::beq(.L_802F378C);
/*802F3788 002F0588*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F378C, 0x802F378C) //this is a jump label
/* 802F378C 002F058C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F3790 002F0590*/ PPC::Runtime::ASM::bne(.L_802F379C);
/*802F3794 002F0594*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802F3798 002F0598*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802F379C, 0x802F379C) //this is a jump label
/*802F379C 002F059C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F37A0 002F05A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802F37A4 002F05A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F37A8 002F05A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802F37AC 002F05AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F37B0 002F05B0*/ PPC::Runtime::ASM::bctrl();
/*802F37B4 002F05B4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F37B8 002F05B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802F37BC 002F05BC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F37C0 002F05C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F37C4 002F05C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F37C8 002F05C8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F37CC 002F05CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F37D0 002F05D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*802F37D4 002F05D4*/ PPC::Runtime::ASM::blr();
}