//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022CCC8(PPC::Runtime::GCContext* context)
{
/*8022CCC8 00229AC8*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x90c);
/*8022CCCC 00229ACC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022CCD0 00229AD0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022CCD4 00229AD4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r5);
/*8022CCD8 00229AD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*8022CCDC 00229ADC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 27, 29);
/*8022CCE0 00229AE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*8022CCE4 00229AE4*/ PPC::Runtime::ASM::blr();
}