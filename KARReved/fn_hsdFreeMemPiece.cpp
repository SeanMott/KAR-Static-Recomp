//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GetMemoryEntry.hpp"



void fn_hsdFreeMemPiece(PPC::Runtime::GCContext* context)
{
/*80420AA4 0041D8A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80420AA8 0041D8A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80420AAC 0041D8AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420AB0 0041D8B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80420AB4 0041D8B4  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80420AB8 0041D8B8*/ PPC::Runtime::ASM::beq(.L_80420AE8);
/*80420ABC 0041D8BC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1f);
/*80420AC0 0041D8C0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80420AC4 0041D8C4*/ PPC::Runtime::ASM::addze(context->r3, context->r0);
/*80420AC8 0041D8C8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80420ACC 0041D8CC*/ PPC::Runtime::ASM::bl(fn_GetMemoryEntry);
/*80420AD0 0041D8D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80420AD4 0041D8D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80420AD8 0041D8D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80420ADC 0041D8DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80420AE0 0041D8E0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80420AE4 0041D8E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80420AE8, 0x80420AE8) //this is a jump label
/*80420AE8 0041D8E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420AEC 0041D8EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80420AF0 0041D8F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80420AF4 0041D8F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80420AF8 0041D8F8*/ PPC::Runtime::ASM::blr();
}