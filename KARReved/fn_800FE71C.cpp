//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"
#include "fn_800D4CA0.hpp"
#include "fn_80062CA4.hpp"
#include "fn_801C7534.hpp"
#include "fn_801C8428.hpp"
#include "fn_801C8488.hpp"
#include "fn_802046E8.hpp"
#include "fn_800EA180.hpp"
#include "fn_killWhispy.hpp"



void fn_800FE71C(PPC::Runtime::GCContext* context)
{
/*800FE71C 000FB51C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800FE720 000FB520*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FE724 000FB524*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FE728 000FB528*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800FE72C 000FB52C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800FE730 000FB530*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FE734 000FB534*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FE738 000FB538*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FE73C 000FB53C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*800FE740 000FB540*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/* 800FE744 000FB544  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800FE748 000FB548*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FE74C 000FB54C*/ PPC::Runtime::ASM::beq(.L_800FE88C);
/*800FE750 000FB550*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800FE754 000FB554*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800FE758 000FB558*/ PPC::Runtime::ASM::beq(.L_800FE768);
/*800FE75C 000FB55C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FE760 000FB560*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*800FE764 000FB564*/ PPC::Runtime::ASM::b(.L_800FE780);
RUNTIME_PPC_JUMP_LABEL(.L_800FE768, 0x800FE768) //this is a jump label
/*800FE768 000FB568*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800FE76C 000FB56C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FE770 000FB570*/ PPC::Runtime::ASM::bl(fn_800D4CA0);
/*800FE774 000FB574*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800FE778 000FB578*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800FE77C 000FB57C*/ PPC::Runtime::ASM::bl(fn_80062CA4);
RUNTIME_PPC_JUMP_LABEL(.L_800FE780, 0x800FE780) //this is a jump label
/*800FE780 000FB580*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800FE784 000FB584*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FE788 000FB588*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FE78C 000FB58C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800FE790 000FB590*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*800FE794 000FB594*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f3);
/*800FE798 000FB598*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f3);
/*800FE79C 000FB59C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FE7A0 000FB5A0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FE7A4 000FB5A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800FE7A8 000FB5A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FE7AC 000FB5AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800FE7B0 000FB5B0*/ PPC::Runtime::ASM::bne(.L_800FE7CC);
/*800FE7B4 000FB5B4*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "gryakugondola." Get_MemoryOffset_HighBit);
/*800FE7B8 000FB5B8*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1008 @ Get_MemoryOffset_HighBit);
/*800FE7BC 000FB5BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_Debug_ "gryakugondola." Get_MemoryOffset_LowBit);
/*800FE7C0 000FB5C0*/ PPC::Runtime::ASM::li(context->r4, 0xb8);
/*800FE7C4 000FB5C4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_1008 @ Get_MemoryOffset_LowBit);
/*800FE7C8 000FB5C8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FE7CC, 0x800FE7CC) //this is a jump label
/*800FE7CC 000FB5CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FE7D0 000FB5D0*/ PPC::Runtime::ASM::bl(fn_801C7534);
/*800FE7D4 000FB5D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FE7D8 000FB5D8*/ PPC::Runtime::ASM::beq(.L_800FE81C);
/*800FE7DC 000FB5DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*800FE7E0 000FB5E0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FE7E4 000FB5E4*/ PPC::Runtime::ASM::beq(.L_800FE80C);
/*800FE7E8 000FB5E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800FE7EC 000FB5EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800FE7F0 000FB5F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FE7F4 000FB5F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*800FE7F8 000FB5F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800FE7FC 000FB5FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FE800 000FB600*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*800FE804 000FB604*/ PPC::Runtime::ASM::bl(fn_801C8428);
/*800FE808 000FB608*/ PPC::Runtime::ASM::b(.L_800FE834);
RUNTIME_PPC_JUMP_LABEL(.L_800FE80C, 0x800FE80C) //this is a jump label
/*800FE80C 000FB60C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FE810 000FB610*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FE814 000FB614*/ PPC::Runtime::ASM::bl(fn_801C8488);
/*800FE818 000FB618*/ PPC::Runtime::ASM::b(.L_800FE834);
RUNTIME_PPC_JUMP_LABEL(.L_800FE81C, 0x800FE81C) //this is a jump label
/*800FE81C 000FB61C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FE820 000FB620*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FE824 000FB624*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x15);
/*800FE828 000FB628*/ PPC::Runtime::ASM::bne(.L_800FE834);
/*800FE82C 000FB62C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FE830 000FB630*/ PPC::Runtime::ASM::bl(fn_802046E8);
RUNTIME_PPC_JUMP_LABEL(.L_800FE834, 0x800FE834) //this is a jump label
/*800FE834 000FB634*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FE838 000FB638*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800FE83C 000FB63C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FE840 000FB640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*800FE844 000FB644*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*800FE848 000FB648*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FE84C 000FB64C*/ PPC::Runtime::ASM::ble(.L_800FE858);
/*800FE850 000FB650*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*800FE854 000FB654*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_800FE858, 0x800FE858) //this is a jump label
/*800FE858 000FB658*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF920 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FE85C 000FB65C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FE860 000FB660*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF924 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FE864 000FB664*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FE868 000FB668*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FE86C 000FB66C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*800FE870 000FB670*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*800FE874 000FB674*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FE878 000FB678*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FE87C 000FB67C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*800FE880 000FB680*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800FE884 000FB684*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*800FE888 000FB688*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800FE88C, 0x800FE88C) //this is a jump label
/*800FE88C 000FB68C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FE890 000FB690*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800FE894 000FB694*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800FE898 000FB698*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FE89C 000FB69C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FE8A0 000FB6A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800FE8A4 000FB6A4*/ PPC::Runtime::ASM::blr();
}