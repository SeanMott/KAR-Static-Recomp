//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A6E6C.hpp"



void fn_802B3E3C(PPC::Runtime::GCContext* context)
{
/*802B3E3C 002B0C3C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802B3E40 002B0C40*/ PPC::Runtime::ASM::b(fn_802A6E6C);
}