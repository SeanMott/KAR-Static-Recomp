//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80290588.hpp"



void fn_80374A04(PPC::Runtime::GCContext* context)
{
/*80374A04 00371804*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4);
/*80374A08 00371808*/ PPC::Runtime::ASM::b(fn_80290588);
}