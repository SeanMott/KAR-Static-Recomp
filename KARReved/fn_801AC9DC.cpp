//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0020.hpp"



void fn_801AC9DC(PPC::Runtime::GCContext* context)
{
/*801AC9DC 001A97DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AC9E0 001A97E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AC9E4 001A97E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC9E8 001A97E8*/ PPC::Runtime::ASM::bl(fn_801A0020);
/*801AC9EC 001A97EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC9F0 001A97F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AC9F4 001A97F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AC9F8 001A97F8*/ PPC::Runtime::ASM::blr();
}