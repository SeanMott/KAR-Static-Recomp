//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A4724(PPC::Runtime::GCContext* context)
{
/*802A4724 002A1524*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A4728 002A1528*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A472C 002A152C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A4730 002A1530*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A4734 002A1534*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A4738 002A1538*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A473C 002A153C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A4740 002A1540*/ PPC::Runtime::ASM::beq(.L_802A4860);
/*802A4744 002A1544*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C39E4 @ Get_MemoryOffset_HighBit);
/*802A4748 002A1548*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x13f4);
/*802A474C 002A154C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C39E4 @ Get_MemoryOffset_LowBit);
/*802A4750 002A1550*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4754 002A1554*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A4758 002A1558*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A475C 002A155C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A4760 002A1560*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A4764 002A1564*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A4768 002A1568*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A476C 002A156C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12f0);
/*802A4770 002A1570*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4774 002A1574*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4778 002A1578*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x11ec);
/*802A477C 002A157C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4780 002A1580*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4784 002A1584*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10e8);
/*802A4788 002A1588*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A478C 002A158C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4790 002A1590*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfe4);
/*802A4794 002A1594*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4798 002A1598*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A479C 002A159C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xee0);
/*802A47A0 002A15A0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47A4 002A15A4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47A8 002A15A8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*802A47AC 002A15AC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47B0 002A15B0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47B4 002A15B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*802A47B8 002A15B8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47BC 002A15BC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47C0 002A15C0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*802A47C4 002A15C4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47C8 002A15C8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47CC 002A15CC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*802A47D0 002A15D0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47D4 002A15D4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47D8 002A15D8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*802A47DC 002A15DC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47E0 002A15E0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47E4 002A15E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A47E8 002A15E8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47EC 002A15EC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47F0 002A15F0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A47F4 002A15F4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A47F8 002A15F8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A47FC 002A15FC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A4800 002A1600*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4804 002A1604*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4808 002A1608*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A480C 002A160C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4810 002A1610*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4814 002A1614*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A4818 002A1618*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A481C 002A161C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4820 002A1620*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A4824 002A1624*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4828 002A1628*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A482C 002A162C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A4830 002A1630*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4834 002A1634*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4838 002A1638*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A483C 002A163C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4840 002A1640*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4844 002A1644*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4848 002A1648*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A484C 002A164C*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A4850 002A1650*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A4854 002A1654*/ PPC::Runtime::ASM::ble(.L_802A4860);
/*802A4858 002A1658*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A485C 002A165C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A4860, 0x802A4860) //this is a jump label
/*802A4860 002A1660*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A4864 002A1664*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4868 002A1668*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A486C 002A166C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A4870 002A1670*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A4874 002A1674*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A4878 002A1678*/ PPC::Runtime::ASM::blr();
}