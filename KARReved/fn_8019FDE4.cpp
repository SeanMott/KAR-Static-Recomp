//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C14.hpp"



void fn_8019FDE4(PPC::Runtime::GCContext* context)
{
/*8019FDE4 0019CBE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019FDE8 0019CBE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019FDEC 0019CBEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FDF0 0019CBF0*/ PPC::Runtime::ASM::bl(fn_80199C14);
/*8019FDF4 0019CBF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FDF8 0019CBF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019FDFC 0019CBFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019FE00 0019CC00*/ PPC::Runtime::ASM::blr();
}