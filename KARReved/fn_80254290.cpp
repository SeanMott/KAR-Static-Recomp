//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80254290(PPC::Runtime::GCContext* context)
{
/*80254290 00251090*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80254294 00251094*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r4));
/*80254298 00251098*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 28, 28);
/*8025429C 0025109C*/ PPC::Runtime::ASM::beqlr();
/*802542A0 002510A0*/ PPC::Runtime::ASM::xori(context->r0, context->r3, 0x8);
/*802542A4 002510A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r4));
/*802542A8 002510A8*/ PPC::Runtime::ASM::blr();
}