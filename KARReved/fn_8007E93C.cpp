//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007E93C(PPC::Runtime::GCContext* context)
{
/*8007E93C 0007B73C*/ PPC::Runtime::ASM::li(context->r4, SkipAddress_69 @ Get_MemoryOffset_SDA21);
/*8007E940 0007B740*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8007E944 0007B744*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8007E948 0007B748*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8007E94C 0007B74C*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*8007E950 0007B750*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8007E954 0007B754*/ PPC::Runtime::ASM::stb(context->r5, SkipAddress_69 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007E958 0007B758*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8007E95C 0007B75C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8007E960 0007B760*/ PPC::Runtime::ASM::blr();
}