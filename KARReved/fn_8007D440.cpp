//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007D440(PPC::Runtime::GCContext* context)
{
/*8007D440 0007A240*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x14);
/*8007D444 0007A244*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552D88 @ Get_MemoryOffset_HighBit);
/*8007D448 0007A248*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180552D88 @ Get_MemoryOffset_LowBit);
/*8007D44C 0007A24C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8007D450 0007A250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8007D454 0007A254*/ PPC::Runtime::ASM::blr();
}