//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AA9C8.hpp"



void fn_802B4064(PPC::Runtime::GCContext* context)
{
/*802B4064 002B0E64*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B4068 002B0E68*/ PPC::Runtime::ASM::b(fn_802AA9C8);
}