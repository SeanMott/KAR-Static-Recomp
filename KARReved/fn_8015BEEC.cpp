//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015E150.hpp"
#include "fn_8015E150.hpp"
#include "fn_8015E150.hpp"
#include "fn_8015E150.hpp"
#include "fn_8015E0DC.hpp"



void fn_8015BEEC(PPC::Runtime::GCContext* context)
{
/*8015BEEC 00158CEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8015BEF0 00158CF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015BEF4 00158CF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015BEF8 00158CF8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8015BEFC 00158CFC*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8015BF00 00158D00*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8015BF04 00158D04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r30));
/*8015BF08 00158D08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8015BF0C 00158D0C*/ PPC::Runtime::ASM::ble(.L_8015C07C);
/*8015BF10 00158D10*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r30));
/*8015BF14 00158D14*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8015BF18 00158D18*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
/*8015BF1C 00158D1C*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*8015BF20 00158D20*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8015BF24 00158D24*/ PPC::Runtime::ASM::bl(fn_8015E150);
/*8015BF28 00158D28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*8015BF2C 00158D2C*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8015BF30 00158D30*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015BF34 00158D34*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8015BF38 00158D38*/ PPC::Runtime::ASM::beq(.L_8015BFA8);
/*8015BF3C 00158D3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8015BF40 00158D40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8015BF44, 0x8015BF44) //this is a jump label
/*8015BF44 00158D44*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8015BF48 00158D48*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8015BF4C 00158D4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8015BF50 00158D50*/ PPC::Runtime::ASM::ble(.L_8015BF58);
/*8015BF54 00158D54*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015BF58, 0x8015BF58) //this is a jump label
/*8015BF58 00158D58*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r30));
/*8015BF5C 00158D5C*/ PPC::Runtime::ASM::extsb(context->r4, context->r28);
/*8015BF60 00158D60*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0xe);
/*8015BF64 00158D64*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015BF68 00158D68*/ PPC::Runtime::ASM::lbzx(context->r3, context->r30, context->r3);
/*8015BF6C 00158D6C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8015BF70 00158D70*/ PPC::Runtime::ASM::beq(.L_8015C07C);
/*8015BF74 00158D74*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8015BF78 00158D78*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8015BF7C 00158D7C*/ PPC::Runtime::ASM::beq(.L_8015BF44);
/*8015BF80 00158D80*/ PPC::Runtime::ASM::bl(fn_8015E150);
/*8015BF84 00158D84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*8015BF88 00158D88*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8015BF8C 00158D8C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015BF90 00158D90*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8015BF94 00158D94*/ PPC::Runtime::ASM::bne(.L_8015BF44);
/*8015BF98 00158D98*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r30));
/*8015BF9C 00158D9C*/ PPC::Runtime::ASM::li(context->r0, 0x2d);
/*8015BFA0 00158DA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r30));
/*8015BFA4 00158DA4*/ PPC::Runtime::ASM::b(.L_8015C07C);
RUNTIME_PPC_JUMP_LABEL(.L_8015BFA8, 0x8015BFA8) //this is a jump label
/*8015BFA8 00158DA8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r30));
/*8015BFAC 00158DAC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8015BFB0 00158DB0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8015BFB4 00158DB4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r30));
/*8015BFB8 00158DB8*/ PPC::Runtime::ASM::bgt(.L_8015C07C);
RUNTIME_PPC_JUMP_LABEL(.L_8015BFBC, 0x8015BFBC) //this is a jump label
/*8015BFBC 00158DBC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8015BFC0 00158DC0*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8015BFC4 00158DC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8015BFC8 00158DC8*/ PPC::Runtime::ASM::ble(.L_8015BFD0);
/*8015BFCC 00158DCC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015BFD0, 0x8015BFD0) //this is a jump label
/*8015BFD0 00158DD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r30));
/*8015BFD4 00158DD4*/ PPC::Runtime::ASM::extsb(context->r4, context->r28);
/*8015BFD8 00158DD8*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0xe);
/*8015BFDC 00158DDC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015BFE0 00158DE0*/ PPC::Runtime::ASM::lbzx(context->r3, context->r30, context->r3);
/*8015BFE4 00158DE4*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8015BFE8 00158DE8*/ PPC::Runtime::ASM::beq(.L_8015C07C);
/*8015BFEC 00158DEC*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8015BFF0 00158DF0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8015BFF4 00158DF4*/ PPC::Runtime::ASM::beq(.L_8015BFBC);
/*8015BFF8 00158DF8*/ PPC::Runtime::ASM::bl(fn_8015E150);
/*8015BFFC 00158DFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*8015C000 00158E00*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8015C004 00158E04*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015C008 00158E08*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8015C00C 00158E0C*/ PPC::Runtime::ASM::bne(.L_8015BFBC);
/*8015C010 00158E10*/ PPC::Runtime::ASM::mr(context->r26, context->r29);
/*8015C014 00158E14*/ PPC::Runtime::ASM::extsb(context->r29, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8015C018, 0x8015C018) //this is a jump label
/*8015C018 00158E18*/ PPC::Runtime::ASM::subi(context->r26, context->r26, 0x1);
/*8015C01C 00158E1C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r26);
/*8015C020 00158E20*/ PPC::Runtime::ASM::bge(.L_8015C028);
/*8015C024 00158E24*/ PPC::Runtime::ASM::li(context->r26, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_8015C028, 0x8015C028) //this is a jump label
/*8015C028 00158E28*/ PPC::Runtime::ASM::extsb(context->r27, context->r26);
/*8015C02C 00158E2C*/ PPC::Runtime::ASM::cmpw(context->r27, context->r29);
/*8015C030 00158E30*/ PPC::Runtime::ASM::beq(.L_8015C07C);
/*8015C034 00158E34*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0xe);
/*8015C038 00158E38*/ PPC::Runtime::ASM::lbzx(context->r3, context->r30, context->r0);
/*8015C03C 00158E3C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8015C040 00158E40*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8015C044 00158E44*/ PPC::Runtime::ASM::beq(.L_8015C018);
/*8015C048 00158E48*/ PPC::Runtime::ASM::bl(fn_8015E150);
/*8015C04C 00158E4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*8015C050 00158E50*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8015C054 00158E54*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015C058 00158E58*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8015C05C 00158E5C*/ PPC::Runtime::ASM::bne(.L_8015C018);
/*8015C060 00158E60*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r27);
/*8015C064 00158E64*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8015C068 00158E68*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r4));
/*8015C06C 00158E6C*/ PPC::Runtime::ASM::bl(fn_8015E0DC);
/*8015C070 00158E70*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r30));
/*8015C074 00158E74*/ PPC::Runtime::ASM::li(context->r0, 0x2d);
/*8015C078 00158E78*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8015C07C, 0x8015C07C) //this is a jump label
/*8015C07C 00158E7C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8015C080 00158E80*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8015C084 00158E84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015C088 00158E88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015C08C 00158E8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8015C090 00158E90*/ PPC::Runtime::ASM::blr();
}