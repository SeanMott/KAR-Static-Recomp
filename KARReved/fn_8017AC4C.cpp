//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017AC4C(PPC::Runtime::GCContext* context)
{
/*8017AC4C 00177A4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017AC50 00177A50*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017AC54 00177A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017AC58 00177A58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017AC5C 00177A5C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017AC60 00177A60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8017AC64 00177A64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9c, context->r3));
/*8017AC68 00177A68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017AC6C 00177A6C*/ PPC::Runtime::ASM::beq(.L_8017AC7C);
/*8017AC70 00177A70*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8017AC74 00177A74*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8017AC78 00177A78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8017AC7C, 0x8017AC7C) //this is a jump label
/*8017AC7C 00177A7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017AC80 00177A80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017AC84 00177A84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017AC88 00177A88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017AC8C 00177A8C*/ PPC::Runtime::ASM::blr();
}