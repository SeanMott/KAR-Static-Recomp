//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __set_debug_bba(PPC::Runtime::GCContext* context)
{
/*8000522C 0000222C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80005230 00002230*/ PPC::Runtime::ASM::stb(context->r0, Debug_BBA_805DDF38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80005234 00002234*/ PPC::Runtime::ASM::blr();
}