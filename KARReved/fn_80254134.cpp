//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80254134(PPC::Runtime::GCContext* context)
{
/*80254134 00250F34*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254138 00250F38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r4));
/*8025413C 00250F3C*/ PPC::Runtime::ASM::and(context->r3, context->r0, context->r3);
/*80254140 00250F40*/ PPC::Runtime::ASM::blr();
}