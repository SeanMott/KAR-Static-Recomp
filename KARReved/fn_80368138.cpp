//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A4D60.hpp"



void fn_80368138(PPC::Runtime::GCContext* context)
{
/*80368138 00364F38*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*8036813C 00364F3C*/ PPC::Runtime::ASM::b(fn_802A4D60);
}