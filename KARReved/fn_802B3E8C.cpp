//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B1BB0.hpp"



void fn_802B3E8C(PPC::Runtime::GCContext* context)
{
/*802B3E8C 002B0C8C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3E90 002B0C90*/ PPC::Runtime::ASM::b(fn_802B1BB0);
}