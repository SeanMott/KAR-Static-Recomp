//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803955BC.hpp"



void fn_80395A40(PPC::Runtime::GCContext* context)
{
/*80395A40 00392840*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80395A44 00392844*/ PPC::Runtime::ASM::mflr(context->r0);
/*80395A48 00392848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80395A4C 0039284C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80395A50 00392850*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80395A54 00392854*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80395A58 00392858*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80395A5C 0039285C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80395A60 00392860*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80395A64 00392864*/ PPC::Runtime::ASM::bne(.L_80395A78);
/*80395A68 00392868*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80395A6C 0039286C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80395A70 00392870*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80395A74 00392874*/ PPC::Runtime::ASM::b(.L_80395AA4);
RUNTIME_PPC_JUMP_LABEL(.L_80395A78, 0x80395A78) //this is a jump label
/*80395A78 00392878*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80395A7C 0039287C*/ PPC::Runtime::ASM::cmplw(context->r31, context->r4);
/*80395A80 00392880*/ PPC::Runtime::ASM::beq(.L_80395A9C);
/*80395A84 00392884*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80395A88 00392888*/ PPC::Runtime::ASM::bl(fn_803955BC);
/*80395A8C 0039288C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80395A90 00392890*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80395A94 00392894*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80395A98 00392898*/ PPC::Runtime::ASM::b(.L_80395AA4);
RUNTIME_PPC_JUMP_LABEL(.L_80395A9C, 0x80395A9C) //this is a jump label
/*80395A9C 0039289C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*80395AA0 003928A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80395AA4, 0x80395AA4) //this is a jump label
/*80395AA4 003928A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80395AA8 003928A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80395AAC 003928AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80395AB0 003928B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80395AB4 003928B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80395AB8 003928B8*/ PPC::Runtime::ASM::blr();
}