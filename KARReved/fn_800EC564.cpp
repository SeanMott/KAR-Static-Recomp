//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800EC564(PPC::Runtime::GCContext* context)
{
/*800EC564 000E9364*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC568 000E9368*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800EC56C 000E936C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r3));
/*800EC570 000E9370*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*800EC574 000E9374*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r3));
/*800EC578 000E9378*/ PPC::Runtime::ASM::blr();
}