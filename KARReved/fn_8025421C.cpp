//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8025421C(PPC::Runtime::GCContext* context)
{
/*8025421C 0025101C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254220 00251020*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r4));
/*80254224 00251024*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 29, 29);
/*80254228 00251028*/ PPC::Runtime::ASM::beqlr();
/*8025422C 0025102C*/ PPC::Runtime::ASM::xori(context->r0, context->r3, 0x4);
/*80254230 00251030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r4));
/*80254234 00251034*/ PPC::Runtime::ASM::blr();
}