//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80170A5C(PPC::Runtime::GCContext* context)
{
/*80170A5C 0016D85C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80170A60 0016D860*/ PPC::Runtime::ASM::mflr(context->r0);
/*80170A64 0016D864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170A68 0016D868*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170A6C 0016D86C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80170A70 0016D870*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80170A74 0016D874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc38, context->r3));
/*80170A78 0016D878*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80170A7C 0016D87C*/ PPC::Runtime::ASM::beq(.L_80170A8C);
/*80170A80 0016D880*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80170A84 0016D884*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80170A88 0016D888*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc38, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80170A8C, 0x80170A8C) //this is a jump label
/*80170A8C 0016D88C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170A90 0016D890*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170A94 0016D894*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170A98 0016D898*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80170A9C 0016D89C*/ PPC::Runtime::ASM::blr();
}