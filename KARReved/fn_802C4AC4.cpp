//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802C4620.hpp"



void fn_802C4AC4(PPC::Runtime::GCContext* context)
{
/*802C4AC4 002C18C4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802C4AC8 002C18C8*/ PPC::Runtime::ASM::b(fn_802C4620);
}