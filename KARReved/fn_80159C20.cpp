//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80159B34.hpp"
#include "fn_80159B34.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"



void fn_80159C20(PPC::Runtime::GCContext* context)
{
/*80159C20 00156A20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80159C24 00156A24*/ PPC::Runtime::ASM::mflr(context->r0);
/*80159C28 00156A28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80159C2C 00156A2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80159C30 00156A30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80159C34 00156A34*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80159C38 00156A38*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80159C3C 00156A3C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80159C40 00156A40*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80159C44 00156A44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b8, context->r3));
/*80159C48 00156A48*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80159C4C 00156A4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80159C50 00156A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80159C54 00156A54*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80159C58 00156A58*/ PPC::Runtime::ASM::lis(context->r4, fn_80159B34 @ Get_MemoryOffset_HighBit);
/*80159C5C 00156A5C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80159C60 00156A60*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80159C64 00156A64*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80159C68 00156A68*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80159B34 @ Get_MemoryOffset_LowBit);
/*80159C6C 00156A6C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80159C70 00156A70*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b8, context->r31));
/*80159C74 00156A74*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80159C78 00156A78*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0850 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80159C7C 00156A7C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80159C80 00156A80*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80159C84 00156A84*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0854 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80159C88 00156A88*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80159C8C 00156A8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80159C90 00156A90*/ PPC::Runtime::ASM::li(context->r4, 0x53);
/*80159C94 00156A94*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80159C98 00156A98*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80159C9C 00156A9C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80159CA0 00156AA0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7bc, context->r31));
/*80159CA4 00156AA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80159CA8 00156AA8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80159CAC 00156AAC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80159CB0 00156AB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80159CB4 00156AB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80159CB8 00156AB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80159CBC 00156ABC*/ PPC::Runtime::ASM::blr();
}