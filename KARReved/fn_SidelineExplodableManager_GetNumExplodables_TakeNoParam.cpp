//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DC4C0.hpp"



void fn_SidelineExplodableManager_GetNumExplodables_TakeNoParam(PPC::Runtime::GCContext* context)
{
/*800D546C 000D226C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D5470 000D2270*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D5474 000D2274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D5478 000D2278*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D547C 000D227C*/ PPC::Runtime::ASM::bl(fn_800DC4C0);
/*800D5480 000D2280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D5484 000D2284*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D5488 000D2288*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D548C 000D228C*/ PPC::Runtime::ASM::blr();
}