//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80228184.hpp"
#include "fn_randomAbility_removeGlow.hpp"



void fn_801A9B48(PPC::Runtime::GCContext* context)
{
/*801A9B48 001A6948*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A9B4C 001A694C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A9B50 001A6950*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9B54 001A6954*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A9B58 001A6958*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A9B5C 001A695C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r3));
/*801A9B60 001A6960*/ PPC::Runtime::ASM::bl(fn_80228184);
/*801A9B64 001A6964*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A9B68 001A6968*/ PPC::Runtime::ASM::li(context->r4, 0x27);
/*801A9B6C 001A696C*/ PPC::Runtime::ASM::bl(fn_randomAbility_removeGlow);
/*801A9B70 001A6970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9B74 001A6974*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A9B78 001A6978*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A9B7C 001A697C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A9B80 001A6980*/ PPC::Runtime::ASM::blr();
}