//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDGetControlBlock.hpp"
#include "fn___CARDPutControlBlock.hpp"
#include "fn___CARDGetDirBlock.hpp"
#include "fn___CARDPutControlBlock.hpp"
#include "fn___CARDPutControlBlock.hpp"
#include "fn___CARDGetFatBlock.hpp"
#include "fn___CARDPutControlBlock.hpp"



void fn___CARDSeek(PPC::Runtime::GCContext* context)
{
/*803E7658 003E4458*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E765C 003E445C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E7660 003E4460*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803E7664 003E4464*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803E7668 003E4468*/ PPC::Runtime::ASM::addi(context->r31, context->r6, 0x0);
/*803E766C 003E446C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803E7670 003E4470*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*803E7674 003E4474*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7678 003E4478*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*803E767C 003E447C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*803E7680 003E4480*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803E7684 003E4484*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*803E7688 003E4488*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803E768C 003E448C*/ PPC::Runtime::ASM::bl(fn___CARDGetControlBlock);
/*803E7690 003E4490*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E7694 003E4494*/ PPC::Runtime::ASM::bge(.L_803E769C);
/*803E7698 003E4498*/ PPC::Runtime::ASM::b(.L_803E77F0);
RUNTIME_PPC_JUMP_LABEL(.L_803E769C, 0x803E769C) //this is a jump label
/*803E769C 003E449C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*803E76A0 003E44A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x5);
/*803E76A4 003E44A4*/ PPC::Runtime::ASM::blt(.L_803E76CC);
/*803E76A8 003E44A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E76AC 003E44AC*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803E76B0 003E44B0*/ PPC::Runtime::ASM::cmplw(context->r0, context->r5);
/*803E76B4 003E44B4*/ PPC::Runtime::ASM::bge(.L_803E76CC);
/*803E76B8 003E44B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803E76BC 003E44BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803E76C0 003E44C0*/ PPC::Runtime::ASM::mullw(context->r4, context->r5, context->r4);
/*803E76C4 003E44C4*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*803E76C8 003E44C8*/ PPC::Runtime::ASM::bgt(.L_803E76DC);
RUNTIME_PPC_JUMP_LABEL(.L_803E76CC, 0x803E76CC) //this is a jump label
/*803E76CC 003E44CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E76D0 003E44D0*/ PPC::Runtime::ASM::li(context->r4, -0x80);
/*803E76D4 003E44D4*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
/*803E76D8 003E44D8*/ PPC::Runtime::ASM::b(.L_803E77F0);
RUNTIME_PPC_JUMP_LABEL(.L_803E76DC, 0x803E76DC) //this is a jump label
/*803E76DC 003E44DC*/ PPC::Runtime::ASM::bl(fn___CARDGetDirBlock);
/*803E76E0 003E44E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*803E76E4 003E44E4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E76E8 003E44E8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 6);
/*803E76EC 003E44EC*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*803E76F0 003E44F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*803E76F4 003E44F4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*803E76F8 003E44F8*/ PPC::Runtime::ASM::mullw(context->r3, context->r0, context->r3);
/*803E76FC 003E44FC*/ PPC::Runtime::ASM::cmpw(context->r3, context->r30);
/*803E7700 003E4500*/ PPC::Runtime::ASM::ble(.L_803E7710);
/*803E7704 003E4504*/ PPC::Runtime::ASM::add(context->r0, context->r30, context->r29);
/*803E7708 003E4508*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*803E770C 003E450C*/ PPC::Runtime::ASM::bge(.L_803E7720);
RUNTIME_PPC_JUMP_LABEL(.L_803E7710, 0x803E7710) //this is a jump label
/*803E7710 003E4510*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x0);
/*803E7714 003E4514*/ PPC::Runtime::ASM::li(context->r4, -0xb);
/*803E7718 003E4518*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
/*803E771C 003E451C*/ PPC::Runtime::ASM::b(.L_803E77F0);
RUNTIME_PPC_JUMP_LABEL(.L_803E7720, 0x803E7720) //this is a jump label
/*803E7720 003E4520*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r5));
/*803E7724 003E4524*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*803E7728 003E4528*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803E772C 003E452C*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*803E7730 003E4530*/ PPC::Runtime::ASM::bge(.L_803E7770);
/*803E7734 003E4534*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E7738 003E4538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803E773C 003E453C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r4));
/*803E7740 003E4540*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*803E7744 003E4544*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*803E7748 003E4548*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x5);
/*803E774C 003E454C*/ PPC::Runtime::ASM::blt(.L_803E7760);
/*803E7750 003E4550*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E7754 003E4554*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803E7758 003E4558*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803E775C 003E455C*/ PPC::Runtime::ASM::blt(.L_803E7770);
RUNTIME_PPC_JUMP_LABEL(.L_803E7760, 0x803E7760) //this is a jump label
/*803E7760 003E4560*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E7764 003E4564*/ PPC::Runtime::ASM::li(context->r4, -0x6);
/*803E7768 003E4568*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
/*803E776C 003E456C*/ PPC::Runtime::ASM::b(.L_803E77F0);
RUNTIME_PPC_JUMP_LABEL(.L_803E7770, 0x803E7770) //this is a jump label
/*803E7770 003E4570*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E7774 003E4574*/ PPC::Runtime::ASM::bl(fn___CARDGetFatBlock);
/*803E7778 003E4578*/ PPC::Runtime::ASM::b(.L_803E77C4);
RUNTIME_PPC_JUMP_LABEL(.L_803E777C, 0x803E777C) //this is a jump label
/*803E777C 003E457C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803E7780 003E4580*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*803E7784 003E4584*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803E7788 003E4588*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*803E778C 003E458C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*803E7790 003E4590*/ PPC::Runtime::ASM::lhzx(context->r0, context->r3, context->r0);
/*803E7794 003E4594*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*803E7798 003E4598*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*803E779C 003E459C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x5);
/*803E77A0 003E45A0*/ PPC::Runtime::ASM::blt(.L_803E77B4);
/*803E77A4 003E45A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E77A8 003E45A8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803E77AC 003E45AC*/ PPC::Runtime::ASM::cmplw(context->r5, context->r0);
/*803E77B0 003E45B0*/ PPC::Runtime::ASM::blt(.L_803E77C4);
RUNTIME_PPC_JUMP_LABEL(.L_803E77B4, 0x803E77B4) //this is a jump label
/*803E77B4 003E45B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E77B8 003E45B8*/ PPC::Runtime::ASM::li(context->r4, -0x6);
/*803E77BC 003E45BC*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
/*803E77C0 003E45C0*/ PPC::Runtime::ASM::b(.L_803E77F0);
RUNTIME_PPC_JUMP_LABEL(.L_803E77C4, 0x803E77C4) //this is a jump label
/*803E77C4 003E45C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E77C8 003E45C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803E77CC 003E45CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803E77D0 003E45D0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*803E77D4 003E45D4*/ PPC::Runtime::ASM::andc(context->r0, context->r30, context->r0);
/*803E77D8 003E45D8*/ PPC::Runtime::ASM::cmplw(context->r5, context->r0);
/*803E77DC 003E45DC*/ PPC::Runtime::ASM::blt(.L_803E777C);
/*803E77E0 003E45E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*803E77E4 003E45E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E77E8 003E45E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E77EC 003E45EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803E77F0, 0x803E77F0) //this is a jump label
/*803E77F0 003E45F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803E77F4 003E45F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803E77F8 003E45F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803E77FC 003E45FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7800 003E4600*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803E7804 003E4604*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803E7808 003E4608*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E780C 003E460C*/ PPC::Runtime::ASM::blr();
}