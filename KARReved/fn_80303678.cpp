//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF900.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_80369100.hpp"
#include "fn_8037967C.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"



void fn_80303678(PPC::Runtime::GCContext* context)
{
/*80303678 00300478*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8030367C 0030047C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80303680 00300480*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80303684 00300484*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80303688 00300488*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8030368C 0030048C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80303690 00300490*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80303694 00300494*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80303698 00300498*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8030369C 0030049C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803036A0 003004A0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803036A4 003004A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803036A8 003004A8*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*803036AC 003004AC*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*803036B0 003004B0*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*803036B4 003004B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*803036B8 003004B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x5);
/*803036BC 003004BC*/ PPC::Runtime::ASM::bne(.L_803036D0);
/*803036C0 003004C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r3));
/*803036C4 003004C4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803036C8 003004C8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803036CC 003004CC*/ PPC::Runtime::ASM::bl(fn_8038D158);
RUNTIME_PPC_JUMP_LABEL(.L_803036D0, 0x803036D0) //this is a jump label
/*803036D0 003004D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803036D4 003004D4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803036D8 003004D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803036DC 003004DC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*803036E0 003004E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803036E4 003004E4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*803036E8 003004E8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*803036EC 003004EC*/ PPC::Runtime::ASM::bl(fn_802DF900);
/*803036F0 003004F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803036F4 003004F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803036F8 003004F8*/ PPC::Runtime::ASM::beq(.L_80303878);
/*803036FC 003004FC*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80303700 00300500*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c0, context->r3));
/*80303704 00300504*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*80303708 00300508*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8030370C 0030050C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80303710 00300510*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5bc, context->r3));
/*80303714 00300514*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*80303718 00300518*/ PPC::Runtime::ASM::divwu(context->r4, context->r3, context->r30);
/*8030371C 0030051C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80303720 00300520*/ PPC::Runtime::ASM::divwu(context->r0, context->r3, context->r4);
/*80303724 00300524*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r4);
/*80303728 00300528*/ PPC::Runtime::ASM::subf.(context->r0, context->r0, context->r3);
/*8030372C 0030052C*/ PPC::Runtime::ASM::bne(.L_80303868);
/*80303730 00300530*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303734 00300534*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80303738 00300538*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8030373C 0030053C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80303740 00300540*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r12));
/*80303744 00300544*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80303748 00300548*/ PPC::Runtime::ASM::bctrl();
/*8030374C 0030054C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303750 00300550*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303754 00300554*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80303758 00300558*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030375C 0030055C*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80303760 00300560*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80303764 00300564*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303768 00300568*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8030376C 0030056C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*80303770 00300570*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303774 00300574*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*80303778 00300578*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8030377C 0030057C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303780 00300580*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80303784 00300584*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f2);
/*80303788 00300588*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8030378C 0030058C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80303790 00300590*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f2);
/*80303794 00300594*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*80303798 00300598*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030379C 0030059C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*803037A0 003005A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803037A4 003005A4*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*803037A8 003005A8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803037AC 003005AC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*803037B0 003005B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803037B4 003005B4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803037B8 003005B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803037BC 003005BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*803037C0 003005C0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803037C4 003005C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803037C8 003005C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803037CC 003005CC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803037D0 003005D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803037D4 003005D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803037D8 003005D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*803037DC 003005DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803037E0 003005E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803037E4 003005E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803037E8 003005E8*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*803037EC 003005EC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803037F0 003005F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803037F4 003005F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803037F8 003005F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9A40 @ Get_MemoryOffset_SDA21);
/*803037FC 003005FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80303800 00300600*/ PPC::Runtime::ASM::li(context->r6, lbl_805D9A38 @ Get_MemoryOffset_SDA21);
/*80303804 00300604*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80303808 00300608*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8030380C 0030060C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303810 00300610*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80303814 00300614*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80303818 00300618*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8030381C 0030061C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303820 00300620*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80303824 00300624*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80303828 00300628*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030382C 0030062C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*80303830 00300630*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80303834 00300634*/ PPC::Runtime::ASM::bctrl();
/*80303838 00300638*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030383C 0030063C*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*80303840 00300640*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80303844 00300644*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x34);
/*80303848 00300648*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x14);
/*8030384C 0030064C*/ PPC::Runtime::ASM::bl(fn_80369100);
/*80303850 00300650*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303854 00300654*/ PPC::Runtime::ASM::lis(context->r3, 0x7);
/*80303858 00300658*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x27);
/*8030385C 0030065C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80303860 00300660*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x390);
/*80303864 00300664*/ PPC::Runtime::ASM::bl(fn_8037967C);
RUNTIME_PPC_JUMP_LABEL(.L_80303868, 0x80303868) //this is a jump label
/*80303868 00300668*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8030386C 0030066C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80303870 00300670*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80303874 00300674*/ PPC::Runtime::ASM::b(.L_803038D0);
RUNTIME_PPC_JUMP_LABEL(.L_80303878, 0x80303878) //this is a jump label
/*80303878 00300678*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030387C 0030067C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80303880 00300680*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80303884 00300684*/ PPC::Runtime::ASM::bne(.L_803038D0);
/*80303888 00300688*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8030388C 0030068C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DAF18 @ Get_MemoryOffset_HighBit);
/*80303890 00300690*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80303894 00300694*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804DAF18 @ Get_MemoryOffset_LowBit);
/*80303898 00300698*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030389C 0030069C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r3));
/*803038A0 003006A0*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*803038A4 003006A4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803038A8 003006A8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*803038AC 003006AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803038B0 003006B0*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*803038B4 003006B4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*803038B8 003006B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*803038BC 003006BC*/ PPC::Runtime::ASM::li(context->r4, 0x54);
/*803038C0 003006C0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803038C4 003006C4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803038C8 003006C8*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803038CC 003006CC*/ PPC::Runtime::ASM::bl(fn_8037B028);
RUNTIME_PPC_JUMP_LABEL(.L_803038D0, 0x803038D0) //this is a jump label
/*803038D0 003006D0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803038D4 003006D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803038D8 003006D8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803038DC 003006DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803038E0 003006E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803038E4 003006E4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803038E8 003006E8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803038EC 003006EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803038F0 003006F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*803038F4 003006F4*/ PPC::Runtime::ASM::blr();
}