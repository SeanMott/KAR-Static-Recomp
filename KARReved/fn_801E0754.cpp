//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801E0754(PPC::Runtime::GCContext* context)
{
/*801E0754 001DD554*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E0758 001DD558*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801E075C 001DD55C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r4));
/*801E0760 001DD560*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*801E0764 001DD564*/ PPC::Runtime::ASM::blr();
}