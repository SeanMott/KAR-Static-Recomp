//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022C9C0(PPC::Runtime::GCContext* context)
{
/*8022C9C0 002297C0*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x90c);
/*8022C9C4 002297C4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022C9C8 002297C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022C9CC 002297CC*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r5);
/*8022C9D0 002297D0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x92, context->r3));
/*8022C9D4 002297D4*/ PPC::Runtime::ASM::blr();
}