//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80444CBC(PPC::Runtime::GCContext* context)
{
/*80444CBC 00441ABC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE44C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80444CC0 00441AC0*/ PPC::Runtime::ASM::blr();
}