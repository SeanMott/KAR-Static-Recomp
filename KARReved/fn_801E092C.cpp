//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194AC0.hpp"



void fn_801E092C(PPC::Runtime::GCContext* context)
{
/*801E092C 001DD72C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E0930 001DD730*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E0934 001DD734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0938 001DD738*/ PPC::Runtime::ASM::bl(fn_80194AC0);
/*801E093C 001DD73C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0940 001DD740*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E0944 001DD744*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E0948 001DD748*/ PPC::Runtime::ASM::blr();
}