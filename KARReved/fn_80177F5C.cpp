//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80177DD8.hpp"
#include "fn_80177DD8.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"



void fn_80177F5C(PPC::Runtime::GCContext* context)
{
/*80177F5C 00174D5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80177F60 00174D60*/ PPC::Runtime::ASM::mflr(context->r0);
/*80177F64 00174D64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80177F68 00174D68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80177F6C 00174D6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80177F70 00174D70*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80177F74 00174D74*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80177F78 00174D78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80177F7C 00174D7C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80177F80 00174D80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd44, context->r3));
/*80177F84 00174D84*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80177F88 00174D88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80177F8C 00174D8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80177F90 00174D90*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80177F94 00174D94*/ PPC::Runtime::ASM::lis(context->r4, fn_80177DD8 @ Get_MemoryOffset_HighBit);
/*80177F98 00174D98*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80177F9C 00174D9C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80177FA0 00174DA0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80177FA4 00174DA4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80177DD8 @ Get_MemoryOffset_LowBit);
/*80177FA8 00174DA8*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80177FAC 00174DAC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd44, context->r31));
/*80177FB0 00174DB0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80177FB4 00174DB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80177FB8 00174DB8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80177FBC 00174DBC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80177FC0 00174DC0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0C9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80177FC4 00174DC4*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80177FC8 00174DC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80177FCC 00174DCC*/ PPC::Runtime::ASM::li(context->r4, 0xa2);
/*80177FD0 00174DD0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80177FD4 00174DD4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80177FD8 00174DD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80177FDC 00174DDC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd48, context->r31));
/*80177FE0 00174DE0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80177FE4 00174DE4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80177FE8 00174DE8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80177FEC 00174DEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80177FF0 00174DF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80177FF4 00174DF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80177FF8 00174DF8*/ PPC::Runtime::ASM::blr();
}