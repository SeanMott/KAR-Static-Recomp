//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007E1A0.hpp"



void fn_8009908C(PPC::Runtime::GCContext* context)
{
/*8009908C 00095E8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80099090 00095E90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80099094 00095E94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80099098 00095E98*/ PPC::Runtime::ASM::bl(fn_8007E1A0);
/*8009909C 00095E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800990A0 00095EA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800990A4 00095EA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800990A8 00095EA8*/ PPC::Runtime::ASM::blr();
}