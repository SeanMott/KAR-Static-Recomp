//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8037B33C.hpp"



void fn_8033D70C(PPC::Runtime::GCContext* context)
{
/*8033D70C 0033A50C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8033D710 0033A510*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033D714 0033A514*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033D718 0033A518*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033D71C 0033A51C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8033D720 0033A520*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8033D724 0033A524  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8033D728 0033A528*/ PPC::Runtime::ASM::beq(.L_8033D8E8);
/*8033D72C 0033A52C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E6E30 @ Get_MemoryOffset_HighBit);
/*8033D730 0033A530*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x12c);
/*8033D734 0033A534*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E6E30 @ Get_MemoryOffset_LowBit);
/*8033D738 0033A538*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8033D73C 0033A53C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x28);
/*8033D740 0033A540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8033D744 0033A544*/ PPC::Runtime::ASM::beq(.L_8033D790);
/*8033D748 0033A548*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8033D74C 0033A54C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8033D750 0033A550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r30));
/*8033D754 0033A554*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r30));
/*8033D758 0033A558*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8033D75C 0033A55C*/ PPC::Runtime::ASM::beq(.L_8033D768);
/*8033D760 0033A560*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033D764 0033A564*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8033D768, 0x8033D768) //this is a jump label
/*8033D768 0033A568*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x12c);
/*8033D76C 0033A56C*/ PPC::Runtime::ASM::beq(.L_8033D790);
/*8033D770 0033A570*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8033D774 0033A574*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12c);
/*8033D778 0033A578*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8033D77C 0033A57C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r30));
/*8033D780 0033A580*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r30));
/*8033D784 0033A584*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8033D788 0033A588*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033D78C 0033A58C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8033D790, 0x8033D790) //this is a jump label
/*8033D790 0033A590*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xe0);
/*8033D794 0033A594*/ PPC::Runtime::ASM::beq(.L_8033D7D8);
/*8033D798 0033A598*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8033D79C 0033A59C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe0);
/*8033D7A0 0033A5A0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8033D7A4 0033A5A4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033D7A8 0033A5A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r30));
/*8033D7AC 0033A5AC*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8033D7B0 0033A5B0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xe0);
/*8033D7B4 0033A5B4*/ PPC::Runtime::ASM::beq(.L_8033D7D8);
/*8033D7B8 0033A5B8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8033D7BC 0033A5BC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe0);
/*8033D7C0 0033A5C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8033D7C4 0033A5C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r30));
/*8033D7C8 0033A5C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r30));
/*8033D7CC 0033A5CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8033D7D0 0033A5D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033D7D4 0033A5D4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8033D7D8, 0x8033D7D8) //this is a jump label
/*8033D7D8 0033A5D8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x94);
/*8033D7DC 0033A5DC*/ PPC::Runtime::ASM::beq(.L_8033D820);
/*8033D7E0 0033A5E0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8033D7E4 0033A5E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*8033D7E8 0033A5E8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8033D7EC 0033A5EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033D7F0 0033A5F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*8033D7F4 0033A5F4*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8033D7F8 0033A5F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x94);
/*8033D7FC 0033A5FC*/ PPC::Runtime::ASM::beq(.L_8033D820);
/*8033D800 0033A600*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8033D804 0033A604*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*8033D808 0033A608*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8033D80C 0033A60C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*8033D810 0033A610*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*8033D814 0033A614*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8033D818 0033A618*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033D81C 0033A61C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8033D820, 0x8033D820) //this is a jump label
/*8033D820 0033A620*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x64);
/*8033D824 0033A624*/ PPC::Runtime::ASM::beq(.L_8033D85C);
/*8033D828 0033A628*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*8033D82C 0033A62C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x64);
/*8033D830 0033A630*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*8033D834 0033A634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8033D838 0033A638*/ PPC::Runtime::ASM::beq(.L_8033D85C);
/*8033D83C 0033A63C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*8033D840 0033A640*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x64);
/*8033D844 0033A644*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*8033D848 0033A648*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8033D84C 0033A64C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8033D850 0033A650*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8033D854 0033A654*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033D858 0033A658*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8033D85C, 0x8033D85C) //this is a jump label
/*8033D85C 0033A65C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x54);
/*8033D860 0033A660*/ PPC::Runtime::ASM::beq(.L_8033D880);
/*8033D864 0033A664*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*8033D868 0033A668*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*8033D86C 0033A66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*8033D870 0033A670*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8033D874 0033A674*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8033D878 0033A678*/ PPC::Runtime::ASM::beq(.L_8033D880);
/*8033D87C 0033A67C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_8033D880, 0x8033D880) //this is a jump label
/*8033D880 0033A680*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8033D884 0033A684*/ PPC::Runtime::ASM::beq(.L_8033D8D8);
/*8033D888 0033A688*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDBE8 @ Get_MemoryOffset_HighBit);
/*8033D88C 0033A68C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x14);
/*8033D890 0033A690*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDBE8 @ Get_MemoryOffset_LowBit);
/*8033D894 0033A694*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8033D898 0033A698*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x28);
/*8033D89C 0033A69C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8033D8A0 0033A6A0*/ PPC::Runtime::ASM::beq(.L_8033D8C4);
/*8033D8A4 0033A6A4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDBC0 @ Get_MemoryOffset_HighBit);
/*8033D8A8 0033A6A8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14);
/*8033D8AC 0033A6AC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDBC0 @ Get_MemoryOffset_LowBit);
/*8033D8B0 0033A6B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8033D8B4 0033A6B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8033D8B8 0033A6B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8033D8BC 0033A6BC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033D8C0 0033A6C0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8033D8C4, 0x8033D8C4) //this is a jump label
/*8033D8C4 0033A6C4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8033D8C8 0033A6C8*/ PPC::Runtime::ASM::beq(.L_8033D8D8);
/*8033D8CC 0033A6CC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*8033D8D0 0033A6D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*8033D8D4 0033A6D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8033D8D8, 0x8033D8D8) //this is a jump label
/*8033D8D8 0033A6D8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8033D8DC 0033A6DC*/ PPC::Runtime::ASM::ble(.L_8033D8E8);
/*8033D8E0 0033A6E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8033D8E4 0033A6E4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8033D8E8, 0x8033D8E8) //this is a jump label
/*8033D8E8 0033A6E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033D8EC 0033A6EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8033D8F0 0033A6F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033D8F4 0033A6F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8033D8F8 0033A6F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033D8FC 0033A6FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8033D900 0033A700*/ PPC::Runtime::ASM::blr();
}