//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038B964(PPC::Runtime::GCContext* context)
{
/*8038B964 00388764*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038B968 00388768*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f1);
/*8038B96C 0038876C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4E08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038B970 00388770*/ PPC::Runtime::ASM::fmuls(context->f8, context->f2, context->f1);
/*8038B974 00388774*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038B978 00388778*/ PPC::Runtime::ASM::fsubs(context->f7, context->f1, context->f4);
/*8038B97C 0038877C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038B980 00388780*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038B984 00388784*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f8);
/*8038B988 00388788*/ PPC::Runtime::ASM::fmuls(context->f9, context->f7, context->f7);
/*8038B98C 0038878C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038B990 00388790*/ PPC::Runtime::ASM::fadds(context->f4, context->f4, context->f8);
/*8038B994 00388794*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8038B998 00388798*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8038B99C 0038879C*/ PPC::Runtime::ASM::fmuls(context->f7, context->f7, context->f1);
/*8038B9A0 003887A0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f9);
/*8038B9A4 003887A4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8038B9A8 003887A8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f9);
/*8038B9AC 003887AC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f7);
/*8038B9B0 003887B0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f2, context->f0);
/*8038B9B4 003887B4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f3, context->f0);
/*8038B9B8 003887B8*/ PPC::Runtime::ASM::fmadds(context->f1, context->f8, context->f1, context->f0);
/*8038B9BC 003887BC*/ PPC::Runtime::ASM::blr();
}