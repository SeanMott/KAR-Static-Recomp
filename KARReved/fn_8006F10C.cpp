//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006EE9C.hpp"



void fn_8006F10C(PPC::Runtime::GCContext* context)
{
/*8006F10C 0006BF0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8006F110 0006BF10*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006F114 0006BF14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006F118 0006BF18*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006F11C 0006BF1C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8006F120 0006BF20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006F124 0006BF24*/ PPC::Runtime::ASM::bl(fn_8006EE9C);
/*8006F128 0006BF28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006F12C 0006BF2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006F130 0006BF30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006F134 0006BF34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8006F138 0006BF38*/ PPC::Runtime::ASM::blr();
}