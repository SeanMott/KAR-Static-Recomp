//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800B8F88(PPC::Runtime::GCContext* context)
{
/*800B8F88 000B5D88*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/*800B8F8C 000B5D8C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*800B8F90 000B5D90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/*800B8F94 000B5D94*/ PPC::Runtime::ASM::blr();
}