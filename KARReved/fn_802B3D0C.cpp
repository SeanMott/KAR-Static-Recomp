//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AFBEC.hpp"



void fn_802B3D0C(PPC::Runtime::GCContext* context)
{
/*802B3D0C 002B0B0C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3D10 002B0B10*/ PPC::Runtime::ASM::b(fn_802AFBEC);
}