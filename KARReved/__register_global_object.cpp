//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __register_global_object(PPC::Runtime::GCContext* context)
{
/*803AD1B0 003A9FB0*/ PPC::Runtime::ASM::lwz(context->r0, __global_destructor_chain @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AD1B4 003A9FB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803AD1B8 003A9FB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803AD1BC 003A9FBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803AD1C0 003A9FC0*/ PPC::Runtime::ASM::stw(context->r5, __global_destructor_chain @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AD1C4 003A9FC4*/ PPC::Runtime::ASM::blr();
}