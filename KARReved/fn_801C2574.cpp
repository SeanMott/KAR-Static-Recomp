//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0348.hpp"



void fn_801C2574(PPC::Runtime::GCContext* context)
{
/*801C2574 001BF374*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C2578 001BF378*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C257C 001BF37C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2580 001BF380*/ PPC::Runtime::ASM::bl(fn_801A0348);
/*801C2584 001BF384*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2588 001BF388*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C258C 001BF38C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C2590 001BF390*/ PPC::Runtime::ASM::blr();
}