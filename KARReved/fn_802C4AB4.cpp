//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802ABD44.hpp"



void fn_802C4AB4(PPC::Runtime::GCContext* context)
{
/*802C4AB4 002C18B4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802C4AB8 002C18B8*/ PPC::Runtime::ASM::b(fn_802ABD44);
}