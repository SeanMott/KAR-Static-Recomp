//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXClearGPMetric(PPC::Runtime::GCContext* context)
{
/*803D13EC 003CE1EC*/ PPC::Runtime::ASM::lwz(context->r3, __cpReg @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D13F0 003CE1F0*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*803D13F4 003CE1F4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803D13F8 003CE1F8*/ PPC::Runtime::ASM::blr();
}