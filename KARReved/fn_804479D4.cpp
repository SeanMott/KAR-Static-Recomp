//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_804479D4(PPC::Runtime::GCContext* context)
{
/*804479D4 004447D4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE4E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804479D8 004447D8*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE4E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804479DC 004447DC*/ PPC::Runtime::ASM::blr();
}