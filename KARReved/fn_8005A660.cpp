//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005B924.hpp"
#include "fn_8005BA38.hpp"
#include "fn_8005C298.hpp"



void fn_8005A660(PPC::Runtime::GCContext* context)
{
/*8005A660 00057460*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8005A664 00057464*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005A668 00057468*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8005A66C 0005746C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8005A670 00057470*/ PPC::Runtime::ASM::li(context->r31, -0x1);
/*8005A674 00057474*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8005A678 00057478*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005A67C 0005747C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8005A680 00057480*/ PPC::Runtime::ASM::bl(fn_8005B924);
/*8005A684 00057484*/ PPC::Runtime::ASM::lis(context->r4, NULL_00000003h_1 @ Get_MemoryOffset_HighBit);
/*8005A688 00057488*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8005A68C 0005748C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8005A690 00057490*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8005A694 00057494*/ PPC::Runtime::ASM::addi(context->r4, context->r4, NULL_00000003h_1 @ Get_MemoryOffset_LowBit);
/*8005A698 00057498*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8005A69C, 0x8005A69C) //this is a jump label
/*8005A69C 0005749C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8005A6A0 000574A0*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8005A6A4 000574A4*/ PPC::Runtime::ASM::bne(.L_8005A6B8);
/*8005A6A8 000574A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8005A6AC 000574AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8005A6B0 000574B0*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8005A6B4 000574B4*/ PPC::Runtime::ASM::beq(.L_8005A76C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A6B8, 0x8005A6B8) //this is a jump label
/*8005A6B8 000574B8*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8005A6BC 000574BC*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8005A6C0 000574C0*/ PPC::Runtime::ASM::bne(.L_8005A6D4);
/*8005A6C4 000574C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8005A6C8 000574C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8005A6CC 000574CC*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8005A6D0 000574D0*/ PPC::Runtime::ASM::beq(.L_8005A76C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A6D4, 0x8005A6D4) //this is a jump label
/*8005A6D4 000574D4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8005A6D8 000574D8*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8005A6DC 000574DC*/ PPC::Runtime::ASM::bne(.L_8005A6F0);
/*8005A6E0 000574E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8005A6E4 000574E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8005A6E8 000574E8*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8005A6EC 000574EC*/ PPC::Runtime::ASM::beq(.L_8005A76C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A6F0, 0x8005A6F0) //this is a jump label
/*8005A6F0 000574F0*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8005A6F4 000574F4*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8005A6F8 000574F8*/ PPC::Runtime::ASM::bne(.L_8005A70C);
/*8005A6FC 000574FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8005A700 00057500*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8005A704 00057504*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8005A708 00057508*/ PPC::Runtime::ASM::beq(.L_8005A76C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A70C, 0x8005A70C) //this is a jump label
/*8005A70C 0005750C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8005A710 00057510*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8005A714 00057514*/ PPC::Runtime::ASM::bne(.L_8005A728);
/*8005A718 00057518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8005A71C 0005751C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8005A720 00057520*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8005A724 00057524*/ PPC::Runtime::ASM::beq(.L_8005A76C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A728, 0x8005A728) //this is a jump label
/*8005A728 00057528*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8005A72C 0005752C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8005A730 00057530*/ PPC::Runtime::ASM::bne(.L_8005A744);
/*8005A734 00057534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8005A738 00057538*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8005A73C 0005753C*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8005A740 00057540*/ PPC::Runtime::ASM::beq(.L_8005A76C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A744, 0x8005A744) //this is a jump label
/*8005A744 00057544*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8005A748 00057548*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8005A74C 0005754C*/ PPC::Runtime::ASM::bne(.L_8005A760);
/*8005A750 00057550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8005A754 00057554*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8005A758 00057558*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8005A75C 0005755C*/ PPC::Runtime::ASM::beq(.L_8005A76C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A760, 0x8005A760) //this is a jump label
/*8005A760 00057560*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*8005A764 00057564*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x6);
/*8005A768 00057568*/ PPC::Runtime::ASM::bdnz(.L_8005A69C);
RUNTIME_PPC_JUMP_LABEL(.L_8005A76C, 0x8005A76C) //this is a jump label
/*8005A76C 0005756C*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*8005A770 00057570*/ PPC::Runtime::ASM::beq(.L_8005A790);
/*8005A774 00057574*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8005A778 00057578*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8005A77C 0005757C*/ PPC::Runtime::ASM::bl(fn_8005BA38);
/*8005A780 00057580*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8005A784 00057584*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8005A788 00057588*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8005A78C 0005758C*/ PPC::Runtime::ASM::bl(fn_8005C298);
RUNTIME_PPC_JUMP_LABEL(.L_8005A790, 0x8005A790) //this is a jump label
/*8005A790 00057590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8005A794 00057594*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8005A798 00057598*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8005A79C 0005759C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005A7A0 000575A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005A7A4 000575A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8005A7A8 000575A8*/ PPC::Runtime::ASM::blr();
}