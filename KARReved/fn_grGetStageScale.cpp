//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_grGetStageScale(PPC::Runtime::GCContext* context)
{
/*800D3058 000CFE58*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D305C 000CFE5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D3060 000CFE60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D3064 000CFE64*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800D3068 000CFE68*/ PPC::Runtime::ASM::beq(.L_800D3074);
/*800D306C 000CFE6C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D3070 000CFE70*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D3074, 0x800D3074) //this is a jump label
/*800D3074 000CFE74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF5E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D3078 000CFE78*/ PPC::Runtime::ASM::blr();
}