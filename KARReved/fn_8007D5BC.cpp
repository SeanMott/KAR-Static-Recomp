//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007D5BC(PPC::Runtime::GCContext* context)
{
/*8007D5BC 0007A3BC*/ PPC::Runtime::ASM::lwz(context->r3, SkipAddress_72 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D5C0 0007A3C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8007D5C4 0007A3C4*/ PPC::Runtime::ASM::blr();
}