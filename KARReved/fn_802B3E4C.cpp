//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B17B8.hpp"



void fn_802B3E4C(PPC::Runtime::GCContext* context)
{
/*802B3E4C 002B0C4C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3E50 002B0C50*/ PPC::Runtime::ASM::b(fn_802B17B8);
}