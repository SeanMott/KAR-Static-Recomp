//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D4678(PPC::Runtime::GCContext* context)
{
/*802D4678 002D1478*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802D467C 002D147C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D4680 002D1480*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D4684 002D1484*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D4688 002D1488*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D468C 002D148C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*802D4690 002D1490*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802D4694 002D1494*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802D4698 002D1498*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D469C 002D149C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*802D46A0 002D14A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*802D46A4 002D14A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46A8 002D14A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*802D46AC 002D14AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*802D46B0 002D14B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46B4 002D14B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*802D46B8 002D14B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*802D46BC 002D14BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46C0 002D14C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*802D46C4 002D14C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*802D46C8 002D14C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46CC 002D14CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*802D46D0 002D14D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*802D46D4 002D14D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46D8 002D14D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*802D46DC 002D14DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*802D46E0 002D14E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46E4 002D14E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*802D46E8 002D14E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*802D46EC 002D14EC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46F0 002D14F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*802D46F4 002D14F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*802D46F8 002D14F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D46FC 002D14FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*802D4700 002D1500*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*802D4704 002D1504*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D4708 002D1508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*802D470C 002D150C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*802D4710 002D1510*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D4714 002D1514*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*802D4718 002D1518*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*802D471C 002D151C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D4720 002D1520*/ PPC::Runtime::ASM::beq(.L_802D472C);
/*802D4724 002D1524*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802D4728 002D1528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802D472C, 0x802D472C) //this is a jump label
/*802D472C 002D152C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*802D4730 002D1530*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D4734 002D1534*/ PPC::Runtime::ASM::beq(.L_802D4740);
/*802D4738 002D1538*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802D473C 002D153C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802D4740, 0x802D4740) //this is a jump label
/*802D4740 002D1540*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*802D4744 002D1544*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D4748 002D1548*/ PPC::Runtime::ASM::beq(.L_802D4754);
/*802D474C 002D154C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802D4750 002D1550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802D4754, 0x802D4754) //this is a jump label
/*802D4754 002D1554*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*802D4758 002D1558*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802D475C 002D155C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D4760 002D1560*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*802D4764 002D1564*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4768 002D1568*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D476C 002D156C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*802D4770 002D1570*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D4774 002D1574*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3768 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4778 002D1578*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802D477C 002D157C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802D4780 002D1580*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f0, context->f1);
/*802D4784 002D1584*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*802D4788 002D1588*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802D478C 002D158C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*802D4790 002D1590*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E376C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4794 002D1594*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f1);
/*802D4798 002D1598*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D479C 002D159C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D47A0 002D15A0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*802D47A4 002D15A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D47A8 002D15A8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D47AC 002D15AC*/ PPC::Runtime::ASM::fneg(context->f3, context->f3);
/*802D47B0 002D15B0*/ PPC::Runtime::ASM::fmadds(context->f2, context->f4, context->f3, context->f2);
/*802D47B4 002D15B4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D47B8 002D15B8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D47BC 002D15BC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*802D47C0 002D15C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D47C4 002D15C4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D47C8 002D15C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D47CC 002D15CC*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*802D47D0 002D15D0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D47D4 002D15D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D47D8 002D15D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D47DC 002D15DC*/ PPC::Runtime::ASM::ble(.L_802D47F4);
/*802D47E0 002D15E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D47E4 002D15E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D47E8 002D15E8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802D47EC 002D15EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D47F0 002D15F0*/ PPC::Runtime::ASM::b(.L_802D4810);
RUNTIME_PPC_JUMP_LABEL(.L_802D47F4, 0x802D47F4) //this is a jump label
/*802D47F4 002D15F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3774 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D47F8 002D15F8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D47FC 002D15FC*/ PPC::Runtime::ASM::bge(.L_802D4810);
/*802D4800 002D1600*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D4804 002D1604*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D4808 002D1608*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802D480C 002D160C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802D4810, 0x802D4810) //this is a jump label
/*802D4810 002D1610*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D4814 002D1614*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802D4818 002D1618*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E376C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D481C 002D161C*/ PPC::Runtime::ASM::fadds(context->f2, context->f1, context->f0);
/*802D4820 002D1620*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4824 002D1624*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4828 002D1628*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802D482C 002D162C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D4830 002D1630*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D4834 002D1634*/ PPC::Runtime::ASM::fneg(context->f3, context->f3);
/*802D4838 002D1638*/ PPC::Runtime::ASM::fmadds(context->f2, context->f4, context->f3, context->f2);
/*802D483C 002D163C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D4840 002D1640*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D4844 002D1644*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*802D4848 002D1648*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D484C 002D164C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D4850 002D1650*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D4854 002D1654*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*802D4858 002D1658*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D485C 002D165C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D4860 002D1660*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D4864 002D1664*/ PPC::Runtime::ASM::ble(.L_802D487C);
/*802D4868 002D1668*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D486C 002D166C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D4870 002D1670*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802D4874 002D1674*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D4878 002D1678*/ PPC::Runtime::ASM::b(.L_802D4898);
RUNTIME_PPC_JUMP_LABEL(.L_802D487C, 0x802D487C) //this is a jump label
/*802D487C 002D167C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3774 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4880 002D1680*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D4884 002D1684*/ PPC::Runtime::ASM::bge(.L_802D4898);
/*802D4888 002D1688*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D488C 002D168C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D4890 002D1690*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802D4894 002D1694*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802D4898, 0x802D4898) //this is a jump label
/*802D4898 002D1698*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D489C 002D169C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*802D48A0 002D16A0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802D48A4 002D16A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802D48A8 002D16A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D48AC 002D16AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D48B0 002D16B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D48B4 002D16B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802D48B8 002D16B8*/ PPC::Runtime::ASM::blr();
}