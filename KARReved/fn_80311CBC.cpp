//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8030F084.hpp"



void fn_80311CBC(PPC::Runtime::GCContext* context)
{
/*80311CBC 0030EABC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*80311CC0 0030EAC0*/ PPC::Runtime::ASM::b(fn_8030F084);
}