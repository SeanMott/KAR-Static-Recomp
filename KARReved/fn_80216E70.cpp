//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205F60.hpp"



void fn_80216E70(PPC::Runtime::GCContext* context)
{
/*80216E70 00213C70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216E74 00213C74*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216E78 00213C78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216E7C 00213C7C*/ PPC::Runtime::ASM::bl(fn_80205F60);
/*80216E80 00213C80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216E84 00213C84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80216E88 00213C88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80216E8C 00213C8C*/ PPC::Runtime::ASM::blr();
}