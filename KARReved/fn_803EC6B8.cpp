//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803EC6B8(PPC::Runtime::GCContext* context)
{
/*803EC6B8 003E94B8*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE0AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC6BC 003E94BC*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180570180 @ Get_MemoryOffset_HighBit);
/*803EC6C0 003E94C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_180570180 @ Get_MemoryOffset_LowBit);
/*803EC6C4 003E94C4*/ PPC::Runtime::ASM::mulli(context->r4, context->r5, 0x780);
/*803EC6C8 003E94C8*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*803EC6CC 003E94CC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x500);
/*803EC6D0 003E94D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803EC6D4 003E94D4*/ PPC::Runtime::ASM::blr();
}