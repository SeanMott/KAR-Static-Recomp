//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSSetCurrentContext.hpp"
#include "OSReport.hpp"
#include "fn___cvt_fp2unsigned.hpp"
#include "fn___cvt_fp2unsigned.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "fn___cvt_fp2unsigned.hpp"
#include "fn___cvt_fp2unsigned.hpp"
#include "OSReport.hpp"
#include "OSSetCurrentContext.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSReport.hpp"
#include "OSReport.hpp"



void OSDumpContext(PPC::Runtime::GCContext* context)
{
/*803D4848 003D1648*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D484C 003D164C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D4850 003D1650*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2f8, context->r1));
/*803D4854 003D1654*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r1));
/*803D4858 003D1658*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*803D485C 003D165C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804FAC30 @ Get_MemoryOffset_HighBit);
/*803D4860 003D1660*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4864 003D1664*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804FAC30 @ Get_MemoryOffset_LowBit);
/*803D4868 003D1668*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803D486C 003D166C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*803D4870 003D1670*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4874 003D1674*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*803D4878 003D1678*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 2);
/*803D487C 003D167C*/ PPC::Runtime::ASM::add(context->r27, context->r28, context->r0);
/*803D4880 003D1680*/ PPC::Runtime::ASM::b(.L_803D4884);
RUNTIME_PPC_JUMP_LABEL(.L_803D4884, 0x803D4884) //this is a jump label
/*803D4884 003D1684*/ PPC::Runtime::ASM::b(.L_803D4888);
RUNTIME_PPC_JUMP_LABEL(.L_803D4888, 0x803D4888) //this is a jump label
/*803D4888 003D1688*/ PPC::Runtime::ASM::b(.L_803D488C);
RUNTIME_PPC_JUMP_LABEL(.L_803D488C, 0x803D488C) //this is a jump label
/*803D488C 003D168C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*803D4890 003D1690*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803D4894 003D1694*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803D4898 003D1698*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*803D489C 003D169C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D48A0 003D16A0*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
/*803D48A4 003D16A4*/ PPC::Runtime::ASM::mr(context->r9, context->r8);
/*803D48A8 003D16A8*/ PPC::Runtime::ASM::addi(context->r7, context->r25, 0x10);
/*803D48AC 003D16AC*/ PPC::Runtime::ASM::bl(OSReport);
/*803D48B0 003D16B0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*803D48B4 003D16B4*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*803D48B8 003D16B8*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x10);
/*803D48BC 003D16BC*/ PPC::Runtime::ASM::blt(.L_803D488C);
/*803D48C0 003D16C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*803D48C4 003D16C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x74);
/*803D48C8 003D16C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*803D48CC 003D16CC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D48D0 003D16D0*/ PPC::Runtime::ASM::bl(OSReport);
/*803D48D4 003D16D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r28));
/*803D48D8 003D16D8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa4);
/*803D48DC 003D16DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19c, context->r28));
/*803D48E0 003D16E0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D48E4 003D16E4*/ PPC::Runtime::ASM::bl(OSReport);
/*803D48E8 003D16E8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd4);
/*803D48EC 003D16EC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D48F0 003D16F0*/ PPC::Runtime::ASM::bl(OSReport);
/*803D48F4 003D16F4*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*803D48F8 003D16F8*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 2);
/*803D48FC 003D16FC*/ PPC::Runtime::ASM::add(context->r27, context->r28, context->r0);
/*803D4900 003D1700*/ PPC::Runtime::ASM::b(.L_803D4904);
RUNTIME_PPC_JUMP_LABEL(.L_803D4904, 0x803D4904) //this is a jump label
/*803D4904 003D1704*/ PPC::Runtime::ASM::b(.L_803D4908);
RUNTIME_PPC_JUMP_LABEL(.L_803D4908, 0x803D4908) //this is a jump label
/*803D4908 003D1708*/ PPC::Runtime::ASM::b(.L_803D490C);
RUNTIME_PPC_JUMP_LABEL(.L_803D490C, 0x803D490C) //this is a jump label
/*803D490C 003D170C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r27));
/*803D4910 003D1710*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803D4914 003D1714*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r27));
/*803D4918 003D1718*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xe8);
/*803D491C 003D171C*/ PPC::Runtime::ASM::addi(context->r6, context->r25, 0x4);
/*803D4920 003D1720*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4924 003D1724*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4928 003D1728*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*803D492C 003D172C*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*803D4930 003D1730*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x4);
/*803D4934 003D1734*/ PPC::Runtime::ASM::blt(.L_803D490C);
/*803D4938 003D1738*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a2, context->r28));
/*803D493C 003D173C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 31);
/*803D4940 003D1740*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D4944 003D1744*/ PPC::Runtime::ASM::beq(.L_803D4A80);
/*803D4948 003D1748*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803D494C 003D174C*/ PPC::Runtime::ASM::lis(context->r6, 0x8000);
/*803D4950 003D1750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r6));
/*803D4954 003D1754*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803D4958 003D1758*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*803D495C 003D175C*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r1));
/*803D4960 003D1760*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*803D4964 003D1764*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803D4968 003D1768*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b2, context->r1));
/*803D496C 003D176C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r6));
/*803D4970 003D1770*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803D4974 003D1774*/ PPC::Runtime::ASM::bne(.L_803D497C);
/*803D4978 003D1778*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_803D497C, 0x803D497C) //this is a jump label
/*803D497C 003D177C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803D4980 003D1780*/ PPC::Runtime::ASM::bl(OSSetCurrentContext);
/*803D4984 003D1784*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10c);
/*803D4988 003D1788*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D498C 003D178C*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4990 003D1790*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*803D4994 003D1794*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 3);
/*803D4998 003D1798*/ PPC::Runtime::ASM::add(context->r26, context->r28, context->r0);
/*803D499C 003D179C*/ PPC::Runtime::ASM::b(.L_803D49A0);
RUNTIME_PPC_JUMP_LABEL(.L_803D49A0, 0x803D49A0) //this is a jump label
/*803D49A0 003D17A0*/ PPC::Runtime::ASM::b(.L_803D49A4);
RUNTIME_PPC_JUMP_LABEL(.L_803D49A4, 0x803D49A4) //this is a jump label
/*803D49A4 003D17A4*/ PPC::Runtime::ASM::b(.L_803D49A8);
RUNTIME_PPC_JUMP_LABEL(.L_803D49A8, 0x803D49A8) //this is a jump label
/*803D49A8 003D17A8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r26));
/*803D49AC 003D17AC*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*803D49B0 003D17B0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803D49B4 003D17B4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r26));
/*803D49B8 003D17B8*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*803D49BC 003D17BC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803D49C0 003D17C0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D49C4 003D17C4*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803D49C8 003D17C8*/ PPC::Runtime::ASM::mr(context->r7, context->r27);
/*803D49CC 003D17CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x120);
/*803D49D0 003D17D0*/ PPC::Runtime::ASM::addi(context->r6, context->r25, 0x1);
/*803D49D4 003D17D4*/ PPC::Runtime::ASM::bl(OSReport);
/*803D49D8 003D17D8*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
/*803D49DC 003D17DC*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x2);
/*803D49E0 003D17E0*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x20);
/*803D49E4 003D17E4*/ PPC::Runtime::ASM::blt(.L_803D49A8);
/*803D49E8 003D17E8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x13c);
/*803D49EC 003D17EC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D49F0 003D17F0*/ PPC::Runtime::ASM::bl(OSReport);
/*803D49F4 003D17F4*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*803D49F8 003D17F8*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 3);
/*803D49FC 003D17FC*/ PPC::Runtime::ASM::add(context->r26, context->r28, context->r0);
/*803D4A00 003D1800*/ PPC::Runtime::ASM::b(.L_803D4A04);
RUNTIME_PPC_JUMP_LABEL(.L_803D4A04, 0x803D4A04) //this is a jump label
/*803D4A04 003D1804*/ PPC::Runtime::ASM::b(.L_803D4A08);
RUNTIME_PPC_JUMP_LABEL(.L_803D4A08, 0x803D4A08) //this is a jump label
/*803D4A08 003D1808*/ PPC::Runtime::ASM::b(.L_803D4A0C);
RUNTIME_PPC_JUMP_LABEL(.L_803D4A0C, 0x803D4A0C) //this is a jump label
/*803D4A0C 003D180C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r26));
/*803D4A10 003D1810*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*803D4A14 003D1814*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803D4A18 003D1818*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r26));
/*803D4A1C 003D181C*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*803D4A20 003D1820*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803D4A24 003D1824*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4A28 003D1828*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803D4A2C 003D182C*/ PPC::Runtime::ASM::mr(context->r7, context->r27);
/*803D4A30 003D1830*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x150);
/*803D4A34 003D1834*/ PPC::Runtime::ASM::addi(context->r6, context->r25, 0x1);
/*803D4A38 003D1838*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4A3C 003D183C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
/*803D4A40 003D1840*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x2);
/*803D4A44 003D1844*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x20);
/*803D4A48 003D1848*/ PPC::Runtime::ASM::blt(.L_803D4A0C);
/*803D4A4C 003D184C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803D4A50 003D1850*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r1));
/*803D4A54 003D1854*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803D4A58 003D1858*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*803D4A5C 003D185C*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b2, context->r1));
/*803D4A60 003D1860*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r3));
/*803D4A64 003D1864*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803D4A68 003D1868*/ PPC::Runtime::ASM::bne(.L_803D4A70);
/*803D4A6C 003D186C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D4A70, 0x803D4A70) //this is a jump label
/*803D4A70 003D1870*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803D4A74 003D1874*/ PPC::Runtime::ASM::bl(OSSetCurrentContext);
/*803D4A78 003D1878*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803D4A7C 003D187C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_803D4A80, 0x803D4A80) //this is a jump label
/*803D4A80 003D1880*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x170);
/*803D4A84 003D1884*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4A88 003D1888*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4A8C 003D188C*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*803D4A90 003D1890*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*803D4A94 003D1894*/ PPC::Runtime::ASM::b(.L_803D4A98);
RUNTIME_PPC_JUMP_LABEL(.L_803D4A98, 0x803D4A98) //this is a jump label
/*803D4A98 003D1898*/ PPC::Runtime::ASM::b(.L_803D4A9C);
RUNTIME_PPC_JUMP_LABEL(.L_803D4A9C, 0x803D4A9C) //this is a jump label
/*803D4A9C 003D189C*/ PPC::Runtime::ASM::b(.L_803D4ABC);
RUNTIME_PPC_JUMP_LABEL(.L_803D4AA0, 0x803D4AA0) //this is a jump label
/*803D4AA0 003D18A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*803D4AA4 003D18A4*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803D4AA8 003D18A8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*803D4AAC 003D18AC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x198);
/*803D4AB0 003D18B0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4AB4 003D18B4*/ PPC::Runtime::ASM::bl(OSReport);
/*803D4AB8 003D18B8*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_803D4ABC, 0x803D4ABC) //this is a jump label
/*803D4ABC 003D18BC*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*803D4AC0 003D18C0*/ PPC::Runtime::ASM::beq(.L_803D4ADC);
/*803D4AC4 003D18C4*/ PPC::Runtime::ASM::addis(context->r0, context->r25, 0x1);
/*803D4AC8 003D18C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*803D4ACC 003D18CC*/ PPC::Runtime::ASM::beq(.L_803D4ADC);
/*803D4AD0 003D18D0*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x10);
/*803D4AD4 003D18D4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*803D4AD8 003D18D8*/ PPC::Runtime::ASM::blt(.L_803D4AA0);
RUNTIME_PPC_JUMP_LABEL(.L_803D4ADC, 0x803D4ADC) //this is a jump label
/*803D4ADC 003D18DC*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r1));
/*803D4AE0 003D18E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r1));
/*803D4AE4 003D18E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x2f8);
/*803D4AE8 003D18E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D4AEC 003D18EC*/ PPC::Runtime::ASM::blr();
}