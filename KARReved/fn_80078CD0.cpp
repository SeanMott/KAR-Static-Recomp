//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80078CD0(PPC::Runtime::GCContext* context)
{
/*80078CD0 00075AD0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078CD4 00075AD4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*80078CD8 00075AD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80078CDC 00075ADC*/ PPC::Runtime::ASM::blr();
}