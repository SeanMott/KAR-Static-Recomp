//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802E83C0.hpp"



void fn_802E91B0(PPC::Runtime::GCContext* context)
{
/*802E91B0 002E5FB0*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x24);
/*802E91B4 002E5FB4*/ PPC::Runtime::ASM::b(fn_802E83C0);
}