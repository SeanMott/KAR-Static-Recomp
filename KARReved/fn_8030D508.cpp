//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8030BA78.hpp"



void fn_8030D508(PPC::Runtime::GCContext* context)
{
/*8030D508 0030A308*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x24);
/*8030D50C 0030A30C*/ PPC::Runtime::ASM::b(fn_8030BA78);
}