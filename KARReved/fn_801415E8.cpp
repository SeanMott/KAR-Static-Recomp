//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_801415E8(PPC::Runtime::GCContext* context)
{
/*801415E8 0013E3E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801415EC 0013E3EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801415F0 0013E3F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801415F4 0013E3F4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801415F8 0013E3F8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801415FC 0013E3FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80141600 0013E400*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80141604 0013E404*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80141608 0013E408*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8014160C 0013E40C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80141610 0013E410*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80141614 0013E414*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80141618 0013E418*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014161C 0013E41C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805E0420 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141620 0013E420*/ PPC::Runtime::ASM::extsb.(context->r0, context->r29);
/*80141624 0013E424*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x28);
/*80141628 0013E428*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014162C 0013E42C*/ PPC::Runtime::ASM::ble(.L_801417F8);
/*80141630 0013E430*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80141634 0013E434*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x63);
/*80141638 0013E438*/ PPC::Runtime::ASM::ble(.L_80141640);
/*8014163C 0013E43C*/ PPC::Runtime::ASM::li(context->r29, 0x63);
RUNTIME_PPC_JUMP_LABEL(.L_80141640, 0x80141640) //this is a jump label
/*80141640 0013E440*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80141644 0013E444*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80141648 0013E448*/ PPC::Runtime::ASM::add(context->r30, context->r31, context->r0);
/*8014164C 0013E44C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80141650 0013E450*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80141654 0013E454*/ PPC::Runtime::ASM::beq(.L_80141664);
/*80141658 0013E458*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8014165C 0013E45C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80141660 0013E460*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80141664, 0x80141664) //this is a jump label
/*80141664 0013E464*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80141668 0013E468*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8014166C 0013E46C*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*80141670 0013E470*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80141674 0013E474*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141678 0013E478*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8014167C 0013E47C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80141680 0013E480*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141684 0013E484*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80141688 0013E488*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014168C 0013E48C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80141690 0013E490*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80141694 0013E494*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80141698 0013E498*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8014169C 0013E49C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801416A0 0013E4A0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*801416A4 0013E4A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*801416A8 0013E4A8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801416AC 0013E4AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801416B0 0013E4B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801416B4 0013E4B4*/ PPC::Runtime::ASM::beq(.L_801416CC);
/*801416B8 0013E4B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801416BC 0013E4BC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*801416C0 0013E4C0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*801416C4 0013E4C4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801416C8 0013E4C8*/ PPC::Runtime::ASM::bl(fn_800644AC);
RUNTIME_PPC_JUMP_LABEL(.L_801416CC, 0x801416CC) //this is a jump label
/*801416CC 0013E4CC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801416D0 0013E4D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801416D4 0013E4D4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0424 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801416D8 0013E4D8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6660 @ Get_MemoryOffset_SDA21);
/*801416DC 0013E4DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801416E0 0013E4E0*/ PPC::Runtime::ASM::fadds(context->f31, context->f2, context->f0);
/*801416E4 0013E4E4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0204 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801416E8 0013E4E8*/ PPC::Runtime::ASM::fadds(context->f2, context->f1, context->f0);
/*801416EC 0013E4EC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801416F0 0013E4F0*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801416F4 0013E4F4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 801416F8 0013E4F8  4C C6 32 42 */ crset context->cr1eq
/*801416FC 0013E4FC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80141700 0013E500*/ PPC::Runtime::ASM::extsb(context->r30, context->r29);
/*80141704 0013E504*/ PPC::Runtime::ASM::cmpwi(context->r30, 0xa);
/*80141708 0013E508*/ PPC::Runtime::ASM::blt(.L_80141780);
/*8014170C 0013E50C*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80141710 0013E510*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0428 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141714 0013E514*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*80141718 0013E518*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 8014171C 0013E51C  7C 00 F0 96 */ mulhw context->r0 , context->r0 , context->r30
/*80141720 0013E520*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/*80141724 0013E524*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141728 0013E528*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8014172C 0013E52C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*80141730 0013E530*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141734 0013E534*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80141738 0013E538  4C C6 32 42 */ crset context->cr1eq
/*8014173C 0013E53C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80141740 0013E540*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80141744 0013E544*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141748 0013E548*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8014174C 0013E54C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80141750 0013E550  7C 00 F0 96 */ mulhw context->r0 , context->r0 , context->r30
/*80141754 0013E554*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f31);
/*80141758 0013E558*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014175C 0013E55C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80141760 0013E560*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*80141764 0013E564*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80141768 0013E568*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8014176C 0013E56C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*80141770 0013E570*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r30);
/* 80141774 0013E574  4C C6 32 42 */ crset context->cr1eq
/*80141778 0013E578*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8014177C 0013E57C*/ PPC::Runtime::ASM::b(.L_801417BC);
RUNTIME_PPC_JUMP_LABEL(.L_80141780, 0x80141780) //this is a jump label
/*80141780 0013E580*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0428 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80141784 0013E584*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80141788 0013E588*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014178C 0013E58C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/*80141790 0013E590*/ PPC::Runtime::ASM::fadds(context->f31, context->f0, context->f31);
/*80141794 0013E594*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80141798 0013E598  4C C6 32 42 */ crset context->cr1eq
/*8014179C 0013E59C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801417A0 0013E5A0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801417A4 0013E5A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801417A8 0013E5A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801417AC 0013E5AC*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*801417B0 0013E5B0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/* 801417B4 0013E5B4  4C C6 32 42 */ crset context->cr1eq
/*801417B8 0013E5B8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_801417BC, 0x801417BC) //this is a jump label
/*801417BC 0013E5BC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801417C0 0013E5C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801417C4 0013E5C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801417C8 0013E5C8*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801417CC 0013E5CC*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801417D0 0013E5D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801417D4 0013E5D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801417D8 0013E5D8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801417DC 0013E5DC*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801417E0 0013E5E0*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801417E4 0013E5E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801417E8 0013E5E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801417EC 0013E5EC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801417F0 0013E5F0*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801417F4 0013E5F4*/ PPC::Runtime::ASM::bl(fn_80450774);
RUNTIME_PPC_JUMP_LABEL(.L_801417F8, 0x801417F8) //this is a jump label
/*801417F8 0013E5F8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801417FC 0013E5FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80141800 0013E600*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80141804 0013E604*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80141808 0013E608*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8014180C 0013E60C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80141810 0013E610*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80141814 0013E614*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80141818 0013E618*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8014181C 0013E61C*/ PPC::Runtime::ASM::blr();
}