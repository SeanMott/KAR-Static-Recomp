//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A6808.hpp"



void fn_802B3E14(PPC::Runtime::GCContext* context)
{
/*802B3E14 002B0C14*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3E18 002B0C18*/ PPC::Runtime::ASM::b(fn_802A6808);
}