//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801AE26C(PPC::Runtime::GCContext* context)
{
/*801AE26C 001AB06C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AE270 001AB070*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AE274 001AB074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE278 001AB078*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801AE27C 001AB07C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE280 001AB080*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AE284 001AB084*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AE288 001AB088*/ PPC::Runtime::ASM::blr();
}