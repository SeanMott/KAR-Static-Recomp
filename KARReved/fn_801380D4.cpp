//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80176E8C.hpp"



void fn_801380D4(PPC::Runtime::GCContext* context)
{
/*801380D4 00134ED4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801380D8 00134ED8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801380DC 00134EDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801380E0 00134EE0*/ PPC::Runtime::ASM::bl(fn_80176E8C);
/*801380E4 00134EE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801380E8 00134EE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801380EC 00134EEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801380F0 00134EF0*/ PPC::Runtime::ASM::blr();
}