//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80201A34.hpp"



void fn_80201798(PPC::Runtime::GCContext* context)
{
/*80201798 001FE598*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020179C 001FE59C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802017A0 001FE5A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802017A4 001FE5A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802017A8 001FE5A8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802017AC 001FE5AC*/ PPC::Runtime::ASM::bl(fn_80201A34);
/*802017B0 001FE5B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802017B4 001FE5B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802017B8 001FE5B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802017BC 001FE5BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802017C0 001FE5C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802017C4 001FE5C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802017C8 001FE5C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802017CC 001FE5CC*/ PPC::Runtime::ASM::blr();
}