//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029626C(PPC::Runtime::GCContext* context)
{
/*8029626C 0029306C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E335C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80296270 00293070*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*80296274 00293074*/ PPC::Runtime::ASM::blr();
}