//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"
#include "fn_80063F8C.hpp"



void fn_8022A710(PPC::Runtime::GCContext* context)
{
/*8022A710 00227510*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8022A714 00227514*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022A718 00227518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8022A71C 0022751C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8022A720 00227520*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8022A724 00227524*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022A728 00227528*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022A72C 0022752C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022A730 00227530*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8022A734 00227534*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xac);
/*8022A738 00227538*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*8022A73C 0022753C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022A740 00227540*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1e0);
/*8022A744 00227544*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022A748 00227548*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8022A74C 0022754C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022A750 00227550*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f4);
/*8022A754 00227554*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*8022A758 00227558*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8022A75C 0022755C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f4);
/*8022A760 00227560*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8022A764 00227564*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f4);
/*8022A768 00227568*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*8022A76C 0022756C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*8022A770 00227570*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*8022A774 00227574*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*8022A778 00227578*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8022A77C 0022757C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*8022A780 00227580*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8022A784 00227584*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*8022A788 00227588*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*8022A78C 0022758C*/ PPC::Runtime::ASM::bl(fn_80063F8C);
/*8022A790 00227590*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8022A794 00227594*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*8022A798 00227598*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8022A79C 0022759C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8022A7A0 002275A0*/ PPC::Runtime::ASM::bne(.L_8022A7B4);
/*8022A7A4 002275A4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A7A8 002275A8*/ PPC::Runtime::ASM::li(context->r4, 0x2a4);
/*8022A7AC 002275AC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7260 @ Get_MemoryOffset_SDA21);
/*8022A7B0 002275B0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A7B4, 0x8022A7B4) //this is a jump label
/*8022A7B4 002275B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A7B8 002275B8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*8022A7BC 002275BC*/ PPC::Runtime::ASM::beq(.L_8022A7D4);
/*8022A7C0 002275C0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4BD4 @ Get_MemoryOffset_HighBit);
/*8022A7C4 002275C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A7C8 002275C8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B4BD4 @ Get_MemoryOffset_LowBit);
/*8022A7CC 002275CC*/ PPC::Runtime::ASM::li(context->r4, 0x2a5);
/*8022A7D0 002275D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A7D4, 0x8022A7D4) //this is a jump label
/*8022A7D4 002275D4*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8022A7D8 002275D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A7DC 002275DC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8022A7E0 002275E0*/ PPC::Runtime::ASM::bne(.L_8022A82C);
/*8022A7E4 002275E4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8022A7E8 002275E8*/ PPC::Runtime::ASM::beq(.L_8022A82C);
/*8022A7EC 002275EC*/ PPC::Runtime::ASM::bne(.L_8022A800);
/*8022A7F0 002275F0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A7F4 002275F4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8022A7F8 002275F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7260 @ Get_MemoryOffset_SDA21);
/*8022A7FC 002275FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A800, 0x8022A800) //this is a jump label
/*8022A800 00227600*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A804 00227604*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022A808 00227608*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8022A80C 0022760C*/ PPC::Runtime::ASM::bne(.L_8022A81C);
/*8022A810 00227610*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8022A814 00227614*/ PPC::Runtime::ASM::beq(.L_8022A81C);
/*8022A818 00227618*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8022A81C, 0x8022A81C) //this is a jump label
/*8022A81C 0022761C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022A820 00227620*/ PPC::Runtime::ASM::bne(.L_8022A82C);
/*8022A824 00227624*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022A828 00227628*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8022A82C, 0x8022A82C) //this is a jump label
/*8022A82C 0022762C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8022A830 00227630*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*8022A834 00227634*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8022A838 00227638*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8022A83C 0022763C*/ PPC::Runtime::ASM::bne(.L_8022A850);
/*8022A840 00227640*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A844 00227644*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*8022A848 00227648*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7260 @ Get_MemoryOffset_SDA21);
/*8022A84C 0022764C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A850, 0x8022A850) //this is a jump label
/*8022A850 00227650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A854 00227654*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*8022A858 00227658*/ PPC::Runtime::ASM::beq(.L_8022A870);
/*8022A85C 0022765C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4BD4 @ Get_MemoryOffset_HighBit);
/*8022A860 00227660*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A864 00227664*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B4BD4 @ Get_MemoryOffset_LowBit);
/*8022A868 00227668*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*8022A86C 0022766C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A870, 0x8022A870) //this is a jump label
/*8022A870 00227670*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8022A874 00227674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A878 00227678*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8022A87C 0022767C*/ PPC::Runtime::ASM::bne(.L_8022A8C8);
/*8022A880 00227680*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8022A884 00227684*/ PPC::Runtime::ASM::beq(.L_8022A8C8);
/*8022A888 00227688*/ PPC::Runtime::ASM::bne(.L_8022A89C);
/*8022A88C 0022768C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A890 00227690*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8022A894 00227694*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7260 @ Get_MemoryOffset_SDA21);
/*8022A898 00227698*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A89C, 0x8022A89C) //this is a jump label
/*8022A89C 0022769C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A8A0 002276A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022A8A4 002276A4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8022A8A8 002276A8*/ PPC::Runtime::ASM::bne(.L_8022A8B8);
/*8022A8AC 002276AC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8022A8B0 002276B0*/ PPC::Runtime::ASM::beq(.L_8022A8B8);
/*8022A8B4 002276B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8022A8B8, 0x8022A8B8) //this is a jump label
/*8022A8B8 002276B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022A8BC 002276BC*/ PPC::Runtime::ASM::bne(.L_8022A8C8);
/*8022A8C0 002276C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022A8C4 002276C4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8022A8C8, 0x8022A8C8) //this is a jump label
/*8022A8C8 002276C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8022A8CC 002276CC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*8022A8D0 002276D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8022A8D4 002276D4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8022A8D8 002276D8*/ PPC::Runtime::ASM::bne(.L_8022A8EC);
/*8022A8DC 002276DC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A8E0 002276E0*/ PPC::Runtime::ASM::li(context->r4, 0x2cc);
/*8022A8E4 002276E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7260 @ Get_MemoryOffset_SDA21);
/*8022A8E8 002276E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A8EC, 0x8022A8EC) //this is a jump label
/*8022A8EC 002276EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A8F0 002276F0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*8022A8F4 002276F4*/ PPC::Runtime::ASM::beq(.L_8022A90C);
/*8022A8F8 002276F8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4BD4 @ Get_MemoryOffset_HighBit);
/*8022A8FC 002276FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A900 00227700*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B4BD4 @ Get_MemoryOffset_LowBit);
/*8022A904 00227704*/ PPC::Runtime::ASM::li(context->r4, 0x2cd);
/*8022A908 00227708*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A90C, 0x8022A90C) //this is a jump label
/*8022A90C 0022770C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8022A910 00227710*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A914 00227714*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8022A918 00227718*/ PPC::Runtime::ASM::bne(.L_8022A964);
/*8022A91C 0022771C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8022A920 00227720*/ PPC::Runtime::ASM::beq(.L_8022A964);
/*8022A924 00227724*/ PPC::Runtime::ASM::bne(.L_8022A938);
/*8022A928 00227728*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7258 @ Get_MemoryOffset_SDA21);
/*8022A92C 0022772C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8022A930 00227730*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7260 @ Get_MemoryOffset_SDA21);
/*8022A934 00227734*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022A938, 0x8022A938) //this is a jump label
/*8022A938 00227738*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8022A93C 0022773C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022A940 00227740*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8022A944 00227744*/ PPC::Runtime::ASM::bne(.L_8022A954);
/*8022A948 00227748*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8022A94C 0022774C*/ PPC::Runtime::ASM::beq(.L_8022A954);
/*8022A950 00227750*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8022A954, 0x8022A954) //this is a jump label
/*8022A954 00227754*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022A958 00227758*/ PPC::Runtime::ASM::bne(.L_8022A964);
/*8022A95C 0022775C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8022A960 00227760*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8022A964, 0x8022A964) //this is a jump label
/*8022A964 00227764*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8022A968 00227768*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8022A96C 0022776C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8022A970 00227770*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022A974 00227774*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8022A978 00227778*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022A97C 0022777C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8022A980 00227780*/ PPC::Runtime::ASM::blr();
}