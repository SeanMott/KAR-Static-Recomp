//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8013C1E0.hpp"
#include "fn_8013B648.hpp"



void fn_801348A8(PPC::Runtime::GCContext* context)
{
/*801348A8 001316A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801348AC 001316AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801348B0 001316B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801348B4 001316B4*/ PPC::Runtime::ASM::bl(fn_8013C1E0);
/*801348B8 001316B8*/ PPC::Runtime::ASM::bl(fn_8013B648);
/*801348BC 001316BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801348C0 001316C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801348C4 001316C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801348C8 001316C8*/ PPC::Runtime::ASM::blr();
}