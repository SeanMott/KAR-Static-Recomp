//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8021F7DC.hpp"
#include "fn_80225000.hpp"
#include "fn_80225000.hpp"



void fn_80224EF8(PPC::Runtime::GCContext* context)
{
/*80224EF8 00221CF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80224EFC 00221CFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80224F00 00221D00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80224F04 00221D04*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80224F08 00221D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80224F0C 00221D0C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80224F10 00221D10*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80224F14 00221D14*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E293C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80224F18 00221D18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80224F1C 00221D1C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80224F20 00221D20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*80224F24 00221D24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r3));
/*80224F28 00221D28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bc, context->r3));
/*80224F2C 00221D2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*80224F30 00221D30*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*80224F34 00221D34*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*80224F38 00221D38*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80224F3C 00221D3C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*80224F40 00221D40*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*80224F44 00221D44*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*80224F48 00221D48*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*80224F4C 00221D4C*/ PPC::Runtime::ASM::lis(context->r3, fn_80225000 @ Get_MemoryOffset_HighBit);
/*80224F50 00221D50*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80224F54 00221D54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80225000 @ Get_MemoryOffset_LowBit);
/*80224F58 00221D58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r31));
/*80224F5C 00221D5C*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*80224F60 00221D60*/ PPC::Runtime::ASM::b(.L_80224F9C);
RUNTIME_PPC_JUMP_LABEL(.L_80224F64, 0x80224F64) //this is a jump label
/*80224F64 00221D64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80224F68 00221D68*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r5);
/*80224F6C 00221D6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80224F70 00221D70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80224F74 00221D74*/ PPC::Runtime::ASM::beq(.L_80224F94);
/*80224F78 00221D78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*80224F7C 00221D7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80224F80 00221D80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80224F84 00221D84*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80224F88 00221D88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80224F8C 00221D8C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80224F90 00221D90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_80224F94, 0x80224F94) //this is a jump label
/*80224F94 00221D94*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc8);
/*80224F98 00221D98*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80224F9C, 0x80224F9C) //this is a jump label
/*80224F9C 00221D9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*80224FA0 00221DA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80224FA4 00221DA4*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80224FA8 00221DA8*/ PPC::Runtime::ASM::blt(.L_80224F64);
/*80224FAC 00221DAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80224FB0 00221DB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80224FB4 00221DB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80224FB8 00221DB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80224FBC 00221DBC*/ PPC::Runtime::ASM::blr();
}