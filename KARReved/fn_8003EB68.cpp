//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003EB68(PPC::Runtime::GCContext* context)
{
/*8003EB68 0003B968*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003EB6C 0003B96C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003EB70 0003B970*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EB74 0003B974*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003EB78 0003B978*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003EB7C 0003B97C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003EB80 0003B980*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x387, context->r3));
/*8003EB84 0003B984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EB88 0003B988*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003EB8C 0003B98C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003EB90 0003B990*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003EB94 0003B994*/ PPC::Runtime::ASM::blr();
}