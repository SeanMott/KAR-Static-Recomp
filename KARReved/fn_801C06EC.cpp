//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C08CC.hpp"



void fn_801C06EC(PPC::Runtime::GCContext* context)
{
/*801C06EC 001BD4EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C06F0 001BD4F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C06F4 001BD4F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C06F8 001BD4F8*/ PPC::Runtime::ASM::bl(fn_801C08CC);
/*801C06FC 001BD4FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0700 001BD500*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0704 001BD504*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0708 001BD508*/ PPC::Runtime::ASM::blr();
}