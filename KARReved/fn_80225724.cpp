//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022230C.hpp"



void fn_80225724(PPC::Runtime::GCContext* context)
{
/*80225724 00222524*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80225728 00222528*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022572C 0022252C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80225730 00222530*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80225734 00222534*/ PPC::Runtime::ASM::bl(fn_8022230C);
/*80225738 00222538*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022573C 0022253C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80225740 00222540*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80225744 00222544*/ PPC::Runtime::ASM::blr();
}