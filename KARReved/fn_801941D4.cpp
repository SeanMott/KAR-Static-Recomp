//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7DB4.hpp"



void fn_801941D4(PPC::Runtime::GCContext* context)
{
/*801941D4 00190FD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801941D8 00190FD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801941DC 00190FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801941E0 00190FE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801941E4 00190FE4*/ PPC::Runtime::ASM::bl(fn_801C7DB4);
/*801941E8 00190FE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801941EC 00190FEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801941F0 00190FF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801941F4 00190FF4*/ PPC::Runtime::ASM::blr();
}