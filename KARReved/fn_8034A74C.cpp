//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034AABC.hpp"
#include "fn_8034AAE4.hpp"



void fn_8034A74C(PPC::Runtime::GCContext* context)
{
/*8034A74C 0034754C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8034A750 00347550*/ PPC::Runtime::ASM::mflr(context->r0);
/*8034A754 00347554*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8034A758 00347558*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8034A75C 0034755C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8034A760 00347560*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8034A764 00347564*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD93C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034A768 00347568*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8034A76C 0034756C*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8034A770 00347570*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*8034A774 00347574*/ PPC::Runtime::ASM::bl(fn_8034AABC);
/*8034A778 00347578*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x8);
/*8034A77C 0034757C*/ PPC::Runtime::ASM::addic.(context->r5, context->r3, 0x8);
/*8034A780 00347580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8034A784 00347584*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8034A788 00347588*/ PPC::Runtime::ASM::beq(.L_8034A89C);
/*8034A78C 0034758C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*8034A790 00347590*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8034A794 00347594*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*8034A798 00347598*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8034A79C 0034759C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8034A7A0 003475A0*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*8034A7A4 003475A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8034A7A8 003475A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8034A7AC 003475AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8034A7B0 003475B0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8034A7B4 003475B4*/ PPC::Runtime::ASM::beq(.L_8034A7E8);
/*8034A7B8 003475B8*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8034A7BC 003475BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8034A7C0 003475C0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8034A7C4 003475C4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8034A7C8 003475C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8034A7CC 003475CC*/ PPC::Runtime::ASM::bne(.L_8034A7E8);
/*8034A7D0 003475D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E9C60 @ Get_MemoryOffset_HighBit);
/*8034A7D4 003475D4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804E9C6C @ Get_MemoryOffset_HighBit);
/*8034A7D8 003475D8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E9C60 @ Get_MemoryOffset_LowBit);
/*8034A7DC 003475DC*/ PPC::Runtime::ASM::li(context->r4, 0x5d);
/*8034A7E0 003475E0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804E9C6C @ Get_MemoryOffset_LowBit);
/*8034A7E4 003475E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8034A7E8, 0x8034A7E8) //this is a jump label
/*8034A7E8 003475E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8034A7EC 003475EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*8034A7F0 003475F0*/ PPC::Runtime::ASM::addi(context->r26, context->r27, 0x24);
/*8034A7F4 003475F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8034A7F8 003475F8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8034A7FC 003475FC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*8034A800 00347600*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8034A804 00347604*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8034A808 00347608*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8034A80C 0034760C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8034A810 00347610*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8034A814 00347614*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8034A818 00347618*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8034A81C 0034761C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*8034A820 00347620*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8034A824 00347624*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*8034A828 00347628*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*8034A82C 0034762C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*8034A830 00347630*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*8034A834 00347634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8034A838 00347638*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8034A83C 0034763C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8034A840 00347640*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8034A844 00347644*/ PPC::Runtime::ASM::bctrl();
/*8034A848 00347648*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*8034A84C 0034764C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E456C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034A850 00347650*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*8034A854 00347654*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034A858 00347658*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8034A85C 0034765C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8034A860 00347660*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E45FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034A864 00347664*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8034A868 00347668*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8034A86C 0034766C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8034A870 00347670*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8034A874 00347674*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8034A878 00347678*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8034A87C 0034767C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8034A880 00347680*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8034A884 00347684*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*8034A888 00347688*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*8034A88C 0034768C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8034A890 00347690*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r26));
/*8034A894 00347694*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r26));
/*8034A898 00347698*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8034A89C, 0x8034A89C) //this is a jump label
/*8034A89C 0034769C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8034A8A0 003476A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8034A8A4 003476A4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8034A8A8 003476A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8034A8AC 003476AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8034A8B0 003476B0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8034A8B4 003476B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8034A8B8 003476B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8034A8BC 003476BC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8034A8C0 003476C0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8034A8C4 003476C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8034A8C8 003476C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8034A8CC 003476CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8034A8D0 003476D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8034A8D4 003476D4*/ PPC::Runtime::ASM::b(.L_8034A8DC);
/*8034A8D8 003476D8*/ PPC::Runtime::ASM::bl(fn_8034AAE4);
RUNTIME_PPC_JUMP_LABEL(.L_8034A8DC, 0x8034A8DC) //this is a jump label
/*8034A8DC 003476DC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8034A8E0 003476E0*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8034A8E4 003476E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8034A8E8 003476E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8034A8EC 003476EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8034A8F0 003476F0*/ PPC::Runtime::ASM::blr();
}