//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A2114.hpp"



void fn_802B3C5C(PPC::Runtime::GCContext* context)
{
/*802B3C5C 002B0A5C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B3C60 002B0A60*/ PPC::Runtime::ASM::b(fn_802A2114);
}