//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802865CC.hpp"



void fn_80289100(PPC::Runtime::GCContext* context)
{
/*80289100 00285F00*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*80289104 00285F04*/ PPC::Runtime::ASM::b(fn_802865CC);
}