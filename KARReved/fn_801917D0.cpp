//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C86B0.hpp"



void fn_801917D0(PPC::Runtime::GCContext* context)
{
/*801917D0 0018E5D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801917D4 0018E5D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801917D8 0018E5D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801917DC 0018E5DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801917E0 0018E5E0*/ PPC::Runtime::ASM::bl(fn_801C86B0);
/*801917E4 0018E5E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801917E8 0018E5E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801917EC 0018E5EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801917F0 0018E5F0*/ PPC::Runtime::ASM::blr();
}