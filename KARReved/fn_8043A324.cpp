//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8043A324(PPC::Runtime::GCContext* context)
{
/*8043A324 00437124*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A328 00437128*/ PPC::Runtime::ASM::lbzu(context->r0, lbl_8058D198 @ Get_MemoryOffset_LowBit ( context->r5 ));
/* 8043A32C 0043712C  54 09 CF FF */ extrwi. context->r9 , context->r0 , 1 , 24
/*8043A330 00437130*/ PPC::Runtime::ASM::beqlr();
/*8043A334 00437134*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8043A338 00437138*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8043A33C 0043713C*/ PPC::Runtime::ASM::cmplw(context->r7, context->r0);
/*8043A340 00437140*/ PPC::Runtime::ASM::blt(.L_8043A3D4);
/*8043A344 00437144*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8043A348 00437148*/ PPC::Runtime::ASM::cmplwi(context->r9, 0x0);
/*8043A34C 0043714C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8043A350 00437150*/ PPC::Runtime::ASM::add(context->r11, context->r7, context->r4);
/*8043A354 00437154*/ PPC::Runtime::ASM::add(context->r10, context->r6, context->r3);
/*8043A358 00437158*/ PPC::Runtime::ASM::beqlr();
/*8043A35C 0043715C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r5));
/*8043A360 00437160*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8043A364 00437164*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8043A368 00437168*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8043A36C 0043716C*/ PPC::Runtime::ASM::mr(context->r7, context->r4);
/*8043A370 00437170*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r0);
/*8043A374 00437174*/ PPC::Runtime::ASM::b(.L_8043A398);
RUNTIME_PPC_JUMP_LABEL(.L_8043A378, 0x8043A378) //this is a jump label
/*8043A378 00437178*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8043A37C 0043717C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8043A380 00437180*/ PPC::Runtime::ASM::subf(context->r4, context->r7, context->r8);
/*8043A384 00437184*/ PPC::Runtime::ASM::divwu(context->r3, context->r4, context->r0);
/*8043A388 00437188*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r0);
/*8043A38C 0043718C*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r4);
/*8043A390 00437190*/ PPC::Runtime::ASM::lbzx(context->r4, context->r9, context->r3);
/*8043A394 00437194*/ PPC::Runtime::ASM::add(context->r7, context->r7, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8043A398, 0x8043A398) //this is a jump label
/*8043A398 00437198*/ PPC::Runtime::ASM::cmplw(context->r6, context->r11);
/*8043A39C 0043719C*/ PPC::Runtime::ASM::bge(.L_8043A3A8);
/*8043A3A0 004371A0*/ PPC::Runtime::ASM::cmplw(context->r7, context->r0);
/*8043A3A4 004371A4*/ PPC::Runtime::ASM::blt(.L_8043A378);
RUNTIME_PPC_JUMP_LABEL(.L_8043A3A8, 0x8043A3A8) //this is a jump label
/*8043A3A8 004371A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A3AC 004371AC*/ PPC::Runtime::ASM::cmplw(context->r10, context->r4);
/*8043A3B0 004371B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D198 @ Get_MemoryOffset_LowBit);
/*8043A3B4 004371B4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8043A3B8 004371B8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8043A3BC 004371BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8043A3C0 004371C0*/ PPC::Runtime::ASM::bge(.L_8043A3CC);
/*8043A3C4 004371C4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8043A3C8 004371C8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8043A3CC, 0x8043A3CC) //this is a jump label
/*8043A3CC 004371CC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8043A3D0 004371D0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8043A3D4, 0x8043A3D4) //this is a jump label
/*8043A3D4 004371D4*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8043A3D8 004371D8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8043A3DC 004371DC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8043A3E0 004371E0*/ PPC::Runtime::ASM::mr(context->r11, context->r7);
/*8043A3E4 004371E4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*8043A3E8 004371E8*/ PPC::Runtime::ASM::add(context->r12, context->r10, context->r0);
/*8043A3EC 004371EC*/ PPC::Runtime::ASM::ble(.L_8043A48C);
/*8043A3F0 004371F0*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8043A3F4 004371F4*/ PPC::Runtime::ASM::b(.L_8043A418);
RUNTIME_PPC_JUMP_LABEL(.L_8043A3F8, 0x8043A3F8) //this is a jump label
/*8043A3F8 004371F8*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
/*8043A3FC 004371FC*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*8043A400 00437200*/ PPC::Runtime::ASM::subf(context->r8, context->r11, context->r12);
/*8043A404 00437204*/ PPC::Runtime::ASM::divwu(context->r7, context->r8, context->r0);
/*8043A408 00437208*/ PPC::Runtime::ASM::mullw(context->r7, context->r7, context->r0);
/*8043A40C 0043720C*/ PPC::Runtime::ASM::subf(context->r7, context->r7, context->r8);
/*8043A410 00437210*/ PPC::Runtime::ASM::lbzx(context->r7, context->r6, context->r7);
/*8043A414 00437214*/ PPC::Runtime::ASM::add(context->r11, context->r11, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_8043A418, 0x8043A418) //this is a jump label
/*8043A418 00437218*/ PPC::Runtime::ASM::cmplw(context->r9, context->r4);
/*8043A41C 0043721C*/ PPC::Runtime::ASM::bge(.L_8043A428);
/*8043A420 00437220*/ PPC::Runtime::ASM::cmplw(context->r11, context->r0);
/*8043A424 00437224*/ PPC::Runtime::ASM::blt(.L_8043A3F8);
RUNTIME_PPC_JUMP_LABEL(.L_8043A428, 0x8043A428) //this is a jump label
/*8043A428 00437228*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A42C 0043722C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8043A430 00437230*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8058D198 @ Get_MemoryOffset_LowBit);
/*8043A434 00437234*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8043A438 00437238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8043A43C 0043723C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r9);
/*8043A440 00437240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8043A444 00437244*/ PPC::Runtime::ASM::blt(.L_8043A464);
/*8043A448 00437248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8043A44C 0043724C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8043A450 00437250*/ PPC::Runtime::ASM::cmplw(context->r0, context->r7);
/*8043A454 00437254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/* 8043A458 00437258  4C 81 00 20 */ blelr
/*8043A45C 0043725C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8043A460 00437260*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8043A464, 0x8043A464) //this is a jump label
/*8043A464 00437264*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8043A468 00437268*/ PPC::Runtime::ASM::neg(context->r3, context->r3);
/*8043A46C 0043726C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8043A470 00437270*/ PPC::Runtime::ASM::ble(.L_8043A480);
/*8043A474 00437274*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*8043A478 00437278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8043A47C 0043727C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8043A480, 0x8043A480) //this is a jump label
/*8043A480 00437280*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043A484 00437284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8043A488 00437288*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8043A48C, 0x8043A48C) //this is a jump label
/*8043A48C 0043728C*/ PPC::Runtime::ASM::bgelr();
/*8043A490 00437290*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8043A494 00437294*/ PPC::Runtime::ASM::bge(.L_8043A4B0);
/*8043A498 00437298*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8043A49C 0043729C*/ PPC::Runtime::ASM::neg(context->r7, context->r3);
/*8043A4A0 004372A0*/ PPC::Runtime::ASM::cmplw(context->r8, context->r7);
/*8043A4A4 004372A4*/ PPC::Runtime::ASM::bge(.L_8043A4B0);
/*8043A4A8 004372A8*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*8043A4AC 004372AC*/ PPC::Runtime::ASM::b(.L_8043A4C0);
RUNTIME_PPC_JUMP_LABEL(.L_8043A4B0, 0x8043A4B0) //this is a jump label
/*8043A4B0 004372B0*/ PPC::Runtime::ASM::lis(context->r7, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A4B4 004372B4*/ PPC::Runtime::ASM::addi(context->r7, context->r7, lbl_8058D198 @ Get_MemoryOffset_LowBit);
/*8043A4B8 004372B8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*8043A4BC 004372BC*/ PPC::Runtime::ASM::add(context->r11, context->r7, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043A4C0, 0x8043A4C0) //this is a jump label
/*8043A4C0 004372C0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8043A4C4 004372C4*/ PPC::Runtime::ASM::bge(.L_8043A4E8);
/*8043A4C8 004372C8*/ PPC::Runtime::ASM::lis(context->r7, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A4CC 004372CC*/ PPC::Runtime::ASM::neg(context->r3, context->r4);
/*8043A4D0 004372D0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, lbl_8058D198 @ Get_MemoryOffset_LowBit);
/*8043A4D4 004372D4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*8043A4D8 004372D8*/ PPC::Runtime::ASM::cmplw(context->r7, context->r3);
/*8043A4DC 004372DC*/ PPC::Runtime::ASM::bge(.L_8043A4E8);
/*8043A4E0 004372E0*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*8043A4E4 004372E4*/ PPC::Runtime::ASM::b(.L_8043A4F8);
RUNTIME_PPC_JUMP_LABEL(.L_8043A4E8, 0x8043A4E8) //this is a jump label
/*8043A4E8 004372E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A4EC 004372EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D198 @ Get_MemoryOffset_LowBit);
/*8043A4F0 004372F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8043A4F4 004372F4*/ PPC::Runtime::ASM::add(context->r12, context->r3, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8043A4F8, 0x8043A4F8) //this is a jump label
/*8043A4F8 004372F8*/ PPC::Runtime::ASM::cmplwi(context->r9, 0x0);
/*8043A4FC 004372FC*/ PPC::Runtime::ASM::beqlr();
/*8043A500 00437300*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A504 00437304*/ PPC::Runtime::ASM::add(context->r9, context->r10, context->r0);
/*8043A508 00437308*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D198 @ Get_MemoryOffset_LowBit);
/*8043A50C 0043730C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8043A510 00437310*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r3));
/*8043A514 00437314*/ PPC::Runtime::ASM::mr(context->r8, context->r4);
/*8043A518 00437318*/ PPC::Runtime::ASM::b(.L_8043A53C);
RUNTIME_PPC_JUMP_LABEL(.L_8043A51C, 0x8043A51C) //this is a jump label
/*8043A51C 0043731C*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8043A520 00437320*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8043A524 00437324*/ PPC::Runtime::ASM::subf(context->r4, context->r8, context->r9);
/*8043A528 00437328*/ PPC::Runtime::ASM::divwu(context->r3, context->r4, context->r0);
/*8043A52C 0043732C*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r0);
/*8043A530 00437330*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r4);
/*8043A534 00437334*/ PPC::Runtime::ASM::lbzx(context->r4, context->r6, context->r3);
/*8043A538 00437338*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8043A53C, 0x8043A53C) //this is a jump label
/*8043A53C 0043733C*/ PPC::Runtime::ASM::cmplw(context->r7, context->r12);
/*8043A540 00437340*/ PPC::Runtime::ASM::bge(.L_8043A54C);
/*8043A544 00437344*/ PPC::Runtime::ASM::cmplw(context->r8, context->r0);
/*8043A548 00437348*/ PPC::Runtime::ASM::blt(.L_8043A51C);
RUNTIME_PPC_JUMP_LABEL(.L_8043A54C, 0x8043A54C) //this is a jump label
/*8043A54C 0043734C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D198 @ Get_MemoryOffset_HighBit);
/*8043A550 00437350*/ PPC::Runtime::ASM::cmplw(context->r11, context->r4);
/*8043A554 00437354*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D198 @ Get_MemoryOffset_LowBit);
/*8043A558 00437358*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8043A55C 0043735C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8043A560 00437360*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*8043A564 00437364*/ PPC::Runtime::ASM::bge(.L_8043A570);
/*8043A568 00437368*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8043A56C 0043736C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8043A570, 0x8043A570) //this is a jump label
/*8043A570 00437370*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8043A574 00437374*/ PPC::Runtime::ASM::blr();
}