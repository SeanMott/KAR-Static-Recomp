//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A98EC.hpp"
#include "fn_800D9958.hpp"
#include "fn_800A98F0.hpp"



void fn_800D1AC4(PPC::Runtime::GCContext* context)
{
/*800D1AC4 000CE8C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D1AC8 000CE8C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D1ACC 000CE8CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D1AD0 000CE8D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D1AD4 000CE8D4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800D1AD8 000CE8D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D1ADC 000CE8DC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800D1AE0 000CE8E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1AE4 000CE8E4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800D1AE8 000CE8E8*/ PPC::Runtime::ASM::bl(fn_800A98EC);
/*800D1AEC 000CE8EC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D1AF0 000CE8F0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800D1AF4 000CE8F4*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800D1AF8 000CE8F8*/ PPC::Runtime::ASM::mr(context->r8, context->r31);
/*800D1AFC 000CE8FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x54);
/*800D1B00 000CE900*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800D1B04 000CE904*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800D1B08 000CE908*/ PPC::Runtime::ASM::bl(fn_800D9958);
/*800D1B0C 000CE90C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800D1B10 000CE910*/ PPC::Runtime::ASM::bl(fn_800A98F0);
/*800D1B14 000CE914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D1B18 000CE918*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D1B1C 000CE91C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800D1B20 000CE920*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D1B24 000CE924*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1B28 000CE928*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D1B2C 000CE92C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D1B30 000CE930*/ PPC::Runtime::ASM::blr();
}