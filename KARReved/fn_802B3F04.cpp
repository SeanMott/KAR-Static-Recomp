//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A8528.hpp"



void fn_802B3F04(PPC::Runtime::GCContext* context)
{
/*802B3F04 002B0D04*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B3F08 002B0D08*/ PPC::Runtime::ASM::b(fn_802A8528);
}