//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A08F0.hpp"
#include "fn_80191758.hpp"
#include "fn_801B9714.hpp"
#include "fn_80190708.hpp"
#include "fn_8019A644.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80064C18.hpp"
#include "fn_80063610.hpp"
#include "fn_801907E8.hpp"
#include "fn_80063610.hpp"
#include "fn_8019BFB4.hpp"
#include "fn_8019BFB4.hpp"
#include "fn_8019BF70.hpp"
#include "fn_8019BFB4.hpp"
#include "fn_80193500.hpp"



void fn_801A3704(PPC::Runtime::GCContext* context)
{
/*801A3704 001A0504*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*801A3708 001A0508*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A370C 001A050C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801A3710 001A0510*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801A3714 001A0514*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801A3718 001A0518*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801A371C 001A051C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801A3720 001A0520*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801A3724 001A0524*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801A3728 001A0528*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801A372C 001A052C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801A3730 001A0530*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*801A3734 001A0534*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801A3738 001A0538*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801A373C 001A053C*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa42, context->r3));
/*801A3740 001A0540*/ PPC::Runtime::ASM::bl(fn_801A08F0);
/* 801A3744 001A0544  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*801A3748 001A0548*/ PPC::Runtime::ASM::bne(.L_801A3750);
/*801A374C 001A054C*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801A3750, 0x801A3750) //this is a jump label
/*801A3750 001A0550*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa44, context->r28));
/*801A3754 001A0554*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A3758 001A0558*/ PPC::Runtime::ASM::bl(fn_80191758);
/*801A375C 001A055C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A3760 001A0560*/ PPC::Runtime::ASM::beq(.L_801A3790);
/*801A3764 001A0564*/ PPC::Runtime::ASM::xoris(context->r3, context->r31, 0x8000);
/*801A3768 001A0568*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801A376C 001A056C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*801A3770 001A0570*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A3774 001A0574*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E12C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3778 001A0578*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801A377C 001A057C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*801A3780 001A0580*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*801A3784 001A0584*/ PPC::Runtime::ASM::bl(fn_801B9714);
/*801A3788 001A0588*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A378C 001A058C*/ PPC::Runtime::ASM::b(.L_801A3794);
RUNTIME_PPC_JUMP_LABEL(.L_801A3790, 0x801A3790) //this is a jump label
/*801A3790 001A0590*/ PPC::Runtime::ASM::li(context->r31, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_801A3794, 0x801A3794) //this is a jump label
/*801A3794 001A0594*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa41, context->r28));
/*801A3798 001A0598*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A379C 001A059C*/ PPC::Runtime::ASM::bl(fn_80190708);
/*801A37A0 001A05A0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A37A4 001A05A4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A37A8 001A05A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*801A37AC 001A05AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r4));
/*801A37B0 001A05B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801A37B4 001A05B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*801A37B8 001A05B8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f31, context->f0);
/*801A37BC 001A05BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*801A37C0 001A05C0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801A37C4 001A05C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801A37C8 001A05C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801A37CC 001A05CC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f3);
/*801A37D0 001A05D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801A37D4 001A05D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801A37D8 001A05D8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f3);
/*801A37DC 001A05DC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801A37E0 001A05E0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f3);
/*801A37E4 001A05E4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801A37E8 001A05E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801A37EC 001A05EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801A37F0 001A05F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801A37F4 001A05F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d0, context->r28));
/*801A37F8 001A05F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801A37FC 001A05FC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r28));
/*801A3800 001A0600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d8, context->r28));
/*801A3804 001A0604*/ PPC::Runtime::ASM::bl(fn_8019A644);
/*801A3808 001A0608*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801A380C 001A060C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801A3810 001A0610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*801A3814 001A0614*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801A3818 001A0618*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A381C 001A061C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A3820 001A0620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*801A3824 001A0624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801A3828 001A0628*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801A382C 001A062C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A3830 001A0630*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E12BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3834 001A0634*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801A3838 001A0638*/ PPC::Runtime::ASM::bge(.L_801A3840);
/*801A383C 001A063C*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_801A3840, 0x801A3840) //this is a jump label
/*801A3840 001A0640*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E12C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3844 001A0644*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801A3848 001A0648*/ PPC::Runtime::ASM::bge(.L_801A3898);
/*801A384C 001A064C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E12BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3850 001A0650*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801A3854 001A0654*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E12C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3858 001A0658*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*801A385C 001A065C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A3860 001A0660*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801A3864 001A0664*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A3868 001A0668*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A386C 001A066C*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801A3870 001A0670*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A3874 001A0674*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A3878 001A0678*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801A387C 001A067C*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*801A3880 001A0680*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*801A3884 001A0684*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801A3888 001A0688*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A388C 001A068C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A3890 001A0690*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801A3894 001A0694*/ PPC::Runtime::ASM::b(.L_801A38B0);
RUNTIME_PPC_JUMP_LABEL(.L_801A3898, 0x801A3898) //this is a jump label
/*801A3898 001A0698*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r28));
/*801A389C 001A069C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r28));
/*801A38A0 001A06A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A38A4 001A06A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A38A8 001A06A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r28));
/*801A38AC 001A06AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801A38B0, 0x801A38B0) //this is a jump label
/*801A38B0 001A06B0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A38B4 001A06B4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x324);
/*801A38B8 001A06B8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A38BC 001A06BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801A38C0 001A06C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801A38C4 001A06C4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801A38C8 001A06C8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801A38CC 001A06CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E12C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A38D0 001A06D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801A38D4 001A06D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A38D8 001A06D8*/ PPC::Runtime::ASM::bl(fn_80063610);
/*801A38DC 001A06DC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A38E0 001A06E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801A38E4 001A06E4*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x330);
/*801A38E8 001A06E8*/ PPC::Runtime::ASM::bl(fn_801907E8);
/*801A38EC 001A06EC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xa6c);
/*801A38F0 001A06F0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801A38F4 001A06F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E12BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A38F8 001A06F8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801A38FC 001A06FC*/ PPC::Runtime::ASM::beq(.L_801A3914);
/*801A3900 001A0700*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xa6c);
/*801A3904 001A0704*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E12C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3908 001A0708*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*801A390C 001A070C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*801A3910 001A0710*/ PPC::Runtime::ASM::bl(fn_80063610);
RUNTIME_PPC_JUMP_LABEL(.L_801A3914, 0x801A3914) //this is a jump label
/*801A3914 001A0714*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*801A3918 001A0718*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E12BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A391C 001A071C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801A3920 001A0720*/ PPC::Runtime::ASM::beq(.L_801A3998);
/*801A3924 001A0724*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*801A3928 001A0728*/ PPC::Runtime::ASM::beq(.L_801A3988);
/*801A392C 001A072C*/ PPC::Runtime::ASM::bge(.L_801A3940);
/*801A3930 001A0730*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*801A3934 001A0734*/ PPC::Runtime::ASM::beq(.L_801A394C);
/*801A3938 001A0738*/ PPC::Runtime::ASM::bge(.L_801A3960);
/*801A393C 001A073C*/ PPC::Runtime::ASM::b(.L_801A3988);
RUNTIME_PPC_JUMP_LABEL(.L_801A3940, 0x801A3940) //this is a jump label
/*801A3940 001A0740*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*801A3944 001A0744*/ PPC::Runtime::ASM::bge(.L_801A3988);
/*801A3948 001A0748*/ PPC::Runtime::ASM::b(.L_801A3974);
RUNTIME_PPC_JUMP_LABEL(.L_801A394C, 0x801A394C) //this is a jump label
/*801A394C 001A074C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A3950 001A0750*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x7);
/*801A3954 001A0754*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A3958 001A0758*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*801A395C 001A075C*/ PPC::Runtime::ASM::b(.L_801A3998);
RUNTIME_PPC_JUMP_LABEL(.L_801A3960, 0x801A3960) //this is a jump label
/*801A3960 001A0760*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A3964 001A0764*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xb);
/*801A3968 001A0768*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A396C 001A076C*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*801A3970 001A0770*/ PPC::Runtime::ASM::b(.L_801A3998);
RUNTIME_PPC_JUMP_LABEL(.L_801A3974, 0x801A3974) //this is a jump label
/*801A3974 001A0774*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A3978 001A0778*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xf);
/*801A397C 001A077C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A3980 001A0780*/ PPC::Runtime::ASM::bl(fn_8019BF70);
/*801A3984 001A0784*/ PPC::Runtime::ASM::b(.L_801A3998);
RUNTIME_PPC_JUMP_LABEL(.L_801A3988, 0x801A3988) //this is a jump label
/*801A3988 001A0788*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A398C 001A078C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801A3990 001A0790*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A3994 001A0794*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
RUNTIME_PPC_JUMP_LABEL(.L_801A3998, 0x801A3998) //this is a jump label
/*801A3998 001A0798*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*801A399C 001A079C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E12BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A39A0 001A07A0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801A39A4 001A07A4*/ PPC::Runtime::ASM::beq(.L_801A3A00);
/*801A39A8 001A07A8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*801A39AC 001A07AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A39B0 001A07B0*/ PPC::Runtime::ASM::beq(.L_801A39E8);
/*801A39B4 001A07B4*/ PPC::Runtime::ASM::bge(.L_801A39C8);
/*801A39B8 001A07B8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*801A39BC 001A07BC*/ PPC::Runtime::ASM::beq(.L_801A39D4);
/*801A39C0 001A07C0*/ PPC::Runtime::ASM::bge(.L_801A39DC);
/*801A39C4 001A07C4*/ PPC::Runtime::ASM::b(.L_801A39E8);
RUNTIME_PPC_JUMP_LABEL(.L_801A39C8, 0x801A39C8) //this is a jump label
/*801A39C8 001A07C8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*801A39CC 001A07CC*/ PPC::Runtime::ASM::bge(.L_801A39E8);
/*801A39D0 001A07D0*/ PPC::Runtime::ASM::b(.L_801A39E4);
RUNTIME_PPC_JUMP_LABEL(.L_801A39D4, 0x801A39D4) //this is a jump label
/*801A39D4 001A07D4*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*801A39D8 001A07D8*/ PPC::Runtime::ASM::b(.L_801A39E8);
RUNTIME_PPC_JUMP_LABEL(.L_801A39DC, 0x801A39DC) //this is a jump label
/*801A39DC 001A07DC*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*801A39E0 001A07E0*/ PPC::Runtime::ASM::b(.L_801A39E8);
RUNTIME_PPC_JUMP_LABEL(.L_801A39E4, 0x801A39E4) //this is a jump label
/*801A39E4 001A07E4*/ PPC::Runtime::ASM::li(context->r4, 0xa);
RUNTIME_PPC_JUMP_LABEL(.L_801A39E8, 0x801A39E8) //this is a jump label
/*801A39E8 001A07E8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801A39EC 001A07EC*/ PPC::Runtime::ASM::beq(.L_801A3A00);
/*801A39F0 001A07F0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801A39F4 001A07F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A39F8 001A07F8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A39FC 001A07FC*/ PPC::Runtime::ASM::bl(fn_80193500);
RUNTIME_PPC_JUMP_LABEL(.L_801A3A00, 0x801A3A00) //this is a jump label
/*801A3A00 001A0800*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801A3A04 001A0804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801A3A08 001A0808*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801A3A0C 001A080C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801A3A10 001A0810*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801A3A14 001A0814*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801A3A18 001A0818*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801A3A1C 001A081C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A3A20 001A0820*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*801A3A24 001A0824*/ PPC::Runtime::ASM::blr();
}