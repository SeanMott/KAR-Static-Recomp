//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D1A54.hpp"
#include "fn_800D1A54.hpp"
#include "fn_800D1A54.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800D1A54.hpp"
#include "fn_800D1A54.hpp"



void fn_800B4720(PPC::Runtime::GCContext* context)
{
/*800B4720 000B1520*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*800B4724 000B1524*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B4728 000B1528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800B472C 000B152C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800B4730 000B1530*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*800B4734 000B1534*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800B4738 000B1538*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800B473C 000B153C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800B4740 000B1540*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800B4744 000B1544*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800B4748 000B1548*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800B474C 000B154C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800B4750 000B1550*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*800B4754 000B1554*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800B4758 000B1558*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B475C 000B155C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B4760 000B1560*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800B4764 000B1564*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800B4768 000B1568*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B476C 000B156C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B4770 000B1570*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800B4774 000B1574*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800B4778 000B1578*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B477C 000B157C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B4780 000B1580*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800B4784 000B1584*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B4788 000B1588*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B478C 000B158C*/ PPC::Runtime::ASM::bge(.L_800B4798);
/*800B4790 000B1590*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B4794 000B1594*/ PPC::Runtime::ASM::b(.L_800B4A40);
RUNTIME_PPC_JUMP_LABEL(.L_800B4798, 0x800B4798) //this is a jump label
/*800B4798 000B1598*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B479C 000B159C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B47A0 000B15A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B47A4 000B15A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*800B47A8 000B15A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B47AC 000B15AC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x38);
/*800B47B0 000B15B0*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*800B47B4 000B15B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B47B8 000B15B8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B47BC 000B15BC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B47C0 000B15C0*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*800B47C4 000B15C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B47C8 000B15C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B47CC 000B15CC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800B47D0 000B15D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B47D4 000B15D4*/ PPC::Runtime::ASM::bl(fn_800D1A54);
/*800B47D8 000B15D8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800B47DC 000B15DC*/ PPC::Runtime::ASM::beq(.L_800B47E8);
/*800B47E0 000B15E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B47E4 000B15E4*/ PPC::Runtime::ASM::b(.L_800B4A40);
RUNTIME_PPC_JUMP_LABEL(.L_800B47E8, 0x800B47E8) //this is a jump label
/*800B47E8 000B15E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B47EC 000B15EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B47F0 000B15F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B47F4 000B15F4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*800B47F8 000B15F8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*800B47FC 000B15FC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x38);
/*800B4800 000B1600*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*800B4804 000B1604*/ PPC::Runtime::ASM::fadds(context->f4, context->f1, context->f0);
/*800B4808 000B1608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*800B480C 000B160C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B4810 000B1610*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B4814 000B1614*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B4818 000B1618*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B481C 000B161C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B4820 000B1620*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B4824 000B1624*/ PPC::Runtime::ASM::fadds(context->f5, context->f1, context->f0);
/*800B4828 000B1628*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B482C 000B162C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B4830 000B1630*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF204 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B4834 000B1634*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B4838 000B1638*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B483C 000B163C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f2, context->f4);
/*800B4840 000B1640*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B4844 000B1644*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B4848 000B1648*/ PPC::Runtime::ASM::fmadds(context->f0, context->f31, context->f2, context->f5);
/*800B484C 000B164C*/ PPC::Runtime::ASM::fadds(context->f3, context->f4, context->f3);
/*800B4850 000B1650*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B4854 000B1654*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B4858 000B1658*/ PPC::Runtime::ASM::fmadds(context->f0, context->f30, context->f2, context->f3);
/*800B485C 000B165C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B4860 000B1660*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B4864 000B1664*/ PPC::Runtime::ASM::bl(fn_800D1A54);
/*800B4868 000B1668*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800B486C 000B166C*/ PPC::Runtime::ASM::beq(.L_800B4878);
/*800B4870 000B1670*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B4874 000B1674*/ PPC::Runtime::ASM::b(.L_800B4A40);
RUNTIME_PPC_JUMP_LABEL(.L_800B4878, 0x800B4878) //this is a jump label
/*800B4878 000B1678*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B487C 000B167C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B4880 000B1680*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B4884 000B1684*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*800B4888 000B1688*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B488C 000B168C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x38);
/*800B4890 000B1690*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f0);
/*800B4894 000B1694*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B4898 000B1698*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B489C 000B169C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF208 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B48A0 000B16A0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B48A4 000B16A4*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f2, context->f1);
/*800B48A8 000B16A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B48AC 000B16AC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f4);
/*800B48B0 000B16B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B48B4 000B16B4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f31, context->f2, context->f0);
/*800B48B8 000B16B8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B48BC 000B16BC*/ PPC::Runtime::ASM::fadds(context->f3, context->f4, context->f3);
/*800B48C0 000B16C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B48C4 000B16C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B48C8 000B16C8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f30, context->f2, context->f3);
/*800B48CC 000B16CC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B48D0 000B16D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B48D4 000B16D4*/ PPC::Runtime::ASM::bl(fn_800D1A54);
/*800B48D8 000B16D8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800B48DC 000B16DC*/ PPC::Runtime::ASM::beq(.L_800B48E8);
/*800B48E0 000B16E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B48E4 000B16E4*/ PPC::Runtime::ASM::b(.L_800B4A40);
RUNTIME_PPC_JUMP_LABEL(.L_800B48E8, 0x800B48E8) //this is a jump label
/*800B48E8 000B16E8*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B48EC 000B16EC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*800B48F0 000B16F0*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B48F4 000B16F4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B48F8 000B16F8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B48FC 000B16FC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f30, context->f6);
/*800B4900 000B1700*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B4904 000B1704*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f5);
/*800B4908 000B1708*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f4);
/*800B490C 000B170C*/ PPC::Runtime::ASM::fmsubs(context->f3, context->f31, context->f4, context->f3);
/*800B4910 000B1710*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f2, context->f6, context->f0);
/*800B4914 000B1714*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f30, context->f5, context->f1);
/*800B4918 000B1718*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B491C 000B171C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B4920 000B1720*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B4924 000B1724*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800B4928 000B1728*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B492C 000B172C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800B4930 000B1730*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B4934 000B1734*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B4938 000B1738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B493C 000B173C*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B4940 000B1740*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B4944 000B1744*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B4948 000B1748*/ PPC::Runtime::ASM::bge(.L_800B4954);
/*800B494C 000B174C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B4950 000B1750*/ PPC::Runtime::ASM::b(.L_800B4A40);
RUNTIME_PPC_JUMP_LABEL(.L_800B4954, 0x800B4954) //this is a jump label
/*800B4954 000B1754*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B4958 000B1758*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B495C 000B175C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B4960 000B1760*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*800B4964 000B1764*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B4968 000B1768*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x38);
/*800B496C 000B176C*/ PPC::Runtime::ASM::fadds(context->f2, context->f1, context->f0);
/*800B4970 000B1770*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B4974 000B1774*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B4978 000B1778*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF204 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B497C 000B177C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B4980 000B1780*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B4984 000B1784*/ PPC::Runtime::ASM::fmadds(context->f2, context->f0, context->f3, context->f2);
/*800B4988 000B1788*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B498C 000B178C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B4990 000B1790*/ PPC::Runtime::ASM::fadds(context->f5, context->f6, context->f5);
/*800B4994 000B1794*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B4998 000B1798*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f3, context->f5);
/*800B499C 000B179C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B49A0 000B17A0*/ PPC::Runtime::ASM::fadds(context->f4, context->f5, context->f4);
/*800B49A4 000B17A4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B49A8 000B17A8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B49AC 000B17AC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f3, context->f4);
/*800B49B0 000B17B0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B49B4 000B17B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B49B8 000B17B8*/ PPC::Runtime::ASM::bl(fn_800D1A54);
/*800B49BC 000B17BC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800B49C0 000B17C0*/ PPC::Runtime::ASM::beq(.L_800B49CC);
/*800B49C4 000B17C4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B49C8 000B17C8*/ PPC::Runtime::ASM::b(.L_800B4A40);
RUNTIME_PPC_JUMP_LABEL(.L_800B49CC, 0x800B49CC) //this is a jump label
/*800B49CC 000B17CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B49D0 000B17D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B49D4 000B17D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B49D8 000B17D8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*800B49DC 000B17DC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B49E0 000B17E0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x38);
/*800B49E4 000B17E4*/ PPC::Runtime::ASM::fadds(context->f2, context->f1, context->f0);
/*800B49E8 000B17E8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B49EC 000B17EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B49F0 000B17F0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF208 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B49F4 000B17F4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B49F8 000B17F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B49FC 000B17FC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f0, context->f3, context->f2);
/*800B4A00 000B1800*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B4A04 000B1804*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B4A08 000B1808*/ PPC::Runtime::ASM::fadds(context->f5, context->f6, context->f5);
/*800B4A0C 000B180C*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B4A10 000B1810*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f3, context->f5);
/*800B4A14 000B1814*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B4A18 000B1818*/ PPC::Runtime::ASM::fadds(context->f4, context->f5, context->f4);
/*800B4A1C 000B181C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B4A20 000B1820*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B4A24 000B1824*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f3, context->f4);
/*800B4A28 000B1828*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B4A2C 000B182C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B4A30 000B1830*/ PPC::Runtime::ASM::bl(fn_800D1A54);
/*800B4A34 000B1834*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, -0x1);
/*800B4A38 000B1838*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*800B4A3C 000B183C*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_800B4A40, 0x800B4A40) //this is a jump label
/*800B4A40 000B1840*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*800B4A44 000B1844*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800B4A48 000B1848*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800B4A4C 000B184C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800B4A50 000B1850*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800B4A54 000B1854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800B4A58 000B1858*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*800B4A5C 000B185C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B4A60 000B1860*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*800B4A64 000B1864*/ PPC::Runtime::ASM::blr();
}