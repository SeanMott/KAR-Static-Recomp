//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B4D10.hpp"
#include "fn_8005B440.hpp"
#include "fn_802A09E4.hpp"
#include "fn_802C4ADC.hpp"



void fn_80284298(PPC::Runtime::GCContext* context)
{
/*80284298 00281098*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8028429C 0028109C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802842A0 002810A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802842A4 002810A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802842A8 002810A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802842AC 002810AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802842B0 002810B0*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802842B4 002810B4*/ PPC::Runtime::ASM::bl(fn_80390B3C);
/*802842B8 002810B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802842BC 002810BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802842C0 002810C0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x18);
/*802842C4 002810C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802842C8 002810C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802842CC 002810CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802842D0 002810D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*802842D4 002810D4*/ PPC::Runtime::ASM::bl(fn_802B4D10);
/*802842D8 002810D8*/ PPC::Runtime::ASM::bl(OSGetTime);
/*802842DC 002810DC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*802842E0 002810E0*/ PPC::Runtime::ASM::bl(OSGetTime);
/*802842E4 002810E4*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 1);
/*802842E8 002810E8*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1c);
/*802842EC 002810EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*802842F0 002810F0*/ PPC::Runtime::ASM::lwz(context->r3, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802842F4 002810F4*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802842F8 002810F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802842FC 002810FC*/ PPC::Runtime::ASM::bl(fn_8005B440);
/*80284300 00281100*/ PPC::Runtime::ASM::li(context->r3, 0x50);
/*80284304 00281104*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 80284308 00281108  7C 64 1B 79 */ mr. context->r4 , context->r3
/*8028430C 0028110C*/ PPC::Runtime::ASM::beq(.L_80284324);
/*80284310 00281110*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BB790 @ Get_MemoryOffset_HighBit);
/*80284314 00281114*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80284318 00281118*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BB790 @ Get_MemoryOffset_LowBit);
/*8028431C 0028111C*/ PPC::Runtime::ASM::bl(fn_8038B9C0);
/*80284320 00281120*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80284324, 0x80284324) //this is a jump label
/*80284324 00281124*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80284328 00281128*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028432C 0028112C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80284330 00281130*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*80284334 00281134*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80284338 00281138*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028433C 0028113C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80284340 00281140*/ PPC::Runtime::ASM::beq(.L_80284368);
/*80284344 00281144*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80284348 00281148*/ PPC::Runtime::ASM::beq(.L_80284360);
/*8028434C 0028114C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80284350 00281150*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80284354 00281154*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80284358 00281158*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028435C 0028115C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80284360, 0x80284360) //this is a jump label
/*80284360 00281160*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80284364 00281164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80284368, 0x80284368) //this is a jump label
/*80284368 00281168*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8028436C 0028116C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80284370 00281170*/ PPC::Runtime::ASM::beq(.L_80284388);
/*80284374 00281174*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80284378 00281178*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028437C 0028117C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80284380 00281180*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80284384 00281184*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80284388, 0x80284388) //this is a jump label
/*80284388 00281188*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*8028438C 0028118C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80284390 00281190*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80284394 00281194*/ PPC::Runtime::ASM::beq(.L_802843B0);
/*80284398 00281198*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028439C, 0x8028439C) //this is a jump label
/*8028439C 0028119C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r4));
/*802843A0 002811A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802843A4 002811A4*/ PPC::Runtime::ASM::beq(.L_8028439C);
/*802843A8 002811A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802843AC 002811AC*/ PPC::Runtime::ASM::bl(fn_80398AA4);
RUNTIME_PPC_JUMP_LABEL(.L_802843B0, 0x802843B0) //this is a jump label
/*802843B0 002811B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802843B4 002811B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802843B8 002811B8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802843BC 002811BC*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*802843C0 002811C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802843C4 002811C4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802843C8 002811C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802843CC 002811CC*/ PPC::Runtime::ASM::beq(.L_802843F8);
/*802843D0 002811D0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802843D4 002811D4*/ PPC::Runtime::ASM::beq(.L_802843F0);
/*802843D8 002811D8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802843DC 002811DC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802843E0 002811E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802843E4 002811E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802843E8 002811E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802843EC 002811EC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802843F0, 0x802843F0) //this is a jump label
/*802843F0 002811F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802843F4 002811F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802843F8, 0x802843F8) //this is a jump label
/*802843F8 002811F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802843FC 002811FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80284400 00281200*/ PPC::Runtime::ASM::beq(.L_80284418);
/*80284404 00281204*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80284408 00281208*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028440C 0028120C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80284410 00281210*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80284414 00281214*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80284418, 0x80284418) //this is a jump label
/*80284418 00281218*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028441C 0028121C*/ PPC::Runtime::ASM::beq(.L_802844B8);
/*80284420 00281220*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80284424 00281224*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80284428 00281228*/ PPC::Runtime::ASM::li(context->r3, 0xb48);
/*8028442C 0028122C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r4));
/*80284430 00281230*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80284434 00281234*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*80284438 00281238*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8028443C 0028123C  7C 64 1B 79 */ mr. context->r4 , context->r3
/*80284440 00281240*/ PPC::Runtime::ASM::beq(.L_80284450);
/*80284444 00281244*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80284448 00281248*/ PPC::Runtime::ASM::bl(fn_802A09E4);
/*8028444C 0028124C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80284450, 0x80284450) //this is a jump label
/*80284450 00281250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80284454 00281254*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80284458 00281258*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8028445C 0028125C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*80284460 00281260*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80284464 00281264*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80284468 00281268*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028446C 0028126C*/ PPC::Runtime::ASM::beq(.L_80284494);
/*80284470 00281270*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80284474 00281274*/ PPC::Runtime::ASM::beq(.L_8028448C);
/*80284478 00281278*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028447C 0028127C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80284480 00281280*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80284484 00281284*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80284488 00281288*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028448C, 0x8028448C) //this is a jump label
/*8028448C 0028128C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80284490 00281290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80284494, 0x80284494) //this is a jump label
/*80284494 00281294*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80284498 00281298*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028449C 0028129C*/ PPC::Runtime::ASM::beq(.L_8028453C);
/*802844A0 002812A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802844A4 002812A4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802844A8 002812A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802844AC 002812AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802844B0 002812B0*/ PPC::Runtime::ASM::bctrl();
/*802844B4 002812B4*/ PPC::Runtime::ASM::b(.L_8028453C);
RUNTIME_PPC_JUMP_LABEL(.L_802844B8, 0x802844B8) //this is a jump label
/*802844B8 002812B8*/ PPC::Runtime::ASM::li(context->r3, 0x3dd4);
/*802844BC 002812BC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802844C0 002812C0  7C 64 1B 79 */ mr. context->r4 , context->r3
/*802844C4 002812C4*/ PPC::Runtime::ASM::beq(.L_802844D8);
/*802844C8 002812C8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BB710 @ Get_MemoryOffset_HighBit);
/*802844CC 002812CC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BB710 @ Get_MemoryOffset_LowBit);
/*802844D0 002812D0*/ PPC::Runtime::ASM::bl(fn_802C4ADC);
/*802844D4 002812D4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802844D8, 0x802844D8) //this is a jump label
/*802844D8 002812D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802844DC 002812DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802844E0 002812E0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802844E4 002812E4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*802844E8 002812E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802844EC 002812EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802844F0 002812F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802844F4 002812F4*/ PPC::Runtime::ASM::beq(.L_8028451C);
/*802844F8 002812F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802844FC 002812FC*/ PPC::Runtime::ASM::beq(.L_80284514);
/*80284500 00281300*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80284504 00281304*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80284508 00281308*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028450C 0028130C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80284510 00281310*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80284514, 0x80284514) //this is a jump label
/*80284514 00281314*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80284518 00281318*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8028451C, 0x8028451C) //this is a jump label
/*8028451C 0028131C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80284520 00281320*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80284524 00281324*/ PPC::Runtime::ASM::beq(.L_8028453C);
/*80284528 00281328*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028452C 0028132C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80284530 00281330*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80284534 00281334*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80284538 00281338*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028453C, 0x8028453C) //this is a jump label
/*8028453C 0028133C*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x38);
/*80284540 00281340*/ PPC::Runtime::ASM::beq(.L_8028454C);
/*80284544 00281344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80284548 00281348*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028454C, 0x8028454C) //this is a jump label
/*8028454C 0028134C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80284550 00281350*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80284554 00281354*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80284558 00281358*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8028455C 0028135C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80284560 00281360*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80284564 00281364*/ PPC::Runtime::ASM::blr();
}