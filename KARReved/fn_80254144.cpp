//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80254144(PPC::Runtime::GCContext* context)
{
/*80254144 00250F44*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254148 00250F48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r3));
/*8025414C 00250F4C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*80254150 00250F50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r3));
/*80254154 00250F54*/ PPC::Runtime::ASM::blr();
}