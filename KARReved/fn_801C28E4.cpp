//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A04B8.hpp"



void fn_801C28E4(PPC::Runtime::GCContext* context)
{
/*801C28E4 001BF6E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C28E8 001BF6E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C28EC 001BF6EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C28F0 001BF6F0*/ PPC::Runtime::ASM::bl(fn_801A04B8);
/*801C28F4 001BF6F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C28F8 001BF6F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C28FC 001BF6FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C2900 001BF700*/ PPC::Runtime::ASM::blr();
}