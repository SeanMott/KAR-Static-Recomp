//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801FFCCC(PPC::Runtime::GCContext* context)
{
/*801FFCCC 001FCACC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r3));
/*801FFCD0 001FCAD0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FFCD4 001FCAD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801FFCD8 001FCAD8*/ PPC::Runtime::ASM::bgelr();
/*801FFCDC 001FCADC*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*801FFCE0 001FCAE0*/ PPC::Runtime::ASM::blr();
}