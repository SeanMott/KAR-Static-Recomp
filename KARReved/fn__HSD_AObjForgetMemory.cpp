//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn__HSD_AObjForgetMemory(PPC::Runtime::GCContext* context)
{
/*803FDAC0 003FA8C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803FDAC4 003FA8C4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE1F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FDAC8 003FA8C8*/ PPC::Runtime::ASM::blr();
}