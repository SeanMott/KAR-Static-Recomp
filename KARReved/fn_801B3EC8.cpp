//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801B3EC8(PPC::Runtime::GCContext* context)
{
/*801B3EC8 001B0CC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B3ECC 001B0CCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B3ED0 001B0CD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B3ED4 001B0CD4*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801B3ED8 001B0CD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B3EDC 001B0CDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B3EE0 001B0CE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B3EE4 001B0CE4*/ PPC::Runtime::ASM::blr();
}