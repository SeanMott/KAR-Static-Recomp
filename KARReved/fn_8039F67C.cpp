//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB28.hpp"
#include "fn_802889EC.hpp"
#include "fn_8038CB28.hpp"
#include "fn_802889EC.hpp"



void fn_8039F67C(PPC::Runtime::GCContext* context)
{
/*8039F67C 0039C47C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8039F680 0039C480*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039F684 0039C484*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8039F688 0039C488*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8039F68C 0039C48C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8039F690 0039C490*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8039F694 0039C494*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039F698 0039C498*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8039F69C 0039C49C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8039F6A0 0039C4A0*/ PPC::Runtime::ASM::beq(.L_8039F84C);
/*8039F6A4 0039C4A4*/ PPC::Runtime::ASM::li(context->r3, 0x4c);
/*8039F6A8 0039C4A8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8039F6AC 0039C4AC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8039F6B0 0039C4B0*/ PPC::Runtime::ASM::beq(.L_8039F7C8);
/*8039F6B4 0039C4B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*8039F6B8 0039C4B8*/ PPC::Runtime::ASM::lis(context->r11, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*8039F6BC 0039C4BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*8039F6C0 0039C4C0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8039F6C4 0039C4C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039F6C8 0039C4C8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*8039F6CC 0039C4CC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*8039F6D0 0039C4D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*8039F6D4 0039C4D4*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8039F6D8 0039C4D8*/ PPC::Runtime::ASM::addi(context->r12, context->r11, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*8039F6DC 0039C4DC*/ PPC::Runtime::ASM::lis(context->r10, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*8039F6E0 0039C4E0*/ PPC::Runtime::ASM::lis(context->r9, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*8039F6E4 0039C4E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8039F6E8 0039C4E8*/ PPC::Runtime::ASM::addi(context->r11, context->r10, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*8039F6EC 0039C4EC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*8039F6F0 0039C4F0*/ PPC::Runtime::ASM::addi(context->r10, context->r9, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8039F6F4 0039C4F4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8039F6F8 0039C4F8*/ PPC::Runtime::ASM::lis(context->r8, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*8039F6FC 0039C4FC*/ PPC::Runtime::ASM::addi(context->r9, context->r8, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*8039F700 0039C500*/ PPC::Runtime::ASM::lis(context->r7, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*8039F704 0039C504*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8039F708 0039C508*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x28);
/*8039F70C 0039C50C*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*8039F710 0039C510*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*8039F714 0039C514*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039F718 0039C518*/ PPC::Runtime::ASM::addi(context->r7, context->r6, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*8039F71C 0039C51C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*8039F720 0039C520*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5058 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039F724 0039C524*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8039F728 0039C528*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*8039F72C 0039C52C*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8039F730 0039C530*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*8039F734 0039C534*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8039F738 0039C538*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8039F73C 0039C53C*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8039F740 0039C540*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r31));
/*8039F744 0039C544*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8039F748 0039C548*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r31));
/*8039F74C 0039C54C*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8039F750 0039C550*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8039F754 0039C554*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8039F758 0039C558*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8039F75C 0039C55C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8039F760 0039C560*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8039F764 0039C564*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8039F768 0039C568*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8039F76C 0039C56C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039F770 0039C570*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039F774 0039C574*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8039F778 0039C578*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d, context->r31));
/*8039F77C 0039C57C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e, context->r31));
/*8039F780 0039C580*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f, context->r31));
/*8039F784 0039C584*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8039F788 0039C588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039F78C 0039C58C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8039F790 0039C590*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8039F794 0039C594*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d, context->r31));
/*8039F798 0039C598*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e, context->r31));
/*8039F79C 0039C59C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f, context->r31));
/*8039F7A0 0039C5A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8039F7A4 0039C5A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8039F7A8 0039C5A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r12));
/*8039F7AC 0039C5AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F7B0 0039C5B0*/ PPC::Runtime::ASM::bctrl();
/*8039F7B4 0039C5B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F64BC @ Get_MemoryOffset_HighBit);
/*8039F7B8 0039C5B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F64BC @ Get_MemoryOffset_LowBit);
/*8039F7BC 0039C5BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039F7C0 0039C5C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*8039F7C4 0039C5C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8039F7C8, 0x8039F7C8) //this is a jump label
/*8039F7C8 0039C5C8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r29));
/*8039F7CC 0039C5CC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC42C @ Get_MemoryOffset_SDA21);
/*8039F7D0 0039C5D0*/ PPC::Runtime::ASM::srwi(context->r3, context->r4, 31);
/*8039F7D4 0039C5D4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 31);
/*8039F7D8 0039C5D8*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r3);
/*8039F7DC 0039C5DC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8039F7E0 0039C5E0*/ PPC::Runtime::ASM::subf.(context->r0, context->r3, context->r0);
/*8039F7E4 0039C5E4*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r29));
/*8039F7E8 0039C5E8*/ PPC::Runtime::ASM::beq(.L_8039F7F0);
/*8039F7EC 0039C5EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC424 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8039F7F0, 0x8039F7F0) //this is a jump label
/*8039F7F0 0039C5F0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8039F7F4 0039C5F4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039F7F8 0039C5F8*/ PPC::Runtime::ASM::beq(.L_8039F828);
/*8039F7FC 0039C5FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039F800 0039C600*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039F804 0039C604*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC3C0 @ Get_MemoryOffset_SDA21);
/*8039F808 0039C608*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3B8 @ Get_MemoryOffset_SDA21);
/*8039F80C 0039C60C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039F810 0039C610*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039F814 0039C614*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8039F818 0039C618*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8039F81C 0039C61C*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*8039F820 0039C620*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8039F824 0039C624*/ PPC::Runtime::ASM::b(.L_8039F82C);
RUNTIME_PPC_JUMP_LABEL(.L_8039F828, 0x8039F828) //this is a jump label
/*8039F828 0039C628*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F82C, 0x8039F82C) //this is a jump label
/*8039F82C 0039C62C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8039F830 0039C630*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*8039F834 0039C634*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x54);
/*8039F838 0039C638*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8039F83C 0039C63C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039F840 0039C640*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F844 0039C644*/ PPC::Runtime::ASM::bctrl();
/*8039F848 0039C648*/ PPC::Runtime::ASM::b(.L_8039F94C);
RUNTIME_PPC_JUMP_LABEL(.L_8039F84C, 0x8039F84C) //this is a jump label
/*8039F84C 0039C64C*/ PPC::Runtime::ASM::li(context->r3, 0x30);
/*8039F850 0039C650*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*8039F854 0039C654*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F858 0039C658*/ PPC::Runtime::ASM::beq(.L_8039F938);
/*8039F85C 0039C65C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*8039F860 0039C660*/ PPC::Runtime::ASM::lis(context->r8, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*8039F864 0039C664*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*8039F868 0039C668*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*8039F86C 0039C66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F870 0039C670*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*8039F874 0039C674*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*8039F878 0039C678*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*8039F87C 0039C67C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039F880 0039C680*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C75F4 @ Get_MemoryOffset_HighBit);
/*8039F884 0039C684*/ PPC::Runtime::ASM::li(context->r0, String_ "border" 6 @ Get_MemoryOffset_SDA21);
/*8039F888 0039C688*/ PPC::Runtime::ASM::addi(context->r9, context->r8, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*8039F88C 0039C68C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8039F890 0039C690*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*8039F894 0039C694*/ PPC::Runtime::ASM::addi(context->r11, context->r3, 0x28);
/*8039F898 0039C698*/ PPC::Runtime::ASM::addi(context->r7, context->r6, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8039F89C 0039C69C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8039F8A0 0039C6A0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*8039F8A4 0039C6A4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8039F8A8 0039C6A8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804C75F4 @ Get_MemoryOffset_LowBit);
/*8039F8AC 0039C6AC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8039F8B0 0039C6B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8039F8B4 0039C6B4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8039F8B8 0039C6B8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8039F8BC 0039C6BC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F8C0 0039C6C0*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8039F8C4 0039C6C4*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r3));
/*8039F8C8 0039C6C8*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8039F8CC 0039C6CC*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*8039F8D0 0039C6D0*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8039F8D4 0039C6D4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8039F8D8 0039C6D8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F8DC 0039C6DC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8039F8E0 0039C6E0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8039F8E4 0039C6E4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8039F8E8 0039C6E8*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8039F8EC 0039C6EC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F8F0 0039C6F0*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8039F8F4 0039C6F4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8039F8F8 0039C6F8*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*8039F8FC 0039C6FC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8039F900 0039C700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039F904 0039C704*/ PPC::Runtime::ASM::beq(.L_8039F930);
/*8039F908 0039C708*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039F90C 0039C70C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039F910 0039C710*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC3C0 @ Get_MemoryOffset_SDA21);
/*8039F914 0039C714*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3B8 @ Get_MemoryOffset_SDA21);
/*8039F918 0039C718*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039F91C 0039C71C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039F920 0039C720*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8039F924 0039C724*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8039F928 0039C728*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*8039F92C 0039C72C*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8039F930, 0x8039F930) //this is a jump label
/*8039F930 0039C730*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8039F934 0039C734*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_8039F938, 0x8039F938) //this is a jump label
/*8039F938 0039C738*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F93C 0039C73C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x54);
/*8039F940 0039C740*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039F944 0039C744*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F948 0039C748*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8039F94C, 0x8039F94C) //this is a jump label
/*8039F94C 0039C74C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8039F950 0039C750*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8039F954 0039C754*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8039F958 0039C758*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039F95C 0039C75C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8039F960 0039C760*/ PPC::Runtime::ASM::blr();
}