//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8033D70C.hpp"



void fn_8033EBA8(PPC::Runtime::GCContext* context)
{
/*8033EBA8 0033B9A8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x14);
/*8033EBAC 0033B9AC*/ PPC::Runtime::ASM::b(fn_8033D70C);
}