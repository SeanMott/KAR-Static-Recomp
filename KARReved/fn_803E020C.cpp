//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803E020C(PPC::Runtime::GCContext* context)
{
/*803E020C 003DD00C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E0210 003DD010*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE01C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E0214 003DD014*/ PPC::Runtime::ASM::blr();
}