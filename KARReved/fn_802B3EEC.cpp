//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B21A4.hpp"



void fn_802B3EEC(PPC::Runtime::GCContext* context)
{
/*802B3EEC 002B0CEC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3EF0 002B0CF0*/ PPC::Runtime::ASM::b(fn_802B21A4);
}