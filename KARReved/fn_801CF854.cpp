//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801CF854(PPC::Runtime::GCContext* context)
{
/*801CF854 001CC654*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x76c, context->r3));
/*801CF858 001CC658*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x73c, context->r3));
/*801CF85C 001CC65C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x768, context->r3));
/*801CF860 001CC660*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801CF864 001CC664*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x738, context->r3));
/*801CF868 001CC668*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x770, context->r3));
/*801CF86C 001CC66C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x740, context->r3));
/*801CF870 001CC670*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*801CF874 001CC674*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CF878 001CC678*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*801CF87C 001CC67C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CF880 001CC680*/ PPC::Runtime::ASM::mfcr(context->r0);
/*801CF884 001CC684*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 1);
/*801CF888 001CC688*/ PPC::Runtime::ASM::blr();
}