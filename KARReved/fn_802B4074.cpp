//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AF410.hpp"



void fn_802B4074(PPC::Runtime::GCContext* context)
{
/*802B4074 002B0E74*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B4078 002B0E78*/ PPC::Runtime::ASM::b(fn_802AF410);
}