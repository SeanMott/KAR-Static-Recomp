//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003EA9C(PPC::Runtime::GCContext* context)
{
/*8003EA9C 0003B89C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003EAA0 0003B8A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003EAA4 0003B8A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EAA8 0003B8A8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003EAAC 0003B8AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003EAB0 0003B8B0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x381, context->r3));
/*8003EAB4 0003B8B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003EAB8 0003B8B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003EABC 0003B8BC*/ PPC::Runtime::ASM::blr();
}