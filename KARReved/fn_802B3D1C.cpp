//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A4524.hpp"



void fn_802B3D1C(PPC::Runtime::GCContext* context)
{
/*802B3D1C 002B0B1C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x38);
/*802B3D20 002B0B20*/ PPC::Runtime::ASM::b(fn_802A4524);
}