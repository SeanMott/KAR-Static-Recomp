//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "strlen.hpp"
#include "strlen.hpp"
#include "strlen.hpp"
#include "strlen.hpp"
#include "fn_strncmp.hpp"
#include "fn_strncmp.hpp"



void fn_80485F64(PPC::Runtime::GCContext* context)
{
/*80485F64 00482D64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80485F68 00482D68*/ PPC::Runtime::ASM::lis(context->r5, StructWithStructs_11 @ Get_MemoryOffset_HighBit);
/*80485F6C 00482D6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80485F70 00482D70*/ PPC::Runtime::ASM::addi(context->r6, context->r5, StructWithStructs_11 @ Get_MemoryOffset_LowBit);
/*80485F74 00482D74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80485F78 00482D78*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80485F7C 00482D7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80485F80 00482D80*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*80485F84 00482D84*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80485F88 00482D88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80485F8C 00482D8C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80485F90 00482D90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80485F94 00482D94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80485F98 00482D98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80485F9C 00482D9C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80485FA0 00482DA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80485FA4 00482DA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*80485FA8 00482DA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*80485FAC 00482DAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80485FB0 00482DB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80485FB4 00482DB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80485FB8 00482DB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80485FBC 00482DBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80485FC0 00482DC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80485FC4 00482DC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80485FC8 00482DC8*/ PPC::Runtime::ASM::bl(strlen);
/*80485FCC 00482DCC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80485FD0 00482DD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80485FD4 00482DD4*/ PPC::Runtime::ASM::bl(strlen);
/*80485FD8 00482DD8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*80485FDC 00482DDC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80485FE0 00482DE0*/ PPC::Runtime::ASM::bl(strlen);
/*80485FE4 00482DE4*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*80485FE8 00482DE8*/ PPC::Runtime::ASM::cmplw(context->r28, context->r30);
/*80485FEC 00482DEC*/ PPC::Runtime::ASM::ble(.L_80485FF8);
/*80485FF0 00482DF0*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80485FF4 00482DF4*/ PPC::Runtime::ASM::b(.L_804860AC);
RUNTIME_PPC_JUMP_LABEL(.L_80485FF8, 0x80485FF8) //this is a jump label
/*80485FF8 00482DF8*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x0);
/*80485FFC 00482DFC*/ PPC::Runtime::ASM::beq(.L_80486068);
/*80486000 00482E00*/ PPC::Runtime::ASM::cmplw(context->r28, context->r29);
/*80486004 00482E04*/ PPC::Runtime::ASM::bge(.L_80486010);
/*80486008 00482E08*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8048600C 00482E0C*/ PPC::Runtime::ASM::b(.L_804860AC);
RUNTIME_PPC_JUMP_LABEL(.L_80486010, 0x80486010) //this is a jump label
/*80486010 00482E10*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80486014 00482E14*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*80486018 00482E18*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x14);
/*8048601C 00482E1C*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80486020, 0x80486020) //this is a jump label
/*80486020 00482E20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80486024 00482E24*/ PPC::Runtime::ASM::bl(strlen);
/*80486028 00482E28*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x0);
/*8048602C 00482E2C*/ PPC::Runtime::ASM::cmplw(context->r28, context->r5);
/*80486030 00482E30*/ PPC::Runtime::ASM::bne(.L_80486050);
/*80486034 00482E34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80486038 00482E38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8048603C 00482E3C*/ PPC::Runtime::ASM::bl(fn_strncmp);
/*80486040 00482E40*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80486044 00482E44*/ PPC::Runtime::ASM::bne(.L_80486050);
/*80486048 00482E48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8048604C 00482E4C*/ PPC::Runtime::ASM::b(.L_804860AC);
RUNTIME_PPC_JUMP_LABEL(.L_80486050, 0x80486050) //this is a jump label
/*80486050 00482E50*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80486054 00482E54*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x8);
/*80486058 00482E58*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8048605C 00482E5C*/ PPC::Runtime::ASM::blt(.L_80486020);
/*80486060 00482E60*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80486064 00482E64*/ PPC::Runtime::ASM::b(.L_804860AC);
RUNTIME_PPC_JUMP_LABEL(.L_80486068, 0x80486068) //this is a jump label
/*80486068 00482E68*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8048606C 00482E6C*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*80486070 00482E70*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x14);
/*80486074 00482E74*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80486078, 0x80486078) //this is a jump label
/*80486078 00482E78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8048607C 00482E7C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80486080 00482E80*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x0);
/*80486084 00482E84*/ PPC::Runtime::ASM::bl(fn_strncmp);
/*80486088 00482E88*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8048608C 00482E8C*/ PPC::Runtime::ASM::bne(.L_80486098);
/*80486090 00482E90*/ PPC::Runtime::ASM::li(context->r3, 0x8);
/*80486094 00482E94*/ PPC::Runtime::ASM::b(.L_804860AC);
RUNTIME_PPC_JUMP_LABEL(.L_80486098, 0x80486098) //this is a jump label
/*80486098 00482E98*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8048609C 00482E9C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x8);
/*804860A0 00482EA0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*804860A4 00482EA4*/ PPC::Runtime::ASM::blt(.L_80486078);
/*804860A8 00482EA8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804860AC, 0x804860AC) //this is a jump label
/*804860AC 00482EAC*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*804860B0 00482EB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*804860B4 00482EB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*804860B8 00482EB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804860BC 00482EBC*/ PPC::Runtime::ASM::blr();
}