//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80311A20.hpp"



void fn_80311CF4(PPC::Runtime::GCContext* context)
{
/*80311CF4 0030EAF4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*80311CF8 0030EAF8*/ PPC::Runtime::ASM::b(fn_80311A20);
}