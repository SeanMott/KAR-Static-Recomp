//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AFCF4.hpp"



void fn_802B3CC4(PPC::Runtime::GCContext* context)
{
/*802B3CC4 002B0AC4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3CC8 002B0AC8*/ PPC::Runtime::ASM::b(fn_802AFCF4);
}