//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BE674.hpp"



void fn_801BE540(PPC::Runtime::GCContext* context)
{
/*801BE540 001BB340*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BE544 001BB344*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BE548 001BB348*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE54C 001BB34C*/ PPC::Runtime::ASM::bl(fn_801BE674);
/*801BE550 001BB350*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE554 001BB354*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BE558 001BB358*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BE55C 001BB35C*/ PPC::Runtime::ASM::blr();
}