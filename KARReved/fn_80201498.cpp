//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8020D30C.hpp"



void fn_80201498(PPC::Runtime::GCContext* context)
{
/*80201498 001FE298*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020149C 001FE29C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802014A0 001FE2A0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E22A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802014A4 001FE2A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802014A8 001FE2A8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802014AC 001FE2AC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2290 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802014B0 001FE2B0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802014B4 001FE2B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802014B8 001FE2B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802014BC 001FE2BC*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x4);
/*802014C0 001FE2C0*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802014C4 001FE2C4*/ PPC::Runtime::ASM::extrwi(context->r5, context->r5, 16, 9);
/*802014C8 001FE2C8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802014CC 001FE2CC*/ PPC::Runtime::ASM::extrwi(context->r6, context->r6, 3, 22);
/*802014D0 001FE2D0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802014D4 001FE2D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802014D8 001FE2D8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802014DC 001FE2DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802014E0 001FE2E0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x4);
/*802014E4 001FE2E4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*802014E8 001FE2E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802014EC 001FE2EC*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*802014F0 001FE2F0*/ PPC::Runtime::ASM::bl(fn_8020D30C);
/*802014F4 001FE2F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802014F8 001FE2F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802014FC 001FE2FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80201500 001FE300*/ PPC::Runtime::ASM::blr();
}