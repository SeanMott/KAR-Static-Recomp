//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015D14C.hpp"



void fn_801357E4(PPC::Runtime::GCContext* context)
{
/*801357E4 001325E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801357E8 001325E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801357EC 001325EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801357F0 001325F0*/ PPC::Runtime::ASM::bl(fn_8015D14C);
/*801357F4 001325F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801357F8 001325F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801357FC 001325FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135800 00132600*/ PPC::Runtime::ASM::blr();
}