//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B2F88.hpp"



void fn_802B3FCC(PPC::Runtime::GCContext* context)
{
/*802B3FCC 002B0DCC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3FD0 002B0DD0*/ PPC::Runtime::ASM::b(fn_802B2F88);
}