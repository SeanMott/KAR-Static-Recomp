//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7268.hpp"
#include "fn_800DD2A4.hpp"
#include "fn_800DC8E0.hpp"



void fn_800D7648(PPC::Runtime::GCContext* context)
{
/*800D7648 000D4448*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D764C 000D444C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D7650 000D4450*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D7654 000D4454*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800D7658 000D4458*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800D765C 000D445C*/ PPC::Runtime::ASM::lis(context->r5, 0x6bca);
/*800D7660 000D4460*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800D7664 000D4464*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800D7668 000D4468*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800D766C 000D446C*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x1af3);
/*800D7670 000D4470*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800D7674 000D4474*/ PPC::Runtime::ASM::b(.L_800D76AC);
RUNTIME_PPC_JUMP_LABEL(.L_800D7678, 0x800D7678) //this is a jump label
/*800D7678 000D4478*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*800D767C 000D447C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800D7680 000D4480*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800D7684 000D4484*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800D7688 000D4488*/ PPC::Runtime::ASM::lwzx(context->r0, context->r5, context->r28);
/*800D768C 000D448C*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
/* 800D7690 000D4490  7C 1D 00 96 */ mulhw context->r0 , context->r29 , context->r0
/*800D7694 000D4494*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*800D7698 000D4498*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*800D769C 000D449C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*800D76A0 000D44A0*/ PPC::Runtime::ASM::bl(fn_800D7268);
/*800D76A4 000D44A4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*800D76A8 000D44A8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D76AC, 0x800D76AC) //this is a jump label
/*800D76AC 000D44AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*800D76B0 000D44B0*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800D76B4 000D44B4*/ PPC::Runtime::ASM::blt(.L_800D7678);
/*800D76B8 000D44B8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800D76BC 000D44BC*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*800D76C0 000D44C0*/ PPC::Runtime::ASM::mr(context->r28, context->r27);
/*800D76C4 000D44C4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x6667);
/*800D76C8 000D44C8*/ PPC::Runtime::ASM::b(.L_800D7700);
RUNTIME_PPC_JUMP_LABEL(.L_800D76CC, 0x800D76CC) //this is a jump label
/*800D76CC 000D44CC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*800D76D0 000D44D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800D76D4 000D44D4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*800D76D8 000D44D8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800D76DC 000D44DC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r5, context->r28);
/*800D76E0 000D44E0*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
/* 800D76E4 000D44E4  7C 1D 00 96 */ mulhw context->r0 , context->r29 , context->r0
/*800D76E8 000D44E8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 7);
/*800D76EC 000D44EC*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*800D76F0 000D44F0*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*800D76F4 000D44F4*/ PPC::Runtime::ASM::bl(fn_800DD2A4);
/*800D76F8 000D44F8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*800D76FC 000D44FC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D7700, 0x800D7700) //this is a jump label
/*800D7700 000D4500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*800D7704 000D4504*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800D7708 000D4508*/ PPC::Runtime::ASM::blt(.L_800D76CC);
/*800D770C 000D450C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800D7710 000D4510*/ PPC::Runtime::ASM::lis(context->r3, 0x9249);
/*800D7714 000D4514*/ PPC::Runtime::ASM::mr(context->r28, context->r27);
/*800D7718 000D4518*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x2493);
/*800D771C 000D451C*/ PPC::Runtime::ASM::b(.L_800D7758);
RUNTIME_PPC_JUMP_LABEL(.L_800D7720, 0x800D7720) //this is a jump label
/*800D7720 000D4520*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*800D7724 000D4524*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800D7728 000D4528*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*800D772C 000D452C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800D7730 000D4530*/ PPC::Runtime::ASM::lwzx(context->r0, context->r5, context->r28);
/*800D7734 000D4534*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
/* 800D7738 000D4538  7C BD 00 96 */ mulhw context->r5 , context->r29 , context->r0
/*800D773C 000D453C*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*800D7740 000D4540*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 4);
/*800D7744 000D4544*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*800D7748 000D4548*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*800D774C 000D454C*/ PPC::Runtime::ASM::bl(fn_800DC8E0);
/*800D7750 000D4550*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*800D7754 000D4554*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D7758, 0x800D7758) //this is a jump label
/*800D7758 000D4558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*800D775C 000D455C*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800D7760 000D4560*/ PPC::Runtime::ASM::blt(.L_800D7720);
/*800D7764 000D4564*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800D7768 000D4568*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800D776C 000D456C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D7770 000D4570*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D7774 000D4574*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D7778 000D4578*/ PPC::Runtime::ASM::blr();
}