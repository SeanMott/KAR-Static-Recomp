//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801EB898(PPC::Runtime::GCContext* context)
{
/*801EB898 001E8698*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc40, context->r3));
/*801EB89C 001E869C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*801EB8A0 001E86A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc40, context->r3));
/*801EB8A4 001E86A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801EB8A8 001E86A8*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*801EB8AC 001E86AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801EB8B0 001E86B0*/ PPC::Runtime::ASM::blr();
}