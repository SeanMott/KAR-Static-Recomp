//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_802194EC(PPC::Runtime::GCContext* context)
{
/*802194EC 002162EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802194F0 002162F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802194F4 002162F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802194F8 002162F8*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*802194FC 002162FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80219500 00216300*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80219504 00216304*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80219508 00216308*/ PPC::Runtime::ASM::blr();
}