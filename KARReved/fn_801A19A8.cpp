//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7710.hpp"



void fn_801A19A8(PPC::Runtime::GCContext* context)
{
/*801A19A8 0019E7A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A19AC 0019E7AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A19B0 0019E7B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1278 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A19B4 0019E7B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A19B8 0019E7B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r3));
/*801A19BC 0019E7BC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r3));
/*801A19C0 0019E7C0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801A19C4 0019E7C4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ac, context->r3));
/*801A19C8 0019E7C8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r3));
/*801A19CC 0019E7CC*/ PPC::Runtime::ASM::beq(.L_801A1A08);
/*801A19D0 0019E7D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801A19D4 0019E7D4*/ PPC::Runtime::ASM::bge(.L_801A19E4);
/*801A19D8 0019E7D8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A19DC 0019E7DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801A19E0 0019E7E0*/ PPC::Runtime::ASM::b(.L_801A19F0);
RUNTIME_PPC_JUMP_LABEL(.L_801A19E4, 0x801A19E4) //this is a jump label
/*801A19E4 0019E7E4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A19E8 0019E7E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801A19EC 0019E7EC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A19F0, 0x801A19F0) //this is a jump label
/*801A19F0 0019E7F0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A19F4 0019E7F4*/ PPC::Runtime::ASM::fadds(context->f5, context->f1, context->f0);
/*801A19F8 0019E7F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E127C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A19FC 0019E7FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801A1A00 0019E800*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801A1A04 0019E804*/ PPC::Runtime::ASM::fdivs(context->f1, context->f5, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1A08, 0x801A1A08) //this is a jump label
/*801A1A08 0019E808*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1278 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A0C 0019E80C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*801A1A10 0019E810*/ PPC::Runtime::ASM::beq(.L_801A1A4C);
/*801A1A14 0019E814*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801A1A18 0019E818*/ PPC::Runtime::ASM::bge(.L_801A1A28);
/*801A1A1C 0019E81C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A20 0019E820*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801A1A24 0019E824*/ PPC::Runtime::ASM::b(.L_801A1A34);
RUNTIME_PPC_JUMP_LABEL(.L_801A1A28, 0x801A1A28) //this is a jump label
/*801A1A28 0019E828*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A2C 0019E82C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801A1A30 0019E830*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1A34, 0x801A1A34) //this is a jump label
/*801A1A34 0019E834*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A38 0019E838*/ PPC::Runtime::ASM::fadds(context->f5, context->f2, context->f0);
/*801A1A3C 0019E83C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E127C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A40 0019E840*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801A1A44 0019E844*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*801A1A48 0019E848*/ PPC::Runtime::ASM::fdivs(context->f2, context->f5, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1A4C, 0x801A1A4C) //this is a jump label
/*801A1A4C 0019E84C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1278 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A50 0019E850*/ PPC::Runtime::ASM::fcmpu(cr0, context->f3, context->f0);
/*801A1A54 0019E854*/ PPC::Runtime::ASM::beq(.L_801A1A90);
/*801A1A58 0019E858*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*801A1A5C 0019E85C*/ PPC::Runtime::ASM::bge(.L_801A1A6C);
/*801A1A60 0019E860*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A64 0019E864*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801A1A68 0019E868*/ PPC::Runtime::ASM::b(.L_801A1A78);
RUNTIME_PPC_JUMP_LABEL(.L_801A1A6C, 0x801A1A6C) //this is a jump label
/*801A1A6C 0019E86C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A70 0019E870*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801A1A74 0019E874*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1A78, 0x801A1A78) //this is a jump label
/*801A1A78 0019E878*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A7C 0019E87C*/ PPC::Runtime::ASM::fadds(context->f5, context->f3, context->f0);
/*801A1A80 0019E880*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E127C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A84 0019E884*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801A1A88 0019E888*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*801A1A8C 0019E88C*/ PPC::Runtime::ASM::fdivs(context->f3, context->f5, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1A90, 0x801A1A90) //this is a jump label
/*801A1A90 0019E890*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1278 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1A94 0019E894*/ PPC::Runtime::ASM::fcmpu(cr0, context->f4, context->f0);
/*801A1A98 0019E898*/ PPC::Runtime::ASM::beq(.L_801A1AD4);
/*801A1A9C 0019E89C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*801A1AA0 0019E8A0*/ PPC::Runtime::ASM::bge(.L_801A1AB0);
/*801A1AA4 0019E8A4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1AA8 0019E8A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*801A1AAC 0019E8AC*/ PPC::Runtime::ASM::b(.L_801A1ABC);
RUNTIME_PPC_JUMP_LABEL(.L_801A1AB0, 0x801A1AB0) //this is a jump label
/*801A1AB0 0019E8B0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1AB4 0019E8B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*801A1AB8 0019E8B8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1ABC, 0x801A1ABC) //this is a jump label
/*801A1ABC 0019E8BC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1AC0 0019E8C0*/ PPC::Runtime::ASM::fadds(context->f5, context->f4, context->f0);
/*801A1AC4 0019E8C4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E127C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A1AC8 0019E8C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*801A1ACC 0019E8CC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*801A1AD0 0019E8D0*/ PPC::Runtime::ASM::fdivs(context->f4, context->f5, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801A1AD4, 0x801A1AD4) //this is a jump label
/*801A1AD4 0019E8D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d8, context->r3));
/*801A1AD8 0019E8D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801A1ADC 0019E8DC*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r0, 0, 25, 25);
/*801A1AE0 0019E8E0*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 0, 26, 26);
/*801A1AE4 0019E8E4*/ PPC::Runtime::ASM::bl(fn_801C7710);
/*801A1AE8 0019E8E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A1AEC 0019E8EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A1AF0 0019E8F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A1AF4 0019E8F4*/ PPC::Runtime::ASM::blr();
}