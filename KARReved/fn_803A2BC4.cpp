//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803A2478.hpp"



void fn_803A2BC4(PPC::Runtime::GCContext* context)
{
/*803A2BC4 0039F9C4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*803A2BC8 0039F9C8*/ PPC::Runtime::ASM::b(fn_803A2478);
}