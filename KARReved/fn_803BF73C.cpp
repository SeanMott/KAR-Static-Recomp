//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803BF73C(PPC::Runtime::GCContext* context)
{
/*803BF73C 003BC53C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056B858 @ Get_MemoryOffset_HighBit);
/*803BF740 003BC540*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18056B858 @ Get_MemoryOffset_LowBit);
/*803BF744 003BC544*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BF748 003BC548*/ PPC::Runtime::ASM::blr();
}