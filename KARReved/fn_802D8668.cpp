//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D8668(PPC::Runtime::GCContext* context)
{
/*802D8668 002D5468*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3780 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D866C 002D546C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f2);
/*802D8670 002D5470*/ PPC::Runtime::ASM::beq(.L_802D8ABC);
/*802D8674 002D5474*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8678 002D5478*/ PPC::Runtime::ASM::fadd(context->f0, context->f1, context->f0);
/*802D867C 002D547C*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*802D8680 002D5480*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*802D8684 002D5484*/ PPC::Runtime::ASM::bge(.L_802D88A4);
/*802D8688 002D5488*/ PPC::Runtime::ASM::fneg(context->f3, context->f0);
/*802D868C 002D548C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E37F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8690 002D5490*/ PPC::Runtime::ASM::b(.L_802D869C);
RUNTIME_PPC_JUMP_LABEL(.L_802D8694, 0x802D8694) //this is a jump label
/*802D8694 002D5494*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*802D8698 002D5498*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_802D869C, 0x802D869C) //this is a jump label
/*802D869C 002D549C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D86A0 002D54A0*/ PPC::Runtime::ASM::bgt(.L_802D8694);
/*802D86A4 002D54A4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E37F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D86A8 002D54A8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D86AC 002D54AC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D86B0 002D54B0*/ PPC::Runtime::ASM::bne(.L_802D87A4);
/*802D86B4 002D54B4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D86B8 002D54B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*802D86BC 002D54BC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D86C0 002D54C0*/ PPC::Runtime::ASM::bne(.L_802D8730);
/*802D86C4 002D54C4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D86C8 002D54C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D86CC 002D54CC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D86D0 002D54D0*/ PPC::Runtime::ASM::bne(.L_802D8700);
/*802D86D4 002D54D4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D86D8 002D54D8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D86DC 002D54DC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D86E0 002D54E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D86E4 002D54E4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D86E8 002D54E8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D86EC 002D54EC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D86F0 002D54F0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D86F4 002D54F4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D86F8 002D54F8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D86FC 002D54FC*/ PPC::Runtime::ASM::b(.L_802D889C);
RUNTIME_PPC_JUMP_LABEL(.L_802D8700, 0x802D8700) //this is a jump label
/*802D8700 002D5500*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D8704 002D5504*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8708 002D5508*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D870C 002D550C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8710 002D5510*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D8714 002D5514*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8718 002D5518*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D871C 002D551C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D8720 002D5520*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D8724 002D5524*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8728 002D5528*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*802D872C 002D552C*/ PPC::Runtime::ASM::b(.L_802D889C);
RUNTIME_PPC_JUMP_LABEL(.L_802D8730, 0x802D8730) //this is a jump label
/*802D8730 002D5530*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*802D8734 002D5534*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8738 002D5538*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*802D873C 002D553C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D8740 002D5540*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D8744 002D5544*/ PPC::Runtime::ASM::bne(.L_802D8774);
/*802D8748 002D5548*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D874C 002D554C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8750 002D5550*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8754 002D5554*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8758 002D5558*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D875C 002D555C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8760 002D5560*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D8764 002D5564*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D8768 002D5568*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D876C 002D556C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8770 002D5570*/ PPC::Runtime::ASM::b(.L_802D889C);
RUNTIME_PPC_JUMP_LABEL(.L_802D8774, 0x802D8774) //this is a jump label
/*802D8774 002D5574*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D8778 002D5578*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D877C 002D557C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8780 002D5580*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8784 002D5584*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D8788 002D5588*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D878C 002D558C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D8790 002D5590*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D8794 002D5594*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D8798 002D5598*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D879C 002D559C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*802D87A0 002D55A0*/ PPC::Runtime::ASM::b(.L_802D889C);
RUNTIME_PPC_JUMP_LABEL(.L_802D87A4, 0x802D87A4) //this is a jump label
/*802D87A4 002D55A4*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*802D87A8 002D55A8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D87AC 002D55AC*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*802D87B0 002D55B0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*802D87B4 002D55B4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D87B8 002D55B8*/ PPC::Runtime::ASM::bne(.L_802D8828);
/*802D87BC 002D55BC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D87C0 002D55C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D87C4 002D55C4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D87C8 002D55C8*/ PPC::Runtime::ASM::bne(.L_802D87F8);
/*802D87CC 002D55CC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D87D0 002D55D0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D87D4 002D55D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D87D8 002D55D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D87DC 002D55DC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D87E0 002D55E0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D87E4 002D55E4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D87E8 002D55E8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D87EC 002D55EC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D87F0 002D55F0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D87F4 002D55F4*/ PPC::Runtime::ASM::b(.L_802D8898);
RUNTIME_PPC_JUMP_LABEL(.L_802D87F8, 0x802D87F8) //this is a jump label
/*802D87F8 002D55F8*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D87FC 002D55FC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8800 002D5600*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8804 002D5604*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8808 002D5608*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D880C 002D560C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8810 002D5610*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D8814 002D5614*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D8818 002D5618*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D881C 002D561C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8820 002D5620*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*802D8824 002D5624*/ PPC::Runtime::ASM::b(.L_802D8898);
RUNTIME_PPC_JUMP_LABEL(.L_802D8828, 0x802D8828) //this is a jump label
/*802D8828 002D5628*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*802D882C 002D562C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8830 002D5630*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*802D8834 002D5634*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D8838 002D5638*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D883C 002D563C*/ PPC::Runtime::ASM::bne(.L_802D886C);
/*802D8840 002D5640*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D8844 002D5644*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8848 002D5648*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D884C 002D564C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8850 002D5650*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D8854 002D5654*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8858 002D5658*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D885C 002D565C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D8860 002D5660*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D8864 002D5664*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8868 002D5668*/ PPC::Runtime::ASM::b(.L_802D8898);
RUNTIME_PPC_JUMP_LABEL(.L_802D886C, 0x802D886C) //this is a jump label
/*802D886C 002D566C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D8870 002D5670*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8874 002D5674*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8878 002D5678*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D887C 002D567C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D8880 002D5680*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8884 002D5684*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D8888 002D5688*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D888C 002D568C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D8890 002D5690*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8894 002D5694*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_802D8898, 0x802D8898) //this is a jump label
/*802D8898 002D5698*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_802D889C, 0x802D889C) //this is a jump label
/*802D889C 002D569C*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*802D88A0 002D56A0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802D88A4, 0x802D88A4) //this is a jump label
/*802D88A4 002D56A4*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*802D88A8 002D56A8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E37F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D88AC 002D56AC*/ PPC::Runtime::ASM::b(.L_802D88B8);
RUNTIME_PPC_JUMP_LABEL(.L_802D88B0, 0x802D88B0) //this is a jump label
/*802D88B0 002D56B0*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*802D88B4 002D56B4*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_802D88B8, 0x802D88B8) //this is a jump label
/*802D88B8 002D56B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D88BC 002D56BC*/ PPC::Runtime::ASM::bgt(.L_802D88B0);
/*802D88C0 002D56C0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E37F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D88C4 002D56C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D88C8 002D56C8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D88CC 002D56CC*/ PPC::Runtime::ASM::bne(.L_802D89C0);
/*802D88D0 002D56D0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D88D4 002D56D4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*802D88D8 002D56D8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D88DC 002D56DC*/ PPC::Runtime::ASM::bne(.L_802D894C);
/*802D88E0 002D56E0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D88E4 002D56E4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D88E8 002D56E8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D88EC 002D56EC*/ PPC::Runtime::ASM::bne(.L_802D891C);
/*802D88F0 002D56F0*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D88F4 002D56F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D88F8 002D56F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D88FC 002D56FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8900 002D5700*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D8904 002D5704*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8908 002D5708*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D890C 002D570C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D8910 002D5710*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D8914 002D5714*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*802D8918 002D5718*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802D891C, 0x802D891C) //this is a jump label
/*802D891C 002D571C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D8920 002D5720*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8924 002D5724*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8928 002D5728*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D892C 002D572C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D8930 002D5730*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8934 002D5734*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D8938 002D5738*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D893C 002D573C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D8940 002D5740*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8944 002D5744*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*802D8948 002D5748*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802D894C, 0x802D894C) //this is a jump label
/*802D894C 002D574C*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*802D8950 002D5750*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8954 002D5754*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*802D8958 002D5758*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D895C 002D575C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D8960 002D5760*/ PPC::Runtime::ASM::bne(.L_802D8990);
/*802D8964 002D5764*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D8968 002D5768*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D896C 002D576C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8970 002D5770*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8974 002D5774*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D8978 002D5778*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D897C 002D577C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D8980 002D5780*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D8984 002D5784*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D8988 002D5788*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*802D898C 002D578C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802D8990, 0x802D8990) //this is a jump label
/*802D8990 002D5790*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D8994 002D5794*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8998 002D5798*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D899C 002D579C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D89A0 002D57A0*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D89A4 002D57A4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D89A8 002D57A8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D89AC 002D57AC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D89B0 002D57B0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D89B4 002D57B4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D89B8 002D57B8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*802D89BC 002D57BC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802D89C0, 0x802D89C0) //this is a jump label
/*802D89C0 002D57C0*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*802D89C4 002D57C4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D89C8 002D57C8*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*802D89CC 002D57CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*802D89D0 002D57D0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D89D4 002D57D4*/ PPC::Runtime::ASM::bne(.L_802D8A44);
/*802D89D8 002D57D8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D89DC 002D57DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D89E0 002D57E0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D89E4 002D57E4*/ PPC::Runtime::ASM::bne(.L_802D8A14);
/*802D89E8 002D57E8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D89EC 002D57EC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D89F0 002D57F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D89F4 002D57F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D89F8 002D57F8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D89FC 002D57FC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A00 002D5800*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D8A04 002D5804*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D8A08 002D5808*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D8A0C 002D580C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8A10 002D5810*/ PPC::Runtime::ASM::b(.L_802D8AB4);
RUNTIME_PPC_JUMP_LABEL(.L_802D8A14, 0x802D8A14) //this is a jump label
/*802D8A14 002D5814*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D8A18 002D5818*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A1C 002D581C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A20 002D5820*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A24 002D5824*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D8A28 002D5828*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A2C 002D582C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D8A30 002D5830*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D8A34 002D5834*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D8A38 002D5838*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8A3C 002D583C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*802D8A40 002D5840*/ PPC::Runtime::ASM::b(.L_802D8AB4);
RUNTIME_PPC_JUMP_LABEL(.L_802D8A44, 0x802D8A44) //this is a jump label
/*802D8A44 002D5844*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*802D8A48 002D5848*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A4C 002D584C*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*802D8A50 002D5850*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*802D8A54 002D5854*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D8A58 002D5858*/ PPC::Runtime::ASM::bne(.L_802D8A88);
/*802D8A5C 002D585C*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*802D8A60 002D5860*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A64 002D5864*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E380C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A68 002D5868*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A6C 002D586C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*802D8A70 002D5870*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A74 002D5874*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*802D8A78 002D5878*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802D8A7C 002D587C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D8A80 002D5880*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8A84 002D5884*/ PPC::Runtime::ASM::b(.L_802D8AB4);
RUNTIME_PPC_JUMP_LABEL(.L_802D8A88, 0x802D8A88) //this is a jump label
/*802D8A88 002D5888*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*802D8A8C 002D588C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A90 002D5890*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E381C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A94 002D5894*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8A98 002D5898*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*802D8A9C 002D589C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8AA0 002D58A0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*802D8AA4 002D58A4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*802D8AA8 002D58A8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*802D8AAC 002D58AC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*802D8AB0 002D58B0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_802D8AB4, 0x802D8AB4) //this is a jump label
/*802D8AB4 002D58B4*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*802D8AB8 002D58B8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802D8ABC, 0x802D8ABC) //this is a jump label
/*802D8ABC 002D58BC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D8AC0 002D58C0*/ PPC::Runtime::ASM::blr();
}