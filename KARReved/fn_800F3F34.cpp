//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800F3F34(PPC::Runtime::GCContext* context)
{
/*800F3F34 000F0D34*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3F38 000F0D38*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x5c);
/*800F3F3C 000F0D3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F3F40 000F0D40*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800F3F44 000F0D44*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*800F3F48 000F0D48*/ PPC::Runtime::ASM::blr();
}