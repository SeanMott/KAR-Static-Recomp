//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3FC.hpp"



void fn_801C0F14(PPC::Runtime::GCContext* context)
{
/*801C0F14 001BDD14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0F18 001BDD18*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0F1C 001BDD1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0F20 001BDD20*/ PPC::Runtime::ASM::bl(fn_8019F3FC);
/*801C0F24 001BDD24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0F28 001BDD28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0F2C 001BDD2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0F30 001BDD30*/ PPC::Runtime::ASM::blr();
}