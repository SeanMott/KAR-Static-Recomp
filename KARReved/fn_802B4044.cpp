//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AA8A4.hpp"



void fn_802B4044(PPC::Runtime::GCContext* context)
{
/*802B4044 002B0E44*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B4048 002B0E48*/ PPC::Runtime::ASM::b(fn_802AA8A4);
}