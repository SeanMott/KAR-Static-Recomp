//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_80162A40.hpp"
#include "fn_80162A40.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"



void fn_80162B2C(PPC::Runtime::GCContext* context)
{
/*80162B2C 0015F92C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80162B30 0015F930*/ PPC::Runtime::ASM::mflr(context->r0);
/*80162B34 0015F934*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80162B38 0015F938*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80162B3C 0015F93C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80162B40 0015F940*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162B44 0015F944*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80162B48 0015F948*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80162B4C 0015F94C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x950, context->r3));
/*80162B50 0015F950*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80162B54 0015F954*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80162B58 0015F958*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80162B5C 0015F95C*/ PPC::Runtime::ASM::lis(context->r4, fn_80162A40 @ Get_MemoryOffset_HighBit);
/*80162B60 0015F960*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80162B64 0015F964*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80162B68 0015F968*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80162B6C 0015F96C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80162A40 @ Get_MemoryOffset_LowBit);
/*80162B70 0015F970*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80162B74 0015F974*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x950, context->r31));
/*80162B78 0015F978*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80162B7C 0015F97C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E09A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80162B80 0015F980*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80162B84 0015F984*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80162B88 0015F988*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E09AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80162B8C 0015F98C*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80162B90 0015F990*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80162B94 0015F994*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*80162B98 0015F998*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80162B9C 0015F99C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80162BA0 0015F9A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80162BA4 0015F9A4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x954, context->r31));
/*80162BA8 0015F9A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80162BAC 0015F9AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80162BB0 0015F9B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162BB4 0015F9B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80162BB8 0015F9B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80162BBC 0015F9BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80162BC0 0015F9C0*/ PPC::Runtime::ASM::blr();
}