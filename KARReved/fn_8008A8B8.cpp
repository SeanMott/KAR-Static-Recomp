//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8008A8B8(PPC::Runtime::GCContext* context)
{
/*8008A8B8 000876B8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805530C8 @ Get_MemoryOffset_HighBit);
/*8008A8BC 000876BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8008A8C0 000876C0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805530C8 @ Get_MemoryOffset_LowBit);
/*8008A8C4 000876C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8008A8C8 000876C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8008A8CC 000876CC*/ PPC::Runtime::ASM::blr();
}