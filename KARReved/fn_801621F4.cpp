//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80161CC0.hpp"



void fn_801621F4(PPC::Runtime::GCContext* context)
{
/*801621F4 0015EFF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801621F8 0015EFF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801621FC 0015EFFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162200 0015F000*/ PPC::Runtime::ASM::bl(fn_80161CC0);
/*80162204 0015F004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162208 0015F008*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016220C 0015F00C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80162210 0015F010*/ PPC::Runtime::ASM::blr();
}