//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8027B3E8(PPC::Runtime::GCContext* context)
{
/*8027B3E8 002781E8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055EFC0 @ Get_MemoryOffset_HighBit);
/*8027B3EC 002781EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18055EFC0 @ Get_MemoryOffset_LowBit);
/*8027B3F0 002781F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8027B3F4 002781F4*/ PPC::Runtime::ASM::blr();
}