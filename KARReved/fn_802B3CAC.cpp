//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A2B9C.hpp"



void fn_802B3CAC(PPC::Runtime::GCContext* context)
{
/*802B3CAC 002B0AAC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B3CB0 002B0AB0*/ PPC::Runtime::ASM::b(fn_802A2B9C);
}