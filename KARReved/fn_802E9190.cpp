//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802E88F8.hpp"



void fn_802E9190(PPC::Runtime::GCContext* context)
{
/*802E9190 002E5F90*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x24);
/*802E9194 002E5F94*/ PPC::Runtime::ASM::b(fn_802E88F8);
}