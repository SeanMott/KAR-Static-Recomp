//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802905F8.hpp"



void fn_803749FC(PPC::Runtime::GCContext* context)
{
/*803749FC 003717FC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0xc);
/*80374A00 00371800*/ PPC::Runtime::ASM::b(fn_802905F8);
}