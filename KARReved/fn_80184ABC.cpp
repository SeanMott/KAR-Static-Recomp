//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_80184858.hpp"
#include "fn_80184858.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_80184ABC(PPC::Runtime::GCContext* context)
{
/*80184ABC 001818BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80184AC0 001818C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80184AC4 001818C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80184AC8 001818C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80184ACC 001818CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80184AD0 001818D0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184AD4 001818D4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80184AD8 001818D8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80184ADC 001818DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x116c, context->r3));
/*80184AE0 001818E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80184AE4 001818E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80184AE8 001818E8*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80184AEC 001818EC*/ PPC::Runtime::ASM::lis(context->r4, fn_80184858 @ Get_MemoryOffset_HighBit);
/*80184AF0 001818F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80184AF4 001818F4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80184AF8 001818F8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80184AFC 001818FC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80184858 @ Get_MemoryOffset_LowBit);
/*80184B00 00181900*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80184B04 00181904*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x116c, context->r30));
/*80184B08 00181908*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80184B0C 0018190C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0E98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80184B10 00181910*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80184B14 00181914*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0E9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80184B18 00181918*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80184B1C 0018191C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80184B20 00181920*/ PPC::Runtime::ASM::li(context->r4, 0xba);
/*80184B24 00181924*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80184B28 00181928*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80184B2C 0018192C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80184B30 00181930*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80184B34 00181934*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80184B38 00181938*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80184B3C 0018193C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80184B40 00181940*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80184B44 00181944*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80184B48 00181948*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80184B4C 0018194C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80184B50 00181950*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80184B54 00181954*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80184B58 00181958*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80184B5C 0018195C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80184B60 00181960*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80184B64 00181964*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80184B68 00181968*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80184B6C 0018196C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80184B70 00181970*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80184B74 00181974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80184B78 00181978*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1170, context->r30));
/*80184B7C 0018197C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80184B80 00181980*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80184B84 00181984*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80184B88 00181988*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80184B8C 0018198C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80184B90 00181990*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80184B94 00181994*/ PPC::Runtime::ASM::blr();
}