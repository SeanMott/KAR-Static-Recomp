//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D21D0(PPC::Runtime::GCContext* context)
{
/*800D21D0 000CEFD0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D21D4 000CEFD4*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x140);
/*800D21D8 000CEFD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r4));
/*800D21DC 000CEFDC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D21E0 000CEFE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800D21E4 000CEFE4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*800D21E8 000CEFE8*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x4);
/*800D21EC 000CEFEC*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*800D21F0 000CEFF0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*800D21F4 000CEFF4*/ PPC::Runtime::ASM::blr();
}