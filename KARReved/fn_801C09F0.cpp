//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C08CC.hpp"



void fn_801C09F0(PPC::Runtime::GCContext* context)
{
/*801C09F0 001BD7F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C09F4 001BD7F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C09F8 001BD7F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C09FC 001BD7FC*/ PPC::Runtime::ASM::bl(fn_801C08CC);
/*801C0A00 001BD800*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0A04 001BD804*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0A08 001BD808*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0A0C 001BD80C*/ PPC::Runtime::ASM::blr();
}