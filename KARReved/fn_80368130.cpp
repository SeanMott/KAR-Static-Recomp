//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A4D60.hpp"



void fn_80368130(PPC::Runtime::GCContext* context)
{
/*80368130 00364F30*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*80368134 00364F34*/ PPC::Runtime::ASM::b(fn_802A4D60);
}