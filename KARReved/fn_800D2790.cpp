//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FA3C0.hpp"



void fn_800D2790(PPC::Runtime::GCContext* context)
{
/*800D2790 000CF590*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D2794 000CF594*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D2798 000CF598*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D279C 000CF59C*/ PPC::Runtime::ASM::bl(fn_800FA3C0);
/*800D27A0 000CF5A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D27A4 000CF5A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D27A8 000CF5A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D27AC 000CF5AC*/ PPC::Runtime::ASM::blr();
}