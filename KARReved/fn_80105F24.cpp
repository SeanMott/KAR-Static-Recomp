//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7B50.hpp"
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"



void fn_80105F24(PPC::Runtime::GCContext* context)
{
/*80105F24 00102D24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80105F28 00102D28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80105F2C 00102D2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80105F30 00102D30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80105F34 00102D34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80105F38 00102D38*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80105F3C 00102D3C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80105F40 00102D40*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r5));
/*80105F44 00102D44*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80105F48 00102D48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r5));
/*80105F4C 00102D4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r5));
/*80105F50 00102D50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80105F54 00102D54*/ PPC::Runtime::ASM::bgt(.L_80105FB8);
/*80105F58 00102D58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80105F5C 00102D5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80105F60 00102D60*/ PPC::Runtime::ASM::lwz(context->r29, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80105F64 00102D64*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80105F68 00102D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*80105F6C 00102D6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80105F70 00102D70*/ PPC::Runtime::ASM::bl(fn_800D7B50);
/*80105F74 00102D74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80105F78 00102D78*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80105F7C 00102D7C*/ PPC::Runtime::ASM::beq(.L_80105F94);
/*80105F80 00102D80*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*80105F84 00102D84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80105F88 00102D88*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*80105F8C 00102D8C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x460);
/*80105F90 00102D90*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_80105F94, 0x80105F94) //this is a jump label
/*80105F94 00102D94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80105F98 00102D98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80105F9C 00102D9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80105FA0 00102DA0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80105FA4 00102DA4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80105FA8 00102DA8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80105FAC 00102DAC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80105FB0 00102DB0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80105FB4 00102DB4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80105FB8, 0x80105FB8) //this is a jump label
/*80105FB8 00102DB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80105FBC 00102DBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80105FC0 00102DC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80105FC4 00102DC4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80105FC8 00102DC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80105FCC 00102DCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80105FD0 00102DD0*/ PPC::Runtime::ASM::blr();
}