//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8034CD48.hpp"
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8034CD48.hpp"
#include "fn_8039A7BC.hpp"
#include "fn_8034CD48.hpp"
#include "fn_803A7730.hpp"
#include "fn_803A7BF8.hpp"
#include "fn_8039A7BC.hpp"
#include "fn_803A7730.hpp"
#include "fn_803A7BF8.hpp"
#include "fn_8039A7BC.hpp"
#include "fn_8034CD48.hpp"
#include "fn_803A797C.hpp"
#include "fn_8039A7BC.hpp"
#include "fn_803A77B8.hpp"



void fn_803A4820(PPC::Runtime::GCContext* context)
{
/*803A4820 003A1620*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*803A4824 003A1624*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A4828 003A1628*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803A482C 003A162C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803A4830 003A1630*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803A4834 003A1634*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803A4838 003A1638*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803A483C 003A163C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803A4840 003A1640*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803A4844 003A1644*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803A4848 003A1648*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803A484C 003A164C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A4850 003A1650*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A4854 003A1654*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC5E0 @ Get_MemoryOffset_SDA21);
/*803A4858 003A1658*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC5A0 @ Get_MemoryOffset_SDA21);
/*803A485C 003A165C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A4860 003A1660*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A4864 003A1664*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*803A4868 003A1668*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803A486C 003A166C*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A4870 003A1670  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4874 003A1674*/ PPC::Runtime::ASM::beq(.L_803A488C);
/*803A4878 003A1678*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A487C 003A167C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A4880 003A1680*/ PPC::Runtime::ASM::beq(.L_803A488C);
/*803A4884 003A1684*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A4888 003A1688*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803A488C, 0x803A488C) //this is a jump label
/*803A488C 003A168C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A4890 003A1690*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*803A4894 003A1694*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A4898 003A1698  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A489C 003A169C*/ PPC::Runtime::ASM::beq(.L_803A48C0);
/*803A48A0 003A16A0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A48A4 003A16A4*/ PPC::Runtime::ASM::bl(fn_8034CD48);
/*803A48A8 003A16A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A48AC 003A16AC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A48B0 003A16B0*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803A48B4 003A16B4*/ PPC::Runtime::ASM::bge(.L_803A48C0);
/*803A48B8 003A16B8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*803A48BC 003A16BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803A48C0, 0x803A48C0) //this is a jump label
/*803A48C0 003A16C0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*803A48C4 003A16C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A48C8 003A16C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*803A48CC 003A16CC*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*803A48D0 003A16D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*803A48D4 003A16D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*803A48D8 003A16D8*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f2);
/*803A48DC 003A16DC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E50B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A48E0 003A16E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*803A48E4 003A16E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A48E8 003A16E8*/ PPC::Runtime::ASM::fdivs(context->f31, context->f3, context->f2);
/*803A48EC 003A16EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A48F0 003A16F0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*803A48F4 003A16F4*/ PPC::Runtime::ASM::add(context->r31, context->r5, context->r0);
/*803A48F8 003A16F8*/ PPC::Runtime::ASM::fdivs(context->f30, context->f0, context->f2);
/*803A48FC 003A16FC*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A4900 003A1700  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4904 003A1704*/ PPC::Runtime::ASM::beq(.L_803A4938);
/*803A4908 003A1708*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*803A490C 003A170C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803A4910 003A1710*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803A4914 003A1714*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f30);
/*803A4918 003A1718*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A491C 003A171C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803A4920 003A1720*/ PPC::Runtime::ASM::bge(.L_803A492C);
/*803A4924 003A1724*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*803A4928 003A1728*/ PPC::Runtime::ASM::b(.L_803A4930);
RUNTIME_PPC_JUMP_LABEL(.L_803A492C, 0x803A492C) //this is a jump label
/*803A492C 003A172C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
RUNTIME_PPC_JUMP_LABEL(.L_803A4930, 0x803A4930) //this is a jump label
/*803A4930 003A1730*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A4934 003A1734*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803A4938, 0x803A4938) //this is a jump label
/*803A4938 003A1738*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A493C 003A173C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*803A4940 003A1740*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A4944 003A1744  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4948 003A1748*/ PPC::Runtime::ASM::beq(.L_803A497C);
/*803A494C 003A174C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*803A4950 003A1750*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A4954 003A1754*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803A4958 003A1758*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803A495C 003A175C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*803A4960 003A1760*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A4964 003A1764*/ PPC::Runtime::ASM::bge(.L_803A4970);
/*803A4968 003A1768*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*803A496C 003A176C*/ PPC::Runtime::ASM::b(.L_803A4974);
RUNTIME_PPC_JUMP_LABEL(.L_803A4970, 0x803A4970) //this is a jump label
/*803A4970 003A1770*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
RUNTIME_PPC_JUMP_LABEL(.L_803A4974, 0x803A4974) //this is a jump label
/*803A4974 003A1774*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A4978 003A1778*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803A497C, 0x803A497C) //this is a jump label
/*803A497C 003A177C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A4980 003A1780*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*803A4984 003A1784*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A4988 003A1788  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A498C 003A178C*/ PPC::Runtime::ASM::beq(.L_803A49EC);
/*803A4990 003A1790*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4994 003A1794*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A4998 003A1798*/ PPC::Runtime::ASM::beq(.L_803A49BC);
/*803A499C 003A179C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A49A0 003A17A0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A49A4 003A17A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A49A8 003A17A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*803A49AC 003A17AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*803A49B0 003A17B0*/ PPC::Runtime::ASM::lfsx(context->f1, context->r3, context->r0);
/*803A49B4 003A17B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A49B8 003A17B8*/ PPC::Runtime::ASM::bge(.L_803A49EC);
RUNTIME_PPC_JUMP_LABEL(.L_803A49BC, 0x803A49BC) //this is a jump label
/*803A49BC 003A17BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*803A49C0 003A17C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A49C4 003A17C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A49C8 003A17C8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*803A49CC 003A17CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*803A49D0 003A17D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A49D4 003A17D4*/ PPC::Runtime::ASM::bge(.L_803A49E0);
/*803A49D8 003A17D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803A49DC 003A17DC*/ PPC::Runtime::ASM::b(.L_803A49E4);
RUNTIME_PPC_JUMP_LABEL(.L_803A49E0, 0x803A49E0) //this is a jump label
/*803A49E0 003A17E0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
RUNTIME_PPC_JUMP_LABEL(.L_803A49E4, 0x803A49E4) //this is a jump label
/*803A49E4 003A17E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A49E8 003A17E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803A49EC, 0x803A49EC) //this is a jump label
/*803A49EC 003A17EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A49F0 003A17F0*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*803A49F4 003A17F4*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 803A49F8 003A17F8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A49FC 003A17FC*/ PPC::Runtime::ASM::beq(.L_803A4A68);
/*803A4A00 003A1800*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4A04 003A1804*/ PPC::Runtime::ASM::bl(fn_8034CD48);
/*803A4A08 003A1808*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4A0C 003A180C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A4A10 003A1810*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803A4A14 003A1814*/ PPC::Runtime::ASM::beq(.L_803A4A38);
/*803A4A18 003A1818*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A4A1C 003A181C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*803A4A20 003A1820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*803A4A24 003A1824*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*803A4A28 003A1828*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/*803A4A2C 003A182C*/ PPC::Runtime::ASM::lfsx(context->f0, context->r3, context->r0);
/*803A4A30 003A1830*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A4A34 003A1834*/ PPC::Runtime::ASM::bge(.L_803A4A68);
RUNTIME_PPC_JUMP_LABEL(.L_803A4A38, 0x803A4A38) //this is a jump label
/*803A4A38 003A1838*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*803A4A3C 003A183C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A4A40 003A1840*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A4A44 003A1844*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*803A4A48 003A1848*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803A4A4C 003A184C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A4A50 003A1850*/ PPC::Runtime::ASM::bge(.L_803A4A5C);
/*803A4A54 003A1854*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803A4A58 003A1858*/ PPC::Runtime::ASM::b(.L_803A4A60);
RUNTIME_PPC_JUMP_LABEL(.L_803A4A5C, 0x803A4A5C) //this is a jump label
/*803A4A5C 003A185C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_803A4A60, 0x803A4A60) //this is a jump label
/*803A4A60 003A1860*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A4A64 003A1864*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803A4A68, 0x803A4A68) //this is a jump label
/*803A4A68 003A1868*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A4A6C 003A186C*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*803A4A70 003A1870*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 803A4A74 003A1874  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4A78 003A1878*/ PPC::Runtime::ASM::beq(.L_803A4ADC);
/*803A4A7C 003A187C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4A80 003A1880*/ PPC::Runtime::ASM::bl(fn_8034CD48);
/*803A4A84 003A1884*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4A88 003A1888*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*803A4A8C 003A188C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*803A4A90 003A1890*/ PPC::Runtime::ASM::bge(.L_803A4ADC);
/*803A4A94 003A1894*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A4A98 003A1898*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4A9C 003A189C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803A4AA0 003A18A0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E50C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A4AA4 003A18A4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*803A4AA8 003A18A8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*803A4AAC 003A18AC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803A4AB0 003A18B0*/ PPC::Runtime::ASM::bl(fn_803A7730);
/*803A4AB4 003A18B4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803A4AB8 003A18B8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4ABC 003A18BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x30);
/*803A4AC0 003A18C0*/ PPC::Runtime::ASM::bl(fn_803A7BF8);
/* 803A4AC4 003A18C4  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4AC8 003A18C8*/ PPC::Runtime::ASM::beq(.L_803A4B90);
/*803A4ACC 003A18CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4AD0 003A18D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803A4AD4 003A18D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4AD8 003A18D8*/ PPC::Runtime::ASM::b(.L_803A4B90);
RUNTIME_PPC_JUMP_LABEL(.L_803A4ADC, 0x803A4ADC) //this is a jump label
/*803A4ADC 003A18DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A4AE0 003A18E0*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*803A4AE4 003A18E4*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 803A4AE8 003A18E8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4AEC 003A18EC*/ PPC::Runtime::ASM::beq(.L_803A4B30);
/*803A4AF0 003A18F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4AF4 003A18F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803A4AF8 003A18F8*/ PPC::Runtime::ASM::beq(.L_803A4B30);
/*803A4AFC 003A18FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803A4B00 003A1900*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4B04 003A1904*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r31));
/*803A4B08 003A1908*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E50C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A4B0C 003A190C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*803A4B10 003A1910*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*803A4B14 003A1914*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803A4B18 003A1918*/ PPC::Runtime::ASM::bl(fn_803A7730);
/*803A4B1C 003A191C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803A4B20 003A1920*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4B24 003A1924*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*803A4B28 003A1928*/ PPC::Runtime::ASM::bl(fn_803A7BF8);
/*803A4B2C 003A192C*/ PPC::Runtime::ASM::b(.L_803A4B90);
RUNTIME_PPC_JUMP_LABEL(.L_803A4B30, 0x803A4B30) //this is a jump label
/*803A4B30 003A1930*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A4B34 003A1934*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*803A4B38 003A1938*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 803A4B3C 003A193C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4B40 003A1940*/ PPC::Runtime::ASM::beq(.L_803A4B74);
/*803A4B44 003A1944*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4B48 003A1948*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803A4B4C 003A194C*/ PPC::Runtime::ASM::beq(.L_803A4B90);
/*803A4B50 003A1950*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4B54 003A1954*/ PPC::Runtime::ASM::bl(fn_8034CD48);
/*803A4B58 003A1958*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A4B5C 003A195C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803A4B60 003A1960*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803A4B64 003A1964*/ PPC::Runtime::ASM::bge(.L_803A4B90);
/*803A4B68 003A1968*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4B6C 003A196C*/ PPC::Runtime::ASM::bl(fn_803A797C);
/*803A4B70 003A1970*/ PPC::Runtime::ASM::b(.L_803A4B90);
RUNTIME_PPC_JUMP_LABEL(.L_803A4B74, 0x803A4B74) //this is a jump label
/*803A4B74 003A1974*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803A4B78 003A1978*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*803A4B7C 003A197C*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 803A4B80 003A1980  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803A4B84 003A1984*/ PPC::Runtime::ASM::beq(.L_803A4B90);
/*803A4B88 003A1988*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x44);
/*803A4B8C 003A198C*/ PPC::Runtime::ASM::bl(fn_803A77B8);
RUNTIME_PPC_JUMP_LABEL(.L_803A4B90, 0x803A4B90) //this is a jump label
/*803A4B90 003A1990*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803A4B94 003A1994*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803A4B98 003A1998*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803A4B9C 003A199C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803A4BA0 003A19A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803A4BA4 003A19A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803A4BA8 003A19A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803A4BAC 003A19AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803A4BB0 003A19B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A4BB4 003A19B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*803A4BB8 003A19B8*/ PPC::Runtime::ASM::blr();
}