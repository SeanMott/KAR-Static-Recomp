//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TExpRef.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpRef.hpp"
#include "fn_HSD_TExpUnref.hpp"



void fn_8042819C(PPC::Runtime::GCContext* context)
{
/*8042819C 00424F9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*804281A0 00424FA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*804281A4 00424FA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804281A8 00424FA8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*804281AC 00424FAC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*804281B0 00424FB0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*804281B4 00424FB4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*804281B8 00424FB8*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_804281BC, 0x804281BC) //this is a jump label
/*804281BC 00424FBC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*804281C0 00424FC0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*804281C4 00424FC4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*804281C8 00424FC8*/ PPC::Runtime::ASM::lbz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r29));
/*804281CC 00424FCC*/ PPC::Runtime::ASM::bne(.L_8042828C);
/*804281D0 00424FD0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x1);
/*804281D4 00424FD4*/ PPC::Runtime::ASM::bne(.L_8042828C);
/*804281D8 00424FD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r27));
/*804281DC 00424FDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804281E0 00424FE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804281E4 00424FE4*/ PPC::Runtime::ASM::bne(.L_8042821C);
/*804281E8 00424FE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r27));
/*804281EC 00424FEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*804281F0 00424FF0*/ PPC::Runtime::ASM::bne(.L_8042821C);
/*804281F4 00424FF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r27));
/*804281F8 00424FF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*804281FC 00424FFC*/ PPC::Runtime::ASM::bne(.L_8042821C);
/*80428200 00425000*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r27));
/*80428204 00425004*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80428208 00425008*/ PPC::Runtime::ASM::bne(.L_8042821C);
/*8042820C 0042500C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*80428210 00425010*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80428214 00425014*/ PPC::Runtime::ASM::bne(.L_8042821C);
/*80428218 00425018*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8042821C, 0x8042821C) //this is a jump label
/*8042821C 0042501C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80428220 00425020*/ PPC::Runtime::ASM::beq(.L_8042828C);
/*80428224 00425024*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*80428228 00425028*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8042822C 0042502C*/ PPC::Runtime::ASM::beq(.L_80428240);
/*80428230 00425030*/ PPC::Runtime::ASM::bge(.L_8042828C);
/*80428234 00425034*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80428238 00425038*/ PPC::Runtime::ASM::bge(.L_80428264);
/*8042823C 0042503C*/ PPC::Runtime::ASM::b(.L_8042828C);
RUNTIME_PPC_JUMP_LABEL(.L_80428240, 0x80428240) //this is a jump label
/*80428240 00425040*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80428244 00425044*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xff);
/*80428248 00425048*/ PPC::Runtime::ASM::bne(.L_80428258);
/*8042824C 0042504C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*80428250 00425050*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80428254 00425054*/ PPC::Runtime::ASM::b(.L_80428264);
RUNTIME_PPC_JUMP_LABEL(.L_80428258, 0x80428258) //this is a jump label
/*80428258 00425058*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*8042825C 0042505C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80428260 00425060*/ PPC::Runtime::ASM::bne(.L_8042828C);
RUNTIME_PPC_JUMP_LABEL(.L_80428264, 0x80428264) //this is a jump label
/*80428264 00425064*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*80428268 00425068*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8042826C 0042506C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80428270 00425070*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80428274 00425074*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80428278 00425078*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r29));
/*8042827C 0042507C*/ PPC::Runtime::ASM::bl(fn_HSD_TExpRef);
/*80428280 00425080*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80428284 00425084*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80428288 00425088*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
RUNTIME_PPC_JUMP_LABEL(.L_8042828C, 0x8042828C) //this is a jump label
/*8042828C 0042508C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80428290 00425090*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
/*80428294 00425094*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*80428298 00425098*/ PPC::Runtime::ASM::blt(.L_804281BC);
/*8042829C 0042509C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*804282A0 004250A0*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_804282A4, 0x804282A4) //this is a jump label
/*804282A4 004250A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*804282A8 004250A8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*804282AC 004250AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*804282B0 004250B0*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r29));
/*804282B4 004250B4*/ PPC::Runtime::ASM::bne(.L_8042836C);
/*804282B8 004250B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r28));
/*804282BC 004250BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804282C0 004250C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804282C4 004250C4*/ PPC::Runtime::ASM::bne(.L_804282FC);
/*804282C8 004250C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r28));
/*804282CC 004250CC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*804282D0 004250D0*/ PPC::Runtime::ASM::bne(.L_804282FC);
/*804282D4 004250D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r28));
/*804282D8 004250D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*804282DC 004250DC*/ PPC::Runtime::ASM::bne(.L_804282FC);
/*804282E0 004250E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r28));
/*804282E4 004250E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804282E8 004250E8*/ PPC::Runtime::ASM::bne(.L_804282FC);
/*804282EC 004250EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*804282F0 004250F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804282F4 004250F4*/ PPC::Runtime::ASM::bne(.L_804282FC);
/*804282F8 004250F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804282FC, 0x804282FC) //this is a jump label
/*804282FC 004250FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80428300 00425100*/ PPC::Runtime::ASM::beq(.L_8042836C);
/*80428304 00425104*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r28));
/*80428308 00425108*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8042830C 0042510C*/ PPC::Runtime::ASM::beq(.L_80428320);
/*80428310 00425110*/ PPC::Runtime::ASM::bge(.L_8042836C);
/*80428314 00425114*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80428318 00425118*/ PPC::Runtime::ASM::bge(.L_80428344);
/*8042831C 0042511C*/ PPC::Runtime::ASM::b(.L_8042836C);
RUNTIME_PPC_JUMP_LABEL(.L_80428320, 0x80428320) //this is a jump label
/*80428320 00425120*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r31));
/*80428324 00425124*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xff);
/*80428328 00425128*/ PPC::Runtime::ASM::bne(.L_80428338);
/*8042832C 0042512C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r28));
/*80428330 00425130*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r31));
/*80428334 00425134*/ PPC::Runtime::ASM::b(.L_80428344);
RUNTIME_PPC_JUMP_LABEL(.L_80428338, 0x80428338) //this is a jump label
/*80428338 00425138*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r28));
/*8042833C 0042513C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80428340 00425140*/ PPC::Runtime::ASM::bne(.L_8042836C);
RUNTIME_PPC_JUMP_LABEL(.L_80428344, 0x80428344) //this is a jump label
/*80428344 00425144*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r28));
/*80428348 00425148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*8042834C 0042514C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*80428350 00425150*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*80428354 00425154*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*80428358 00425158*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r29));
/*8042835C 0042515C*/ PPC::Runtime::ASM::bl(fn_HSD_TExpRef);
/*80428360 00425160*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80428364 00425164*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80428368 00425168*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
RUNTIME_PPC_JUMP_LABEL(.L_8042836C, 0x8042836C) //this is a jump label
/*8042836C 0042516C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80428370 00425170*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
/*80428374 00425174*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*80428378 00425178*/ PPC::Runtime::ASM::blt(.L_804282A4);
/*8042837C 0042517C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80428380 00425180*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80428384 00425184*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80428388 00425188*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8042838C 0042518C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80428390 00425190*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80428394 00425194*/ PPC::Runtime::ASM::blr();
}