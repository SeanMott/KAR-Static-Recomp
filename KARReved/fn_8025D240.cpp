//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254058.hpp"



void fn_8025D240(PPC::Runtime::GCContext* context)
{
/*8025D240 0025A040*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D244 0025A044*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D248 0025A048*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D24C 0025A04C*/ PPC::Runtime::ASM::bl(fn_80254058);
/*8025D250 0025A050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D254 0025A054*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D258 0025A058*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D25C 0025A05C*/ PPC::Runtime::ASM::blr();
}