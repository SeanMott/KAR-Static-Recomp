//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A5C0C.hpp"



void fn_802B3DA4(PPC::Runtime::GCContext* context)
{
/*802B3DA4 002B0BA4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B3DA8 002B0BA8*/ PPC::Runtime::ASM::b(fn_802A5C0C);
}