//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80287EF8.hpp"



void fn_80289070(PPC::Runtime::GCContext* context)
{
/*80289070 00285E70*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x10);
/*80289074 00285E74*/ PPC::Runtime::ASM::b(fn_80287EF8);
}