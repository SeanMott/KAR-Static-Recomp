//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void OSGetTick(PPC::Runtime::GCContext* context)
{
/*803DB530 003D8330*/ PPC::Runtime::ASM::mftb(context->r3, 268);
/*803DB534 003D8334*/ PPC::Runtime::ASM::blr();
}