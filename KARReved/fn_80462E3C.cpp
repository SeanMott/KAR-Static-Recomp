//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80462E3C(PPC::Runtime::GCContext* context)
{
/*80462E3C 0045FC3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80462E40 0045FC40*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 4);
/*80462E44 0045FC44*/ PPC::Runtime::ASM::add(context->r11, context->r3, context->r0);
/*80462E48 0045FC48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80462E4C 0045FC4C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61dc, context->r11));
/*80462E50 0045FC50*/ PPC::Runtime::ASM::addi(context->r0, context->r10, 0x1);
/*80462E54 0045FC54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61dc, context->r11));
/*80462E58 0045FC58*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61dc, context->r11));
/*80462E5C 0045FC5C*/ PPC::Runtime::ASM::lbz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*80462E60 0045FC60*/ PPC::Runtime::ASM::addi(context->r0, context->r9, 0x1);
/*80462E64 0045FC64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61dc, context->r11));
/*80462E68 0045FC68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6260, context->r3));
/*80462E6C 0045FC6C*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80462E70 0045FC70*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80462E74 0045FC74*/ PPC::Runtime::ASM::mr(context->r0, context->r9);
/*80462E78 0045FC78*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r10, 8, 16, 23);
/*80462E7C 0045FC7C*/ PPC::Runtime::ASM::beq(.L_80462EAC);
/*80462E80 0045FC80*/ PPC::Runtime::ASM::extrwi(context->r9, context->r0, 5, 21);
/*80462E84 0045FC84*/ PPC::Runtime::ASM::li(context->r11, 0x1);
/*80462E88 0045FC88*/ PPC::Runtime::ASM::mullw(context->r12, context->r9, context->r7);
/*80462E8C 0045FC8C*/ PPC::Runtime::ASM::extrwi(context->r10, context->r0, 1, 19);
/*80462E90 0045FC90*/ PPC::Runtime::ASM::extrwi(context->r9, context->r0, 1, 20);
/*80462E94 0045FC94*/ PPC::Runtime::ASM::clrlwi(context->r31, context->r0, 26);
/*80462E98 0045FC98*/ PPC::Runtime::ASM::slw(context->r9, context->r11, context->r9);
/*80462E9C 0045FC9C*/ PPC::Runtime::ASM::add(context->r11, context->r12, context->r6);
/*80462EA0 0045FCA0*/ PPC::Runtime::ASM::slw(context->r6, context->r7, context->r10);
/*80462EA4 0045FCA4*/ PPC::Runtime::ASM::add(context->r11, context->r31, context->r11);
/*80462EA8 0045FCA8*/ PPC::Runtime::ASM::b(.L_80462ED4);
RUNTIME_PPC_JUMP_LABEL(.L_80462EAC, 0x80462EAC) //this is a jump label
/*80462EAC 0045FCAC*/ PPC::Runtime::ASM::clrlwi(context->r9, context->r0, 26);
/*80462EB0 0045FCB0*/ PPC::Runtime::ASM::li(context->r11, 0x1);
/*80462EB4 0045FCB4*/ PPC::Runtime::ASM::mullw(context->r12, context->r9, context->r7);
/*80462EB8 0045FCB8*/ PPC::Runtime::ASM::extrwi(context->r10, context->r0, 1, 20);
/*80462EBC 0045FCBC*/ PPC::Runtime::ASM::extrwi(context->r9, context->r0, 1, 19);
/*80462EC0 0045FCC0*/ PPC::Runtime::ASM::extrwi(context->r31, context->r0, 5, 21);
/*80462EC4 0045FCC4*/ PPC::Runtime::ASM::slw(context->r9, context->r11, context->r9);
/*80462EC8 0045FCC8*/ PPC::Runtime::ASM::add(context->r11, context->r12, context->r6);
/*80462ECC 0045FCCC*/ PPC::Runtime::ASM::slw(context->r6, context->r7, context->r10);
/*80462ED0 0045FCD0*/ PPC::Runtime::ASM::add(context->r11, context->r31, context->r11);
RUNTIME_PPC_JUMP_LABEL(.L_80462ED4, 0x80462ED4) //this is a jump label
/*80462ED4 0045FCD4*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*80462ED8 0045FCD8*/ PPC::Runtime::ASM::add(context->r31, context->r11, context->r9);
/*80462EDC 0045FCDC*/ PPC::Runtime::ASM::extrwi(context->r7, context->r7, 4, 24);
/*80462EE0 0045FCE0*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80462EE4 0045FCE4*/ PPC::Runtime::ASM::mr(context->r10, context->r7);
/*80462EE8 0045FCE8*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80462EEC 0045FCEC*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80462EF0 0045FCF0*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80462EF4 0045FCF4*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*80462EF8 0045FCF8*/ PPC::Runtime::ASM::ble(.L_80462F04);
/*80462EFC 0045FCFC*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80462F00 0045FD00*/ PPC::Runtime::ASM::b(.L_80462F0C);
RUNTIME_PPC_JUMP_LABEL(.L_80462F04, 0x80462F04) //this is a jump label
/*80462F04 0045FD04*/ PPC::Runtime::ASM::bge(.L_80462F0C);
/*80462F08 0045FD08*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80462F0C, 0x80462F0C) //this is a jump label
/*80462F0C 0045FD0C*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r9);
/*80462F10 0045FD10*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80462F14 0045FD14*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80462F18 0045FD18*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80462F1C 0045FD1C*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80462F20 0045FD20*/ PPC::Runtime::ASM::ble(.L_80462F2C);
/*80462F24 0045FD24*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80462F28 0045FD28*/ PPC::Runtime::ASM::b(.L_80462F38);
RUNTIME_PPC_JUMP_LABEL(.L_80462F2C, 0x80462F2C) //this is a jump label
/*80462F2C 0045FD2C*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80462F30 0045FD30*/ PPC::Runtime::ASM::bge(.L_80462F38);
/*80462F34 0045FD34*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80462F38, 0x80462F38) //this is a jump label
/*80462F38 0045FD38*/ PPC::Runtime::ASM::lbzx(context->r12, context->r31, context->r9);
/*80462F3C 0045FD3C*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80462F40 0045FD40*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80462F44 0045FD44*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*80462F48 0045FD48*/ PPC::Runtime::ASM::ble(.L_80462F54);
/*80462F4C 0045FD4C*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80462F50 0045FD50*/ PPC::Runtime::ASM::b(.L_80462F60);
RUNTIME_PPC_JUMP_LABEL(.L_80462F54, 0x80462F54) //this is a jump label
/*80462F54 0045FD54*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80462F58 0045FD58*/ PPC::Runtime::ASM::bge(.L_80462F60);
/*80462F5C 0045FD5C*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80462F60, 0x80462F60) //this is a jump label
/*80462F60 0045FD60*/ PPC::Runtime::ASM::add(context->r11, context->r11, context->r6);
/*80462F64 0045FD64*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*80462F68 0045FD68*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80462F6C 0045FD6C*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80462F70 0045FD70*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80462F74 0045FD74*/ PPC::Runtime::ASM::ble(.L_80462F80);
/*80462F78 0045FD78*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80462F7C 0045FD7C*/ PPC::Runtime::ASM::b(.L_80462F8C);
RUNTIME_PPC_JUMP_LABEL(.L_80462F80, 0x80462F80) //this is a jump label
/*80462F80 0045FD80*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80462F84 0045FD84*/ PPC::Runtime::ASM::bge(.L_80462F8C);
/*80462F88 0045FD88*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80462F8C, 0x80462F8C) //this is a jump label
/*80462F8C 0045FD8C*/ PPC::Runtime::ASM::add(context->r31, context->r11, context->r9);
/*80462F90 0045FD90*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80462F94 0045FD94*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80462F98 0045FD98*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80462F9C 0045FD9C*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*80462FA0 0045FDA0*/ PPC::Runtime::ASM::ble(.L_80462FAC);
/*80462FA4 0045FDA4*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80462FA8 0045FDA8*/ PPC::Runtime::ASM::b(.L_80462FB8);
RUNTIME_PPC_JUMP_LABEL(.L_80462FAC, 0x80462FAC) //this is a jump label
/*80462FAC 0045FDAC*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80462FB0 0045FDB0*/ PPC::Runtime::ASM::bge(.L_80462FB8);
/*80462FB4 0045FDB4*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80462FB8, 0x80462FB8) //this is a jump label
/*80462FB8 0045FDB8*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r9);
/*80462FBC 0045FDBC*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80462FC0 0045FDC0*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80462FC4 0045FDC4*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80462FC8 0045FDC8*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*80462FCC 0045FDCC*/ PPC::Runtime::ASM::ble(.L_80462FD8);
/*80462FD0 0045FDD0*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80462FD4 0045FDD4*/ PPC::Runtime::ASM::b(.L_80462FE4);
RUNTIME_PPC_JUMP_LABEL(.L_80462FD8, 0x80462FD8) //this is a jump label
/*80462FD8 0045FDD8*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80462FDC 0045FDDC*/ PPC::Runtime::ASM::bge(.L_80462FE4);
/*80462FE0 0045FDE0*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80462FE4, 0x80462FE4) //this is a jump label
/*80462FE4 0045FDE4*/ PPC::Runtime::ASM::lbzx(context->r12, context->r31, context->r9);
/*80462FE8 0045FDE8*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80462FEC 0045FDEC*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80462FF0 0045FDF0*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*80462FF4 0045FDF4*/ PPC::Runtime::ASM::ble(.L_80463000);
/*80462FF8 0045FDF8*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80462FFC 0045FDFC*/ PPC::Runtime::ASM::b(.L_8046300C);
RUNTIME_PPC_JUMP_LABEL(.L_80463000, 0x80463000) //this is a jump label
/*80463000 0045FE00*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80463004 0045FE04*/ PPC::Runtime::ASM::bge(.L_8046300C);
/*80463008 0045FE08*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_8046300C, 0x8046300C) //this is a jump label
/*8046300C 0045FE0C*/ PPC::Runtime::ASM::add(context->r11, context->r11, context->r6);
/*80463010 0045FE10*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*80463014 0045FE14*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80463018 0045FE18*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*8046301C 0045FE1C*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80463020 0045FE20*/ PPC::Runtime::ASM::ble(.L_8046302C);
/*80463024 0045FE24*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80463028 0045FE28*/ PPC::Runtime::ASM::b(.L_80463038);
RUNTIME_PPC_JUMP_LABEL(.L_8046302C, 0x8046302C) //this is a jump label
/*8046302C 0045FE2C*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80463030 0045FE30*/ PPC::Runtime::ASM::bge(.L_80463038);
/*80463034 0045FE34*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80463038, 0x80463038) //this is a jump label
/*80463038 0045FE38*/ PPC::Runtime::ASM::add(context->r31, context->r11, context->r9);
/*8046303C 0045FE3C*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80463040 0045FE40*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80463044 0045FE44*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80463048 0045FE48*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r4));
/*8046304C 0045FE4C*/ PPC::Runtime::ASM::ble(.L_80463058);
/*80463050 0045FE50*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80463054 0045FE54*/ PPC::Runtime::ASM::b(.L_80463064);
RUNTIME_PPC_JUMP_LABEL(.L_80463058, 0x80463058) //this is a jump label
/*80463058 0045FE58*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*8046305C 0045FE5C*/ PPC::Runtime::ASM::bge(.L_80463064);
/*80463060 0045FE60*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80463064, 0x80463064) //this is a jump label
/*80463064 0045FE64*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r9);
/*80463068 0045FE68*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8046306C 0045FE6C*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80463070 0045FE70*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*80463074 0045FE74*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r4));
/*80463078 0045FE78*/ PPC::Runtime::ASM::ble(.L_80463084);
/*8046307C 0045FE7C*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*80463080 0045FE80*/ PPC::Runtime::ASM::b(.L_80463090);
RUNTIME_PPC_JUMP_LABEL(.L_80463084, 0x80463084) //this is a jump label
/*80463084 0045FE84*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*80463088 0045FE88*/ PPC::Runtime::ASM::bge(.L_80463090);
/*8046308C 0045FE8C*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_80463090, 0x80463090) //this is a jump label
/*80463090 0045FE90*/ PPC::Runtime::ASM::lbzx(context->r12, context->r31, context->r9);
/*80463094 0045FE94*/ PPC::Runtime::ASM::extrwi(context->r12, context->r12, 4, 24);
/*80463098 0045FE98*/ PPC::Runtime::ASM::cmpw(context->r12, context->r10);
/*8046309C 0045FE9C*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r4));
/*804630A0 0045FEA0*/ PPC::Runtime::ASM::ble(.L_804630AC);
/*804630A4 0045FEA4*/ PPC::Runtime::ASM::mr(context->r10, context->r12);
/*804630A8 0045FEA8*/ PPC::Runtime::ASM::b(.L_804630B8);
RUNTIME_PPC_JUMP_LABEL(.L_804630AC, 0x804630AC) //this is a jump label
/*804630AC 0045FEAC*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*804630B0 0045FEB0*/ PPC::Runtime::ASM::bge(.L_804630B8);
/*804630B4 0045FEB4*/ PPC::Runtime::ASM::mr(context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_804630B8, 0x804630B8) //this is a jump label
/*804630B8 0045FEB8*/ PPC::Runtime::ASM::add(context->r11, context->r11, context->r6);
/*804630BC 0045FEBC*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*804630C0 0045FEC0*/ PPC::Runtime::ASM::extrwi(context->r6, context->r6, 4, 24);
/*804630C4 0045FEC4*/ PPC::Runtime::ASM::cmpw(context->r6, context->r10);
/*804630C8 0045FEC8*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*804630CC 0045FECC*/ PPC::Runtime::ASM::ble(.L_804630D8);
/*804630D0 0045FED0*/ PPC::Runtime::ASM::mr(context->r10, context->r6);
/*804630D4 0045FED4*/ PPC::Runtime::ASM::b(.L_804630E4);
RUNTIME_PPC_JUMP_LABEL(.L_804630D8, 0x804630D8) //this is a jump label
/*804630D8 0045FED8*/ PPC::Runtime::ASM::cmpw(context->r6, context->r7);
/*804630DC 0045FEDC*/ PPC::Runtime::ASM::bge(.L_804630E4);
/*804630E0 0045FEE0*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_804630E4, 0x804630E4) //this is a jump label
/*804630E4 0045FEE4*/ PPC::Runtime::ASM::add(context->r11, context->r11, context->r9);
/*804630E8 0045FEE8*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*804630EC 0045FEEC*/ PPC::Runtime::ASM::extrwi(context->r6, context->r6, 4, 24);
/*804630F0 0045FEF0*/ PPC::Runtime::ASM::cmpw(context->r6, context->r10);
/*804630F4 0045FEF4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*804630F8 0045FEF8*/ PPC::Runtime::ASM::ble(.L_80463104);
/*804630FC 0045FEFC*/ PPC::Runtime::ASM::mr(context->r10, context->r6);
/*80463100 0045FF00*/ PPC::Runtime::ASM::b(.L_80463110);
RUNTIME_PPC_JUMP_LABEL(.L_80463104, 0x80463104) //this is a jump label
/*80463104 0045FF04*/ PPC::Runtime::ASM::cmpw(context->r6, context->r7);
/*80463108 0045FF08*/ PPC::Runtime::ASM::bge(.L_80463110);
/*8046310C 0045FF0C*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_80463110, 0x80463110) //this is a jump label
/*80463110 0045FF10*/ PPC::Runtime::ASM::add(context->r11, context->r11, context->r9);
/*80463114 0045FF14*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*80463118 0045FF18*/ PPC::Runtime::ASM::extrwi(context->r6, context->r6, 4, 24);
/*8046311C 0045FF1C*/ PPC::Runtime::ASM::cmpw(context->r6, context->r10);
/*80463120 0045FF20*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r4));
/*80463124 0045FF24*/ PPC::Runtime::ASM::ble(.L_80463130);
/*80463128 0045FF28*/ PPC::Runtime::ASM::mr(context->r10, context->r6);
/*8046312C 0045FF2C*/ PPC::Runtime::ASM::b(.L_8046313C);
RUNTIME_PPC_JUMP_LABEL(.L_80463130, 0x80463130) //this is a jump label
/*80463130 0045FF30*/ PPC::Runtime::ASM::cmpw(context->r6, context->r7);
/*80463134 0045FF34*/ PPC::Runtime::ASM::bge(.L_8046313C);
/*80463138 0045FF38*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_8046313C, 0x8046313C) //this is a jump label
/*8046313C 0045FF3C*/ PPC::Runtime::ASM::lbzx(context->r6, context->r11, context->r9);
/*80463140 0045FF40*/ PPC::Runtime::ASM::extrwi(context->r6, context->r6, 4, 24);
/*80463144 0045FF44*/ PPC::Runtime::ASM::cmpw(context->r6, context->r10);
/*80463148 0045FF48*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r4));
/*8046314C 0045FF4C*/ PPC::Runtime::ASM::ble(.L_80463158);
/*80463150 0045FF50*/ PPC::Runtime::ASM::mr(context->r10, context->r6);
/*80463154 0045FF54*/ PPC::Runtime::ASM::b(.L_80463164);
RUNTIME_PPC_JUMP_LABEL(.L_80463158, 0x80463158) //this is a jump label
/*80463158 0045FF58*/ PPC::Runtime::ASM::cmpw(context->r6, context->r7);
/*8046315C 0045FF5C*/ PPC::Runtime::ASM::bge(.L_80463164);
/*80463160 0045FF60*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_80463164, 0x80463164) //this is a jump label
/*80463164 0045FF64*/ PPC::Runtime::ASM::mulli(context->r6, context->r8, 0x14);
/*80463168 0045FF68*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r6);
/*8046316C 0045FF6C*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6160, context->r4));
/*80463170 0045FF70*/ PPC::Runtime::ASM::addi(context->r9, context->r6, 0x6150);
/*80463174 0045FF74*/ PPC::Runtime::ASM::add(context->r9, context->r3, context->r9);
/*80463178 0045FF78*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r11));
/*8046317C 0045FF7C*/ PPC::Runtime::ASM::b(.L_804631CC);
RUNTIME_PPC_JUMP_LABEL(.L_80463180, 0x80463180) //this is a jump label
/*80463180 0045FF80*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*80463184 0045FF84*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80463188 0045FF88*/ PPC::Runtime::ASM::bge(.L_804631A8);
/*8046318C 0045FF8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80463190 0045FF90*/ PPC::Runtime::ASM::li(context->r6, 0x1f);
/*80463194 0045FF94*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x4);
/*80463198 0045FF98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8046319C 0045FF9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804631A0 0045FFA0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*804631A4 0045FFA4*/ PPC::Runtime::ASM::b(.L_804631AC);
RUNTIME_PPC_JUMP_LABEL(.L_804631A8, 0x804631A8) //this is a jump label
/*804631A8 0045FFA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
RUNTIME_PPC_JUMP_LABEL(.L_804631AC, 0x804631AC) //this is a jump label
/*804631AC 0045FFAC*/ PPC::Runtime::ASM::srw(context->r3, context->r3, context->r6);
/*804631B0 0045FFB0*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x1);
/*804631B4 0045FFB4*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r3, 31, 11);
/*804631B8 0045FFB8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*804631BC 0045FFBC*/ PPC::Runtime::ASM::slwi(context->r3, context->r8, 2);
/*804631C0 0045FFC0*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*804631C4 0045FFC4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*804631C8 0045FFC8*/ PPC::Runtime::ASM::lwzx(context->r8, context->r11, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_804631CC, 0x804631CC) //this is a jump label
/*804631CC 0045FFCC*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x100);
/*804631D0 0045FFD0*/ PPC::Runtime::ASM::bge(.L_80463180);
/*804631D4 0045FFD4*/ PPC::Runtime::ASM::slwi(context->r3, context->r8, 2);
/*804631D8 0045FFD8*/ PPC::Runtime::ASM::subf(context->r6, context->r7, context->r10);
/*804631DC 0045FFDC*/ PPC::Runtime::ASM::add(context->r7, context->r11, context->r3);
/*804631E0 0045FFE0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805B4BF8 @ Get_MemoryOffset_HighBit);
/*804631E4 0045FFE4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*804631E8 0045FFE8*/ PPC::Runtime::ASM::rlwinm.(context->r3, context->r0, 0, 16, 16);
/*804631EC 0045FFEC*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*804631F0 0045FFF0*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 17);
/*804631F4 0045FFF4*/ PPC::Runtime::ASM::slwi(context->r6, context->r6, 2);
/*804631F8 0045FFF8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_1805B4BF8 @ Get_MemoryOffset_LowBit);
/*804631FC 0045FFFC*/ PPC::Runtime::ASM::add(context->r0, context->r9, context->r8);
/*80463200 00460000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80463204 00460004*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80463208 00460008*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r6);
/*8046320C 0046000C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*80463210 00460010*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r0);
/*80463214 00460014*/ PPC::Runtime::ASM::beq(.L_8046321C);
/*80463218 00460018*/ PPC::Runtime::ASM::neg(context->r3, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8046321C, 0x8046321C) //this is a jump label
/*8046321C 0046001C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80463220 00460020*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80463224 00460024*/ PPC::Runtime::ASM::blr();
}