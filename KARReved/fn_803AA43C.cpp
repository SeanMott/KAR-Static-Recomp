//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803AA3D0.hpp"



void fn_803AA43C(PPC::Runtime::GCContext* context)
{
/*803AA43C 003A723C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*803AA440 003A7240*/ PPC::Runtime::ASM::b(fn_803AA3D0);
}