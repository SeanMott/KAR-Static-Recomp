//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802E904C.hpp"



void fn_802E9170(PPC::Runtime::GCContext* context)
{
/*802E9170 002E5F70*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x24);
/*802E9174 002E5F74*/ PPC::Runtime::ASM::b(fn_802E904C);
}