//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80078E30(PPC::Runtime::GCContext* context)
{
/*80078E30 00075C30*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078E34 00075C34*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*80078E38 00075C38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80078E3C 00075C3C*/ PPC::Runtime::ASM::blr();
}