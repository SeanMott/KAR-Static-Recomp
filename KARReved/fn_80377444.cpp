//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80377444(PPC::Runtime::GCContext* context)
{
/*80377444 00374244*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80377448 00374248*/ PPC::Runtime::ASM::li(context->r4, SkipAddress_58 @ Get_MemoryOffset_SDA21);
/*8037744C 0037424C*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r3);
/*80377450 00374250*/ PPC::Runtime::ASM::blr();
}