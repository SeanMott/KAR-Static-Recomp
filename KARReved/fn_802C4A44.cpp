//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802BE48C.hpp"



void fn_802C4A44(PPC::Runtime::GCContext* context)
{
/*802C4A44 002C1844*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802C4A48 002C1848*/ PPC::Runtime::ASM::b(fn_802BE48C);
}