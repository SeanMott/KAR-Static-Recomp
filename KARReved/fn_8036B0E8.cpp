//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296D3C.hpp"



void fn_8036B0E8(PPC::Runtime::GCContext* context)
{
/*8036B0E8 00367EE8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x54);
/*8036B0EC 00367EEC*/ PPC::Runtime::ASM::b(fn_80296D3C);
}