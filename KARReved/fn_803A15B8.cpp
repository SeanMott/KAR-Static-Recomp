//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8039A7BC.hpp"



void fn_803A15B8(PPC::Runtime::GCContext* context)
{
/*803A15B8 0039E3B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803A15BC 0039E3BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A15C0 0039E3C0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC548 @ Get_MemoryOffset_SDA21);
/*803A15C4 0039E3C4*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC510 @ Get_MemoryOffset_SDA21);
/*803A15C8 0039E3C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803A15CC 0039E3CC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A15D0 0039E3D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A15D4 0039E3D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A15D8 0039E3D8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803A15DC 0039E3DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A15E0 0039E3E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A15E4 0039E3E4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803A15E8 0039E3E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A15EC 0039E3EC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A15F0 0039E3F0*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*803A15F4 0039E3F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803A15F8 0039E3F8*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A15FC 0039E3FC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A1600 0039E400*/ PPC::Runtime::ASM::beq(.L_803A1620);
/*803A1604 0039E404*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*803A1608 0039E408*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*803A160C 0039E40C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A1610 0039E410*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*803A1614 0039E414*/ PPC::Runtime::ASM::bge(.L_803A1620);
/*803A1618 0039E418*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*803A161C 0039E41C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803A1620, 0x803A1620) //this is a jump label
/*803A1620 0039E420*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803A1624 0039E424*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*803A1628 0039E428*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A162C 0039E42C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A1630 0039E430*/ PPC::Runtime::ASM::beq(.L_803A1650);
/*803A1634 0039E434*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r29));
/*803A1638 0039E438*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*803A163C 0039E43C*/ PPC::Runtime::ASM::neg(context->r0, context->r0);
/*803A1640 0039E440*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*803A1644 0039E444*/ PPC::Runtime::ASM::ble(.L_803A1650);
/*803A1648 0039E448*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A164C 0039E44C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803A1650, 0x803A1650) //this is a jump label
/*803A1650 0039E450*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803A1654 0039E454*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*803A1658 0039E458*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A165C 0039E45C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A1660 0039E460*/ PPC::Runtime::ASM::beq(.L_803A169C);
/*803A1664 0039E464*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*803A1668 0039E468*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*803A166C 0039E46C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A1670 0039E470*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*803A1674 0039E474*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1678 0039E478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A167C 0039E47C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5078 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1680 0039E480*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A1684 0039E484*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f2);
/*803A1688 0039E488*/ PPC::Runtime::ASM::bl(fn_tanf?);
/*803A168C 0039E48C*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*803A1690 0039E490*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A1694 0039E494*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*803A1698 0039E498*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803A169C, 0x803A169C) //this is a jump label
/*803A169C 0039E49C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803A16A0 0039E4A0*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*803A16A4 0039E4A4*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A16A8 0039E4A8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A16AC 0039E4AC*/ PPC::Runtime::ASM::beq(.L_803A16E8);
/*803A16B0 0039E4B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*803A16B4 0039E4B4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*803A16B8 0039E4B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A16BC 0039E4BC*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*803A16C0 0039E4C0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A16C4 0039E4C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A16C8 0039E4C8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5078 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A16CC 0039E4CC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A16D0 0039E4D0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f2);
/*803A16D4 0039E4D4*/ PPC::Runtime::ASM::bl(fn_tanf?);
/*803A16D8 0039E4D8*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*803A16DC 0039E4DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A16E0 0039E4E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*803A16E4 0039E4E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803A16E8, 0x803A16E8) //this is a jump label
/*803A16E8 0039E4E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A16EC 0039E4EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*803A16F0 0039E4F0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A16F4 0039E4F4*/ PPC::Runtime::ASM::bge(.L_803A1700);
/*803A16F8 0039E4F8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x4c);
/*803A16FC 0039E4FC*/ PPC::Runtime::ASM::b(.L_803A1704);
RUNTIME_PPC_JUMP_LABEL(.L_803A1700, 0x803A1700) //this is a jump label
/*803A1700 0039E500*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
RUNTIME_PPC_JUMP_LABEL(.L_803A1704, 0x803A1704) //this is a jump label
/*803A1704 0039E504*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A1708 0039E508*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A170C 0039E50C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*803A1710 0039E510*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A1714 0039E514*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A1718 0039E518*/ PPC::Runtime::ASM::bge(.L_803A1724);
/*803A171C 0039E51C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x50);
/*803A1720 0039E520*/ PPC::Runtime::ASM::b(.L_803A1728);
RUNTIME_PPC_JUMP_LABEL(.L_803A1724, 0x803A1724) //this is a jump label
/*803A1724 0039E524*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
RUNTIME_PPC_JUMP_LABEL(.L_803A1728, 0x803A1728) //this is a jump label
/*803A1728 0039E528*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A172C 0039E52C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803A1730 0039E530*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A1734 0039E534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A1738 0039E538*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 803A173C 0039E53C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A1740 0039E540*/ PPC::Runtime::ASM::beq(.L_803A1764);
/*803A1744 0039E544*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A1748 0039E548*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A174C 0039E54C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*803A1750 0039E550*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803A1754 0039E554*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803A1758 0039E558*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r12));
/*803A175C 0039E55C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A1760 0039E560*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803A1764, 0x803A1764) //this is a jump label
/*803A1764 0039E564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803A1768 0039E568*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A176C 0039E56C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A1770 0039E570*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A1774 0039E574*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A1778 0039E578*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803A177C 0039E57C*/ PPC::Runtime::ASM::blr();
}