//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "memset.hpp"



void fn_80008898(PPC::Runtime::GCContext* context)
{
/*80008898 00005698*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000889C 0000569C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800088A0 000056A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800088A4 000056A4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800088A8 000056A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800088AC 000056AC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800088B0 000056B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x7d7);
/*800088B4 000056B4*/ PPC::Runtime::ASM::bl(memset);
/*800088B8 000056B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800088BC 000056BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800088C0 000056C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800088C4 000056C4*/ PPC::Runtime::ASM::blr();
}