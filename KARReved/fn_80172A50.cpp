//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_801729E0.hpp"
#include "fn_801729E0.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_80172A50(PPC::Runtime::GCContext* context)
{
/*80172A50 0016F850*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80172A54 0016F854*/ PPC::Runtime::ASM::mflr(context->r0);
/*80172A58 0016F858*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80172A5C 0016F85C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80172A60 0016F860*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80172A64 0016F864*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172A68 0016F868*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80172A6C 0016F86C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80172A70 0016F870*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80172A74 0016F874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xca0, context->r3));
/*80172A78 0016F878*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80172A7C 0016F87C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80172A80 0016F880*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80172A84 0016F884*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80172A88 0016F888*/ PPC::Runtime::ASM::lis(context->r4, fn_801729E0 @ Get_MemoryOffset_HighBit);
/*80172A8C 0016F88C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80172A90 0016F890*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80172A94 0016F894*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80172A98 0016F898*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801729E0 @ Get_MemoryOffset_LowBit);
/*80172A9C 0016F89C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80172AA0 0016F8A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80172AA4 0016F8A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80172AA8 0016F8A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xca0, context->r30));
/*80172AAC 0016F8AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80172AB0 0016F8B0*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80172AB4 0016F8B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80172AB8 0016F8B8*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80172ABC 0016F8BC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80172AC0 0016F8C0*/ PPC::Runtime::ASM::li(context->r4, 0x91);
/*80172AC4 0016F8C4*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80172AC8 0016F8C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80172ACC 0016F8CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80172AD0 0016F8D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80172AD4 0016F8D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80172AD8 0016F8D8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80172ADC 0016F8DC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80172AE0 0016F8E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80172AE4 0016F8E4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80172AE8 0016F8E8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80172AEC 0016F8EC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80172AF0 0016F8F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80172AF4 0016F8F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80172AF8 0016F8F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80172AFC 0016F8FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80172B00 0016F900*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80172B04 0016F904*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xca4, context->r30));
/*80172B08 0016F908*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80172B0C 0016F90C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80172B10 0016F910*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80172B14 0016F914*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172B18 0016F918*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80172B1C 0016F91C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80172B20 0016F920*/ PPC::Runtime::ASM::blr();
}