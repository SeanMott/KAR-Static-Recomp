//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___flush_all.hpp"
#include "fn_803B42A4.hpp"
#include "__flush_buffer.hpp"
#include "fn_free.hpp"



void fn_fclose(PPC::Runtime::GCContext* context)
{
/*803B3E40 003B0C40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803B3E44 003B0C44*/ PPC::Runtime::ASM::mflr(context->r0);
/*803B3E48 003B0C48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803B3E4C 003B0C4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 803B3E50 003B0C50  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*803B3E54 003B0C54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803B3E58 003B0C58*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803B3E5C 003B0C5C*/ PPC::Runtime::ASM::bne(.L_803B3E68);
/*803B3E60 003B0C60*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803B3E64 003B0C64*/ PPC::Runtime::ASM::b(.L_803B3FE0);
RUNTIME_PPC_JUMP_LABEL(.L_803B3E68, 0x803B3E68) //this is a jump label
/*803B3E68 003B0C68*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/* 803B3E6C 003B0C6C  54 03 D7 7F */ extrwi. context->r3 , context->r0 , 3 , 23
/*803B3E70 003B0C70*/ PPC::Runtime::ASM::bne(.L_803B3E7C);
/*803B3E74 003B0C74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B3E78 003B0C78*/ PPC::Runtime::ASM::b(.L_803B3FE0);
RUNTIME_PPC_JUMP_LABEL(.L_803B3E7C, 0x803B3E7C) //this is a jump label
/*803B3E7C 003B0C7C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803B3E80 003B0C80*/ PPC::Runtime::ASM::bne(.L_803B3E90);
/*803B3E84 003B0C84*/ PPC::Runtime::ASM::bl(fn___flush_all);
/*803B3E88 003B0C88*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803B3E8C 003B0C8C*/ PPC::Runtime::ASM::b(.L_803B3F80);
RUNTIME_PPC_JUMP_LABEL(.L_803B3E90, 0x803B3E90) //this is a jump label
/*803B3E90 003B0C90*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*803B3E94 003B0C94*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803B3E98 003B0C98*/ PPC::Runtime::ASM::bne(.L_803B3EA4);
/*803B3E9C 003B0C9C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803B3EA0 003B0CA0*/ PPC::Runtime::ASM::bne(.L_803B3EAC);
RUNTIME_PPC_JUMP_LABEL(.L_803B3EA4, 0x803B3EA4) //this is a jump label
/*803B3EA4 003B0CA4*/ PPC::Runtime::ASM::li(context->r29, -0x1);
/*803B3EA8 003B0CA8*/ PPC::Runtime::ASM::b(.L_803B3F80);
RUNTIME_PPC_JUMP_LABEL(.L_803B3EAC, 0x803B3EAC) //this is a jump label
/*803B3EAC 003B0CAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803B3EB0 003B0CB0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 3, 26);
/*803B3EB4 003B0CB4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803B3EB8 003B0CB8*/ PPC::Runtime::ASM::bne(.L_803B3EC4);
/*803B3EBC 003B0CBC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803B3EC0 003B0CC0*/ PPC::Runtime::ASM::b(.L_803B3F80);
RUNTIME_PPC_JUMP_LABEL(.L_803B3EC4, 0x803B3EC4) //this is a jump label
/*803B3EC4 003B0CC4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803B3EC8 003B0CC8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 3, 24);
/*803B3ECC 003B0CCC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x3);
/*803B3ED0 003B0CD0*/ PPC::Runtime::ASM::blt(.L_803B3EE0);
/*803B3ED4 003B0CD4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803B3ED8 003B0CD8*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 5, 24, 26);
/*803B3EDC 003B0CDC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803B3EE0, 0x803B3EE0) //this is a jump label
/*803B3EE0 003B0CE0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803B3EE4 003B0CE4*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 3, 24);
/*803B3EE8 003B0CE8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*803B3EEC 003B0CEC*/ PPC::Runtime::ASM::bne(.L_803B3EF8);
/*803B3EF0 003B0CF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803B3EF4 003B0CF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803B3EF8, 0x803B3EF8) //this is a jump label
/*803B3EF8 003B0CF8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803B3EFC 003B0CFC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 3, 24);
/*803B3F00 003B0D00*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803B3F04 003B0D04*/ PPC::Runtime::ASM::beq(.L_803B3F18);
/*803B3F08 003B0D08*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803B3F0C 003B0D0C*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r29, 5, 24, 26);
/*803B3F10 003B0D10*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803B3F14 003B0D14*/ PPC::Runtime::ASM::b(.L_803B3F80);
RUNTIME_PPC_JUMP_LABEL(.L_803B3F18, 0x803B3F18) //this is a jump label
/*803B3F18 003B0D18*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803B3F1C 003B0D1C*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 3, 23);
/*803B3F20 003B0D20*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803B3F24 003B0D24*/ PPC::Runtime::ASM::beq(.L_803B3F30);
/*803B3F28 003B0D28*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803B3F2C 003B0D2C*/ PPC::Runtime::ASM::b(.L_803B3F3C);
RUNTIME_PPC_JUMP_LABEL(.L_803B3F30, 0x803B3F30) //this is a jump label
/*803B3F30 003B0D30*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803B3F34 003B0D34*/ PPC::Runtime::ASM::bl(fn_803B42A4);
/*803B3F38 003B0D38*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803B3F3C, 0x803B3F3C) //this is a jump label
/*803B3F3C 003B0D3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803B3F40 003B0D40*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B3F44 003B0D44*/ PPC::Runtime::ASM::bl(__flush_buffer);
/*803B3F48 003B0D48*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803B3F4C 003B0D4C*/ PPC::Runtime::ASM::beq(.L_803B3F68);
/*803B3F50 003B0D50*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803B3F54 003B0D54*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803B3F58 003B0D58*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*803B3F5C 003B0D5C*/ PPC::Runtime::ASM::li(context->r29, -0x1);
/*803B3F60 003B0D60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803B3F64 003B0D64*/ PPC::Runtime::ASM::b(.L_803B3F80);
RUNTIME_PPC_JUMP_LABEL(.L_803B3F68, 0x803B3F68) //this is a jump label
/*803B3F68 003B0D68*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803B3F6C 003B0D6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803B3F70 003B0D70*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r29, 5, 24, 26);
/*803B3F74 003B0D74*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803B3F78 003B0D78*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803B3F7C 003B0D7C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803B3F80, 0x803B3F80) //this is a jump label
/*803B3F80 003B0D80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*803B3F84 003B0D84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803B3F88 003B0D88*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803B3F8C 003B0D8C*/ PPC::Runtime::ASM::bctrl();
/*803B3F90 003B0D90*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803B3F94 003B0D94*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803B3F98 003B0D98*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 23, 25);
/*803B3F9C 003B0D9C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803B3FA0 003B0DA0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803B3FA4 003B0DA4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803B3FA8 003B0DA8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/* 803B3FAC 003B0DAC  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*803B3FB0 003B0DB0*/ PPC::Runtime::ASM::beq(.L_803B3FBC);
/*803B3FB4 003B0DB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*803B3FB8 003B0DB8*/ PPC::Runtime::ASM::bl(fn_free);
RUNTIME_PPC_JUMP_LABEL(.L_803B3FBC, 0x803B3FBC) //this is a jump label
/*803B3FBC 003B0DBC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803B3FC0 003B0DC0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B3FC4 003B0DC4*/ PPC::Runtime::ASM::bne(.L_803B3FD0);
/*803B3FC8 003B0DC8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803B3FCC 003B0DCC*/ PPC::Runtime::ASM::beq(.L_803B3FD4);
RUNTIME_PPC_JUMP_LABEL(.L_803B3FD0, 0x803B3FD0) //this is a jump label
/*803B3FD0 003B0DD0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803B3FD4, 0x803B3FD4) //this is a jump label
/*803B3FD4 003B0DD4*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*803B3FD8 003B0DD8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*803B3FDC 003B0DDC*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_803B3FE0, 0x803B3FE0) //this is a jump label
/*803B3FE0 003B0DE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803B3FE4 003B0DE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803B3FE8 003B0DE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803B3FEC 003B0DEC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803B3FF0 003B0DF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803B3FF4 003B0DF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803B3FF8 003B0DF8*/ PPC::Runtime::ASM::blr();
}