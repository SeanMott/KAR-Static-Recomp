//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"



void fn_801AED10(PPC::Runtime::GCContext* context)
{
/*801AED10 001ABB10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AED14 001ABB14*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AED18 001ABB18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AED1C 001ABB1C*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801AED20 001ABB20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AED24 001ABB24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AED28 001ABB28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AED2C 001ABB2C*/ PPC::Runtime::ASM::blr();
}