//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AB198.hpp"



void fn_802B758C(PPC::Runtime::GCContext* context)
{
/*802B758C 002B438C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B7590 002B4390*/ PPC::Runtime::ASM::b(fn_802AB198);
}