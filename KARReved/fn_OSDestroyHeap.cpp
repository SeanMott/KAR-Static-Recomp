//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_OSDestroyHeap(PPC::Runtime::GCContext* context)
{
/*803D3870 003D0670*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*803D3874 003D0674*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDEB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D3878 003D0678*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*803D387C 003D067C*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
/*803D3880 003D0680*/ PPC::Runtime::ASM::blr();
}