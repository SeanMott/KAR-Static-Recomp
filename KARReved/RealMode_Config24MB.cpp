//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void RealMode_Config24MB(PPC::Runtime::GCContext* context)
{
/*803D7CF0 003D4AF0*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 2);
/*803D7CF4 003D4AF4*/ PPC::Runtime::ASM::mtsrr0(context->r3);
/*803D7CF8 003D4AF8*/ PPC::Runtime::ASM::mfmsr(context->r3);
/*803D7CFC 003D4AFC*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 28, 25);
/*803D7D00 003D4B00*/ PPC::Runtime::ASM::mtsrr1(context->r3);
/*803D7D04 003D4B04*/ PPC::Runtime::ASM::rfi();
}