//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8031DA10(PPC::Runtime::GCContext* context)
{
/*8031DA10 0031A810*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3EE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031DA14 0031A814*/ PPC::Runtime::ASM::blr();
}