//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_ARGet_BaseAddressOrSizeOrInternalSize(PPC::Runtime::GCContext* context)
{
/*803E0218 003DD018*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE004 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E021C 003DD01C*/ PPC::Runtime::ASM::blr();
}