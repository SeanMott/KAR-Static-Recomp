//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80288320.hpp"



void fn_80289050(PPC::Runtime::GCContext* context)
{
/*80289050 00285E50*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x44);
/*80289054 00285E54*/ PPC::Runtime::ASM::b(fn_80288320);
}