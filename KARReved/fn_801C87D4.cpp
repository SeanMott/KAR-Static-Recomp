//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CB074.hpp"



void fn_801C87D4(PPC::Runtime::GCContext* context)
{
/*801C87D4 001C55D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C87D8 001C55D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C87DC 001C55DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C87E0 001C55E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C87E4 001C55E4*/ PPC::Runtime::ASM::bl(fn_801CB074);
/*801C87E8 001C55E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C87EC 001C55EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C87F0 001C55F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C87F4 001C55F4*/ PPC::Runtime::ASM::blr();
}