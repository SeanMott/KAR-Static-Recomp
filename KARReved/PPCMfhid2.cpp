//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void PPCMfhid2(PPC::Runtime::GCContext* context)
{
/*803C33E8 003C01E8*/ PPC::Runtime::ASM::mfspr(context->r3, context->HID2);
/*803C33EC 003C01EC*/ PPC::Runtime::ASM::blr();
}