//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_loadPlayer_MachineI(PPC::Runtime::GCContext* context)
{
/*8022C8F8 002296F8*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x90c);
/*8022C8FC 002296FC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022C900 00229700*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022C904 00229704*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r5);
/*8022C908 00229708*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f, context->r3));
/*8022C90C 0022970C*/ PPC::Runtime::ASM::blr();
}