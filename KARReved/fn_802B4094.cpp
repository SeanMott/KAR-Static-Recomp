//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AB384.hpp"



void fn_802B4094(PPC::Runtime::GCContext* context)
{
/*802B4094 002B0E94*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B4098 002B0E98*/ PPC::Runtime::ASM::b(fn_802AB384);
}