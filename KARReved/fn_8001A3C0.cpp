//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8003D698.hpp"



void fn_8001A3C0(PPC::Runtime::GCContext* context)
{
/*8001A3C0 000171C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8001A3C4 000171C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8001A3C8 000171C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001A3CC 000171CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001A3D0 000171D0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8001A3D4 000171D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8001A3D8 000171D8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8001A3DC 000171DC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r3));
/*8001A3E0 000171E0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*8001A3E4 000171E4*/ PPC::Runtime::ASM::bne(.L_8001A3F4);
/*8001A3E8 000171E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8001A3EC 000171EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62, context->r31));
/*8001A3F0 000171F0*/ PPC::Runtime::ASM::b(.L_8001A414);
RUNTIME_PPC_JUMP_LABEL(.L_8001A3F4, 0x8001A3F4) //this is a jump label
/*8001A3F4 000171F4*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*8001A3F8 000171F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8001A3FC 000171FC*/ PPC::Runtime::ASM::bne(.L_8001A40C);
/*8001A400 00017200*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8001A404 00017204*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62, context->r31));
/*8001A408 00017208*/ PPC::Runtime::ASM::b(.L_8001A414);
RUNTIME_PPC_JUMP_LABEL(.L_8001A40C, 0x8001A40C) //this is a jump label
/*8001A40C 0001720C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8001A410 00017210*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8001A414, 0x8001A414) //this is a jump label
/*8001A414 00017214*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x356, context->r3));
/*8001A418 00017218*/ PPC::Runtime::ASM::lis(context->r4, 0x8889);
/*8001A41C 0001721C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x7777);
/*8001A420 00017220*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*8001A424 00017224*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r3));
/* 8001A428 00017228  7C 84 00 96 */ mulhw context->r4 , context->r4 , context->r0
/*8001A42C 0001722C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*8001A430 00017230*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*8001A434 00017234*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8001A438 00017238*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8001A43C 0001723C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*8001A440 00017240*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r3));
/* 8001A444 00017244  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8001A448 00017248*/ PPC::Runtime::ASM::beq(.L_8001A460);
/*8001A44C 0001724C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A450 00017250*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8001A454 00017254*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8001A458 00017258*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A45C 0001725C*/ PPC::Runtime::ASM::b(.L_8001A470);
RUNTIME_PPC_JUMP_LABEL(.L_8001A460, 0x8001A460) //this is a jump label
/*8001A460 00017260*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A464 00017264*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8001A468 00017268*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8001A46C 0001726C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8001A470, 0x8001A470) //this is a jump label
/*8001A470 00017270*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r3));
/* 8001A474 00017274  54 00 D7 BF */ extrwi. context->r0 , context->r0 , 2 , 24
/*8001A478 00017278*/ PPC::Runtime::ASM::bne(.L_8001A490);
/*8001A47C 0001727C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A480 00017280*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8001A484 00017284*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 24, 25);
/*8001A488 00017288*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A48C 0001728C*/ PPC::Runtime::ASM::b(.L_8001A4BC);
RUNTIME_PPC_JUMP_LABEL(.L_8001A490, 0x8001A490) //this is a jump label
/*8001A490 00017290*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8001A494 00017294*/ PPC::Runtime::ASM::bne(.L_8001A4AC);
/*8001A498 00017298*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A49C 0001729C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8001A4A0 000172A0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 24, 25);
/*8001A4A4 000172A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A4A8 000172A8*/ PPC::Runtime::ASM::b(.L_8001A4BC);
RUNTIME_PPC_JUMP_LABEL(.L_8001A4AC, 0x8001A4AC) //this is a jump label
/*8001A4AC 000172AC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A4B0 000172B0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8001A4B4 000172B4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 24, 25);
/*8001A4B8 000172B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8001A4BC, 0x8001A4BC) //this is a jump label
/*8001A4BC 000172BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r3));
/* 8001A4C0 000172C0  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*8001A4C4 000172C4*/ PPC::Runtime::ASM::beq(.L_8001A4DC);
/*8001A4C8 000172C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A4CC 000172CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8001A4D0 000172D0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8001A4D4 000172D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A4D8 000172D8*/ PPC::Runtime::ASM::b(.L_8001A4EC);
RUNTIME_PPC_JUMP_LABEL(.L_8001A4DC, 0x8001A4DC) //this is a jump label
/*8001A4DC 000172DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A4E0 000172E0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8001A4E4 000172E4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8001A4E8 000172E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8001A4EC, 0x8001A4EC) //this is a jump label
/*8001A4EC 000172EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r3));
/*8001A4F0 000172F0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 28);
/*8001A4F4 000172F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*8001A4F8 000172F8*/ PPC::Runtime::ASM::bne(.L_8001A510);
/*8001A4FC 000172FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A500 00017300*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8001A504 00017304*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 28, 29);
/*8001A508 00017308*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A50C 0001730C*/ PPC::Runtime::ASM::b(.L_8001A520);
RUNTIME_PPC_JUMP_LABEL(.L_8001A510, 0x8001A510) //this is a jump label
/*8001A510 00017310*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A514 00017314*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8001A518 00017318*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 28, 29);
/*8001A51C 0001731C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8001A520, 0x8001A520) //this is a jump label
/*8001A520 00017320*/ PPC::Runtime::ASM::bl(fn_8003D698);
/*8001A524 00017324*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8001A528 00017328*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8001A52C 0001732C*/ PPC::Runtime::ASM::beq(.L_8001A560);
/*8001A530 00017330*/ PPC::Runtime::ASM::bge(.L_8001A540);
/*8001A534 00017334*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8001A538 00017338*/ PPC::Runtime::ASM::bge(.L_8001A54C);
/*8001A53C 0001733C*/ PPC::Runtime::ASM::b(.L_8001A5A4);
RUNTIME_PPC_JUMP_LABEL(.L_8001A540, 0x8001A540) //this is a jump label
/*8001A540 00017340*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8001A544 00017344*/ PPC::Runtime::ASM::bge(.L_8001A5A4);
/*8001A548 00017348*/ PPC::Runtime::ASM::b(.L_8001A574);
RUNTIME_PPC_JUMP_LABEL(.L_8001A54C, 0x8001A54C) //this is a jump label
/*8001A54C 0001734C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A550 00017350*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8001A554 00017354*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 30, 31);
/*8001A558 00017358*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A55C 0001735C*/ PPC::Runtime::ASM::b(.L_8001A5A4);
RUNTIME_PPC_JUMP_LABEL(.L_8001A560, 0x8001A560) //this is a jump label
/*8001A560 00017360*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A564 00017364*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8001A568 00017368*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 30, 31);
/*8001A56C 0001736C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A570 00017370*/ PPC::Runtime::ASM::b(.L_8001A5A4);
RUNTIME_PPC_JUMP_LABEL(.L_8001A574, 0x8001A574) //this is a jump label
/*8001A574 00017374*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8001A578 00017378*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8001A57C 0001737C*/ PPC::Runtime::ASM::beq(.L_8001A594);
/*8001A580 00017380*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A584 00017384*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8001A588 00017388*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 30, 31);
/*8001A58C 0001738C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A590 00017390*/ PPC::Runtime::ASM::b(.L_8001A5A4);
RUNTIME_PPC_JUMP_LABEL(.L_8001A594, 0x8001A594) //this is a jump label
/*8001A594 00017394*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001A598 00017398*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8001A59C 0001739C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 30, 31);
/*8001A5A0 000173A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8001A5A4, 0x8001A5A4) //this is a jump label
/*8001A5A4 000173A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001A5A8 000173A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001A5AC 000173AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8001A5B0 000173B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8001A5B4 000173B4*/ PPC::Runtime::ASM::blr();
}