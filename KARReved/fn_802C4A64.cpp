//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A3D58.hpp"



void fn_802C4A64(PPC::Runtime::GCContext* context)
{
/*802C4A64 002C1864*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x8);
/*802C4A68 002C1868*/ PPC::Runtime::ASM::b(fn_802A3D58);
}