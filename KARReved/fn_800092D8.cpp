//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_800092D8(PPC::Runtime::GCContext* context)
{
/*800092D8 000060D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800092DC 000060DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800092E0 000060E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800092E4 000060E4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800092E8 000060E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800092EC 000060EC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa97, context->r3));
/*800092F0 000060F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800092F4 000060F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800092F8 000060F8*/ PPC::Runtime::ASM::blr();
}