//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014F118(PPC::Runtime::GCContext* context)
{
/*8014F118 0014BF18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014F11C 0014BF1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014F120 0014BF20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F124 0014BF24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014F128 0014BF28*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014F12C 0014BF2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014F130 0014BF30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c8, context->r3));
/*8014F134 0014BF34*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014F138 0014BF38*/ PPC::Runtime::ASM::beq(.L_8014F148);
/*8014F13C 0014BF3C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014F140 0014BF40*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014F144 0014BF44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8014F148, 0x8014F148) //this is a jump label
/*8014F148 0014BF48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F14C 0014BF4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014F150 0014BF50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014F154 0014BF54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014F158 0014BF58*/ PPC::Runtime::ASM::blr();
}