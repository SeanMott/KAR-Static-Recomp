//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000CDBC(PPC::Runtime::GCContext* context)
{
/*8000CDBC 00009BBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000CDC0 00009BC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000CDC4 00009BC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000CDC8 00009BC8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000CDCC 00009BCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000CDD0 00009BD0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*8000CDD4 00009BD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000CDD8 00009BD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000CDDC 00009BDC*/ PPC::Runtime::ASM::blr();
}