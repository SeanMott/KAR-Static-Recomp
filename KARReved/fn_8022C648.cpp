//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022C648(PPC::Runtime::GCContext* context)
{
/*8022C648 00229448*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022C64C 0022944C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022C650 00229450*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022C654 00229454*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8022C658 00229458*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*8022C65C 0022945C*/ PPC::Runtime::ASM::blr();
}