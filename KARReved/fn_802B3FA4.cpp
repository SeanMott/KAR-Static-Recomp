//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A9764.hpp"



void fn_802B3FA4(PPC::Runtime::GCContext* context)
{
/*802B3FA4 002B0DA4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B3FA8 002B0DA8*/ PPC::Runtime::ASM::b(fn_802A9764);
}