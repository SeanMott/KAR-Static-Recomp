//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void OSDisableInterrupts(PPC::Runtime::GCContext* context)
{
/*803D70A8 003D3EA8*/ PPC::Runtime::ASM::mfmsr(context->r3);
/*803D70AC 003D3EAC*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r3, 0, 17, 15);
/*803D70B0 003D3EB0*/ PPC::Runtime::ASM::mtmsr(context->r4);
/*803D70B4 003D3EB4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r3, 1, 16);
/*803D70B8 003D3EB8*/ PPC::Runtime::ASM::blr();
}