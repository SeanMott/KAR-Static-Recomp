//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void AMC_IsStub(PPC::Runtime::GCContext* context)
{
/*803F3948 003F0748*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803F394C 003F074C*/ PPC::Runtime::ASM::blr();
}