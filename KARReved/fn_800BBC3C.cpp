//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800BBC3C(PPC::Runtime::GCContext* context)
{
/*800BBC3C 000B8A3C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BBC40 000B8A40*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BBC44 000B8A44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x234, context->r3));
/*800BBC48 000B8A48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800BBC4C 000B8A4C*/ PPC::Runtime::ASM::blr();
}