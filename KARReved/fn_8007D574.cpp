//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007D574(PPC::Runtime::GCContext* context)
{
/*8007D574 0007A374*/ PPC::Runtime::ASM::lwz(context->r3, SkipAddress_72 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D578 0007A378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8007D57C 0007A37C*/ PPC::Runtime::ASM::blr();
}