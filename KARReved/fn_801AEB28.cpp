//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801AEB28(PPC::Runtime::GCContext* context)
{
/*801AEB28 001AB928*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AEB2C 001AB92C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AEB30 001AB930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AEB34 001AB934*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801AEB38 001AB938*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AEB3C 001AB93C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AEB40 001AB940*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AEB44 001AB944*/ PPC::Runtime::ASM::blr();
}