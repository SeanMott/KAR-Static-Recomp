//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80246AB4(PPC::Runtime::GCContext* context)
{
/*80246AB4 002438B4*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x44);
/*80246AB8 002438B8*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80246ABC 002438BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*80246AC0 002438C0*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*80246AC4 002438C4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80246AC8 002438C8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80246ACC 002438CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80246AD0 002438D0*/ PPC::Runtime::ASM::ble(.L_80246B10);
RUNTIME_PPC_JUMP_LABEL(.L_80246AD4, 0x80246AD4) //this is a jump label
/*80246AD4 002438D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80246AD8 002438D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80246ADC 002438DC*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x140);
/*80246AE0 002438E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*80246AE4 002438E4*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80246AE8 002438E8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*80246AEC 002438EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*80246AF0 002438F0*/ PPC::Runtime::ASM::bne(.L_80246B04);
/*80246AF4 002438F4*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*80246AF8 002438F8*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*80246AFC 002438FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80246B00 00243900*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80246B04, 0x80246B04) //this is a jump label
/*80246B04 00243904*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*80246B08 00243908*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80246B0C 0024390C*/ PPC::Runtime::ASM::bdnz(.L_80246AD4);
RUNTIME_PPC_JUMP_LABEL(.L_80246B10, 0x80246B10) //this is a jump label
/*80246B10 00243910*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r7));
/*80246B14 00243914*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*80246B18 00243918*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80246B1C 0024391C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80246B20 00243920*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80246B24 00243924*/ PPC::Runtime::ASM::ble(.L_80246B70);
RUNTIME_PPC_JUMP_LABEL(.L_80246B28, 0x80246B28) //this is a jump label
/*80246B28 00243928*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r6));
/*80246B2C 0024392C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r6));
/*80246B30 00243930*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x140);
/*80246B34 00243934*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80246B38 00243938*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x24);
/*80246B3C 0024393C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80246B40 00243940*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*80246B44 00243944*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80246B48 00243948*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*80246B4C 0024394C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*80246B50 00243950*/ PPC::Runtime::ASM::bne(.L_80246B64);
/*80246B54 00243954*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 5);
/*80246B58 00243958*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*80246B5C 0024395C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*80246B60 00243960*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80246B64, 0x80246B64) //this is a jump label
/*80246B64 00243964*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x20);
/*80246B68 00243968*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80246B6C 0024396C*/ PPC::Runtime::ASM::bdnz(.L_80246B28);
RUNTIME_PPC_JUMP_LABEL(.L_80246B70, 0x80246B70) //this is a jump label
/*80246B70 00243970*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80246B74 00243974*/ PPC::Runtime::ASM::blr();
}