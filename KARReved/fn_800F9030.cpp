//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80068D74.hpp"



void fn_800F9030(PPC::Runtime::GCContext* context)
{
/*800F9030 000F5E30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800F9034 000F5E34*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F9038 000F5E38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800F903C 000F5E3C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800F9040 000F5E40*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800F9044 000F5E44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F9048 000F5E48*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F904C 000F5E4C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9050 000F5E50*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800F9054 000F5E54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r3));
/*800F9058 000F5E58*/ PPC::Runtime::ASM::addi(context->r31, context->r29, 0xbc);
/*800F905C 000F5E5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r3));
/*800F9060 000F5E60*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800F9064 000F5E64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*800F9068 000F5E68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r3));
/*800F906C 000F5E6C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F9070 000F5E70*/ PPC::Runtime::ASM::beq(.L_800F9128);
/*800F9074 000F5E74*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF860 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F9078 000F5E78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800F907C 000F5E7C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*800F9080 000F5E80*/ PPC::Runtime::ASM::beq(.L_800F9090);
/*800F9084 000F5E84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r29));
/*800F9088 000F5E88*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800F908C 000F5E8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800F9090, 0x800F9090) //this is a jump label
/*800F9090 000F5E90*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF860 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800F9094, 0x800F9094) //this is a jump label
/*800F9094 000F5E94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800F9098 000F5E98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F909C 000F5E9C*/ PPC::Runtime::ASM::beq(.L_800F9128);
/*800F90A0 000F5EA0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800F90A4 000F5EA4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f1);
/*800F90A8 000F5EA8*/ PPC::Runtime::ASM::bne(.L_800F90CC);
/*800F90AC 000F5EAC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800F90B0 000F5EB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r29));
/*800F90B4 000F5EB4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800F90B8 000F5EB8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800F90BC 000F5EBC*/ PPC::Runtime::ASM::beq(.L_800F9128);
/*800F90C0 000F5EC0*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*800F90C4 000F5EC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800F90C8 000F5EC8*/ PPC::Runtime::ASM::b(.L_800F90D8);
RUNTIME_PPC_JUMP_LABEL(.L_800F90CC, 0x800F90CC) //this is a jump label
/*800F90CC 000F5ECC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF864 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F90D0 000F5ED0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800F90D4 000F5ED4*/ PPC::Runtime::ASM::bgt(.L_800F9128);
RUNTIME_PPC_JUMP_LABEL(.L_800F90D8, 0x800F90D8) //this is a jump label
/*800F90D8 000F5ED8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800F90DC 000F5EDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F90E0 000F5EE0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F90E4 000F5EE4*/ PPC::Runtime::ASM::extrwi(context->r30, context->r0, 6, 24);
/*800F90E8 000F5EE8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800F90EC 000F5EEC*/ PPC::Runtime::ASM::bl(fn_80068D74);
/*800F90F0 000F5EF0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F90F4 000F5EF4*/ PPC::Runtime::ASM::bne(.L_800F911C);
/*800F90F8 000F5EF8*/ PPC::Runtime::ASM::subi(context->r0, context->r30, 0xb);
/*800F90FC 000F5EFC*/ PPC::Runtime::ASM::lis(context->r4, StructWithFuncPtrs_47 @ Get_MemoryOffset_HighBit);
/*800F9100 000F5F00*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*800F9104 000F5F04*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800F9108 000F5F08*/ PPC::Runtime::ASM::addi(context->r5, context->r4, StructWithFuncPtrs_47 @ Get_MemoryOffset_LowBit);
/*800F910C 000F5F0C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800F9110 000F5F10*/ PPC::Runtime::ASM::lwzx(context->r12, context->r5, context->r0);
/*800F9114 000F5F14*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800F9118 000F5F18*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_800F911C, 0x800F911C) //this is a jump label
/*800F911C 000F5F1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800F9120 000F5F20*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*800F9124 000F5F24*/ PPC::Runtime::ASM::bne(.L_800F9094);
RUNTIME_PPC_JUMP_LABEL(.L_800F9128, 0x800F9128) //this is a jump label
/*800F9128 000F5F28*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800F912C 000F5F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800F9130 000F5F30*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800F9134 000F5F34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F9138 000F5F38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F913C 000F5F3C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9140 000F5F40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F9144 000F5F44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800F9148 000F5F48*/ PPC::Runtime::ASM::blr();
}