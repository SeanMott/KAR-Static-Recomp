//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_DSPCheckInit(PPC::Runtime::GCContext* context)
{
/*803C3648 003C0448*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDD20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C364C 003C044C*/ PPC::Runtime::ASM::blr();
}