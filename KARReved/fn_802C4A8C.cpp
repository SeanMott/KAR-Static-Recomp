//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802BF360.hpp"



void fn_802C4A8C(PPC::Runtime::GCContext* context)
{
/*802C4A8C 002C188C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802C4A90 002C1890*/ PPC::Runtime::ASM::b(fn_802BF360);
}