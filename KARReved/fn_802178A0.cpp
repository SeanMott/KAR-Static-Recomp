//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80217C74.hpp"



void fn_802178A0(PPC::Runtime::GCContext* context)
{
/*802178A0 002146A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802178A4 002146A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802178A8 002146A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802178AC 002146AC*/ PPC::Runtime::ASM::bl(fn_80217C74);
/*802178B0 002146B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802178B4 002146B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802178B8 002146B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802178BC 002146BC*/ PPC::Runtime::ASM::blr();
}