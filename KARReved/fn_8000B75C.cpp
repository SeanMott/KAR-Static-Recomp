//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B75C(PPC::Runtime::GCContext* context)
{
/*8000B75C 0000855C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B760 00008560*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B764 00008564*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B768 00008568*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B76C 0000856C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000B770 00008570*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B774 00008574*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8000B778 00008578*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8000B77C 0000857C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8000B780 00008580*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc04, context->r3));
/*8000B784 00008584*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000B788 00008588*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B78C 0000858C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B790 00008590*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B794 00008594*/ PPC::Runtime::ASM::blr();
}