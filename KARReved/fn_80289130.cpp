//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028675C.hpp"



void fn_80289130(PPC::Runtime::GCContext* context)
{
/*80289130 00285F30*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*80289134 00285F34*/ PPC::Runtime::ASM::b(fn_8028675C);
}