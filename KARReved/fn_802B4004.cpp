//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AA1F0.hpp"



void fn_802B4004(PPC::Runtime::GCContext* context)
{
/*802B4004 002B0E04*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B4008 002B0E08*/ PPC::Runtime::ASM::b(fn_802AA1F0);
}