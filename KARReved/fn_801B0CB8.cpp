//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_groundMovement.hpp"



void fn_801B0CB8(PPC::Runtime::GCContext* context)
{
/*801B0CB8 001ADAB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B0CBC 001ADABC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B0CC0 001ADAC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0CC4 001ADAC4*/ PPC::Runtime::ASM::bl(fn_groundMovement);
/*801B0CC8 001ADAC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0CCC 001ADACC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B0CD0 001ADAD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B0CD4 001ADAD4*/ PPC::Runtime::ASM::blr();
}