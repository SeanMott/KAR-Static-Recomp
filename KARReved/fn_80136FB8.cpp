//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016A6BC.hpp"



void fn_80136FB8(PPC::Runtime::GCContext* context)
{
/*80136FB8 00133DB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80136FBC 00133DBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136FC0 00133DC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136FC4 00133DC4*/ PPC::Runtime::ASM::bl(fn_8016A6BC);
/*80136FC8 00133DC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136FCC 00133DCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136FD0 00133DD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80136FD4 00133DD4*/ PPC::Runtime::ASM::blr();
}