//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E6764(PPC::Runtime::GCContext* context)
{
/*802E6764 002E3564*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802E6768 002E3568*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E676C 002E356C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E6770 002E3570*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E6774 002E3574*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E6778 002E3578*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802E677C 002E357C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E6780 002E3580*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802E6784 002E3584*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E6788 002E3588*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E678C 002E358C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r12));
/*802E6790 002E3590*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E6794 002E3594*/ PPC::Runtime::ASM::bctrl();
/* 802E6798 002E3598  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E679C 002E359C*/ PPC::Runtime::ASM::bne(.L_802E6878);
/*802E67A0 002E35A0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E67A4 002E35A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E67A8 002E35A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*802E67AC 002E35AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E67B0 002E35B0*/ PPC::Runtime::ASM::bctrl();
/*802E67B4 002E35B4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*802E67B8 002E35B8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*802E67BC 002E35BC*/ PPC::Runtime::ASM::beq(.L_802E6878);
/*802E67C0 002E35C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E67C4 002E35C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E67C8 002E35C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802E67CC 002E35CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E67D0 002E35D0*/ PPC::Runtime::ASM::bctrl();
/*802E67D4 002E35D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x8);
/*802E67D8 002E35D8*/ PPC::Runtime::ASM::beq(.L_802E6878);
/*802E67DC 002E35DC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x24);
/*802E67E0 002E35E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*802E67E4 002E35E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E67E8 002E35E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E67EC 002E35EC*/ PPC::Runtime::ASM::bctrl();
/*802E67F0 002E35F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*802E67F4 002E35F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E67F8 002E35F8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x24);
/*802E67FC 002E35FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E6800 002E3600*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E6804 002E3604*/ PPC::Runtime::ASM::bctrl();
/*802E6808 002E3608*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E680C 002E360C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802E6810 002E3610*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E6814 002E3614*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E6818 002E3618*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E681C 002E361C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802E6820 002E3620*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802E6824 002E3624*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802E6828 002E3628*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E682C 002E362C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802E6830 002E3630*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E6834 002E3634*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802E6838 002E3638*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E683C 002E363C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802E6840 002E3640*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E6844 002E3644*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E6848 002E3648*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E684C 002E364C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E6850 002E3650*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*802E6854 002E3654*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E6858 002E3658*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*802E685C 002E365C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E6860 002E3660*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E6864 002E3664*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r12));
/*802E6868 002E3668*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E686C 002E366C*/ PPC::Runtime::ASM::bctrl();
/*802E6870 002E3670*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E6874 002E3674*/ PPC::Runtime::ASM::b(.L_802E687C);
RUNTIME_PPC_JUMP_LABEL(.L_802E6878, 0x802E6878) //this is a jump label
/*802E6878 002E3678*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802E687C, 0x802E687C) //this is a jump label
/*802E687C 002E367C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E6880 002E3680*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E6884 002E3684*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E6888 002E3688*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E688C 002E368C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E6890 002E3690*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802E6894 002E3694*/ PPC::Runtime::ASM::blr();
}