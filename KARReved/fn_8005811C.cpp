//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005811C(PPC::Runtime::GCContext* context)
{
/*8005811C 00054F1C*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_HighBit);
/*80058120 00054F20*/ PPC::Runtime::ASM::lwzu(context->r0, STRUCT_BYTE4_COUNT_180537510 @ Get_MemoryOffset_LowBit ( context->r5 ));
/*80058124 00054F24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80058128 00054F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8005812C 00054F2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80058130 00054F30*/ PPC::Runtime::ASM::blr();
}