//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199734.hpp"
#include "fn_8006E58C.hpp"



void fn_8019970C(PPC::Runtime::GCContext* context)
{
/*8019970C 0019650C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80199710 00196510*/ PPC::Runtime::ASM::mflr(context->r0);
/*80199714 00196514*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80199718 00196518*/ PPC::Runtime::ASM::bl(fn_80199734);
/*8019971C 0019651C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80199720 00196520*/ PPC::Runtime::ASM::bl(fn_8006E58C);
/*80199724 00196524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80199728 00196528*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019972C 0019652C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80199730 00196530*/ PPC::Runtime::ASM::blr();
}