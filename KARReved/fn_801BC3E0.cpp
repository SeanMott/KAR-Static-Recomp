//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A29F8.hpp"



void fn_801BC3E0(PPC::Runtime::GCContext* context)
{
/*801BC3E0 001B91E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BC3E4 001B91E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BC3E8 001B91E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BC3EC 001B91EC*/ PPC::Runtime::ASM::bl(fn_801A29F8);
/*801BC3F0 001B91F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BC3F4 001B91F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BC3F8 001B91F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BC3FC 001B91FC*/ PPC::Runtime::ASM::blr();
}