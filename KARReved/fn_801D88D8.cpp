//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CA968.hpp"
#include "fn_800CEA80.hpp"



void fn_801D88D8(PPC::Runtime::GCContext* context)
{
/*801D88D8 001D56D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801D88DC 001D56DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D88E0 001D56E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D88E4 001D56E4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801D88E8 001D56E8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801D88EC 001D56EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D88F0 001D56F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D88F4 001D56F4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801D88F8 001D56F8*/ PPC::Runtime::ASM::bl(fn_801CA968);
/*801D88FC 001D56FC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801D8900 001D5700*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801D8904 001D5704*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8908 001D5708*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801D890C 001D570C*/ PPC::Runtime::ASM::ble(.L_801D898C);
/*801D8910 001D5710*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x428, context->r31));
/*801D8914 001D5714*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D8918 001D5718*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r31));
/*801D891C 001D571C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801D8920 001D5720*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D8924 001D5724*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42c, context->r31));
/*801D8928 001D5728*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D892C 001D572C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801D8930 001D5730*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f3, context->f0);
/*801D8934 001D5734*/ PPC::Runtime::ASM::fneg(context->f31, context->f0);
/*801D8938 001D5738*/ PPC::Runtime::ASM::bl(fn_800CEA80);
/*801D893C 001D573C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f0, context->r31));
/*801D8940 001D5740*/ PPC::Runtime::ASM::fabs(context->f3, context->f31);
/*801D8944 001D5744*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8948 001D5748*/ PPC::Runtime::ASM::fmuls(context->f2, context->f31, context->f31);
/*801D894C 001D574C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*801D8950 001D5750*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801D8954 001D5754*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*801D8958 001D5758*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*801D895C 001D575C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f1);
/*801D8960 001D5760*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*801D8964 001D5764*/ PPC::Runtime::ASM::ble(.L_801D896C);
/*801D8968 001D5768*/ PPC::Runtime::ASM::fmr(context->f2, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_801D896C, 0x801D896C) //this is a jump label
/*801D896C 001D576C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r31));
/*801D8970 001D5770*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8974 001D5774*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f2);
/*801D8978 001D5778*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801D897C 001D577C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r31));
/*801D8980 001D5780*/ PPC::Runtime::ASM::ble(.L_801D8990);
/*801D8984 001D5784*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*801D8988 001D5788*/ PPC::Runtime::ASM::b(.L_801D8990);
RUNTIME_PPC_JUMP_LABEL(.L_801D898C, 0x801D898C) //this is a jump label
/*801D898C 001D578C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801D8990, 0x801D8990) //this is a jump label
/*801D8990 001D5790*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8994 001D5794*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*801D8998 001D5798*/ PPC::Runtime::ASM::beq(.L_801D89CC);
/*801D899C 001D579C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r31));
/*801D89A0 001D57A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D89A4 001D57A4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*801D89A8 001D57A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801D89AC 001D57AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x428, context->r31));
/*801D89B0 001D57B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D89B4 001D57B4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*801D89B8 001D57B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801D89BC 001D57BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42c, context->r31));
/*801D89C0 001D57C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801D89C4 001D57C4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*801D89C8 001D57C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D89CC, 0x801D89CC) //this is a jump label
/*801D89CC 001D57CC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801D89D0 001D57D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D89D4 001D57D4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801D89D8 001D57D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D89DC 001D57DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D89E0 001D57E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801D89E4 001D57E4*/ PPC::Runtime::ASM::blr();
}