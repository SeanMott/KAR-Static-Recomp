//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80398110.hpp"



void fn_80398110(PPC::Runtime::GCContext* context)
{
/*80398110 00394F10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80398114 00394F14*/ PPC::Runtime::ASM::mflr(context->r0);
/*80398118 00394F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8039811C 00394F1C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80398120 00394F20*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80398124 00394F24*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80398128 00394F28*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8039812C 00394F2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80398130 00394F30*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80398134 00394F34*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398138 00394F38*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039813C 00394F3C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80398140 00394F40*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80398144 00394F44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*80398148 00394F48*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039814C 00394F4C*/ PPC::Runtime::ASM::beq(.L_80398164);
/*80398150 00394F50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398154 00394F54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*80398158 00394F58*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039815C 00394F5C*/ PPC::Runtime::ASM::bctrl();
/*80398160 00394F60*/ PPC::Runtime::ASM::b(.L_80398168);
RUNTIME_PPC_JUMP_LABEL(.L_80398164, 0x80398164) //this is a jump label
/*80398164 00394F64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80398168, 0x80398168) //this is a jump label
/*80398168 00394F68*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8039816C 00394F6C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r30));
/*80398170 00394F70*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80398174 00394F74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80398178 00394F78*/ PPC::Runtime::ASM::add(context->r29, context->r0, context->r3);
/*8039817C 00394F7C*/ PPC::Runtime::ASM::add(context->r29, context->r4, context->r29);
/*80398180 00394F80*/ PPC::Runtime::ASM::beq(.L_803981A0);
/*80398184 00394F84*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80398188 00394F88*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8039818C 00394F8C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80398190 00394F90*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80398194 00394F94*/ PPC::Runtime::ASM::bctrl();
/*80398198 00394F98*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8039819C 00394F9C*/ PPC::Runtime::ASM::b(.L_803981A4);
RUNTIME_PPC_JUMP_LABEL(.L_803981A0, 0x803981A0) //this is a jump label
/*803981A0 00394FA0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803981A4, 0x803981A4) //this is a jump label
/*803981A4 00394FA4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*803981A8 00394FA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803981AC 00394FAC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803981B0 00394FB0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*803981B4 00394FB4*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*803981B8 00394FB8*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r4);
/*803981BC 00394FBC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803981C0 00394FC0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803981C4 00394FC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803981C8 00394FC8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803981CC 00394FCC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803981D0 00394FD0*/ PPC::Runtime::ASM::bctrl();
/*803981D4 00394FD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803981D8 00394FD8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*803981DC 00394FDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803981E0 00394FE0*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803981E4 00394FE4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803981E8 00394FE8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r30));
/*803981EC 00394FEC*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*803981F0 00394FF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803981F4 00394FF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*803981F8 00394FF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803981FC 00394FFC*/ PPC::Runtime::ASM::beq(.L_803983A0);
/*80398200 00395000*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398204 00395004*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x10);
/*80398208 00395008*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*8039820C 0039500C*/ PPC::Runtime::ASM::bge(.L_80398214);
/*80398210 00395010*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80398214, 0x80398214) //this is a jump label
/*80398214 00395014*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80398218 00395018*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8039821C 0039501C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80398220 00395020*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80398224 00395024*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80398228 00395028*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039822C 0039502C*/ PPC::Runtime::ASM::bge(.L_80398234);
/*80398230 00395030*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_80398234, 0x80398234) //this is a jump label
/*80398234 00395034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80398238 00395038*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039823C 0039503C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80398240 00395040*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80398244 00395044*/ PPC::Runtime::ASM::beq(.L_80398260);
/*80398248 00395048*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039824C 0039504C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80398250 00395050*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80398254 00395054*/ PPC::Runtime::ASM::bctrl();
/*80398258 00395058*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039825C 0039505C*/ PPC::Runtime::ASM::b(.L_80398264);
RUNTIME_PPC_JUMP_LABEL(.L_80398260, 0x80398260) //this is a jump label
/*80398260 00395060*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80398264, 0x80398264) //this is a jump label
/*80398264 00395064*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80398268 00395068*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039826C 0039506C*/ PPC::Runtime::ASM::beq(.L_80398284);
/*80398270 00395070*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398274 00395074*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80398278 00395078*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039827C 0039507C*/ PPC::Runtime::ASM::bctrl();
/*80398280 00395080*/ PPC::Runtime::ASM::b(.L_80398288);
RUNTIME_PPC_JUMP_LABEL(.L_80398284, 0x80398284) //this is a jump label
/*80398284 00395084*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80398288, 0x80398288) //this is a jump label
/*80398288 00395088*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039828C 0039508C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r29);
/*80398290 00395090*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80398294 00395094*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*80398298 00395098*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8039829C 0039509C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803982A0 003950A0*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*803982A4 003950A4*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*803982A8 003950A8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803982AC 003950AC*/ PPC::Runtime::ASM::bge(.L_803982B4);
/*803982B0 003950B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
RUNTIME_PPC_JUMP_LABEL(.L_803982B4, 0x803982B4) //this is a jump label
/*803982B4 003950B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803982B8 003950B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803982BC 003950BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*803982C0 003950C0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803982C4 003950C4*/ PPC::Runtime::ASM::beq(.L_803982E0);
/*803982C8 003950C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803982CC 003950CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803982D0 003950D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803982D4 003950D4*/ PPC::Runtime::ASM::bctrl();
/*803982D8 003950D8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803982DC 003950DC*/ PPC::Runtime::ASM::b(.L_803982E4);
RUNTIME_PPC_JUMP_LABEL(.L_803982E0, 0x803982E0) //this is a jump label
/*803982E0 003950E0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803982E4, 0x803982E4) //this is a jump label
/*803982E4 003950E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*803982E8 003950E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803982EC 003950EC*/ PPC::Runtime::ASM::beq(.L_80398304);
/*803982F0 003950F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803982F4 003950F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803982F8 003950F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803982FC 003950FC*/ PPC::Runtime::ASM::bctrl();
/*80398300 00395100*/ PPC::Runtime::ASM::b(.L_80398308);
RUNTIME_PPC_JUMP_LABEL(.L_80398304, 0x80398304) //this is a jump label
/*80398304 00395104*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80398308, 0x80398308) //this is a jump label
/*80398308 00395108*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039830C 0039510C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r29);
/*80398310 00395110*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r30));
/*80398314 00395114*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*80398318 00395118*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8039831C 0039511C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80398320 00395120*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*80398324 00395124*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80398328 00395128*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8039832C 0039512C*/ PPC::Runtime::ASM::bge(.L_80398334);
/*80398330 00395130*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
RUNTIME_PPC_JUMP_LABEL(.L_80398334, 0x80398334) //this is a jump label
/*80398334 00395134*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398338 00395138*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039833C 0039513C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398340 00395140*/ PPC::Runtime::ASM::cmpw(context->r4, context->r6);
/*80398344 00395144*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80398348 00395148*/ PPC::Runtime::ASM::bgt(.L_803983A0);
/*8039834C 0039514C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80398350 00395150*/ PPC::Runtime::ASM::cmpw(context->r5, context->r7);
/*80398354 00395154*/ PPC::Runtime::ASM::bgt(.L_803983A0);
/*80398358 00395158*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8039835C 0039515C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80398360 00395160*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80398364 00395164*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80398368 00395168*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8039836C 0039516C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80398370 00395170*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80398374 00395174*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80398378 00395178*/ PPC::Runtime::ASM::bctrl();
/*8039837C 0039517C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80398380 00395180*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80398384 00395184*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80398388 00395188*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8039838C 0039518C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398390 00395190*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r30));
/*80398394 00395194*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80398398 00395198*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039839C 0039519C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803983A0, 0x803983A0) //this is a jump label
/*803983A0 003951A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*803983A4 003951A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803983A8 003951A8*/ PPC::Runtime::ASM::beq(.L_803983C0);
/*803983AC 003951AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803983B0 003951B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803983B4 003951B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803983B8 003951B8*/ PPC::Runtime::ASM::bctrl();
/*803983BC 003951BC*/ PPC::Runtime::ASM::b(.L_803983C4);
RUNTIME_PPC_JUMP_LABEL(.L_803983C0, 0x803983C0) //this is a jump label
/*803983C0 003951C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803983C4, 0x803983C4) //this is a jump label
/*803983C4 003951C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803983C8 003951C8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*803983CC 003951CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803983D0 003951D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*803983D4 003951D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803983D8 003951D8*/ PPC::Runtime::ASM::beq(.L_803983F0);
/*803983DC 003951DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803983E0 003951E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803983E4 003951E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803983E8 003951E8*/ PPC::Runtime::ASM::bctrl();
/*803983EC 003951EC*/ PPC::Runtime::ASM::b(.L_803983F4);
RUNTIME_PPC_JUMP_LABEL(.L_803983F0, 0x803983F0) //this is a jump label
/*803983F0 003951F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803983F4, 0x803983F4) //this is a jump label
/*803983F4 003951F4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803983F8 003951F8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*803983FC 003951FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398400 00395200*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80398404 00395204*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r3);
/*80398408 00395208*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039840C 0039520C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r6);
/*80398410 00395210*/ PPC::Runtime::ASM::bge(.L_80398418);
/*80398414 00395214*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80398418, 0x80398418) //this is a jump label
/*80398418 00395218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039841C 0039521C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80398420 00395220*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80398424 00395224*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80398428 00395228*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*8039842C 0039522C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398430 00395230*/ PPC::Runtime::ASM::bge(.L_80398438);
/*80398434 00395234*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_80398438, 0x80398438) //this is a jump label
/*80398438 00395238*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039843C 0039523C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*80398440 00395240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80398444 00395244*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80398448 00395248*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8039844C 0039524C*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r4);
/*80398450 00395250*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80398454 00395254*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80398458 00395258*/ PPC::Runtime::ASM::bge(.L_80398460);
/*8039845C 0039525C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
RUNTIME_PPC_JUMP_LABEL(.L_80398460, 0x80398460) //this is a jump label
/*80398460 00395260*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398464 00395264*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*80398468 00395268*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039846C 0039526C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80398470 00395270*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r30));
/*80398474 00395274*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*80398478 00395278*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8039847C 0039527C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80398480 00395280*/ PPC::Runtime::ASM::bge(.L_80398488);
/*80398484 00395284*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
RUNTIME_PPC_JUMP_LABEL(.L_80398488, 0x80398488) //this is a jump label
/*80398488 00395288*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039848C 0039528C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80398490 00395290*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398494 00395294*/ PPC::Runtime::ASM::cmpw(context->r6, context->r4);
/*80398498 00395298*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039849C 0039529C*/ PPC::Runtime::ASM::blt(.L_80398678);
/*803984A0 003952A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803984A4 003952A4*/ PPC::Runtime::ASM::cmpw(context->r7, context->r5);
/*803984A8 003952A8*/ PPC::Runtime::ASM::bge(.L_803984B0);
/*803984AC 003952AC*/ PPC::Runtime::ASM::b(.L_80398678);
RUNTIME_PPC_JUMP_LABEL(.L_803984B0, 0x803984B0) //this is a jump label
/*803984B0 003952B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803984B4 003952B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803984B8 003952B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803984BC 003952BC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803984C0 003952C0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803984C4 003952C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803984C8 003952C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803984CC 003952CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803984D0 003952D0*/ PPC::Runtime::ASM::bctrl();
/*803984D4 003952D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803984D8 003952D8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803984DC 003952DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803984E0 003952E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r12));
/*803984E4 003952E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803984E8 003952E8*/ PPC::Runtime::ASM::bctrl();
/*803984EC 003952EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803984F0 003952F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803984F4 003952F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803984F8 003952F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803984FC 003952FC*/ PPC::Runtime::ASM::bctrl();
/*80398500 00395300*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80398504 00395304*/ PPC::Runtime::ASM::b(.L_80398544);
RUNTIME_PPC_JUMP_LABEL(.L_80398508, 0x80398508) //this is a jump label
/*80398508 00395308*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039850C 0039530C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80398510 00395310*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80398514 00395314*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80398518 00395318*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039851C 0039531C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80398520 00395320*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80398524 00395324*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80398528 00395328*/ PPC::Runtime::ASM::bl(fn_80398110);
/*8039852C 0039532C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80398530 00395330*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80398534 00395334*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*80398538 00395338*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039853C 0039533C*/ PPC::Runtime::ASM::bctrl();
/*80398540 00395340*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80398544, 0x80398544) //this is a jump label
/*80398544 00395344*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80398548 00395348*/ PPC::Runtime::ASM::bne(.L_80398508);
/*8039854C 0039534C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80398550 00395350*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80398554 00395354*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80398558 00395358*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8039855C 0039535C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80398560 00395360*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80398564 00395364*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80398568 00395368*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039856C 0039536C*/ PPC::Runtime::ASM::bctrl();
/*80398570 00395370*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80398574 00395374*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80398578 00395378*/ PPC::Runtime::ASM::beq(.L_80398590);
/*8039857C 0039537C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80398580 00395380*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80398584 00395384*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80398588 00395388*/ PPC::Runtime::ASM::bctrl();
/*8039858C 0039538C*/ PPC::Runtime::ASM::b(.L_80398594);
RUNTIME_PPC_JUMP_LABEL(.L_80398590, 0x80398590) //this is a jump label
/*80398590 00395390*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80398594, 0x80398594) //this is a jump label
/*80398594 00395394*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80398598 00395398*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039859C 0039539C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803985A0 003953A0*/ PPC::Runtime::ASM::add(context->r27, context->r0, context->r3);
/*803985A4 003953A4*/ PPC::Runtime::ASM::beq(.L_803985C0);
/*803985A8 003953A8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803985AC 003953AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803985B0 003953B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803985B4 003953B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803985B8 003953B8*/ PPC::Runtime::ASM::bctrl();
/*803985BC 003953BC*/ PPC::Runtime::ASM::b(.L_803985C4);
RUNTIME_PPC_JUMP_LABEL(.L_803985C0, 0x803985C0) //this is a jump label
/*803985C0 003953C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803985C4, 0x803985C4) //this is a jump label
/*803985C4 003953C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*803985C8 003953C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803985CC 003953CC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803985D0 003953D0*/ PPC::Runtime::ASM::add(context->r28, context->r0, context->r3);
/*803985D4 003953D4*/ PPC::Runtime::ASM::beq(.L_803985F0);
/*803985D8 003953D8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803985DC 003953DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803985E0 003953E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803985E4 003953E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803985E8 003953E8*/ PPC::Runtime::ASM::bctrl();
/*803985EC 003953EC*/ PPC::Runtime::ASM::b(.L_803985F4);
RUNTIME_PPC_JUMP_LABEL(.L_803985F0, 0x803985F0) //this is a jump label
/*803985F0 003953F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803985F4, 0x803985F4) //this is a jump label
/*803985F4 003953F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*803985F8 003953F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803985FC 003953FC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80398600 00395400*/ PPC::Runtime::ASM::subf(context->r29, context->r3, context->r0);
/*80398604 00395404*/ PPC::Runtime::ASM::beq(.L_80398624);
/*80398608 00395408*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8039860C 0039540C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80398610 00395410*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80398614 00395414*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80398618 00395418*/ PPC::Runtime::ASM::bctrl();
/*8039861C 0039541C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80398620 00395420*/ PPC::Runtime::ASM::b(.L_80398628);
RUNTIME_PPC_JUMP_LABEL(.L_80398624, 0x80398624) //this is a jump label
/*80398624 00395424*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80398628, 0x80398628) //this is a jump label
/*80398628 00395428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039862C 0039542C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80398630 00395430*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80398634 00395434*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*80398638 00395438*/ PPC::Runtime::ASM::subf(context->r4, context->r4, context->r0);
/*8039863C 0039543C*/ PPC::Runtime::ASM::mr(context->r7, context->r27);
/*80398640 00395440*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80398644 00395444*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80398648 00395448*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039864C 0039544C*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80398650 00395450*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80398654 00395454*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80398658 00395458*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039865C 0039545C*/ PPC::Runtime::ASM::bctrl();
/*80398660 00395460*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80398664 00395464*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80398668 00395468*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039866C 0039546C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r12));
/*80398670 00395470*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80398674 00395474*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80398678, 0x80398678) //this is a jump label
/*80398678 00395478*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8039867C 0039547C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80398680 00395480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80398684 00395484*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80398688 00395488*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8039868C 0039548C*/ PPC::Runtime::ASM::blr();
}