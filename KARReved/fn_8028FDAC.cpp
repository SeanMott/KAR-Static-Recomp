//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8029625C.hpp"



void fn_8028FDAC(PPC::Runtime::GCContext* context)
{
/*8028FDAC 0028CBAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028FDB0 0028CBB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028FDB4 0028CBB4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028FDB8 0028CBB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028FDBC 0028CBBC*/ PPC::Runtime::ASM::bl(fn_8029625C);
/*8028FDC0 0028CBC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028FDC4 0028CBC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028FDC8 0028CBC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028FDCC 0028CBCC*/ PPC::Runtime::ASM::blr();
}