//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A76F0.hpp"



void fn_802B3E94(PPC::Runtime::GCContext* context)
{
/*802B3E94 002B0C94*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3E98 002B0C98*/ PPC::Runtime::ASM::b(fn_802A76F0);
}