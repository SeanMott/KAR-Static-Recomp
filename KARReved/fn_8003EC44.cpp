//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003EC44(PPC::Runtime::GCContext* context)
{
/*8003EC44 0003BA44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003EC48 0003BA48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003EC4C 0003BA4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EC50 0003BA50*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003EC54 0003BA54*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38e, context->r3));
/*8003EC58 0003BA58*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 24);
/*8003EC5C 0003BA5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EC60 0003BA60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003EC64 0003BA64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003EC68 0003BA68*/ PPC::Runtime::ASM::blr();
}