//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022D4F8(PPC::Runtime::GCContext* context)
{
/*8022D4F8 0022A2F8*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x90c);
/*8022D4FC 0022A2FC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022D500 0022A300*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022D504 0022A304*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r5);
/*8022D508 0022A308*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*8022D50C 0022A30C*/ PPC::Runtime::ASM::blr();
}