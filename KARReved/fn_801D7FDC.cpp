//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800CEA80.hpp"



void fn_801D7FDC(PPC::Runtime::GCContext* context)
{
/*801D7FDC 001D4DDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801D7FE0 001D4DE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D7FE4 001D4DE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801D7FE8 001D4DE8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801D7FEC 001D4DEC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801D7FF0 001D4DF0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801D7FF4 001D4DF4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801D7FF8 001D4DF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D7FFC 001D4DFC*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*801D8000 001D4E00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D8004 001D4E04*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x324);
/*801D8008 001D4E08*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801D800C 001D4E0C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801D8010 001D4E10*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8014 001D4E14*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*801D8018 001D4E18*/ PPC::Runtime::ASM::beq(.L_801D80E4);
/*801D801C 001D4E1C*/ PPC::Runtime::ASM::bl(fn_800CEA80);
/*801D8020 001D4E20*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801D8024 001D4E24*/ PPC::Runtime::ASM::fmuls(context->f4, context->f30, context->f1);
/*801D8028 001D4E28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D802C 001D4E2C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f31, context->f31);
/*801D8030 001D4E30*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8034 001D4E34*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801D8038 001D4E38*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*801D803C 001D4E3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801D8040 001D4E40*/ PPC::Runtime::ASM::fmuls(context->f31, context->f3, context->f4);
/*801D8044 001D4E44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D8048 001D4E48*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f1);
/*801D804C 001D4E4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801D8050 001D4E50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D8054 001D4E54*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801D8058 001D4E58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D805C 001D4E5C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801D8060 001D4E60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801D8064 001D4E64*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801D8068 001D4E68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D806C 001D4E6C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801D8070 001D4E70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801D8074 001D4E74*/ PPC::Runtime::ASM::bge(.L_801D80A0);
/*801D8078 001D4E78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801D807C 001D4E7C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801D8080 001D4E80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D8084 001D4E84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801D8088 001D4E88*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801D808C 001D4E8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D8090 001D4E90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801D8094 001D4E94*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801D8098 001D4E98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801D809C 001D4E9C*/ PPC::Runtime::ASM::b(.L_801D80E4);
RUNTIME_PPC_JUMP_LABEL(.L_801D80A0, 0x801D80A0) //this is a jump label
/*801D80A0 001D4EA0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D80A4 001D4EA4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801D80A8 001D4EA8*/ PPC::Runtime::ASM::ble(.L_801D80E4);
/*801D80AC 001D4EAC*/ PPC::Runtime::ASM::fneg(context->f3, context->f31);
/*801D80B0 001D4EB0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D80B4 001D4EB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D80B8 001D4EB8*/ PPC::Runtime::ASM::fdivs(context->f3, context->f3, context->f1);
/*801D80BC 001D4EBC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f3, context->f0);
/*801D80C0 001D4EC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D80C4 001D4EC4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D80C8 001D4EC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D80CC 001D4ECC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f3, context->f0);
/*801D80D0 001D4ED0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D80D4 001D4ED4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D80D8 001D4ED8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801D80DC 001D4EDC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f3, context->f0);
/*801D80E0 001D4EE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D80E4, 0x801D80E4) //this is a jump label
/*801D80E4 001D4EE4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801D80E8 001D4EE8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801D80EC 001D4EEC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801D80F0 001D4EF0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801D80F4 001D4EF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801D80F8 001D4EF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D80FC 001D4EFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D8100 001D4F00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801D8104 001D4F04*/ PPC::Runtime::ASM::blr();
}