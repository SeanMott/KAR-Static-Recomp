//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D51C8(PPC::Runtime::GCContext* context)
{
/*800D51C8 000D1FC8*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D51CC 000D1FCC*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*800D51D0 000D1FD0*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800D51D4 000D1FD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r6));
/*800D51D8 000D1FD8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x6667);
/*800D51DC 000D1FDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r6));
/*800D51E0 000D1FE0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800D51E4 000D1FE4*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/* 800D51E8 000D1FE8  7C 05 00 96 */ mulhw context->r0 , context->r5 , context->r0
/*800D51EC 000D1FEC*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 7);
/*800D51F0 000D1FF0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*800D51F4 000D1FF4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*800D51F8 000D1FF8*/ PPC::Runtime::ASM::blr();
}