//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_804105F0(PPC::Runtime::GCContext* context)
{
/*804105F0 0040D3F0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE2C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804105F4 0040D3F4*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*804105F8 0040D3F8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE2C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804105FC 0040D3FC*/ PPC::Runtime::ASM::blr();
}