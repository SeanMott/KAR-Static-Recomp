//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A00D0.hpp"



void fn_801C38C8(PPC::Runtime::GCContext* context)
{
/*801C38C8 001C06C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C38CC 001C06CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C38D0 001C06D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C38D4 001C06D4*/ PPC::Runtime::ASM::bl(fn_801A00D0);
/*801C38D8 001C06D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C38DC 001C06DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C38E0 001C06E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C38E4 001C06E4*/ PPC::Runtime::ASM::blr();
}