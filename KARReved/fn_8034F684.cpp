//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8034F684(PPC::Runtime::GCContext* context)
{
/*8034F684 0034C484*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8034F688 0034C488*/ PPC::Runtime::ASM::mflr(context->r0);
/*8034F68C 0034C48C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8034F690 0034C490*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8034F694 0034C494*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8034F698 0034C498*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8034F69C 0034C49C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8034F6A0 0034C4A0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804EA548 @ Get_MemoryOffset_HighBit);
/*8034F6A4 0034C4A4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8034F6A8 0034C4A8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8034F6AC 0034C4AC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034F6B0 0034C4B0*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_804EA548 @ Get_MemoryOffset_LowBit);
/*8034F6B4 0034C4B4*/ PPC::Runtime::ASM::b(.L_8034F6C8);
RUNTIME_PPC_JUMP_LABEL(.L_8034F6B8, 0x8034F6B8) //this is a jump label
/*8034F6B8 0034C4B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F6BC 0034C4BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F6C0 0034C4C0*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F6C4 0034C4C4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F6C8, 0x8034F6C8) //this is a jump label
/*8034F6C8 0034C4C8*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*8034F6CC 0034C4CC*/ PPC::Runtime::ASM::blt(.L_8034F6B8);
/*8034F6D0 0034C4D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb80);
/*8034F6D4 0034C4D4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F6D8 0034C4D8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F6DC 0034C4DC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034F6E0 0034C4E0*/ PPC::Runtime::ASM::b(.L_8034F6F4);
RUNTIME_PPC_JUMP_LABEL(.L_8034F6E4, 0x8034F6E4) //this is a jump label
/*8034F6E4 0034C4E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F6E8 0034C4E8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F6EC 0034C4EC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F6F0 0034C4F0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F6F4, 0x8034F6F4) //this is a jump label
/*8034F6F4 0034C4F4*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*8034F6F8 0034C4F8*/ PPC::Runtime::ASM::blt(.L_8034F6E4);
/*8034F6FC 0034C4FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB370 @ Get_MemoryOffset_SDA21);
/*8034F700 0034C500*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F704 0034C504*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F708 0034C508*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034F70C 0034C50C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F710 0034C510*/ PPC::Runtime::ASM::b(.L_8034F724);
RUNTIME_PPC_JUMP_LABEL(.L_8034F714, 0x8034F714) //this is a jump label
/*8034F714 0034C514*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F718 0034C518*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F71C 0034C51C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F720 0034C520*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F724, 0x8034F724) //this is a jump label
/*8034F724 0034C524*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F728 0034C528*/ PPC::Runtime::ASM::blt(.L_8034F714);
/*8034F72C 0034C52C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB370 @ Get_MemoryOffset_SDA21);
/*8034F730 0034C530*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F734 0034C534*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F738 0034C538*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F73C 0034C53C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F740 0034C540*/ PPC::Runtime::ASM::b(.L_8034F754);
RUNTIME_PPC_JUMP_LABEL(.L_8034F744, 0x8034F744) //this is a jump label
/*8034F744 0034C544*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F748 0034C548*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F74C 0034C54C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F750 0034C550*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F754, 0x8034F754) //this is a jump label
/*8034F754 0034C554*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F758 0034C558*/ PPC::Runtime::ASM::blt(.L_8034F744);
/*8034F75C 0034C55C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8c0);
/*8034F760 0034C560*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F764 0034C564*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F768 0034C568*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F76C 0034C56C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F770 0034C570*/ PPC::Runtime::ASM::b(.L_8034F784);
RUNTIME_PPC_JUMP_LABEL(.L_8034F774, 0x8034F774) //this is a jump label
/*8034F774 0034C574*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F778 0034C578*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F77C 0034C57C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F780 0034C580*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F784, 0x8034F784) //this is a jump label
/*8034F784 0034C584*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F788 0034C588*/ PPC::Runtime::ASM::blt(.L_8034F774);
/*8034F78C 0034C58C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8034F790 0034C590*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8d0);
/*8034F794 0034C594*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8034F798 0034C598*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8034F79C 0034C59C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/* 8034F7A0 0034C5A0  4C C6 32 42 */ crset context->cr1eq
/*8034F7A4 0034C5A4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F7A8 0034C5A8*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8034F7AC 0034C5AC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F7B0 0034C5B0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F7B4 0034C5B4*/ PPC::Runtime::ASM::b(.L_8034F7C8);
RUNTIME_PPC_JUMP_LABEL(.L_8034F7B8, 0x8034F7B8) //this is a jump label
/*8034F7B8 0034C5B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F7BC 0034C5BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F7C0 0034C5C0*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F7C4 0034C5C4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F7C8, 0x8034F7C8) //this is a jump label
/*8034F7C8 0034C5C8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F7CC 0034C5CC*/ PPC::Runtime::ASM::blt(.L_8034F7B8);
/*8034F7D0 0034C5D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8ec);
/*8034F7D4 0034C5D4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034F7D8 0034C5D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F7DC 0034C5DC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F7E0 0034C5E0*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F7E4 0034C5E4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F7E8 0034C5E8*/ PPC::Runtime::ASM::b(.L_8034F7FC);
RUNTIME_PPC_JUMP_LABEL(.L_8034F7EC, 0x8034F7EC) //this is a jump label
/*8034F7EC 0034C5EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F7F0 0034C5F0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F7F4 0034C5F4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F7F8 0034C5F8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F7FC, 0x8034F7FC) //this is a jump label
/*8034F7FC 0034C5FC*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F800 0034C600*/ PPC::Runtime::ASM::blt(.L_8034F7EC);
/*8034F804 0034C604*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034F808 0034C608*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034F80C 0034C60C  4C C6 32 42 */ crset context->cr1eq
/*8034F810 0034C610*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F814 0034C614*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8034F818 0034C618*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F81C 0034C61C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F820 0034C620*/ PPC::Runtime::ASM::b(.L_8034F834);
RUNTIME_PPC_JUMP_LABEL(.L_8034F824, 0x8034F824) //this is a jump label
/*8034F824 0034C624*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F828 0034C628*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F82C 0034C62C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F830 0034C630*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F834, 0x8034F834) //this is a jump label
/*8034F834 0034C634*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F838 0034C638*/ PPC::Runtime::ASM::blt(.L_8034F824);
/*8034F83C 0034C63C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8fc);
/*8034F840 0034C640*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034F844 0034C644*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F848 0034C648*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F84C 0034C64C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F850 0034C650*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F854 0034C654*/ PPC::Runtime::ASM::b(.L_8034F868);
RUNTIME_PPC_JUMP_LABEL(.L_8034F858, 0x8034F858) //this is a jump label
/*8034F858 0034C658*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F85C 0034C65C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F860 0034C660*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F864 0034C664*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F868, 0x8034F868) //this is a jump label
/*8034F868 0034C668*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F86C 0034C66C*/ PPC::Runtime::ASM::blt(.L_8034F858);
/*8034F870 0034C670*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034F874 0034C674*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034F878 0034C678  4C C6 32 42 */ crset context->cr1eq
/*8034F87C 0034C67C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F880 0034C680*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8034F884 0034C684*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F888 0034C688*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F88C 0034C68C*/ PPC::Runtime::ASM::b(.L_8034F8A0);
RUNTIME_PPC_JUMP_LABEL(.L_8034F890, 0x8034F890) //this is a jump label
/*8034F890 0034C690*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F894 0034C694*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F898 0034C698*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F89C 0034C69C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F8A0, 0x8034F8A0) //this is a jump label
/*8034F8A0 0034C6A0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F8A4 0034C6A4*/ PPC::Runtime::ASM::blt(.L_8034F890);
/*8034F8A8 0034C6A8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x90c);
/*8034F8AC 0034C6AC*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034F8B0 0034C6B0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F8B4 0034C6B4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F8B8 0034C6B8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x2);
/*8034F8BC 0034C6BC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F8C0 0034C6C0*/ PPC::Runtime::ASM::b(.L_8034F8D4);
RUNTIME_PPC_JUMP_LABEL(.L_8034F8C4, 0x8034F8C4) //this is a jump label
/*8034F8C4 0034C6C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F8C8 0034C6C8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F8CC 0034C6CC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F8D0 0034C6D0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F8D4, 0x8034F8D4) //this is a jump label
/*8034F8D4 0034C6D4*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F8D8 0034C6D8*/ PPC::Runtime::ASM::blt(.L_8034F8C4);
/*8034F8DC 0034C6DC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034F8E0 0034C6E0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034F8E4 0034C6E4  4C C6 32 42 */ crset context->cr1eq
/*8034F8E8 0034C6E8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F8EC 0034C6EC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034F8F0 0034C6F0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F8F4 0034C6F4*/ PPC::Runtime::ASM::b(.L_8034F908);
RUNTIME_PPC_JUMP_LABEL(.L_8034F8F8, 0x8034F8F8) //this is a jump label
/*8034F8F8 0034C6F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F8FC 0034C6FC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F900 0034C700*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F904 0034C704*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F908, 0x8034F908) //this is a jump label
/*8034F908 0034C708*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F90C 0034C70C*/ PPC::Runtime::ASM::blt(.L_8034F8F8);
/*8034F910 0034C710*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*8034F914 0034C714*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F918 0034C718*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F91C 0034C71C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034F920 0034C720*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F924 0034C724*/ PPC::Runtime::ASM::b(.L_8034F938);
RUNTIME_PPC_JUMP_LABEL(.L_8034F928, 0x8034F928) //this is a jump label
/*8034F928 0034C728*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F92C 0034C72C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F930 0034C730*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F934 0034C734*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F938, 0x8034F938) //this is a jump label
/*8034F938 0034C738*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F93C 0034C73C*/ PPC::Runtime::ASM::blt(.L_8034F928);
/*8034F940 0034C740*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x92c);
/*8034F944 0034C744*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034F948 0034C748*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F94C 0034C74C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F950 0034C750*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034F954 0034C754*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F958 0034C758*/ PPC::Runtime::ASM::b(.L_8034F96C);
RUNTIME_PPC_JUMP_LABEL(.L_8034F95C, 0x8034F95C) //this is a jump label
/*8034F95C 0034C75C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F960 0034C760*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F964 0034C764*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F968 0034C768*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F96C, 0x8034F96C) //this is a jump label
/*8034F96C 0034C76C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F970 0034C770*/ PPC::Runtime::ASM::blt(.L_8034F95C);
/*8034F974 0034C774*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*8034F978 0034C778*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F97C 0034C77C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F980 0034C780*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034F984 0034C784*/ PPC::Runtime::ASM::mr(context->r27, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8034F988, 0x8034F988) //this is a jump label
/*8034F988 0034C788*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*8034F98C 0034C78C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 8034F990 0034C790  4C C6 32 42 */ crset context->cr1eq
/*8034F994 0034C794*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F998 0034C798*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8034F99C 0034C79C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*8034F9A0 0034C7A0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x4);
/*8034F9A4 0034C7A4*/ PPC::Runtime::ASM::blt(.L_8034F988);
/*8034F9A8 0034C7A8*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*8034F9AC 0034C7AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F9B0 0034C7B0*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F9B4 0034C7B4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8034F9B8 0034C7B8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034F9BC 0034C7BC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F9C0 0034C7C0*/ PPC::Runtime::ASM::b(.L_8034F9D4);
RUNTIME_PPC_JUMP_LABEL(.L_8034F9C4, 0x8034F9C4) //this is a jump label
/*8034F9C4 0034C7C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F9C8 0034C7C8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F9CC 0034C7CC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F9D0 0034C7D0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034F9D4, 0x8034F9D4) //this is a jump label
/*8034F9D4 0034C7D4*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034F9D8 0034C7D8*/ PPC::Runtime::ASM::blt(.L_8034F9C4);
/*8034F9DC 0034C7DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa0c);
/*8034F9E0 0034C7E0*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034F9E4 0034C7E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034F9E8 0034C7E8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034F9EC 0034C7EC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034F9F0 0034C7F0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034F9F4 0034C7F4*/ PPC::Runtime::ASM::b(.L_8034FA08);
RUNTIME_PPC_JUMP_LABEL(.L_8034F9F8, 0x8034F9F8) //this is a jump label
/*8034F9F8 0034C7F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034F9FC 0034C7FC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FA00 0034C800*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FA04 0034C804*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FA08, 0x8034FA08) //this is a jump label
/*8034FA08 0034C808*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FA0C 0034C80C*/ PPC::Runtime::ASM::blt(.L_8034F9F8);
/*8034FA10 0034C810*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034FA14 0034C814*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034FA18 0034C818  4C C6 32 42 */ crset context->cr1eq
/*8034FA1C 0034C81C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FA20 0034C820*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8034FA24 0034C824*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FA28 0034C828*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FA2C 0034C82C*/ PPC::Runtime::ASM::b(.L_8034FA40);
RUNTIME_PPC_JUMP_LABEL(.L_8034FA30, 0x8034FA30) //this is a jump label
/*8034FA30 0034C830*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FA34 0034C834*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FA38 0034C838*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FA3C 0034C83C*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FA40, 0x8034FA40) //this is a jump label
/*8034FA40 0034C840*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FA44 0034C844*/ PPC::Runtime::ASM::blt(.L_8034FA30);
/*8034FA48 0034C848*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xb90);
/*8034FA4C 0034C84C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034FA50 0034C850*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FA54 0034C854*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FA58 0034C858*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FA5C 0034C85C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FA60 0034C860*/ PPC::Runtime::ASM::b(.L_8034FA74);
RUNTIME_PPC_JUMP_LABEL(.L_8034FA64, 0x8034FA64) //this is a jump label
/*8034FA64 0034C864*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FA68 0034C868*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FA6C 0034C86C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FA70 0034C870*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FA74, 0x8034FA74) //this is a jump label
/*8034FA74 0034C874*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FA78 0034C878*/ PPC::Runtime::ASM::blt(.L_8034FA64);
/*8034FA7C 0034C87C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034FA80 0034C880*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034FA84 0034C884  4C C6 32 42 */ crset context->cr1eq
/*8034FA88 0034C888*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FA8C 0034C88C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8034FA90 0034C890*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FA94 0034C894*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FA98 0034C898*/ PPC::Runtime::ASM::b(.L_8034FAAC);
RUNTIME_PPC_JUMP_LABEL(.L_8034FA9C, 0x8034FA9C) //this is a jump label
/*8034FA9C 0034C89C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FAA0 0034C8A0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FAA4 0034C8A4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FAA8 0034C8A8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FAAC, 0x8034FAAC) //this is a jump label
/*8034FAAC 0034C8AC*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FAB0 0034C8B0*/ PPC::Runtime::ASM::blt(.L_8034FA9C);
/*8034FAB4 0034C8B4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x988);
/*8034FAB8 0034C8B8*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034FABC 0034C8BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FAC0 0034C8C0*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FAC4 0034C8C4*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FAC8 0034C8C8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FACC 0034C8CC*/ PPC::Runtime::ASM::b(.L_8034FAE0);
RUNTIME_PPC_JUMP_LABEL(.L_8034FAD0, 0x8034FAD0) //this is a jump label
/*8034FAD0 0034C8D0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FAD4 0034C8D4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FAD8 0034C8D8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FADC 0034C8DC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FAE0, 0x8034FAE0) //this is a jump label
/*8034FAE0 0034C8E0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FAE4 0034C8E4*/ PPC::Runtime::ASM::blt(.L_8034FAD0);
/*8034FAE8 0034C8E8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034FAEC 0034C8EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034FAF0 0034C8F0  4C C6 32 42 */ crset context->cr1eq
/*8034FAF4 0034C8F4*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FAF8 0034C8F8*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8034FAFC 0034C8FC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FB00 0034C900*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FB04 0034C904*/ PPC::Runtime::ASM::b(.L_8034FB18);
RUNTIME_PPC_JUMP_LABEL(.L_8034FB08, 0x8034FB08) //this is a jump label
/*8034FB08 0034C908*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FB0C 0034C90C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FB10 0034C910*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FB14 0034C914*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FB18, 0x8034FB18) //this is a jump label
/*8034FB18 0034C918*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FB1C 0034C91C*/ PPC::Runtime::ASM::blt(.L_8034FB08);
/*8034FB20 0034C920*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x9b4);
/*8034FB24 0034C924*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034FB28 0034C928*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FB2C 0034C92C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FB30 0034C930*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FB34 0034C934*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FB38 0034C938*/ PPC::Runtime::ASM::b(.L_8034FB4C);
RUNTIME_PPC_JUMP_LABEL(.L_8034FB3C, 0x8034FB3C) //this is a jump label
/*8034FB3C 0034C93C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FB40 0034C940*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FB44 0034C944*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FB48 0034C948*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FB4C, 0x8034FB4C) //this is a jump label
/*8034FB4C 0034C94C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FB50 0034C950*/ PPC::Runtime::ASM::blt(.L_8034FB3C);
/*8034FB54 0034C954*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034FB58 0034C958*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034FB5C 0034C95C  4C C6 32 42 */ crset context->cr1eq
/*8034FB60 0034C960*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FB64 0034C964*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8034FB68 0034C968*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FB6C 0034C96C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FB70 0034C970*/ PPC::Runtime::ASM::b(.L_8034FB84);
RUNTIME_PPC_JUMP_LABEL(.L_8034FB74, 0x8034FB74) //this is a jump label
/*8034FB74 0034C974*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FB78 0034C978*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FB7C 0034C97C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FB80 0034C980*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FB84, 0x8034FB84) //this is a jump label
/*8034FB84 0034C984*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FB88 0034C988*/ PPC::Runtime::ASM::blt(.L_8034FB74);
/*8034FB8C 0034C98C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xb18);
/*8034FB90 0034C990*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034FB94 0034C994*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FB98 0034C998*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FB9C 0034C99C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x1);
/*8034FBA0 0034C9A0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FBA4 0034C9A4*/ PPC::Runtime::ASM::b(.L_8034FBB8);
RUNTIME_PPC_JUMP_LABEL(.L_8034FBA8, 0x8034FBA8) //this is a jump label
/*8034FBA8 0034C9A8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FBAC 0034C9AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FBB0 0034C9B0*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FBB4 0034C9B4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FBB8, 0x8034FBB8) //this is a jump label
/*8034FBB8 0034C9B8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r28);
/*8034FBBC 0034C9BC*/ PPC::Runtime::ASM::blt(.L_8034FBA8);
/*8034FBC0 0034C9C0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034FBC4 0034C9C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034FBC8 0034C9C8  4C C6 32 42 */ crset context->cr1eq
/*8034FBCC 0034C9CC*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FBD0 0034C9D0*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8034FBD4 0034C9D4*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x1);
/*8034FBD8 0034C9D8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FBDC 0034C9DC*/ PPC::Runtime::ASM::b(.L_8034FBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8034FBE0, 0x8034FBE0) //this is a jump label
/*8034FBE0 0034C9E0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FBE4 0034C9E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FBE8 0034C9E8*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FBEC 0034C9EC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FBF0, 0x8034FBF0) //this is a jump label
/*8034FBF0 0034C9F0*/ PPC::Runtime::ASM::cmplw(context->r27, context->r29);
/*8034FBF4 0034C9F4*/ PPC::Runtime::ASM::blt(.L_8034FBE0);
/*8034FBF8 0034C9F8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x9e8);
/*8034FBFC 0034C9FC*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8034FC00 0034CA00*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FC04 0034CA04*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FC08 0034CA08*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x1);
/*8034FC0C 0034CA0C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8034FC10 0034CA10*/ PPC::Runtime::ASM::b(.L_8034FC24);
RUNTIME_PPC_JUMP_LABEL(.L_8034FC14, 0x8034FC14) //this is a jump label
/*8034FC14 0034CA14*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FC18 0034CA18*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FC1C 0034CA1C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FC20 0034CA20*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FC24, 0x8034FC24) //this is a jump label
/*8034FC24 0034CA24*/ PPC::Runtime::ASM::cmplw(context->r27, context->r29);
/*8034FC28 0034CA28*/ PPC::Runtime::ASM::blt(.L_8034FC14);
/*8034FC2C 0034CA2C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8034FC30 0034CA30*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8034FC34 0034CA34  4C C6 32 42 */ crset context->cr1eq
/*8034FC38 0034CA38*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FC3C 0034CA3C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8034FC40 0034CA40*/ PPC::Runtime::ASM::b(.L_8034FC54);
RUNTIME_PPC_JUMP_LABEL(.L_8034FC44, 0x8034FC44) //this is a jump label
/*8034FC44 0034CA44*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8034FC48 0034CA48*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FC4C 0034CA4C*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FC50 0034CA50*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8034FC54, 0x8034FC54) //this is a jump label
/*8034FC54 0034CA54*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*8034FC58 0034CA58*/ PPC::Runtime::ASM::blt(.L_8034FC44);
/*8034FC5C 0034CA5C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*8034FC60 0034CA60*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8034FC64 0034CA64*/ PPC::Runtime::ASM::bl(OSReport);
/*8034FC68 0034CA68*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8034FC6C 0034CA6C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8034FC70 0034CA70*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8034FC74 0034CA74*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8034FC78 0034CA78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8034FC7C 0034CA7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8034FC80 0034CA80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8034FC84 0034CA84*/ PPC::Runtime::ASM::blr();
}