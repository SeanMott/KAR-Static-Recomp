//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D2190(PPC::Runtime::GCContext* context)
{
/*800D2190 000CEF90*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D2194 000CEF94*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x140);
/*800D2198 000CEF98*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D219C 000CEF9C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r4));
/*800D21A0 000CEFA0*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*800D21A4 000CEFA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*800D21A8 000CEFA8*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 7);
/*800D21AC 000CEFAC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x2);
/*800D21B0 000CEFB0*/ PPC::Runtime::ASM::subfic(context->r0, context->r4, 0x1);
/*800D21B4 000CEFB4*/ PPC::Runtime::ASM::orc(context->r4, context->r3, context->r4);
/*800D21B8 000CEFB8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 1);
/*800D21BC 000CEFBC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/* 800D21C0 000CEFC0  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800D21C4 000CEFC4*/ PPC::Runtime::ASM::bnelr();
/*800D21C8 000CEFC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D21CC 000CEFCC*/ PPC::Runtime::ASM::blr();
}