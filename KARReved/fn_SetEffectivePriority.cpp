//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_UnsetRun.hpp"



void fn_SetEffectivePriority(PPC::Runtime::GCContext* context)
{
/*803D9C68 003D6A68*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D9C6C 003D6A6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D9C70 003D6A70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803D9C74 003D6A74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D9C78 003D6A78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803D9C7C 003D6A7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D9C80 003D6A80*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*803D9C84 003D6A84*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r3));
/*803D9C88 003D6A88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*803D9C8C 003D6A8C*/ PPC::Runtime::ASM::beq(.L_803D9E0C);
/*803D9C90 003D6A90*/ PPC::Runtime::ASM::bge(.L_803D9CA4);
/*803D9C94 003D6A94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*803D9C98 003D6A98*/ PPC::Runtime::ASM::beq(.L_803D9CB0);
/*803D9C9C 003D6A9C*/ PPC::Runtime::ASM::bge(.L_803D9E00);
/*803D9CA0 003D6AA0*/ PPC::Runtime::ASM::b(.L_803D9E0C);
RUNTIME_PPC_JUMP_LABEL(.L_803D9CA4, 0x803D9CA4) //this is a jump label
/*803D9CA4 003D6AA4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*803D9CA8 003D6AA8*/ PPC::Runtime::ASM::bge(.L_803D9E0C);
/*803D9CAC 003D6AAC*/ PPC::Runtime::ASM::b(.L_803D9D28);
RUNTIME_PPC_JUMP_LABEL(.L_803D9CB0, 0x803D9CB0) //this is a jump label
/*803D9CB0 003D6AB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803D9CB4 003D6AB4*/ PPC::Runtime::ASM::bl(fn_UnsetRun);
/*803D9CB8 003D6AB8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*803D9CBC 003D6ABC*/ PPC::Runtime::ASM::lis(context->r3, RunQueue_8056D958 @ Get_MemoryOffset_HighBit);
/*803D9CC0 003D6AC0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, RunQueue_8056D958 @ Get_MemoryOffset_LowBit);
/*803D9CC4 003D6AC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*803D9CC8 003D6AC8*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 3);
/*803D9CCC 003D6ACC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*803D9CD0 003D6AD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9CD4 003D6AD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9CD8 003D6AD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D9CDC 003D6ADC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D9CE0 003D6AE0*/ PPC::Runtime::ASM::bne(.L_803D9CEC);
/*803D9CE4 003D6AE4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803D9CE8 003D6AE8*/ PPC::Runtime::ASM::b(.L_803D9CF0);
RUNTIME_PPC_JUMP_LABEL(.L_803D9CEC, 0x803D9CEC) //this is a jump label
/*803D9CEC 003D6AEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D9CF0, 0x803D9CF0) //this is a jump label
/*803D9CF0 003D6AF0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*803D9CF4 003D6AF4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D9CF8 003D6AF8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803D9CFC 003D6AFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*803D9D00 003D6B00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9D04 003D6B04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D9D08 003D6B08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*803D9D0C 003D6B0C*/ PPC::Runtime::ASM::lwz(context->r4, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9D10 003D6B10*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x1f);
/*803D9D14 003D6B14*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*803D9D18 003D6B18*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803D9D1C 003D6B1C*/ PPC::Runtime::ASM::stw(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9D20 003D6B20*/ PPC::Runtime::ASM::stw(context->r3, RunQueueHint_805DDF2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9D24 003D6B24*/ PPC::Runtime::ASM::b(.L_803D9E0C);
RUNTIME_PPC_JUMP_LABEL(.L_803D9D28, 0x803D9D28) //this is a jump label
/*803D9D28 003D6B28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*803D9D2C 003D6B2C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*803D9D30 003D6B30*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803D9D34 003D6B34*/ PPC::Runtime::ASM::bne(.L_803D9D44);
/*803D9D38 003D6B38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9D3C 003D6B3C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803D9D40 003D6B40*/ PPC::Runtime::ASM::b(.L_803D9D48);
RUNTIME_PPC_JUMP_LABEL(.L_803D9D44, 0x803D9D44) //this is a jump label
/*803D9D44 003D6B44*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803D9D48, 0x803D9D48) //this is a jump label
/*803D9D48 003D6B48*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803D9D4C 003D6B4C*/ PPC::Runtime::ASM::bne(.L_803D9D5C);
/*803D9D50 003D6B50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9D54 003D6B54*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803D9D58 003D6B58*/ PPC::Runtime::ASM::b(.L_803D9D60);
RUNTIME_PPC_JUMP_LABEL(.L_803D9D5C, 0x803D9D5C) //this is a jump label
/*803D9D5C 003D6B5C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803D9D60, 0x803D9D60) //this is a jump label
/*803D9D60 003D6B60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*803D9D64 003D6B64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9D68 003D6B68*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803D9D6C 003D6B6C*/ PPC::Runtime::ASM::b(.L_803D9D74);
RUNTIME_PPC_JUMP_LABEL(.L_803D9D70, 0x803D9D70) //this is a jump label
/*803D9D70 003D6B70*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803D9D74, 0x803D9D74) //this is a jump label
/*803D9D74 003D6B74*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803D9D78 003D6B78*/ PPC::Runtime::ASM::beq(.L_803D9D8C);
/*803D9D7C 003D6B7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r5));
/*803D9D80 003D6B80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*803D9D84 003D6B84*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*803D9D88 003D6B88*/ PPC::Runtime::ASM::ble(.L_803D9D70);
RUNTIME_PPC_JUMP_LABEL(.L_803D9D8C, 0x803D9D8C) //this is a jump label
/*803D9D8C 003D6B8C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803D9D90 003D6B90*/ PPC::Runtime::ASM::bne(.L_803D9DC4);
/*803D9D94 003D6B94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D9D98 003D6B98*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D9D9C 003D6B9C*/ PPC::Runtime::ASM::bne(.L_803D9DA8);
/*803D9DA0 003D6BA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803D9DA4 003D6BA4*/ PPC::Runtime::ASM::b(.L_803D9DAC);
RUNTIME_PPC_JUMP_LABEL(.L_803D9DA8, 0x803D9DA8) //this is a jump label
/*803D9DA8 003D6BA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D9DAC, 0x803D9DAC) //this is a jump label
/*803D9DAC 003D6BAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*803D9DB0 003D6BB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D9DB4 003D6BB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*803D9DB8 003D6BB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9DBC 003D6BBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803D9DC0 003D6BC0*/ PPC::Runtime::ASM::b(.L_803D9DEC);
RUNTIME_PPC_JUMP_LABEL(.L_803D9DC4, 0x803D9DC4) //this is a jump label
/*803D9DC4 003D6BC4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r31));
/*803D9DC8 003D6BC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r5));
/*803D9DCC 003D6BCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r5));
/*803D9DD0 003D6BD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D9DD4 003D6BD4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r31));
/*803D9DD8 003D6BD8*/ PPC::Runtime::ASM::bne(.L_803D9DE8);
/*803D9DDC 003D6BDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*803D9DE0 003D6BE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803D9DE4 003D6BE4*/ PPC::Runtime::ASM::b(.L_803D9DEC);
RUNTIME_PPC_JUMP_LABEL(.L_803D9DE8, 0x803D9DE8) //this is a jump label
/*803D9DE8 003D6BE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D9DEC, 0x803D9DEC) //this is a jump label
/*803D9DEC 003D6BEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f0, context->r31));
/*803D9DF0 003D6BF0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D9DF4 003D6BF4*/ PPC::Runtime::ASM::beq(.L_803D9E0C);
/*803D9DF8 003D6BF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803D9DFC 003D6BFC*/ PPC::Runtime::ASM::b(.L_803D9E10);
RUNTIME_PPC_JUMP_LABEL(.L_803D9E00, 0x803D9E00) //this is a jump label
/*803D9E00 003D6C00*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803D9E04 003D6C04*/ PPC::Runtime::ASM::stw(context->r0, RunQueueHint_805DDF2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9E08 003D6C08*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803D9E0C, 0x803D9E0C) //this is a jump label
/*803D9E0C 003D6C0C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803D9E10, 0x803D9E10) //this is a jump label
/*803D9E10 003D6C10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D9E14 003D6C14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D9E18 003D6C18*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803D9E1C 003D6C1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803D9E20 003D6C20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D9E24 003D6C24*/ PPC::Runtime::ASM::blr();
}