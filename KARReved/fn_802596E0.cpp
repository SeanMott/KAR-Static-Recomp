//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025970C.hpp"
#include "fn_8025970C.hpp"
#include "fn_80254D4C.hpp"



void fn_802596E0(PPC::Runtime::GCContext* context)
{
/*802596E0 002564E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802596E4 002564E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802596E8 002564E8*/ PPC::Runtime::ASM::lis(context->r4, fn_8025970C @ Get_MemoryOffset_HighBit);
/*802596EC 002564EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802596F0 002564F0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025970C @ Get_MemoryOffset_LowBit);
/*802596F4 002564F4*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*802596F8 002564F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802596FC 002564FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80259700 00256500*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80259704 00256504*/ PPC::Runtime::ASM::blr();
}