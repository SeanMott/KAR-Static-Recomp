//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022CC64(PPC::Runtime::GCContext* context)
{
/*8022CC64 00229A64*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022CC68 00229A68*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022CC6C 00229A6C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022CC70 00229A70*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8022CC74 00229A74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*8022CC78 00229A78*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 26);
/*8022CC7C 00229A7C*/ PPC::Runtime::ASM::blr();
}