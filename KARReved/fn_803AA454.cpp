//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AAD08.hpp"



void fn_803AA454(PPC::Runtime::GCContext* context)
{
/*803AA454 003A7254*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*803AA458 003A7258*/ PPC::Runtime::ASM::b(fn_802AAD08);
}