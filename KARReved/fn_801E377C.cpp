//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80236C40.hpp"
#include "fn_80236C40.hpp"



void fn_801E377C(PPC::Runtime::GCContext* context)
{
/*801E377C 001E057C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E3780 001E0580*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E3784 001E0584*/ PPC::Runtime::ASM::mr(context->r10, context->r3);
/*801E3788 001E0588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E378C 001E058C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bb4, context->r3));
/* 801E3790 001E0590  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*801E3794 001E0594*/ PPC::Runtime::ASM::bne(.L_801E382C);
/*801E3798 001E0598*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r10));
/* 801E379C 001E059C  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*801E37A0 001E05A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ba8, context->r10));
/*801E37A4 001E05A4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD850 @ Get_MemoryOffset_SDA21);
/*801E37A8 001E05A8*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 2);
/*801E37AC 001E05AC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*801E37B0 001E05B0*/ PPC::Runtime::ASM::subfic(context->r4, context->r5, -0x1);
/*801E37B4 001E05B4*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*801E37B8 001E05B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801E37BC 001E05BC*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*801E37C0 001E05C0*/ PPC::Runtime::ASM::srwi(context->r8, context->r0, 31);
/*801E37C4 001E05C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801E37C8 001E05C8*/ PPC::Runtime::ASM::beq(.L_801E37F8);
/*801E37CC 001E05CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r10));
/*801E37D0 001E05D0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801E37D4 001E05D4*/ PPC::Runtime::ASM::lis(context->r6, 0x6);
/*801E37D8 001E05D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*801E37DC 001E05DC*/ PPC::Runtime::ASM::lwzx(context->r7, context->r4, context->r0);
/*801E37E0 001E05E0*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x5a4e);
/*801E37E4 001E05E4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a4, context->r10));
/*801E37E8 001E05E8*/ PPC::Runtime::ASM::li(context->r6, 0xd4);
/*801E37EC 001E05EC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801E37F0 001E05F0*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*801E37F4 001E05F4*/ PPC::Runtime::ASM::b(.L_801E382C);
RUNTIME_PPC_JUMP_LABEL(.L_801E37F8, 0x801E37F8) //this is a jump label
/*801E37F8 001E05F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r10));
/*801E37FC 001E05FC*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*801E3800 001E0600*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801E3804 001E0604*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x8);
/*801E3808 001E0608*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E380C 001E060C*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x5a4f);
/*801E3810 001E0610*/ PPC::Runtime::ASM::li(context->r6, 0xd6);
/*801E3814 001E0614*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r10));
/*801E3818 001E0618*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*801E381C 001E061C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a4, context->r10));
/*801E3820 001E0620*/ PPC::Runtime::ASM::lwzx(context->r7, context->r7, context->r0);
/*801E3824 001E0624*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801E3828 001E0628*/ PPC::Runtime::ASM::bl(fn_80236C40);
RUNTIME_PPC_JUMP_LABEL(.L_801E382C, 0x801E382C) //this is a jump label
/*801E382C 001E062C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E3830 001E0630*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E3834 001E0634*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E3838 001E0638*/ PPC::Runtime::ASM::blr();
}