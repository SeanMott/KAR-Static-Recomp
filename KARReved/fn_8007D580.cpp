//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007D580(PPC::Runtime::GCContext* context)
{
/*8007D580 0007A380*/ PPC::Runtime::ASM::lwz(context->r3, SkipAddress_72 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D584 0007A384*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8007D588 0007A388*/ PPC::Runtime::ASM::blr();
}