//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801BD5F8(PPC::Runtime::GCContext* context)
{
/*801BD5F8 001BA3F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BD5FC 001BA3FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BD600 001BA400*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BD604 001BA404*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801BD608 001BA408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BD60C 001BA40C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BD610 001BA410*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BD614 001BA414*/ PPC::Runtime::ASM::blr();
}