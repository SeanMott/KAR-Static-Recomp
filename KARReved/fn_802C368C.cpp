//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B57F4.hpp"
#include "fn_802BC220.hpp"
#include "fn_802BC220.hpp"
#include "fn_802BC220.hpp"
#include "fn_802BC220.hpp"
#include "fn_802BC220.hpp"
#include "fn_802BC220.hpp"
#include "fn_802BC220.hpp"
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"



void fn_802C368C(PPC::Runtime::GCContext* context)
{
/*802C368C 002C048C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802C3690 002C0490*/ PPC::Runtime::ASM::mflr(context->r0);
/*802C3694 002C0494*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C80F8 @ Get_MemoryOffset_HighBit);
/*802C3698 002C0498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802C369C 002C049C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802C36A0 002C04A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802C36A4 002C04A4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802C36A8 002C04A8*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_804C80F8 @ Get_MemoryOffset_LowBit);
/*802C36AC 002C04AC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x289c);
/*802C36B0 002C04B0*/ PPC::Runtime::ASM::bl(fn_802B57F4);
/*802C36B4 002C04B4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804CADEC @ Get_MemoryOffset_HighBit);
/*802C36B8 002C04B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*802C36BC 002C04BC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804CADEC @ Get_MemoryOffset_LowBit);
/*802C36C0 002C04C0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D8AD8 @ Get_MemoryOffset_SDA21);
/*802C36C4 002C04C4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802C36C8 002C04C8*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x10);
/*802C36CC 002C04CC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x58);
/*802C36D0 002C04D0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C36D4 002C04D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802C36D8 002C04D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802C36DC 002C04DC*/ PPC::Runtime::ASM::bl(fn_802BC220);
/*802C36E0 002C04E0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x26c);
/*802C36E4 002C04E4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x28a8);
/*802C36E8 002C04E8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C36EC 002C04EC*/ PPC::Runtime::ASM::bl(fn_802BC220);
/*802C36F0 002C04F0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x32c);
/*802C36F4 002C04F4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x28b4);
/*802C36F8 002C04F8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C36FC 002C04FC*/ PPC::Runtime::ASM::bl(fn_802BC220);
/*802C3700 002C0500*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3ec);
/*802C3704 002C0504*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x28c4);
/*802C3708 002C0508*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C370C 002C050C*/ PPC::Runtime::ASM::bl(fn_802BC220);
/*802C3710 002C0510*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4ac);
/*802C3714 002C0514*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x28dc);
/*802C3718 002C0518*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C371C 002C051C*/ PPC::Runtime::ASM::bl(fn_802BC220);
/*802C3720 002C0520*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x56c);
/*802C3724 002C0524*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x28f4);
/*802C3728 002C0528*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C372C 002C052C*/ PPC::Runtime::ASM::bl(fn_802BC220);
/*802C3730 002C0530*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x62c);
/*802C3734 002C0534*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x2900);
/*802C3738 002C0538*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C373C 002C053C*/ PPC::Runtime::ASM::bl(fn_802BC220);
/*802C3740 002C0540*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802C3744 002C0544*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa64);
/*802C3748 002C0548*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r31));
/*802C374C 002C054C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r31));
/*802C3750 002C0550*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802C3754 002C0554*/ PPC::Runtime::ASM::beq(.L_802C375C);
/*802C3758 002C0558*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa58);
RUNTIME_PPC_JUMP_LABEL(.L_802C375C, 0x802C375C) //this is a jump label
/*802C375C 002C055C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802C3760 002C0560*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C3764 002C0564*/ PPC::Runtime::ASM::beq(.L_802C3794);
/*802C3768 002C0568*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C376C 002C056C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802C3770 002C0570*/ PPC::Runtime::ASM::li(context->r5, lbl_805D88A8 @ Get_MemoryOffset_SDA21);
/*802C3774 002C0574*/ PPC::Runtime::ASM::li(context->r6, lbl_805D88A0 @ Get_MemoryOffset_SDA21);
/*802C3778 002C0578*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802C377C 002C057C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802C3780 002C0580*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802C3784 002C0584*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802C3788 002C0588*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802C378C 002C058C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802C3790 002C0590*/ PPC::Runtime::ASM::b(.L_802C3798);
RUNTIME_PPC_JUMP_LABEL(.L_802C3794, 0x802C3794) //this is a jump label
/*802C3794 002C0594*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802C3798, 0x802C3798) //this is a jump label
/*802C3798 002C0598*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r31));
/*802C379C 002C059C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802C37A0 002C05A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa64);
/*802C37A4 002C05A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*802C37A8 002C05A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*802C37AC 002C05AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802C37B0 002C05B0*/ PPC::Runtime::ASM::beq(.L_802C37B8);
/*802C37B4 002C05B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa58);
RUNTIME_PPC_JUMP_LABEL(.L_802C37B8, 0x802C37B8) //this is a jump label
/*802C37B8 002C05B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802C37BC 002C05BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802C37C0 002C05C0*/ PPC::Runtime::ASM::beq(.L_802C37F0);
/*802C37C4 002C05C4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C37C8 002C05C8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802C37CC 002C05CC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D88A8 @ Get_MemoryOffset_SDA21);
/*802C37D0 002C05D0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D88A0 @ Get_MemoryOffset_SDA21);
/*802C37D4 002C05D4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802C37D8 002C05D8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802C37DC 002C05DC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802C37E0 002C05E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*802C37E4 002C05E4*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802C37E8 002C05E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802C37EC 002C05EC*/ PPC::Runtime::ASM::b(.L_802C37F4);
RUNTIME_PPC_JUMP_LABEL(.L_802C37F0, 0x802C37F0) //this is a jump label
/*802C37F0 002C05F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802C37F4, 0x802C37F4) //this is a jump label
/*802C37F4 002C05F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*802C37F8 002C05F8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802C37FC 002C05FC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa64);
/*802C3800 002C0600*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e0, context->r31));
/*802C3804 002C0604*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e0, context->r31));
/*802C3808 002C0608*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802C380C 002C060C*/ PPC::Runtime::ASM::beq(.L_802C3814);
/*802C3810 002C0610*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa58);
RUNTIME_PPC_JUMP_LABEL(.L_802C3814, 0x802C3814) //this is a jump label
/*802C3814 002C0614*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802C3818 002C0618*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802C381C 002C061C*/ PPC::Runtime::ASM::beq(.L_802C384C);
/*802C3820 002C0620*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C3824 002C0624*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802C3828 002C0628*/ PPC::Runtime::ASM::li(context->r5, lbl_805D88A8 @ Get_MemoryOffset_SDA21);
/*802C382C 002C062C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D88A0 @ Get_MemoryOffset_SDA21);
/*802C3830 002C0630*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802C3834 002C0634*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802C3838 002C0638*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802C383C 002C063C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802C3840 002C0640*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802C3844 002C0644*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802C3848 002C0648*/ PPC::Runtime::ASM::b(.L_802C3850);
RUNTIME_PPC_JUMP_LABEL(.L_802C384C, 0x802C384C) //this is a jump label
/*802C384C 002C064C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802C3850, 0x802C3850) //this is a jump label
/*802C3850 002C0650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r31));
/*802C3854 002C0654*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*802C3858 002C0658*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C385C 002C065C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r31));
/*802C3860 002C0660*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C3864 002C0664*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C3868 002C0668*/ PPC::Runtime::ASM::bctrl();
/*802C386C 002C066C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x26c);
/*802C3870 002C0670*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C3874 002C0674*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26c, context->r31));
/*802C3878 002C0678*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C387C 002C067C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C3880 002C0680*/ PPC::Runtime::ASM::bctrl();
/*802C3884 002C0684*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x32c);
/*802C3888 002C0688*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C388C 002C068C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*802C3890 002C0690*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C3894 002C0694*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C3898 002C0698*/ PPC::Runtime::ASM::bctrl();
/*802C389C 002C069C*/ PPC::Runtime::ASM::li(context->r3, 0x30);
/*802C38A0 002C06A0*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*802C38A4 002C06A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802C38A8 002C06A8*/ PPC::Runtime::ASM::beq(.L_802C3988);
/*802C38AC 002C06AC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802C38B0 002C06B0*/ PPC::Runtime::ASM::lis(context->r8, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802C38B4 002C06B4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802C38B8 002C06B8*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802C38BC 002C06BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802C38C0 002C06C0*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*802C38C4 002C06C4*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802C38C8 002C06C8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802C38CC 002C06CC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802C38D0 002C06D0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C75F4 @ Get_MemoryOffset_HighBit);
/*802C38D4 002C06D4*/ PPC::Runtime::ASM::li(context->r0, String_ "border" 2 @ Get_MemoryOffset_SDA21);
/*802C38D8 002C06D8*/ PPC::Runtime::ASM::addi(context->r9, context->r8, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802C38DC 002C06DC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802C38E0 002C06E0*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802C38E4 002C06E4*/ PPC::Runtime::ASM::addi(context->r11, context->r3, 0x28);
/*802C38E8 002C06E8*/ PPC::Runtime::ASM::addi(context->r7, context->r6, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802C38EC 002C06EC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802C38F0 002C06F0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802C38F4 002C06F4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802C38F8 002C06F8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804C75F4 @ Get_MemoryOffset_LowBit);
/*802C38FC 002C06FC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802C3900 002C0700*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802C3904 002C0704*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802C3908 002C0708*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802C390C 002C070C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802C3910 002C0710*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802C3914 002C0714*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r3));
/*802C3918 002C0718*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802C391C 002C071C*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*802C3920 002C0720*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802C3924 002C0724*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802C3928 002C0728*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802C392C 002C072C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802C3930 002C0730*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802C3934 002C0734*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802C3938 002C0738*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802C393C 002C073C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802C3940 002C0740*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802C3944 002C0744*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802C3948 002C0748*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*802C394C 002C074C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802C3950 002C0750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802C3954 002C0754*/ PPC::Runtime::ASM::beq(.L_802C3980);
/*802C3958 002C0758*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C395C 002C075C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802C3960 002C0760*/ PPC::Runtime::ASM::li(context->r5, lbl_805D88A8 @ Get_MemoryOffset_SDA21);
/*802C3964 002C0764*/ PPC::Runtime::ASM::li(context->r6, lbl_805D88A0 @ Get_MemoryOffset_SDA21);
/*802C3968 002C0768*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802C396C 002C076C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802C3970 002C0770*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802C3974 002C0774*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802C3978 002C0778*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802C397C 002C077C*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_802C3980, 0x802C3980) //this is a jump label
/*802C3980 002C0780*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*802C3984 002C0784*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_802C3988, 0x802C3988) //this is a jump label
/*802C3988 002C0788*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802C398C 002C078C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C3990 002C0790*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C3994 002C0794*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C3998 002C0798*/ PPC::Runtime::ASM::bctrl();
/*802C399C 002C079C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3ec);
/*802C39A0 002C07A0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*802C39A4 002C07A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*802C39A8 002C07A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C39AC 002C07AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C39B0 002C07B0*/ PPC::Runtime::ASM::bctrl();
/*802C39B4 002C07B4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4ac);
/*802C39B8 002C07B8*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x16c);
/*802C39BC 002C07BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r31));
/*802C39C0 002C07C0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802C39C4 002C07C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C39C8 002C07C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C39CC 002C07CC*/ PPC::Runtime::ASM::bctrl();
/*802C39D0 002C07D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x56c);
/*802C39D4 002C07D4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802C39D8 002C07D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56c, context->r31));
/*802C39DC 002C07DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C39E0 002C07E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C39E4 002C07E4*/ PPC::Runtime::ASM::bctrl();
/*802C39E8 002C07E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62c, context->r31));
/*802C39EC 002C07EC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x62c);
/*802C39F0 002C07F0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802C39F4 002C07F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C39F8 002C07F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C39FC 002C07FC*/ PPC::Runtime::ASM::bctrl();
/*802C3A00 002C0800*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802C3A04 002C0804*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802C3A08 002C0808*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802C3A0C 002C080C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802C3A10 002C0810*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802C3A14 002C0814*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802C3A18 002C0818*/ PPC::Runtime::ASM::blr();
}