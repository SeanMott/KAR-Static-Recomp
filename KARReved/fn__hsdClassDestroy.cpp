//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GetMemoryEntry.hpp"



void fn__hsdClassDestroy(PPC::Runtime::GCContext* context)
{
/*80420B60 0041D960*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80420B64 0041D964*/ PPC::Runtime::ASM::mflr(context->r0);
/*80420B68 0041D968*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420B6C 0041D96C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80420B70 0041D970  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80420B74 0041D974*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80420B78 0041D978*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*80420B7C 0041D97C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80420B80 0041D980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*80420B84 0041D984*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80420B88 0041D988*/ PPC::Runtime::ASM::beq(.L_80420BB8);
/*80420B8C 0041D98C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*80420B90 0041D990*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80420B94 0041D994*/ PPC::Runtime::ASM::addze(context->r3, context->r0);
/*80420B98 0041D998*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80420B9C 0041D99C*/ PPC::Runtime::ASM::bl(fn_GetMemoryEntry);
/*80420BA0 0041D9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80420BA4 0041D9A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80420BA8 0041D9A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80420BAC 0041D9AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80420BB0 0041D9B0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80420BB4 0041D9B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80420BB8, 0x80420BB8) //this is a jump label
/*80420BB8 0041D9B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420BBC 0041D9BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80420BC0 0041D9C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80420BC4 0041D9C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80420BC8 0041D9C8*/ PPC::Runtime::ASM::blr();
}