//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007603C(PPC::Runtime::GCContext* context)
{
/*8007603C 00072E3C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_HighBit);
/*80076040 00072E40*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_LowBit);
/*80076044 00072E44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80076048 00072E48*/ PPC::Runtime::ASM::blr();
}