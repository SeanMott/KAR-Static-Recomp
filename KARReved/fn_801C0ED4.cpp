//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3BC.hpp"



void fn_801C0ED4(PPC::Runtime::GCContext* context)
{
/*801C0ED4 001BDCD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0ED8 001BDCD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0EDC 001BDCDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0EE0 001BDCE0*/ PPC::Runtime::ASM::bl(fn_8019F3BC);
/*801C0EE4 001BDCE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0EE8 001BDCE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0EEC 001BDCEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0EF0 001BDCF0*/ PPC::Runtime::ASM::blr();
}