//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_VIGetDrawDoneWaitingFlag(PPC::Runtime::GCContext* context)
{
/*8041104C 0040DE4C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*80411050 0040DE50*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*80411054 0040DE54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r3));
/*80411058 0040DE58*/ PPC::Runtime::ASM::blr();
}