//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FFD78.hpp"



void fn_80219290(PPC::Runtime::GCContext* context)
{
/*80219290 00216090*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80219294 00216094*/ PPC::Runtime::ASM::mflr(context->r0);
/*80219298 00216098*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021929C 0021609C*/ PPC::Runtime::ASM::bl(fn_801FFD78);
/*802192A0 002160A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802192A4 002160A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802192A8 002160A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802192AC 002160AC*/ PPC::Runtime::ASM::blr();
}