//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetClearcheckerTypeP.hpp"



void fn_8004A2BC(PPC::Runtime::GCContext* context)
{
/*8004A2BC 000470BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8004A2C0 000470C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004A2C4 000470C4*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_169 @ Get_MemoryOffset_HighBit);
/*8004A2C8 000470C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004A2CC 000470CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004A2D0 000470D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004A2D4 000470D4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004A2D8 000470D8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8004A2DC 000470DC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004A2E0 000470E0*/ PPC::Runtime::ASM::addi(context->r28, context->r4, MemoryOffset_169 @ Get_MemoryOffset_LowBit);
/*8004A2E4 000470E4*/ PPC::Runtime::ASM::bl(fn_gmGetClearcheckerTypeP);
/*8004A2E8 000470E8*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8004A2EC 000470EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004A2F0 000470F0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8004A2F4 000470F4*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*8004A2F8 000470F8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8004A2FC, 0x8004A2FC) //this is a jump label
/*8004A2FC 000470FC*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x4);
/*8004A300 00047100*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8004A304 00047104*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8004A308 00047108*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8004A30C 0004710C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8004A310 00047110*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*8004A314 00047114*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8004A318 00047118*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*8004A31C 0004711C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*8004A320 00047120*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*8004A324 00047124*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0xc);
/*8004A328 00047128*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8004A32C 0004712C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8004A330 00047130*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8004A334 00047134*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8004A338 00047138*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*8004A33C 0004713C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8004A340 00047140*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*8004A344 00047144*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*8004A348 00047148*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*8004A34C 0004714C*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x14);
/*8004A350 00047150*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8004A354 00047154*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8004A358 00047158*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8004A35C 0004715C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8004A360 00047160*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*8004A364 00047164*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8004A368 00047168*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*8004A36C 0004716C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*8004A370 00047170*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*8004A374 00047174*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x1c);
/*8004A378 00047178*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8004A37C 0004717C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8004A380 00047180*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8004A384 00047184*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8004A388 00047188*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*8004A38C 0004718C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8004A390 00047190*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*8004A394 00047194*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*8004A398 00047198*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*8004A39C 0004719C*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x24);
/*8004A3A0 000471A0*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8004A3A4 000471A4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x28);
/*8004A3A8 000471A8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8004A3AC 000471AC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8004A3B0 000471B0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8004A3B4 000471B4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*8004A3B8 000471B8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8004A3BC 000471BC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*8004A3C0 000471C0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*8004A3C4 000471C4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*8004A3C8 000471C8*/ PPC::Runtime::ASM::bdnz(.L_8004A2FC);
/*8004A3CC 000471CC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*8004A3D0 000471D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8004A3D4 000471D4*/ PPC::Runtime::ASM::beq(.L_8004A410);
/*8004A3D8 000471D8*/ PPC::Runtime::ASM::bge(.L_8004A3E8);
/*8004A3DC 000471DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004A3E0 000471E0*/ PPC::Runtime::ASM::bge(.L_8004A3F4);
/*8004A3E4 000471E4*/ PPC::Runtime::ASM::b(.L_8004A464);
RUNTIME_PPC_JUMP_LABEL(.L_8004A3E8, 0x8004A3E8) //this is a jump label
/*8004A3E8 000471E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8004A3EC 000471EC*/ PPC::Runtime::ASM::bge(.L_8004A464);
/*8004A3F0 000471F0*/ PPC::Runtime::ASM::b(.L_8004A42C);
RUNTIME_PPC_JUMP_LABEL(.L_8004A3F4, 0x8004A3F4) //this is a jump label
/*8004A3F4 000471F4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*8004A3F8 000471F8*/ PPC::Runtime::ASM::li(context->r4, 0x77);
/*8004A3FC 000471FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e, context->r3));
/*8004A400 00047200*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*8004A404 00047204*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8004A408 00047208*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8004A40C 0004720C*/ PPC::Runtime::ASM::b(.L_8004A464);
RUNTIME_PPC_JUMP_LABEL(.L_8004A410, 0x8004A410) //this is a jump label
/*8004A410 00047210*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x8c);
/*8004A414 00047214*/ PPC::Runtime::ASM::li(context->r4, 0x77);
/*8004A418 00047218*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
/*8004A41C 0004721C*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*8004A420 00047220*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8004A424 00047224*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8004A428 00047228*/ PPC::Runtime::ASM::b(.L_8004A464);
RUNTIME_PPC_JUMP_LABEL(.L_8004A42C, 0x8004A42C) //this is a jump label
/*8004A42C 0004722C*/ PPC::Runtime::ASM::addi(context->r6, context->r28, 0xf0);
/*8004A430 00047230*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8004A434 00047234*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r6));
/*8004A438 00047238*/ PPC::Runtime::ASM::li(context->r5, 0xb);
/*8004A43C 0004723C*/ PPC::Runtime::ASM::li(context->r4, 0x77);
/*8004A440 00047240*/ PPC::Runtime::ASM::li(context->r30, 0x3);
/*8004A444 00047244*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8004A448 00047248*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8004A44C 0004724C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r6));
/*8004A450 00047250*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8004A454 00047254*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8004A458 00047258*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*8004A45C 0004725C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8004A460 00047260*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8004A464, 0x8004A464) //this is a jump label
/*8004A464 00047264*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004A468, 0x8004A468) //this is a jump label
/*8004A468 00047268*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x77);
/*8004A46C 0004726C*/ PPC::Runtime::ASM::beq(.L_8004A61C);
/*8004A470 00047270*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*8004A474 00047274*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*8004A478 00047278*/ PPC::Runtime::ASM::bne(.L_8004A48C);
/*8004A47C 0004727C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8004A480 00047280*/ PPC::Runtime::ASM::beq(.L_8004A61C);
/*8004A484 00047284*/ PPC::Runtime::ASM::cmpwi(context->r28, 0xb);
/*8004A488 00047288*/ PPC::Runtime::ASM::beq(.L_8004A61C);
RUNTIME_PPC_JUMP_LABEL(.L_8004A48C, 0x8004A48C) //this is a jump label
/*8004A48C 0004728C*/ PPC::Runtime::ASM::subfic(context->r0, context->r28, 0x78);
/*8004A490 00047290*/ PPC::Runtime::ASM::subf(context->r3, context->r30, context->r0);
/*8004A494 00047294*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8004A498 00047298*/ PPC::Runtime::ASM::li(context->r0, 0xf);
/*8004A49C 0004729C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8004A4A0 000472A0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8004A4A4, 0x8004A4A4) //this is a jump label
/*8004A4A4 000472A4*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x4);
/*8004A4A8 000472A8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A4AC 000472AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A4B0 000472B0*/ PPC::Runtime::ASM::bne(.L_8004A4C8);
/*8004A4B4 000472B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A4B8 000472B8*/ PPC::Runtime::ASM::bgt(.L_8004A4C4);
/*8004A4BC 000472BC*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A4C0 000472C0*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A4C4, 0x8004A4C4) //this is a jump label
/*8004A4C4 000472C4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A4C8, 0x8004A4C8) //this is a jump label
/*8004A4C8 000472C8*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x5);
/*8004A4CC 000472CC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A4D0 000472D0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A4D4 000472D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A4D8 000472D8*/ PPC::Runtime::ASM::bne(.L_8004A4F0);
/*8004A4DC 000472DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A4E0 000472E0*/ PPC::Runtime::ASM::bgt(.L_8004A4EC);
/*8004A4E4 000472E4*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A4E8 000472E8*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A4EC, 0x8004A4EC) //this is a jump label
/*8004A4EC 000472EC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A4F0, 0x8004A4F0) //this is a jump label
/*8004A4F0 000472F0*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x5);
/*8004A4F4 000472F4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A4F8 000472F8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A4FC 000472FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A500 00047300*/ PPC::Runtime::ASM::bne(.L_8004A518);
/*8004A504 00047304*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A508 00047308*/ PPC::Runtime::ASM::bgt(.L_8004A514);
/*8004A50C 0004730C*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A510 00047310*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A514, 0x8004A514) //this is a jump label
/*8004A514 00047314*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A518, 0x8004A518) //this is a jump label
/*8004A518 00047318*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x5);
/*8004A51C 0004731C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A520 00047320*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A524 00047324*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A528 00047328*/ PPC::Runtime::ASM::bne(.L_8004A540);
/*8004A52C 0004732C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A530 00047330*/ PPC::Runtime::ASM::bgt(.L_8004A53C);
/*8004A534 00047334*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A538 00047338*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A53C, 0x8004A53C) //this is a jump label
/*8004A53C 0004733C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A540, 0x8004A540) //this is a jump label
/*8004A540 00047340*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x5);
/*8004A544 00047344*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A548 00047348*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A54C 0004734C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A550 00047350*/ PPC::Runtime::ASM::bne(.L_8004A568);
/*8004A554 00047354*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A558 00047358*/ PPC::Runtime::ASM::bgt(.L_8004A564);
/*8004A55C 0004735C*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A560 00047360*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A564, 0x8004A564) //this is a jump label
/*8004A564 00047364*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A568, 0x8004A568) //this is a jump label
/*8004A568 00047368*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x5);
/*8004A56C 0004736C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A570 00047370*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A574 00047374*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A578 00047378*/ PPC::Runtime::ASM::bne(.L_8004A590);
/*8004A57C 0004737C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A580 00047380*/ PPC::Runtime::ASM::bgt(.L_8004A58C);
/*8004A584 00047384*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A588 00047388*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A58C, 0x8004A58C) //this is a jump label
/*8004A58C 0004738C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A590, 0x8004A590) //this is a jump label
/*8004A590 00047390*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x5);
/*8004A594 00047394*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A598 00047398*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A59C 0004739C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A5A0 000473A0*/ PPC::Runtime::ASM::bne(.L_8004A5B8);
/*8004A5A4 000473A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A5A8 000473A8*/ PPC::Runtime::ASM::bgt(.L_8004A5B4);
/*8004A5AC 000473AC*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A5B0 000473B0*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A5B4, 0x8004A5B4) //this is a jump label
/*8004A5B4 000473B4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A5B8, 0x8004A5B8) //this is a jump label
/*8004A5B8 000473B8*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x5);
/*8004A5BC 000473BC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A5C0 000473C0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r4);
/*8004A5C4 000473C4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A5C8 000473C8*/ PPC::Runtime::ASM::bne(.L_8004A5E0);
/*8004A5CC 000473CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A5D0 000473D0*/ PPC::Runtime::ASM::bgt(.L_8004A5DC);
/*8004A5D4 000473D4*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r4);
/*8004A5D8 000473D8*/ PPC::Runtime::ASM::b(.L_8004A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8004A5DC, 0x8004A5DC) //this is a jump label
/*8004A5DC 000473DC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8004A5E0, 0x8004A5E0) //this is a jump label
/*8004A5E0 000473E0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8004A5E4 000473E4*/ PPC::Runtime::ASM::bdnz(.L_8004A4A4);
RUNTIME_PPC_JUMP_LABEL(.L_8004A5E8, 0x8004A5E8) //this is a jump label
/*8004A5E8 000473E8*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x78);
/*8004A5EC 000473EC*/ PPC::Runtime::ASM::bne(.L_8004A61C);
/*8004A5F0 000473F0*/ PPC::Runtime::ASM::li(context->r0, 0x78);
/*8004A5F4 000473F4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8004A5F8 000473F8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8004A5FC, 0x8004A5FC) //this is a jump label
/*8004A5FC 000473FC*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x4);
/*8004A600 00047400*/ PPC::Runtime::ASM::lbzx(context->r0, context->r31, context->r3);
/*8004A604 00047404*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*8004A608 00047408*/ PPC::Runtime::ASM::bne(.L_8004A614);
/*8004A60C 0004740C*/ PPC::Runtime::ASM::stbx(context->r28, context->r31, context->r3);
/*8004A610 00047410*/ PPC::Runtime::ASM::b(.L_8004A61C);
RUNTIME_PPC_JUMP_LABEL(.L_8004A614, 0x8004A614) //this is a jump label
/*8004A614 00047414*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8004A618 00047418*/ PPC::Runtime::ASM::bdnz(.L_8004A5FC);
RUNTIME_PPC_JUMP_LABEL(.L_8004A61C, 0x8004A61C) //this is a jump label
/*8004A61C 0004741C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8004A620 00047420*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x78);
/*8004A624 00047424*/ PPC::Runtime::ASM::blt(.L_8004A468);
/*8004A628 00047428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004A62C 0004742C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004A630 00047430*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004A634 00047434*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004A638 00047438*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004A63C 0004743C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004A640 00047440*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8004A644 00047444*/ PPC::Runtime::ASM::blr();
}