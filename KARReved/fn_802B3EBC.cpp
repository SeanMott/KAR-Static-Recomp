//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A7DD8.hpp"



void fn_802B3EBC(PPC::Runtime::GCContext* context)
{
/*802B3EBC 002B0CBC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3EC0 002B0CC0*/ PPC::Runtime::ASM::b(fn_802A7DD8);
}