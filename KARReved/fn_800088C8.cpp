//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_800088C8(PPC::Runtime::GCContext* context)
{
/*800088C8 000056C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800088CC 000056CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800088D0 000056D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800088D4 000056D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800088D8 000056D8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800088DC 000056DC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800088E0 000056E0*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d8, context->r3));
/*800088E4 000056E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800088E8 000056E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800088EC 000056EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800088F0 000056F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800088F4 000056F4*/ PPC::Runtime::ASM::blr();
}