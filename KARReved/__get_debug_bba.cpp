//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __get_debug_bba(PPC::Runtime::GCContext* context)
{
/*80005238 00002238*/ PPC::Runtime::ASM::lbz(context->r3, Debug_BBA_805DDF38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000523C 0000223C*/ PPC::Runtime::ASM::blr();
}