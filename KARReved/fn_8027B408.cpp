//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8027B408(PPC::Runtime::GCContext* context)
{
/*8027B408 00278208*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055EFC0 @ Get_MemoryOffset_HighBit);
/*8027B40C 0027820C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18055EFC0 @ Get_MemoryOffset_LowBit);
/*8027B410 00278210*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8027B414 00278214*/ PPC::Runtime::ASM::blr();
}