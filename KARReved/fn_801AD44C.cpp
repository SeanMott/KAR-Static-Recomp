//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801ADC18.hpp"



void fn_801AD44C(PPC::Runtime::GCContext* context)
{
/*801AD44C 001AA24C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AD450 001AA250*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AD454 001AA254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AD458 001AA258*/ PPC::Runtime::ASM::bl(fn_801ADC18);
/*801AD45C 001AA25C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AD460 001AA260*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AD464 001AA264*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AD468 001AA268*/ PPC::Runtime::ASM::blr();
}