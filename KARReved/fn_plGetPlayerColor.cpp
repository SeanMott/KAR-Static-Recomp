//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_plGetPlayerColor(PPC::Runtime::GCContext* context)
{
/*8022C67C 0022947C*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022C680 00229480*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022C684 00229484*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022C688 00229488*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8022C68C 0022948C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*8022C690 00229490*/ PPC::Runtime::ASM::blr();
}