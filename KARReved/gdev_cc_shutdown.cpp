//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void gdev_cc_shutdown(PPC::Runtime::GCContext* context)
{
/*803C31E4 003BFFE4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C31E8 003BFFE8*/ PPC::Runtime::ASM::blr();
}