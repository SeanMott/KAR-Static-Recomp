//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A90A4.hpp"



void fn_802B3F5C(PPC::Runtime::GCContext* context)
{
/*802B3F5C 002B0D5C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3F60 002B0D60*/ PPC::Runtime::ASM::b(fn_802A90A4);
}