//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055DAC.hpp"
#include "fn_80056074.hpp"



void fn_801F3600(PPC::Runtime::GCContext* context)
{
/*801F3600 001F0400*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801F3604 001F0404*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F3608 001F0408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F360C 001F040C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F3610 001F0410*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F3614 001F0414*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F3618 001F0418*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F361C 001F041C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F3620 001F0420*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F3624 001F0424*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F3628 001F0428*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801F362C 001F042C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801F3630 001F0430*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801F3634 001F0434*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3638 001F0438*/ PPC::Runtime::ASM::bne(.L_801F3648);
/*801F363C 001F043C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801F3640 001F0440*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3644 001F0444*/ PPC::Runtime::ASM::beq(.L_801F37A8);
RUNTIME_PPC_JUMP_LABEL(.L_801F3648, 0x801F3648) //this is a jump label
/*801F3648 001F0448*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/* 801F364C 001F044C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801F3650 001F0450*/ PPC::Runtime::ASM::bne(.L_801F37A0);
/*801F3654 001F0454*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E2068 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F3658 001F0458*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F365C 001F045C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158c, context->r31));
/*801F3660 001F0460*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F3664 001F0464*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f2, context->f1);
/*801F3668 001F0468*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158c, context->r31));
/*801F366C 001F046C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158c, context->r31));
/*801F3670 001F0470*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801F3674 001F0474*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801F3678 001F0478*/ PPC::Runtime::ASM::bne(.L_801F3680);
/*801F367C 001F047C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801F3680, 0x801F3680) //this is a jump label
/*801F3680 001F0480*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F3684 001F0484*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158c, context->r31));
/*801F3688 001F0488*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
/*801F368C 001F048C*/ PPC::Runtime::ASM::b(.L_801F36C4);
RUNTIME_PPC_JUMP_LABEL(.L_801F3690, 0x801F3690) //this is a jump label
/*801F3690 001F0490*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801F3694 001F0494*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r28);
/*801F3698 001F0498*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 801F369C 001F049C  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*801F36A0 001F04A0*/ PPC::Runtime::ASM::beq(.L_801F36BC);
/*801F36A4 001F04A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801F36A8 001F04A8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801F36AC 001F04AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*801F36B0 001F04B0*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F36B4 001F04B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801F36B8 001F04B8*/ PPC::Runtime::ASM::bl(fn_80055DAC);
RUNTIME_PPC_JUMP_LABEL(.L_801F36BC, 0x801F36BC) //this is a jump label
/*801F36BC 001F04BC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*801F36C0 001F04C0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F36C4, 0x801F36C4) //this is a jump label
/*801F36C4 001F04C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801F36C8 001F04C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801F36CC 001F04CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801F36D0 001F04D0*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F36D4 001F04D4*/ PPC::Runtime::ASM::blt(.L_801F3690);
/*801F36D8 001F04D8*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*801F36DC 001F04DC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F36E0 001F04E0*/ PPC::Runtime::ASM::b(.L_801F3730);
RUNTIME_PPC_JUMP_LABEL(.L_801F36E4, 0x801F36E4) //this is a jump label
/*801F36E4 001F04E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf10, context->r28));
/*801F36E8 001F04E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F36EC 001F04EC*/ PPC::Runtime::ASM::beq(.L_801F3728);
/*801F36F0 001F04F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf88, context->r28));
/*801F36F4 001F04F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F36F8 001F04F8*/ PPC::Runtime::ASM::beq(.L_801F3728);
/*801F36FC 001F04FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x159d, context->r31));
/*801F3700 001F0500*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3704 001F0504*/ PPC::Runtime::ASM::beq(.L_801F3714);
/*801F3708 001F0508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11d4, context->r28));
/*801F370C 001F050C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3710 001F0510*/ PPC::Runtime::ASM::bne(.L_801F3728);
RUNTIME_PPC_JUMP_LABEL(.L_801F3714, 0x801F3714) //this is a jump label
/*801F3714 001F0514*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801F3718 001F0518*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801F371C 001F051C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F3720 001F0520*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf10, context->r28));
/*801F3724 001F0524*/ PPC::Runtime::ASM::bl(fn_80056074);
RUNTIME_PPC_JUMP_LABEL(.L_801F3728, 0x801F3728) //this is a jump label
/*801F3728 001F0528*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*801F372C 001F052C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F3730, 0x801F3730) //this is a jump label
/*801F3730 001F0530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea4, context->r31));
/*801F3734 001F0534*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F3738 001F0538*/ PPC::Runtime::ASM::blt(.L_801F36E4);
/*801F373C 001F053C*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*801F3740 001F0540*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F3744 001F0544*/ PPC::Runtime::ASM::b(.L_801F3794);
RUNTIME_PPC_JUMP_LABEL(.L_801F3748, 0x801F3748) //this is a jump label
/*801F3748 001F0548*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1000, context->r28));
/*801F374C 001F054C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F3750 001F0550*/ PPC::Runtime::ASM::beq(.L_801F378C);
/*801F3754 001F0554*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1078, context->r28));
/*801F3758 001F0558*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F375C 001F055C*/ PPC::Runtime::ASM::beq(.L_801F378C);
/*801F3760 001F0560*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x159d, context->r31));
/*801F3764 001F0564*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3768 001F0568*/ PPC::Runtime::ASM::beq(.L_801F3778);
/*801F376C 001F056C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c4, context->r28));
/*801F3770 001F0570*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3774 001F0574*/ PPC::Runtime::ASM::bne(.L_801F378C);
RUNTIME_PPC_JUMP_LABEL(.L_801F3778, 0x801F3778) //this is a jump label
/*801F3778 001F0578*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801F377C 001F057C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801F3780 001F0580*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F3784 001F0584*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1000, context->r28));
/*801F3788 001F0588*/ PPC::Runtime::ASM::bl(fn_HSD_TObjAnim?);
RUNTIME_PPC_JUMP_LABEL(.L_801F378C, 0x801F378C) //this is a jump label
/*801F378C 001F058C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*801F3790 001F0590*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F3794, 0x801F3794) //this is a jump label
/*801F3794 001F0594*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea8, context->r31));
/*801F3798 001F0598*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F379C 001F059C*/ PPC::Runtime::ASM::blt(.L_801F3748);
RUNTIME_PPC_JUMP_LABEL(.L_801F37A0, 0x801F37A0) //this is a jump label
/*801F37A0 001F05A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F37A4 001F05A4*/ PPC::Runtime::ASM::b(.L_801F37AC);
RUNTIME_PPC_JUMP_LABEL(.L_801F37A8, 0x801F37A8) //this is a jump label
/*801F37A8 001F05A8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F37AC, 0x801F37AC) //this is a jump label
/*801F37AC 001F05AC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F37B0 001F05B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F37B4 001F05B4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F37B8 001F05B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F37BC 001F05BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F37C0 001F05C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F37C4 001F05C4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F37C8 001F05C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F37CC 001F05CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801F37D0 001F05D0*/ PPC::Runtime::ASM::blr();
}