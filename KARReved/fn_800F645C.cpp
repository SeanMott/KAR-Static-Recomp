//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E6014.hpp"
#include "fn_800E6074.hpp"



void fn_800F645C(PPC::Runtime::GCContext* context)
{
/*800F645C 000F325C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F6460 000F3260*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F6464 000F3264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F6468 000F3268*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F646C 000F326C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800F6470 000F3270*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F6474 000F3274*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800F6478 000F3278*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F647C 000F327C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800F6480 000F3280*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F6484 000F3284*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*800F6488 000F3288*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F648C 000F328C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F6490 000F3290*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800F6494 000F3294*/ PPC::Runtime::ASM::bl(fn_800E6014);
/*800F6498 000F3298*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r29));
/*800F649C 000F329C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800F64A0 000F32A0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r29));
/*800F64A4 000F32A4*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800F64A8 000F32A8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc);
/*800F64AC 000F32AC*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 1, 27);
/*800F64B0 000F32B0*/ PPC::Runtime::ASM::bl(fn_800E6074);
/*800F64B4 000F32B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F64B8 000F32B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F64BC 000F32BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F64C0 000F32C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F64C4 000F32C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F64C8 000F32C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F64CC 000F32CC*/ PPC::Runtime::ASM::blr();
}