//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8020335C.hpp"



void fn_80210F64(PPC::Runtime::GCContext* context)
{
/*80210F64 0020DD64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80210F68 0020DD68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80210F6C 0020DD6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210F70 0020DD70*/ PPC::Runtime::ASM::bl(fn_8020335C);
/*80210F74 0020DD74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210F78 0020DD78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80210F7C 0020DD7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80210F80 0020DD80*/ PPC::Runtime::ASM::blr();
}