//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A9ADC.hpp"



void fn_802B3FBC(PPC::Runtime::GCContext* context)
{
/*802B3FBC 002B0DBC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3FC0 002B0DC0*/ PPC::Runtime::ASM::b(fn_802A9ADC);
}