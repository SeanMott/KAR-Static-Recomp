//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190848.hpp"
#include "fn_8018C824.hpp"
#include "fn_801960D0.hpp"
#include "fn_80195FA8.hpp"
#include "fn_8018C668.hpp"
#include "fn_80196F78.hpp"
#include "fn_80198E48.hpp"
#include "fn_8019E2E8.hpp"
#include "fn_8019C15C.hpp"
#include "fn_PhysicsObject_SetDefaultCollideBits_TakeNoParams.hpp"
#include "fn_8019ED48.hpp"
#include "fn_80190DAC.hpp"
#include "fn_80199734.hpp"
#include "fn_80198934.hpp"
#include "fn_80198600.hpp"
#include "fn_8019BE60.hpp"
#include "fn_8019BD40.hpp"
#include "fn_8019BBC0.hpp"
#include "fn_8019C1B8.hpp"
#include "fn_8019BAA4.hpp"
#include "fn_80198784.hpp"
#include "fn_80198910.hpp"
#include "fn_8019BE78.hpp"
#include "fn_801A2048.hpp"
#include "fn_80231BDC.hpp"
#include "fn_801A2EF0.hpp"



void fn_Rider_ActionStateChange(PPC::Runtime::GCContext* context)
{
/*8018E580 0018B380*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8018E584 0018B384*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018E588 0018B388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8018E58C 0018B38C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8018E590 0018B390*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8018E594 0018B394*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8018E598 0018B398*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8018E59C 0018B39C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018E5A0 0018B3A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8018E5A4 0018B3A4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018E5A8 0018B3A8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018E5AC 0018B3AC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8018E5B0 0018B3B0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8018E5B4 0018B3B4*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*8018E5B8 0018B3B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8018E5BC 0018B3BC*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*8018E5C0 0018B3C0*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8018E5C4 0018B3C4*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*8018E5C8 0018B3C8*/ PPC::Runtime::ASM::bl(fn_80190848);
/*8018E5CC 0018B3CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r28));
/*8018E5D0 0018B3D0*/ PPC::Runtime::ASM::bl(fn_8018C824);
/*8018E5D4 0018B3D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r28));
/* 8018E5D8 0018B3D8  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*8018E5DC 0018B3DC*/ PPC::Runtime::ASM::beq(.L_8018E5E8);
/*8018E5E0 0018B3E0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E5E4 0018B3E4*/ PPC::Runtime::ASM::bl(fn_801960D0);
RUNTIME_PPC_JUMP_LABEL(.L_8018E5E8, 0x8018E5E8) //this is a jump label
/*8018E5E8 0018B3E8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 27, 27);
/*8018E5EC 0018B3EC*/ PPC::Runtime::ASM::bne(.L_8018E614);
/*8018E5F0 0018B3F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r28));
/*8018E5F4 0018B3F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*8018E5F8 0018B3F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8018E5FC 0018B3FC*/ PPC::Runtime::ASM::beq(.L_8018E60C);
/*8018E600 0018B400*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E604 0018B404*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8018E608 0018B408*/ PPC::Runtime::ASM::bl(fn_80195FA8);
RUNTIME_PPC_JUMP_LABEL(.L_8018E60C, 0x8018E60C) //this is a jump label
/*8018E60C 0018B40C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r28));
/*8018E610 0018B410*/ PPC::Runtime::ASM::bl(fn_8018C668);
RUNTIME_PPC_JUMP_LABEL(.L_8018E614, 0x8018E614) //this is a jump label
/*8018E614 0018B414*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 30, 30);
/*8018E618 0018B418*/ PPC::Runtime::ASM::bne(.L_8018E630);
/*8018E61C 0018B41C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r28));
/* 8018E620 0018B420  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*8018E624 0018B424*/ PPC::Runtime::ASM::beq(.L_8018E630);
/*8018E628 0018B428*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E62C 0018B42C*/ PPC::Runtime::ASM::bl(fn_80196F78);
RUNTIME_PPC_JUMP_LABEL(.L_8018E630, 0x8018E630) //this is a jump label
/*8018E630 0018B430*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 29, 29);
/*8018E634 0018B434*/ PPC::Runtime::ASM::bne(.L_8018E64C);
/*8018E638 0018B438*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x821, context->r28));
/* 8018E63C 0018B43C  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*8018E640 0018B440*/ PPC::Runtime::ASM::beq(.L_8018E64C);
/*8018E644 0018B444*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E648 0018B448*/ PPC::Runtime::ASM::bl(fn_80198E48);
RUNTIME_PPC_JUMP_LABEL(.L_8018E64C, 0x8018E64C) //this is a jump label
/* 8018E64C 0018B44C  57 C0 07 FF */ clrlwi. context->r0 , context->r30 , 31
/*8018E650 0018B450*/ PPC::Runtime::ASM::bne(.L_8018E65C);
/*8018E654 0018B454*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E658 0018B458*/ PPC::Runtime::ASM::bl(fn_8019E2E8);
RUNTIME_PPC_JUMP_LABEL(.L_8018E65C, 0x8018E65C) //this is a jump label
/*8018E65C 0018B45C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 22, 22);
/*8018E660 0018B460*/ PPC::Runtime::ASM::bne(.L_8018E66C);
/*8018E664 0018B464*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E668 0018B468*/ PPC::Runtime::ASM::bl(fn_8019C15C);
RUNTIME_PPC_JUMP_LABEL(.L_8018E66C, 0x8018E66C) //this is a jump label
/*8018E66C 0018B46C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 26, 26);
/*8018E670 0018B470*/ PPC::Runtime::ASM::bne(.L_8018E67C);
/*8018E674 0018B474*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E678 0018B478*/ PPC::Runtime::ASM::bl(fn_PhysicsObject_SetDefaultCollideBits_TakeNoParams);
RUNTIME_PPC_JUMP_LABEL(.L_8018E67C, 0x8018E67C) //this is a jump label
/*8018E67C 0018B47C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E680 0018B480*/ PPC::Runtime::ASM::bl(fn_8019ED48);
/*8018E684 0018B484*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 25, 25);
/*8018E688 0018B488*/ PPC::Runtime::ASM::bne(.L_8018E694);
/*8018E68C 0018B48C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1058 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018E690 0018B490*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8018E694, 0x8018E694) //this is a jump label
/*8018E694 0018B494*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E698 0018B498*/ PPC::Runtime::ASM::bl(fn_80190DAC);
/*8018E69C 0018B49C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1058 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018E6A0 0018B4A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*8018E6A4 0018B4A4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8018E6A8 0018B4A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x470, context->r28));
/*8018E6AC 0018B4AC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*8018E6B0 0018B4B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8018E6B4 0018B4B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r28));
/*8018E6B8 0018B4B8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 29, 29);
/*8018E6BC 0018B4BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r28));
/*8018E6C0 0018B4C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r28));
/*8018E6C4 0018B4C4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*8018E6C8 0018B4C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r28));
/*8018E6CC 0018B4CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x821, context->r28));
/*8018E6D0 0018B4D0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8018E6D4 0018B4D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x821, context->r28));
/*8018E6D8 0018B4D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r28));
/*8018E6DC 0018B4DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8018E6E0 0018B4E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r28));
/*8018E6E4 0018B4E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r28));
/*8018E6E8 0018B4E8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*8018E6EC 0018B4EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r28));
/*8018E6F0 0018B4F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r28));
/*8018E6F4 0018B4F4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*8018E6F8 0018B4F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x822, context->r28));
/*8018E6FC 0018B4FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E700 0018B500*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*8018E704 0018B504*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E708 0018B508*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E70C 0018B50C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*8018E710 0018B510*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E714 0018B514*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r28));
/*8018E718 0018B518*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*8018E71C 0018B51C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r28));
/*8018E720 0018B520*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r28));
/*8018E724 0018B524*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*8018E728 0018B528*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r28));
/*8018E72C 0018B52C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E730 0018B530*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*8018E734 0018B534*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E738 0018B538*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E73C 0018B53C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*8018E740 0018B540*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E744 0018B544*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E748 0018B548*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*8018E74C 0018B54C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E750 0018B550*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E754 0018B554*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*8018E758 0018B558*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E75C 0018B55C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E760 0018B560*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*8018E764 0018B564*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E768 0018B568*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E76C 0018B56C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 29, 29);
/*8018E770 0018B570*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r28));
/*8018E774 0018B574*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E778 0018B578*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8018E77C 0018B57C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E780 0018B580*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E784 0018B584*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8018E788 0018B588*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x824, context->r28));
/*8018E78C 0018B58C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8018E790 0018B590*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8018E794 0018B594*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8018E798 0018B598*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8018E79C 0018B59C*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8018E7A0 0018B5A0*/ PPC::Runtime::ASM::beq(.L_8018E7B0);
/*8018E7A4 0018B5A4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E7A8 0018B5A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8018E7AC 0018B5AC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8018E7B0, 0x8018E7B0) //this is a jump label
/*8018E7B0 0018B5B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*8018E7B4 0018B5B4*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*8018E7B8 0018B5B8*/ PPC::Runtime::ASM::blt(.L_8018E7D0);
/*8018E7BC 0018B5BC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r31);
/*8018E7C0 0018B5C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*8018E7C4 0018B5C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 5);
/*8018E7C8 0018B5C8*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*8018E7CC 0018B5CC*/ PPC::Runtime::ASM::b(.L_8018E7DC);
RUNTIME_PPC_JUMP_LABEL(.L_8018E7D0, 0x8018E7D0) //this is a jump label
/*8018E7D0 0018B5D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8018E7D4 0018B5D4*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 5);
/*8018E7D8 0018B5D8*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8018E7DC, 0x8018E7DC) //this is a jump label
/*8018E7DC 0018B5DC*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*8018E7E0 0018B5E0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E7E4 0018B5E4*/ PPC::Runtime::ASM::beq(.L_8018E7F0);
/*8018E7E8 0018B5E8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8018E7EC 0018B5EC*/ PPC::Runtime::ASM::b(.L_8018E7F4);
RUNTIME_PPC_JUMP_LABEL(.L_8018E7F0, 0x8018E7F0) //this is a jump label
/*8018E7F0 0018B5F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8018E7F4, 0x8018E7F4) //this is a jump label
/*8018E7F4 0018B5F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8018E7F8 0018B5F8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*8018E7FC 0018B5FC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*8018E800 0018B600*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8018E804 0018B604*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*8018E808 0018B608*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r5));
/*8018E80C 0018B60C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8018E810 0018B610*/ PPC::Runtime::ASM::bctrl();
/*8018E814 0018B614*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8018E818 0018B618*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8018E81C 0018B61C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8018E820 0018B620*/ PPC::Runtime::ASM::beq(.L_8018E8C0);
/*8018E824 0018B624*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E828 0018B628*/ PPC::Runtime::ASM::bl(fn_80199734);
/*8018E82C 0018B62C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8018E830 0018B630*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8018E834 0018B634*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*8018E838 0018B638*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E83C 0018B63C*/ PPC::Runtime::ASM::bl(fn_80198934);
/*8018E840 0018B640*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E844 0018B644*/ PPC::Runtime::ASM::bl(fn_80198600);
/*8018E848 0018B648*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8018E84C 0018B64C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E850 0018B650*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8018E854 0018B654*/ PPC::Runtime::ASM::bl(fn_8019BE60);
/*8018E858 0018B658*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1058 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018E85C 0018B65C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f30, context->f0);
/*8018E860 0018B660*/ PPC::Runtime::ASM::beq(.L_8018E88C);
/*8018E864 0018B664*/ PPC::Runtime::ASM::fneg(context->f0, context->f30);
/*8018E868 0018B668*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 23, 23);
/*8018E86C 0018B66C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8018E870 0018B670*/ PPC::Runtime::ASM::beq(.L_8018E880);
/*8018E874 0018B674*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E878 0018B678*/ PPC::Runtime::ASM::bl(fn_8019BD40);
/*8018E87C 0018B67C*/ PPC::Runtime::ASM::b(.L_8018E89C);
RUNTIME_PPC_JUMP_LABEL(.L_8018E880, 0x8018E880) //this is a jump label
/*8018E880 0018B680*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E884 0018B684*/ PPC::Runtime::ASM::bl(fn_8019BBC0);
/*8018E888 0018B688*/ PPC::Runtime::ASM::b(.L_8018E89C);
RUNTIME_PPC_JUMP_LABEL(.L_8018E88C, 0x8018E88C) //this is a jump label
/*8018E88C 0018B68C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E890 0018B690*/ PPC::Runtime::ASM::bl(fn_8019C1B8);
/*8018E894 0018B694*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E898 0018B698*/ PPC::Runtime::ASM::bl(fn_8019BAA4);
RUNTIME_PPC_JUMP_LABEL(.L_8018E89C, 0x8018E89C) //this is a jump label
/*8018E89C 0018B69C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8018E8A0 0018B6A0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 8018E8A4 0018B6A4  54 60 EF FF */ extrwi. context->r0 , context->r3 , 1 , 28
/*8018E8A8 0018B6A8*/ PPC::Runtime::ASM::bne(.L_8018E8DC);
/* 8018E8AC 0018B6AC  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*8018E8B0 0018B6B0*/ PPC::Runtime::ASM::bne(.L_8018E8DC);
/*8018E8B4 0018B6B4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E8B8 0018B6B8*/ PPC::Runtime::ASM::bl(fn_80198784);
/*8018E8BC 0018B6BC*/ PPC::Runtime::ASM::b(.L_8018E8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8018E8C0, 0x8018E8C0) //this is a jump label
/*8018E8C0 0018B6C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8018E8C4 0018B6C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8018E8C8 0018B6C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r28));
/*8018E8CC 0018B6CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8018E8D0 0018B6D0*/ PPC::Runtime::ASM::bl(fn_80198910);
/*8018E8D4 0018B6D4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E8D8 0018B6D8*/ PPC::Runtime::ASM::bl(fn_8019BE78);
RUNTIME_PPC_JUMP_LABEL(.L_8018E8DC, 0x8018E8DC) //this is a jump label
/*8018E8DC 0018B6DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x794, context->r28));
/*8018E8E0 0018B6E0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E8E4 0018B6E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8018E8E8 0018B6E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018E8EC 0018B6EC*/ PPC::Runtime::ASM::bl(fn_801A2048);
/*8018E8F0 0018B6F0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 24, 24);
/*8018E8F4 0018B6F4*/ PPC::Runtime::ASM::bne(.L_8018E910);
/*8018E8F8 0018B6F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018E8FC 0018B6FC*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x794);
/*8018E900 0018B700*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8018E904 0018B704*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8018E908 0018B708*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8018E90C 0018B70C*/ PPC::Runtime::ASM::bl(fn_80231BDC);
RUNTIME_PPC_JUMP_LABEL(.L_8018E910, 0x8018E910) //this is a jump label
/*8018E910 0018B710*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8018E914 0018B714*/ PPC::Runtime::ASM::bl(fn_801A2EF0);
/*8018E918 0018B718*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8018E91C 0018B71C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8018E920 0018B720*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b4, context->r28));
/*8018E924 0018B724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8018E928 0018B728*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b8, context->r28));
/*8018E92C 0018B72C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8018E930 0018B730*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7bc, context->r28));
/*8018E934 0018B734*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8018E938 0018B738*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c0, context->r28));
/*8018E93C 0018B73C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8018E940 0018B740*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c4, context->r28));
/*8018E944 0018B744*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8018E948 0018B748*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r28));
/*8018E94C 0018B74C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r28));
/*8018E950 0018B750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d0, context->r28));
/*8018E954 0018B754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d4, context->r28));
/*8018E958 0018B758*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d8, context->r28));
/*8018E95C 0018B75C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7dc, context->r28));
/*8018E960 0018B760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r28));
/*8018E964 0018B764*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r28));
/*8018E968 0018B768*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f4, context->r28));
/*8018E96C 0018B76C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r28));
/*8018E970 0018B770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x800, context->r28));
/*8018E974 0018B774*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x804, context->r28));
/*8018E978 0018B778*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8018E97C 0018B77C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8018E980 0018B780*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8018E984 0018B784*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8018E988 0018B788*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018E98C 0018B78C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8018E990 0018B790*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018E994 0018B794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8018E998 0018B798*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018E99C 0018B79C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018E9A0 0018B7A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8018E9A4 0018B7A4*/ PPC::Runtime::ASM::blr();
}