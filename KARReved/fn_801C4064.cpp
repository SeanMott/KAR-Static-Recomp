//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C4244.hpp"



void fn_801C4064(PPC::Runtime::GCContext* context)
{
/*801C4064 001C0E64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4068 001C0E68*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C406C 001C0E6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4070 001C0E70*/ PPC::Runtime::ASM::bl(fn_801C4244);
/*801C4074 001C0E74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4078 001C0E78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C407C 001C0E7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4080 001C0E80*/ PPC::Runtime::ASM::blr();
}