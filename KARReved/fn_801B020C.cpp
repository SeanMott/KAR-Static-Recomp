//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F39C.hpp"



void fn_801B020C(PPC::Runtime::GCContext* context)
{
/*801B020C 001AD00C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B0210 001AD010*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B0214 001AD014*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0218 001AD018*/ PPC::Runtime::ASM::bl(fn_8019F39C);
/*801B021C 001AD01C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0220 001AD020*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B0224 001AD024*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B0228 001AD028*/ PPC::Runtime::ASM::blr();
}