//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GXSetChanMatColor.hpp"
#include "fn_HSD_LObjGetActiveByID.hpp"
#include "fn_HSD_MulColor.hpp"
#include "fn_GXSetChanAmbColor.hpp"



void fn_psDispParticles(PPC::Runtime::GCContext* context)
{
/*80437168 00433F68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8043716C 00433F6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80437170 00433F70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80437174 00433F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 80437178 00433F78  54 00 00 01 */ clrrwi. context->r0 , context->r0 , 31
/*8043717C 00433F7C*/ PPC::Runtime::ASM::beq(.L_804373CC);
/*80437180 00433F80*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80437184 00433F84*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80437188 00433F88*/ PPC::Runtime::ASM::beq(.L_804371E4);
/*8043718C 00433F8C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7a, context->r3));
/*80437190 00433F90*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x86, context->r3));
/*80437194 00433F94*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 16);
/*80437198 00433F98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x82, context->r3));
/*8043719C 00433F9C*/ PPC::Runtime::ASM::divw(context->r5, context->r4, context->r5);
/*804371A0 00433FA0*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
/*804371A4 00433FA4*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 16);
/*804371A8 00433FA8*/ PPC::Runtime::ASM::mullw(context->r0, context->r5, context->r0);
/*804371AC 00433FAC*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804371B0 00433FB0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 16);
/*804371B4 00433FB4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*804371B8 00433FB8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*804371BC 00433FBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804371C0 00433FC0*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87, context->r3));
/*804371C4 00433FC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83, context->r3));
/*804371C8 00433FC8*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 16);
/*804371CC 00433FCC*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
/*804371D0 00433FD0*/ PPC::Runtime::ASM::mullw(context->r0, context->r5, context->r0);
/*804371D4 00433FD4*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*804371D8 00433FD8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 16);
/*804371DC 00433FDC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r1));
/*804371E0 00433FE0*/ PPC::Runtime::ASM::b(.L_804371FC);
RUNTIME_PPC_JUMP_LABEL(.L_804371E4, 0x804371E4) //this is a jump label
/*804371E4 00433FE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x82, context->r3));
/*804371E8 00433FE8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*804371EC 00433FEC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*804371F0 00433FF0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804371F4 00433FF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83, context->r3));
/*804371F8 00433FF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_804371FC, 0x804371FC) //this is a jump label
/*804371FC 00433FFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80437200 00434000*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 24, 24);
/*80437204 00434004*/ PPC::Runtime::ASM::beq(.L_8043721C);
/*80437208 00434008*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8043720C 0043400C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r1));
/*80437210 00434010*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r1));
/*80437214 00434014*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80437218 00434018*/ PPC::Runtime::ASM::b(.L_804372FC);
RUNTIME_PPC_JUMP_LABEL(.L_8043721C, 0x8043721C) //this is a jump label
/*8043721C 0043401C*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*80437220 00434020*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80437224 00434024*/ PPC::Runtime::ASM::beq(.L_804372B8);
/*80437228 00434028*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*8043722C 0043402C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*80437230 00434030*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 16);
/*80437234 00434034*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*80437238 00434038*/ PPC::Runtime::ASM::divw(context->r10, context->r0, context->r5);
/*8043723C 0043403C*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x71, context->r3));
/*80437240 00434040*/ PPC::Runtime::ASM::subf(context->r5, context->r6, context->r4);
/*80437244 00434044*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r3));
/*80437248 00434048*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r3));
/*8043724C 0043404C*/ PPC::Runtime::ASM::slwi(context->r9, context->r6, 16);
/*80437250 00434050*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80437254 00434054*/ PPC::Runtime::ASM::mullw(context->r8, context->r10, context->r5);
/*80437258 00434058*/ PPC::Runtime::ASM::subf(context->r5, context->r7, context->r0);
/*8043725C 0043405C*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x73, context->r3));
/*80437260 00434060*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r3));
/*80437264 00434064*/ PPC::Runtime::ASM::subf(context->r4, context->r11, context->r4);
/*80437268 00434068*/ PPC::Runtime::ASM::slwi(context->r7, context->r7, 16);
/*8043726C 0043406C*/ PPC::Runtime::ASM::mullw(context->r6, context->r10, context->r5);
/*80437270 00434070*/ PPC::Runtime::ASM::subf(context->r0, context->r12, context->r0);
/*80437274 00434074*/ PPC::Runtime::ASM::add(context->r3, context->r9, context->r8);
/*80437278 00434078*/ PPC::Runtime::ASM::slwi(context->r5, context->r11, 16);
/*8043727C 0043407C*/ PPC::Runtime::ASM::srawi(context->r8, context->r3, 16);
/*80437280 00434080*/ PPC::Runtime::ASM::slwi(context->r3, context->r12, 16);
/*80437284 00434084*/ PPC::Runtime::ASM::mullw(context->r4, context->r10, context->r4);
/*80437288 00434088*/ PPC::Runtime::ASM::add(context->r6, context->r7, context->r6);
/*8043728C 0043408C*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80437290 00434090*/ PPC::Runtime::ASM::srawi(context->r6, context->r6, 16);
/*80437294 00434094*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r1));
/*80437298 00434098*/ PPC::Runtime::ASM::mullw(context->r0, context->r10, context->r0);
/*8043729C 0043409C*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*804372A0 004340A0*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 16);
/*804372A4 004340A4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r1));
/*804372A8 004340A8*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*804372AC 004340AC*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 16);
/*804372B0 004340B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r1));
/*804372B4 004340B4*/ PPC::Runtime::ASM::b(.L_804372C0);
RUNTIME_PPC_JUMP_LABEL(.L_804372B8, 0x804372B8) //this is a jump label
/*804372B8 004340B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*804372BC 004340BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_804372C0, 0x804372C0) //this is a jump label
/*804372C0 004340C0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804372C4 004340C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804372C8 004340C8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*804372CC 004340CC*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r0);
/*804372D0 004340D0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r1));
/*804372D4 004340D4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*804372D8 004340D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r1));
/*804372DC 004340DC*/ PPC::Runtime::ASM::srawi(context->r6, context->r6, 8);
/*804372E0 004340E0*/ PPC::Runtime::ASM::mullw(context->r4, context->r5, context->r4);
/*804372E4 004340E4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804372E8 004340E8*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 8);
/*804372EC 004340EC*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*804372F0 004340F0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*804372F4 004340F4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 8);
/*804372F8 004340F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_804372FC, 0x804372FC) //this is a jump label
/*804372FC 004340FC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80437300 00434100*/ PPC::Runtime::ASM::lbz(context->r0, STRUCT_BYTE4_COUNT_1805DE3A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80437304 00434104*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80437308 00434108*/ PPC::Runtime::ASM::bne(.L_80437330);
/*8043730C 0043410C*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805DE3A8 @ Get_MemoryOffset_SDA21);
/*80437310 00434110*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r1));
/*80437314 00434114*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*80437318 00434118*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8043731C 0043411C*/ PPC::Runtime::ASM::bne(.L_80437330);
/*80437320 00434120*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r1));
/*80437324 00434124*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80437328 00434128*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8043732C 0043412C*/ PPC::Runtime::ASM::beq(.L_80437348);
RUNTIME_PPC_JUMP_LABEL(.L_80437330, 0x80437330) //this is a jump label
/*80437330 00434130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80437334 00434134*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*80437338 00434138*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043733C 0043413C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE3A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80437340 00434140*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80437344 00434144*/ PPC::Runtime::ASM::bl(fn_GXSetChanMatColor);
RUNTIME_PPC_JUMP_LABEL(.L_80437348, 0x80437348) //this is a jump label
/*80437348 00434148*/ PPC::Runtime::ASM::li(context->r3, 0x100);
/*8043734C 0043414C*/ PPC::Runtime::ASM::bl(fn_HSD_LObjGetActiveByID);
/* 80437350 00434150  7C 64 1B 79 */ mr. context->r4 , context->r3
/*80437354 00434154*/ PPC::Runtime::ASM::beq(.L_8043736C);
/*80437358 00434158*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8043735C 0043415C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x10);
/*80437360 00434160*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80437364 00434164*/ PPC::Runtime::ASM::bl(fn_HSD_MulColor);
/*80437368 00434168*/ PPC::Runtime::ASM::b(.L_8043737C);
RUNTIME_PPC_JUMP_LABEL(.L_8043736C, 0x8043736C) //this is a jump label
/*8043736C 0043416C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80437370 00434170*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*80437374 00434174*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*80437378 00434178*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8043737C, 0x8043737C) //this is a jump label
/*8043737C 0043417C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80437380 00434180*/ PPC::Runtime::ASM::lbz(context->r0, STRUCT_BYTE4_COUNT_1805DE3A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80437384 00434184*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80437388 00434188*/ PPC::Runtime::ASM::bne(.L_804373B0);
/*8043738C 0043418C*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805DE3A4 @ Get_MemoryOffset_SDA21);
/*80437390 00434190*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r1));
/*80437394 00434194*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*80437398 00434198*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8043739C 0043419C*/ PPC::Runtime::ASM::bne(.L_804373B0);
/*804373A0 004341A0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r1));
/*804373A4 004341A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*804373A8 004341A8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*804373AC 004341AC*/ PPC::Runtime::ASM::beq(.L_804373CC);
RUNTIME_PPC_JUMP_LABEL(.L_804373B0, 0x804373B0) //this is a jump label
/*804373B0 004341B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804373B4 004341B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*804373B8 004341B8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804373BC 004341BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804373C0 004341C0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE3A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804373C4 004341C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804373C8 004341C8*/ PPC::Runtime::ASM::bl(fn_GXSetChanAmbColor);
RUNTIME_PPC_JUMP_LABEL(.L_804373CC, 0x804373CC) //this is a jump label
/*804373CC 004341CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804373D0 004341D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804373D4 004341D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804373D8 004341D8*/ PPC::Runtime::ASM::blr();
}