//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_IPGetSockOpt.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_TCPGetSockOpt(PPC::Runtime::GCContext* context)
{
/*80477028 00473E28*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047702C 00473E2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80477030 00473E30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80477034 00473E34*/ PPC::Runtime::ASM::stmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80477038 00473E38*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*8047703C 00473E3C*/ PPC::Runtime::ASM::addi(context->r25, context->r4, 0x0);
/*80477040 00473E40*/ PPC::Runtime::ASM::addi(context->r26, context->r5, 0x0);
/*80477044 00473E44*/ PPC::Runtime::ASM::addi(context->r29, context->r6, 0x0);
/*80477048 00473E48*/ PPC::Runtime::ASM::addi(context->r30, context->r7, 0x0);
/*8047704C 00473E4C*/ PPC::Runtime::ASM::li(context->r27, -0xe);
/*80477050 00473E50*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80477054 00473E54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80477058 00473E58*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*8047705C 00473E5C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*80477060 00473E60*/ PPC::Runtime::ASM::beq(.L_8047706C);
/*80477064 00473E64*/ PPC::Runtime::ASM::li(context->r27, -0xc);
/*80477068 00473E68*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_8047706C, 0x8047706C) //this is a jump label
/*8047706C 00473E6C*/ PPC::Runtime::ASM::addis(context->r0, context->r25, 0x0);
/*80477070 00473E70*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80477074 00473E74*/ PPC::Runtime::ASM::bne(.L_8047719C);
/*80477078 00473E78*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x100);
/*8047707C 00473E7C*/ PPC::Runtime::ASM::beq(.L_804770E8);
/*80477080 00473E80*/ PPC::Runtime::ASM::bge(.L_8047709C);
/*80477084 00473E84*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x80);
/*80477088 00473E88*/ PPC::Runtime::ASM::beq(.L_80477154);
/*8047708C 00473E8C*/ PPC::Runtime::ASM::bge(.L_8047724C);
/*80477090 00473E90*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x4);
/*80477094 00473E94*/ PPC::Runtime::ASM::beq(.L_804770A8);
/*80477098 00473E98*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_8047709C, 0x8047709C) //this is a jump label
/*8047709C 00473E9C*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x1008);
/*804770A0 00473EA0*/ PPC::Runtime::ASM::beq(.L_80477128);
/*804770A4 00473EA4*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_804770A8, 0x804770A8) //this is a jump label
/*804770A8 00473EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804770AC 00473EAC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*804770B0 00473EB0*/ PPC::Runtime::ASM::blt(.L_804770E0);
/*804770B4 00473EB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*804770B8 00473EB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 15, 15);
/*804770BC 00473EBC*/ PPC::Runtime::ASM::beq(.L_804770C8);
/*804770C0 00473EC0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*804770C4 00473EC4*/ PPC::Runtime::ASM::b(.L_804770CC);
RUNTIME_PPC_JUMP_LABEL(.L_804770C8, 0x804770C8) //this is a jump label
/*804770C8 00473EC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_804770CC, 0x804770CC) //this is a jump label
/*804770CC 00473ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*804770D0 00473ED0*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*804770D4 00473ED4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*804770D8 00473ED8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804770DC 00473EDC*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_804770E0, 0x804770E0) //this is a jump label
/*804770E0 00473EE0*/ PPC::Runtime::ASM::li(context->r27, -0xc);
/*804770E4 00473EE4*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_804770E8, 0x804770E8) //this is a jump label
/*804770E8 00473EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804770EC 00473EEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*804770F0 00473EF0*/ PPC::Runtime::ASM::blt(.L_80477120);
/*804770F4 00473EF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*804770F8 00473EF8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 24, 24);
/*804770FC 00473EFC*/ PPC::Runtime::ASM::beq(.L_80477108);
/*80477100 00473F00*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80477104 00473F04*/ PPC::Runtime::ASM::b(.L_8047710C);
RUNTIME_PPC_JUMP_LABEL(.L_80477108, 0x80477108) //this is a jump label
/*80477108 00473F08*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8047710C, 0x8047710C) //this is a jump label
/*8047710C 00473F0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80477110 00473F10*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80477114 00473F14*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80477118 00473F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8047711C 00473F1C*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_80477120, 0x80477120) //this is a jump label
/*80477120 00473F20*/ PPC::Runtime::ASM::li(context->r27, -0xc);
/*80477124 00473F24*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_80477128, 0x80477128) //this is a jump label
/*80477128 00473F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8047712C 00473F2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*80477130 00473F30*/ PPC::Runtime::ASM::blt(.L_8047714C);
/*80477134 00473F34*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80477138 00473F38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8047713C 00473F3C*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80477140 00473F40*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80477144 00473F44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80477148 00473F48*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_8047714C, 0x8047714C) //this is a jump label
/*8047714C 00473F4C*/ PPC::Runtime::ASM::li(context->r27, -0xc);
/*80477150 00473F50*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_80477154, 0x80477154) //this is a jump label
/*80477154 00473F54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80477158 00473F58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*8047715C 00473F5C*/ PPC::Runtime::ASM::blt(.L_80477194);
/*80477160 00473F60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*80477164 00473F64*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*80477168 00473F68*/ PPC::Runtime::ASM::beq(.L_80477174);
/*8047716C 00473F6C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80477170 00473F70*/ PPC::Runtime::ASM::b(.L_80477178);
RUNTIME_PPC_JUMP_LABEL(.L_80477174, 0x80477174) //this is a jump label
/*80477174 00473F74*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80477178, 0x80477178) //this is a jump label
/*80477178 00473F78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8047717C 00473F7C*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80477180 00473F80*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80477184 00473F84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27c, context->r28));
/*80477188 00473F88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8047718C 00473F8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80477190 00473F90*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_80477194, 0x80477194) //this is a jump label
/*80477194 00473F94*/ PPC::Runtime::ASM::li(context->r27, -0xc);
/*80477198 00473F98*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_8047719C, 0x8047719C) //this is a jump label
/*8047719C 00473F9C*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*804771A0 00473FA0*/ PPC::Runtime::ASM::bne(.L_804771C4);
/*804771A4 00473FA4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*804771A8 00473FA8*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*804771AC 00473FAC*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x0);
/*804771B0 00473FB0*/ PPC::Runtime::ASM::addi(context->r6, context->r29, 0x0);
/*804771B4 00473FB4*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0x0);
/*804771B8 00473FB8*/ PPC::Runtime::ASM::bl(fn_IPGetSockOpt);
/*804771BC 00473FBC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*804771C0 00473FC0*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_804771C4, 0x804771C4) //this is a jump label
/*804771C4 00473FC4*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x6);
/*804771C8 00473FC8*/ PPC::Runtime::ASM::bne(.L_8047724C);
/*804771CC 00473FCC*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x2002);
/*804771D0 00473FD0*/ PPC::Runtime::ASM::beq(.L_80477224);
/*804771D4 00473FD4*/ PPC::Runtime::ASM::bge(.L_8047724C);
/*804771D8 00473FD8*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x2001);
/*804771DC 00473FDC*/ PPC::Runtime::ASM::bge(.L_804771E4);
/*804771E0 00473FE0*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_804771E4, 0x804771E4) //this is a jump label
/*804771E4 00473FE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804771E8 00473FE8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*804771EC 00473FEC*/ PPC::Runtime::ASM::blt(.L_8047721C);
/*804771F0 00473FF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r28));
/*804771F4 00473FF4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*804771F8 00473FF8*/ PPC::Runtime::ASM::beq(.L_80477204);
/*804771FC 00473FFC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80477200 00474000*/ PPC::Runtime::ASM::b(.L_80477208);
RUNTIME_PPC_JUMP_LABEL(.L_80477204, 0x80477204) //this is a jump label
/*80477204 00474004*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80477208, 0x80477208) //this is a jump label
/*80477208 00474008*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8047720C 0047400C*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80477210 00474010*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80477214 00474014*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80477218 00474018*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_8047721C, 0x8047721C) //this is a jump label
/*8047721C 0047401C*/ PPC::Runtime::ASM::li(context->r27, -0xc);
/*80477220 00474020*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_80477224, 0x80477224) //this is a jump label
/*80477224 00474024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80477228 00474028*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*8047722C 0047402C*/ PPC::Runtime::ASM::blt(.L_80477248);
/*80477230 00474030*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/*80477234 00474034*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80477238 00474038*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8047723C 0047403C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80477240 00474040*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80477244 00474044*/ PPC::Runtime::ASM::b(.L_8047724C);
RUNTIME_PPC_JUMP_LABEL(.L_80477248, 0x80477248) //this is a jump label
/*80477248 00474048*/ PPC::Runtime::ASM::li(context->r27, -0xc);
RUNTIME_PPC_JUMP_LABEL(.L_8047724C, 0x8047724C) //this is a jump label
/*8047724C 0047404C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80477250 00474050*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80477254 00474054*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80477258 00474058*/ PPC::Runtime::ASM::lmw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047725C 0047405C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80477260 00474060*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80477264 00474064*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80477268 00474068*/ PPC::Runtime::ASM::blr();
}