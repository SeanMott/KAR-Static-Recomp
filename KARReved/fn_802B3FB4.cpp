//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A9844.hpp"



void fn_802B3FB4(PPC::Runtime::GCContext* context)
{
/*802B3FB4 002B0DB4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3FB8 002B0DB8*/ PPC::Runtime::ASM::b(fn_802A9844);
}