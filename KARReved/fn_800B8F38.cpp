//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800B8F38(PPC::Runtime::GCContext* context)
{
/*800B8F38 000B5D38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/*800B8F3C 000B5D3C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*800B8F40 000B5D40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/*800B8F44 000B5D44*/ PPC::Runtime::ASM::blr();
}