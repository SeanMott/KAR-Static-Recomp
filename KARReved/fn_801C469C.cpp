//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C4B10.hpp"



void fn_801C469C(PPC::Runtime::GCContext* context)
{
/*801C469C 001C149C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C46A0 001C14A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C46A4 001C14A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C46A8 001C14A8*/ PPC::Runtime::ASM::bl(fn_801C4B10);
/*801C46AC 001C14AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C46B0 001C14B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C46B4 001C14B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C46B8 001C14B8*/ PPC::Runtime::ASM::blr();
}