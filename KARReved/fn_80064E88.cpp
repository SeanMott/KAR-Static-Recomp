//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80064E88(PPC::Runtime::GCContext* context)
{
/*80064E88 00061C88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEAD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064E8C 00061C8C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEAD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064E90 00061C90*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80064E94 00061C94*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80064E98 00061C98*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80064E9C 00061C9C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*80064EA0 00061CA0*/ PPC::Runtime::ASM::blr();
}