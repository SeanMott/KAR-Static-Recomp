//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TExpGetType.hpp"
#include "fn_HSD_TExpGetType.hpp"



void fn_80427E58(PPC::Runtime::GCContext* context)
{
/*80427E58 00424C58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80427E5C 00424C5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80427E60 00424C60*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80427E64 00424C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80427E68 00424C68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80427E6C 00424C6C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80427E70 00424C70*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d, context->r3));
/*80427E74 00424C74*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*80427E78 00424C78*/ PPC::Runtime::ASM::beq(.L_80427F00);
/*80427E7C 00424C7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80427E80 00424C80*/ PPC::Runtime::ASM::bl(fn_HSD_TExpGetType);
/*80427E84 00424C84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80427E88 00424C88*/ PPC::Runtime::ASM::beq(.L_80427E90);
/*80427E8C 00424C8C*/ PPC::Runtime::ASM::b(.L_80427EFC);
RUNTIME_PPC_JUMP_LABEL(.L_80427E90, 0x80427E90) //this is a jump label
/*80427E90 00424C90*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d, context->r31));
/*80427E94 00424C94*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80427E98 00424C98*/ PPC::Runtime::ASM::bne(.L_80427ECC);
/*80427E9C 00424C9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80427EA0 00424CA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*80427EA4 00424CA4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80427EA8 00424CA8*/ PPC::Runtime::ASM::beq(.L_80427EC4);
/*80427EAC 00424CAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r3));
/*80427EB0 00424CB0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80427EB4 00424CB4*/ PPC::Runtime::ASM::bne(.L_80427EC4);
/*80427EB8 00424CB8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80427EBC 00424CBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80427EC0 00424CC0*/ PPC::Runtime::ASM::b(.L_80427FD0);
RUNTIME_PPC_JUMP_LABEL(.L_80427EC4, 0x80427EC4) //this is a jump label
/*80427EC4 00424CC4*/ PPC::Runtime::ASM::li(context->r4, 0x100);
/*80427EC8 00424CC8*/ PPC::Runtime::ASM::b(.L_80427F00);
RUNTIME_PPC_JUMP_LABEL(.L_80427ECC, 0x80427ECC) //this is a jump label
/*80427ECC 00424CCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80427ED0 00424CD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r3));
/*80427ED4 00424CD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80427ED8 00424CD8*/ PPC::Runtime::ASM::beq(.L_80427EF4);
/*80427EDC 00424CDC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r3));
/*80427EE0 00424CE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80427EE4 00424CE4*/ PPC::Runtime::ASM::bne(.L_80427EF4);
/*80427EE8 00424CE8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80427EEC 00424CEC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80427EF0 00424CF0*/ PPC::Runtime::ASM::b(.L_80427FD0);
RUNTIME_PPC_JUMP_LABEL(.L_80427EF4, 0x80427EF4) //this is a jump label
/*80427EF4 00424CF4*/ PPC::Runtime::ASM::li(context->r4, 0x100);
/*80427EF8 00424CF8*/ PPC::Runtime::ASM::b(.L_80427F00);
RUNTIME_PPC_JUMP_LABEL(.L_80427EFC, 0x80427EFC) //this is a jump label
/*80427EFC 00424CFC*/ PPC::Runtime::ASM::li(context->r4, 0x100);
RUNTIME_PPC_JUMP_LABEL(.L_80427F00, 0x80427F00) //this is a jump label
/*80427F00 00424D00*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80427F04 00424D04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80427F08 00424D08*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80427F0C, 0x80427F0C) //this is a jump label
/*80427F0C 00424D0C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*80427F10 00424D10*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*80427F14 00424D14*/ PPC::Runtime::ASM::beq(.L_80427F38);
/*80427F18 00424D18*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*80427F1C 00424D1C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80427F20 00424D20*/ PPC::Runtime::ASM::bne(.L_80427F30);
/*80427F24 00424D24*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80427F28 00424D28*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80427F2C 00424D2C*/ PPC::Runtime::ASM::b(.L_80427FD0);
RUNTIME_PPC_JUMP_LABEL(.L_80427F30, 0x80427F30) //this is a jump label
/*80427F30 00424D30*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x100);
/*80427F34 00424D34*/ PPC::Runtime::ASM::b(.L_80427F40);
RUNTIME_PPC_JUMP_LABEL(.L_80427F38, 0x80427F38) //this is a jump label
/*80427F38 00424D38*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80427F3C 00424D3C*/ PPC::Runtime::ASM::bdnz(.L_80427F0C);
RUNTIME_PPC_JUMP_LABEL(.L_80427F40, 0x80427F40) //this is a jump label
/*80427F40 00424D40*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
/*80427F44 00424D44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80427F48 00424D48*/ PPC::Runtime::ASM::beq(.L_80427F64);
/*80427F4C 00424D4C*/ PPC::Runtime::ASM::bge(.L_80427F70);
/*80427F50 00424D50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80427F54 00424D54*/ PPC::Runtime::ASM::bge(.L_80427F5C);
/*80427F58 00424D58*/ PPC::Runtime::ASM::b(.L_80427F70);
RUNTIME_PPC_JUMP_LABEL(.L_80427F5C, 0x80427F5C) //this is a jump label
/*80427F5C 00424D5C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x80);
/*80427F60 00424D60*/ PPC::Runtime::ASM::b(.L_80427F70);
RUNTIME_PPC_JUMP_LABEL(.L_80427F64, 0x80427F64) //this is a jump label
/*80427F64 00424D64*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80427F68 00424D68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80427F6C 00424D6C*/ PPC::Runtime::ASM::b(.L_80427FD0);
RUNTIME_PPC_JUMP_LABEL(.L_80427F70, 0x80427F70) //this is a jump label
/*80427F70 00424D70*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80427F74 00424D74*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80427F78 00424D78*/ PPC::Runtime::ASM::beq(.L_80427FA0);
/*80427F7C 00424D7C*/ PPC::Runtime::ASM::bge(.L_80427F8C);
/*80427F80 00424D80*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80427F84 00424D84*/ PPC::Runtime::ASM::bge(.L_80427F98);
/*80427F88 00424D88*/ PPC::Runtime::ASM::b(.L_80427FB4);
RUNTIME_PPC_JUMP_LABEL(.L_80427F8C, 0x80427F8C) //this is a jump label
/*80427F8C 00424D8C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80427F90 00424D90*/ PPC::Runtime::ASM::bge(.L_80427FB4);
/*80427F94 00424D94*/ PPC::Runtime::ASM::b(.L_80427FA8);
RUNTIME_PPC_JUMP_LABEL(.L_80427F98, 0x80427F98) //this is a jump label
/*80427F98 00424D98*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 1);
/*80427F9C 00424D9C*/ PPC::Runtime::ASM::b(.L_80427FB4);
RUNTIME_PPC_JUMP_LABEL(.L_80427FA0, 0x80427FA0) //this is a jump label
/*80427FA0 00424DA0*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 2);
/*80427FA4 00424DA4*/ PPC::Runtime::ASM::b(.L_80427FB4);
RUNTIME_PPC_JUMP_LABEL(.L_80427FA8, 0x80427FA8) //this is a jump label
/*80427FA8 00424DA8*/ PPC::Runtime::ASM::srwi(context->r0, context->r4, 31);
/*80427FAC 00424DAC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*80427FB0 00424DB0*/ PPC::Runtime::ASM::srawi(context->r4, context->r0, 1);
RUNTIME_PPC_JUMP_LABEL(.L_80427FB4, 0x80427FB4) //this is a jump label
/*80427FB4 00424DB4*/ PPC::Runtime::ASM::li(context->r0, 0x100);
/*80427FB8 00424DB8*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r0);
/*80427FBC 00424DBC*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*80427FC0 00424DC0*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*80427FC4 00424DC4*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*80427FC8 00424DC8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*80427FCC 00424DCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80427FD0, 0x80427FD0) //this is a jump label
/*80427FD0 00424DD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r31));
/*80427FD4 00424DD4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80427FD8 00424DD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*80427FDC 00424DDC*/ PPC::Runtime::ASM::beq(.L_80428028);
/*80427FE0 00424DE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80427FE4 00424DE4*/ PPC::Runtime::ASM::bl(fn_HSD_TExpGetType);
/*80427FE8 00424DE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80427FEC 00424DEC*/ PPC::Runtime::ASM::beq(.L_80427FF4);
/*80427FF0 00424DF0*/ PPC::Runtime::ASM::b(.L_80428024);
RUNTIME_PPC_JUMP_LABEL(.L_80427FF4, 0x80427FF4) //this is a jump label
/*80427FF4 00424DF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80427FF8 00424DF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r3));
/*80427FFC 00424DFC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80428000 00424E00*/ PPC::Runtime::ASM::beq(.L_8042801C);
/*80428004 00424E04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r3));
/*80428008 00424E08*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8042800C 00424E0C*/ PPC::Runtime::ASM::bne(.L_8042801C);
/*80428010 00424E10*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80428014 00424E14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r31));
/*80428018 00424E18*/ PPC::Runtime::ASM::b(.L_804280F8);
RUNTIME_PPC_JUMP_LABEL(.L_8042801C, 0x8042801C) //this is a jump label
/*8042801C 00424E1C*/ PPC::Runtime::ASM::li(context->r4, 0x100);
/*80428020 00424E20*/ PPC::Runtime::ASM::b(.L_80428028);
RUNTIME_PPC_JUMP_LABEL(.L_80428024, 0x80428024) //this is a jump label
/*80428024 00424E24*/ PPC::Runtime::ASM::li(context->r4, 0x100);
RUNTIME_PPC_JUMP_LABEL(.L_80428028, 0x80428028) //this is a jump label
/*80428028 00424E28*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8042802C 00424E2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80428030 00424E30*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80428034, 0x80428034) //this is a jump label
/*80428034 00424E34*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r3));
/*80428038 00424E38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*8042803C 00424E3C*/ PPC::Runtime::ASM::beq(.L_80428060);
/*80428040 00424E40*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r31));
/*80428044 00424E44*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80428048 00424E48*/ PPC::Runtime::ASM::bne(.L_80428058);
/*8042804C 00424E4C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80428050 00424E50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r31));
/*80428054 00424E54*/ PPC::Runtime::ASM::b(.L_804280F8);
RUNTIME_PPC_JUMP_LABEL(.L_80428058, 0x80428058) //this is a jump label
/*80428058 00424E58*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x100);
/*8042805C 00424E5C*/ PPC::Runtime::ASM::b(.L_80428068);
RUNTIME_PPC_JUMP_LABEL(.L_80428060, 0x80428060) //this is a jump label
/*80428060 00424E60*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*80428064 00424E64*/ PPC::Runtime::ASM::bdnz(.L_80428034);
RUNTIME_PPC_JUMP_LABEL(.L_80428068, 0x80428068) //this is a jump label
/*80428068 00424E68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r31));
/*8042806C 00424E6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80428070 00424E70*/ PPC::Runtime::ASM::beq(.L_8042808C);
/*80428074 00424E74*/ PPC::Runtime::ASM::bge(.L_80428098);
/*80428078 00424E78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8042807C 00424E7C*/ PPC::Runtime::ASM::bge(.L_80428084);
/*80428080 00424E80*/ PPC::Runtime::ASM::b(.L_80428098);
RUNTIME_PPC_JUMP_LABEL(.L_80428084, 0x80428084) //this is a jump label
/*80428084 00424E84*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x80);
/*80428088 00424E88*/ PPC::Runtime::ASM::b(.L_80428098);
RUNTIME_PPC_JUMP_LABEL(.L_8042808C, 0x8042808C) //this is a jump label
/*8042808C 00424E8C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80428090 00424E90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r31));
/*80428094 00424E94*/ PPC::Runtime::ASM::b(.L_804280F8);
RUNTIME_PPC_JUMP_LABEL(.L_80428098, 0x80428098) //this is a jump label
/*80428098 00424E98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8042809C 00424E9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*804280A0 00424EA0*/ PPC::Runtime::ASM::beq(.L_804280C8);
/*804280A4 00424EA4*/ PPC::Runtime::ASM::bge(.L_804280B4);
/*804280A8 00424EA8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804280AC 00424EAC*/ PPC::Runtime::ASM::bge(.L_804280C0);
/*804280B0 00424EB0*/ PPC::Runtime::ASM::b(.L_804280DC);
RUNTIME_PPC_JUMP_LABEL(.L_804280B4, 0x804280B4) //this is a jump label
/*804280B4 00424EB4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*804280B8 00424EB8*/ PPC::Runtime::ASM::bge(.L_804280DC);
/*804280BC 00424EBC*/ PPC::Runtime::ASM::b(.L_804280D0);
RUNTIME_PPC_JUMP_LABEL(.L_804280C0, 0x804280C0) //this is a jump label
/*804280C0 00424EC0*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 1);
/*804280C4 00424EC4*/ PPC::Runtime::ASM::b(.L_804280DC);
RUNTIME_PPC_JUMP_LABEL(.L_804280C8, 0x804280C8) //this is a jump label
/*804280C8 00424EC8*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 2);
/*804280CC 00424ECC*/ PPC::Runtime::ASM::b(.L_804280DC);
RUNTIME_PPC_JUMP_LABEL(.L_804280D0, 0x804280D0) //this is a jump label
/*804280D0 00424ED0*/ PPC::Runtime::ASM::srwi(context->r0, context->r4, 31);
/*804280D4 00424ED4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*804280D8 00424ED8*/ PPC::Runtime::ASM::srawi(context->r4, context->r0, 1);
RUNTIME_PPC_JUMP_LABEL(.L_804280DC, 0x804280DC) //this is a jump label
/*804280DC 00424EDC*/ PPC::Runtime::ASM::li(context->r0, 0x100);
/*804280E0 00424EE0*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r0);
/*804280E4 00424EE4*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*804280E8 00424EE8*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*804280EC 00424EEC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*804280F0 00424EF0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*804280F4 00424EF4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_804280F8, 0x804280F8) //this is a jump label
/*804280F8 00424EF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804280FC 00424EFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80428100 00424F00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80428104 00424F04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80428108 00424F08*/ PPC::Runtime::ASM::blr();
}