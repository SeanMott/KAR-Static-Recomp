//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_80156BB0.hpp"
#include "fn_80156BB0.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"
#include "fn_80138A00.hpp"



void fn_80156CC8(PPC::Runtime::GCContext* context)
{
/*80156CC8 00153AC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80156CCC 00153ACC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80156CD0 00153AD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80156CD4 00153AD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80156CD8 00153AD8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80156CDC 00153ADC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80156CE0 00153AE0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80156CE4 00153AE4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80156CE8 00153AE8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80156CEC 00153AEC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x6bc);
/*80156CF0 00153AF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6bc, context->r3));
/*80156CF4 00153AF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80156CF8 00153AF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80156CFC 00153AFC*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80156D00 00153B00*/ PPC::Runtime::ASM::lis(context->r4, fn_80156BB0 @ Get_MemoryOffset_HighBit);
/*80156D04 00153B04*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80156D08 00153B08*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80156D0C 00153B0C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80156D10 00153B10*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80156BB0 @ Get_MemoryOffset_LowBit);
/*80156D14 00153B14*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80156D18 00153B18*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80156D1C 00153B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80156D20 00153B20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E07B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80156D24 00153B24*/ PPC::Runtime::ASM::extsb(context->r4, context->r28);
/*80156D28 00153B28*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80156D2C 00153B2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E07BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80156D30 00153B30*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80156D34 00153B34*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80156D38 00153B38*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80156D3C 00153B3C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80156D40 00153B40*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*80156D44 00153B44*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80156D48 00153B48*/ PPC::Runtime::ASM::li(context->r4, 0x35);
/*80156D4C 00153B4C*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80156D50 00153B50*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80156D54 00153B54*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80156D58 00153B58*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80156D5C 00153B5C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80156D60 00153B60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80156D64 00153B64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80156D68 00153B68*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80156D6C 00153B6C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80156D70 00153B70*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80156D74 00153B74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80156D78 00153B78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80156D7C 00153B7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80156D80 00153B80*/ PPC::Runtime::ASM::blr();
}