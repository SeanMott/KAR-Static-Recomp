//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CE954.hpp"



void fn_801C8618(PPC::Runtime::GCContext* context)
{
/*801C8618 001C5418*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C861C 001C541C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C8620 001C5420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8624 001C5424*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C8628 001C5428*/ PPC::Runtime::ASM::bl(fn_801CE954);
/*801C862C 001C542C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8630 001C5430*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C8634 001C5434*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C8638 001C5438*/ PPC::Runtime::ASM::blr();
}