//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A2454.hpp"



void fn_802B3C8C(PPC::Runtime::GCContext* context)
{
/*802B3C8C 002B0A8C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B3C90 002B0A90*/ PPC::Runtime::ASM::b(fn_802A2454);
}