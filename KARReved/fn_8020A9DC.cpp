//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062DD0.hpp"
#include "fn_800D1860.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"



void fn_8020A9DC(PPC::Runtime::GCContext* context)
{
/*8020A9DC 002077DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8020A9E0 002077E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020A9E4 002077E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020A9E8 002077E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020A9EC 002077EC*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*8020A9F0 002077F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8020A9F4 002077F4*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8020A9F8 002077F8*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8020A9FC 002077FC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8020AA00 00207800*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8020AA04 00207804*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8020AA08 00207808*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8020AA0C 0020780C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020AA10 00207810*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8020AA14 00207814*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E244C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020AA18 00207818*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020AA1C 0020781C*/ PPC::Runtime::ASM::bge(.L_8020AABC);
/*8020AA20 00207820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r29));
/*8020AA24 00207824*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8020AA28 00207828*/ PPC::Runtime::ASM::bne(.L_8020AA44);
/*8020AA2C 0020782C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020AA30 00207830*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020AA34 00207834*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020AA38 00207838*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8020AA3C 0020783C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8020AA40 00207840*/ PPC::Runtime::ASM::b(.L_8020AA4C);
RUNTIME_PPC_JUMP_LABEL(.L_8020AA44, 0x8020AA44) //this is a jump label
/*8020AA44 00207844*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8020AA48 00207848*/ PPC::Runtime::ASM::bl(fn_800D1860);
RUNTIME_PPC_JUMP_LABEL(.L_8020AA4C, 0x8020AA4C) //this is a jump label
/*8020AA4C 0020784C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8020AA50 00207850*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8020AA54 00207854*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8020AA58 00207858*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020AA5C 0020785C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8020AA60 00207860*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8020AA64 00207864*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8020AA68 00207868*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8020AA6C 0020786C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020AA70 00207870*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8020AA74 00207874*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*8020AA78 00207878*/ PPC::Runtime::ASM::bne(.L_8020AABC);
/*8020AA7C 0020787C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2418 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020AA80 00207880*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8020AA84 00207884*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8020AA88 00207888*/ PPC::Runtime::ASM::bne(.L_8020AABC);
/*8020AA8C 0020788C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8020AA90 00207890*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*8020AA94 00207894*/ PPC::Runtime::ASM::bne(.L_8020AABC);
/*8020AA98 00207898*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1342 @ Get_MemoryOffset_HighBit);
/*8020AA9C 0020789C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1342 @ Get_MemoryOffset_LowBit);
/*8020AAA0 002078A0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8020AAA4 002078A4*/ PPC::Runtime::ASM::bl(OSReport);
/*8020AAA8 002078A8*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1341 @ Get_MemoryOffset_HighBit);
/*8020AAAC 002078AC*/ PPC::Runtime::ASM::li(context->r4, 0xa56);
/*8020AAB0 002078B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1341 @ Get_MemoryOffset_LowBit);
/*8020AAB4 002078B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7160 @ Get_MemoryOffset_SDA21);
/*8020AAB8 002078B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8020AABC, 0x8020AABC) //this is a jump label
/*8020AABC 002078BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020AAC0 002078C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020AAC4 002078C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8020AAC8 002078C8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8020AACC 002078CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020AAD0 002078D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8020AAD4 002078D4*/ PPC::Runtime::ASM::blr();
}