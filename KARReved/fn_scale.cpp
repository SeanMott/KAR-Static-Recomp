//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_scale(PPC::Runtime::GCContext* context)
{
/*801ED720 001EA520*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x768, context->r3));
/*801ED724 001EA524*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801ED728 001EA528*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x330, context->r3));
/*801ED72C 001EA52C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x76c, context->r3));
/*801ED730 001EA530*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801ED734 001EA534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r3));
/*801ED738 001EA538*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x770, context->r3));
/*801ED73C 001EA53C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801ED740 001EA540*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r3));
/*801ED744 001EA544*/ PPC::Runtime::ASM::blr();
}