//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250E54.hpp"



void fn_8025CF1C(PPC::Runtime::GCContext* context)
{
/*8025CF1C 00259D1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025CF20 00259D20*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025CF24 00259D24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CF28 00259D28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025CF2C 00259D2C*/ PPC::Runtime::ASM::bl(fn_80250E54);
/*8025CF30 00259D30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CF34 00259D34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025CF38 00259D38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025CF3C 00259D3C*/ PPC::Runtime::ASM::blr();
}