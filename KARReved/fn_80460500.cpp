//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80460500(PPC::Runtime::GCContext* context)
{
/*80460500 0045D300*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80460504 0045D304*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80460508 0045D308*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8046050C 0045D30C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80460510 0045D310*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80460514 0045D314*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80460518 0045D318*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*8046051C 0045D31C*/ PPC::Runtime::ASM::b(.L_80460644);
RUNTIME_PPC_JUMP_LABEL(.L_80460520, 0x80460520) //this is a jump label
/*80460520 0045D320*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*80460524 0045D324*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80460528 0045D328*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8046052C 0045D32C*/ PPC::Runtime::ASM::ble(.L_8046063C);
RUNTIME_PPC_JUMP_LABEL(.L_80460530, 0x80460530) //this is a jump label
/*80460530 0045D330*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80460534 0045D334*/ PPC::Runtime::ASM::bne(.L_80460624);
/*80460538 0045D338*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x619c, context->r3));
/*8046053C 0045D33C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r11));
/*80460540 0045D340*/ PPC::Runtime::ASM::b(.L_80460590);
RUNTIME_PPC_JUMP_LABEL(.L_80460544, 0x80460544) //this is a jump label
/*80460544 0045D344*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6198, context->r3));
/*80460548 0045D348*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x0);
/*8046054C 0045D34C*/ PPC::Runtime::ASM::bge(.L_8046056C);
/*80460550 0045D350*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x618c, context->r3));
/*80460554 0045D354*/ PPC::Runtime::ASM::li(context->r9, 0x1f);
/*80460558 0045D358*/ PPC::Runtime::ASM::addi(context->r7, context->r8, 0x4);
/*8046055C 0045D35C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x618c, context->r3));
/*80460560 0045D360*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80460564 0045D364*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6194, context->r3));
/*80460568 0045D368*/ PPC::Runtime::ASM::b(.L_80460570);
RUNTIME_PPC_JUMP_LABEL(.L_8046056C, 0x8046056C) //this is a jump label
/*8046056C 0045D36C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6194, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80460570, 0x80460570) //this is a jump label
/*80460570 0045D370*/ PPC::Runtime::ASM::srw(context->r7, context->r7, context->r9);
/*80460574 0045D374*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0x1);
/*80460578 0045D378*/ PPC::Runtime::ASM::clrlslwi(context->r8, context->r7, 31, 11);
/*8046057C 0045D37C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6198, context->r3));
/*80460580 0045D380*/ PPC::Runtime::ASM::slwi(context->r7, context->r10, 2);
/*80460584 0045D384*/ PPC::Runtime::ASM::add(context->r7, context->r8, context->r7);
/*80460588 0045D388*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*8046058C 0045D38C*/ PPC::Runtime::ASM::lwzx(context->r10, context->r11, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_80460590, 0x80460590) //this is a jump label
/*80460590 0045D390*/ PPC::Runtime::ASM::cmpwi(context->r10, 0x100);
/*80460594 0045D394*/ PPC::Runtime::ASM::bge(.L_80460544);
/*80460598 0045D398*/ PPC::Runtime::ASM::slwi(context->r7, context->r10, 2);
/*8046059C 0045D39C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*804605A0 0045D3A0*/ PPC::Runtime::ASM::lwzx(context->r7, context->r11, context->r7);
/*804605A4 0045D3A4*/ PPC::Runtime::ASM::extsh.(context->r12, context->r7);
/*804605A8 0045D3A8*/ PPC::Runtime::ASM::bne(.L_80460618);
/*804605AC 0045D3AC*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c4, context->r3));
/*804605B0 0045D3B0*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r11));
/*804605B4 0045D3B4*/ PPC::Runtime::ASM::b(.L_80460604);
RUNTIME_PPC_JUMP_LABEL(.L_804605B8, 0x804605B8) //this is a jump label
/*804605B8 0045D3B8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c0, context->r3));
/*804605BC 0045D3BC*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x0);
/*804605C0 0045D3C0*/ PPC::Runtime::ASM::bge(.L_804605E0);
/*804605C4 0045D3C4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61b4, context->r3));
/*804605C8 0045D3C8*/ PPC::Runtime::ASM::li(context->r9, 0x1f);
/*804605CC 0045D3CC*/ PPC::Runtime::ASM::addi(context->r7, context->r8, 0x4);
/*804605D0 0045D3D0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61b4, context->r3));
/*804605D4 0045D3D4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*804605D8 0045D3D8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61bc, context->r3));
/*804605DC 0045D3DC*/ PPC::Runtime::ASM::b(.L_804605E4);
RUNTIME_PPC_JUMP_LABEL(.L_804605E0, 0x804605E0) //this is a jump label
/*804605E0 0045D3E0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61bc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_804605E4, 0x804605E4) //this is a jump label
/*804605E4 0045D3E4*/ PPC::Runtime::ASM::srw(context->r7, context->r7, context->r9);
/*804605E8 0045D3E8*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0x1);
/*804605EC 0045D3EC*/ PPC::Runtime::ASM::clrlslwi(context->r8, context->r7, 31, 11);
/*804605F0 0045D3F0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c0, context->r3));
/*804605F4 0045D3F4*/ PPC::Runtime::ASM::slwi(context->r7, context->r10, 2);
/*804605F8 0045D3F8*/ PPC::Runtime::ASM::add(context->r7, context->r8, context->r7);
/*804605FC 0045D3FC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*80460600 0045D400*/ PPC::Runtime::ASM::lwzx(context->r10, context->r11, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_80460604, 0x80460604) //this is a jump label
/*80460604 0045D404*/ PPC::Runtime::ASM::cmpwi(context->r10, 0x100);
/*80460608 0045D408*/ PPC::Runtime::ASM::bge(.L_804605B8);
/*8046060C 0045D40C*/ PPC::Runtime::ASM::slwi(context->r7, context->r10, 2);
/*80460610 0045D410*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*80460614 0045D414*/ PPC::Runtime::ASM::lwzx(context->r30, context->r11, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_80460618, 0x80460618) //this is a jump label
/*80460618 0045D418*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8046061C 0045D41C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*80460620 0045D420*/ PPC::Runtime::ASM::b(.L_80460634);
RUNTIME_PPC_JUMP_LABEL(.L_80460624, 0x80460624) //this is a jump label
/*80460624 0045D424*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80460628 0045D428*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x1);
/*8046062C 0045D42C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*80460630 0045D430*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80460634, 0x80460634) //this is a jump label
/*80460634 0045D434*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x1);
/*80460638 0045D438*/ PPC::Runtime::ASM::bdnz(.L_80460530);
RUNTIME_PPC_JUMP_LABEL(.L_8046063C, 0x8046063C) //this is a jump label
/*8046063C 0045D43C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80460640 0045D440*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80460644, 0x80460644) //this is a jump label
/*80460644 0045D444*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80460648 0045D448*/ PPC::Runtime::ASM::bgt(.L_80460520);
/*8046064C 0045D44C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80460650 0045D450*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80460654 0045D454*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*80460658 0045D458*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8046065C 0045D45C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r3));
/*80460660 0045D460*/ PPC::Runtime::ASM::b(.L_804607A4);
RUNTIME_PPC_JUMP_LABEL(.L_80460664, 0x80460664) //this is a jump label
/*80460664 0045D464*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*80460668 0045D468*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8046066C 0045D46C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80460670 0045D470*/ PPC::Runtime::ASM::ble(.L_80460798);
RUNTIME_PPC_JUMP_LABEL(.L_80460674, 0x80460674) //this is a jump label
/*80460674 0045D474*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80460678 0045D478*/ PPC::Runtime::ASM::bne(.L_80460778);
/*8046067C 0045D47C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61b0, context->r3));
/*80460680 0045D480*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r12));
/*80460684 0045D484*/ PPC::Runtime::ASM::b(.L_804606D4);
RUNTIME_PPC_JUMP_LABEL(.L_80460688, 0x80460688) //this is a jump label
/*80460688 0045D488*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61ac, context->r3));
/*8046068C 0045D48C*/ PPC::Runtime::ASM::cmpwi(context->r10, 0x0);
/*80460690 0045D490*/ PPC::Runtime::ASM::bge(.L_804606B0);
/*80460694 0045D494*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61a0, context->r3));
/*80460698 0045D498*/ PPC::Runtime::ASM::li(context->r10, 0x1f);
/*8046069C 0045D49C*/ PPC::Runtime::ASM::addi(context->r8, context->r9, 0x4);
/*804606A0 0045D4A0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61a0, context->r3));
/*804606A4 0045D4A4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*804606A8 0045D4A8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61a8, context->r3));
/*804606AC 0045D4AC*/ PPC::Runtime::ASM::b(.L_804606B4);
RUNTIME_PPC_JUMP_LABEL(.L_804606B0, 0x804606B0) //this is a jump label
/*804606B0 0045D4B0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61a8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_804606B4, 0x804606B4) //this is a jump label
/*804606B4 0045D4B4*/ PPC::Runtime::ASM::srw(context->r8, context->r8, context->r10);
/*804606B8 0045D4B8*/ PPC::Runtime::ASM::subi(context->r10, context->r10, 0x1);
/*804606BC 0045D4BC*/ PPC::Runtime::ASM::clrlslwi(context->r9, context->r8, 31, 11);
/*804606C0 0045D4C0*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61ac, context->r3));
/*804606C4 0045D4C4*/ PPC::Runtime::ASM::slwi(context->r8, context->r11, 2);
/*804606C8 0045D4C8*/ PPC::Runtime::ASM::add(context->r8, context->r9, context->r8);
/*804606CC 0045D4CC*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*804606D0 0045D4D0*/ PPC::Runtime::ASM::lwzx(context->r11, context->r12, context->r8);
RUNTIME_PPC_JUMP_LABEL(.L_804606D4, 0x804606D4) //this is a jump label
/*804606D4 0045D4D4*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x100);
/*804606D8 0045D4D8*/ PPC::Runtime::ASM::bge(.L_80460688);
/*804606DC 0045D4DC*/ PPC::Runtime::ASM::slwi(context->r8, context->r11, 2);
/*804606E0 0045D4E0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*804606E4 0045D4E4*/ PPC::Runtime::ASM::lwzx(context->r8, context->r12, context->r8);
/*804606E8 0045D4E8*/ PPC::Runtime::ASM::extsh.(context->r30, context->r8);
/*804606EC 0045D4EC*/ PPC::Runtime::ASM::bne(.L_8046075C);
/*804606F0 0045D4F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61d8, context->r3));
/*804606F4 0045D4F4*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r12));
/*804606F8 0045D4F8*/ PPC::Runtime::ASM::b(.L_80460748);
RUNTIME_PPC_JUMP_LABEL(.L_804606FC, 0x804606FC) //this is a jump label
/*804606FC 0045D4FC*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61d4, context->r3));
/*80460700 0045D500*/ PPC::Runtime::ASM::cmpwi(context->r10, 0x0);
/*80460704 0045D504*/ PPC::Runtime::ASM::bge(.L_80460724);
/*80460708 0045D508*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c8, context->r3));
/*8046070C 0045D50C*/ PPC::Runtime::ASM::li(context->r10, 0x1f);
/*80460710 0045D510*/ PPC::Runtime::ASM::addi(context->r8, context->r9, 0x4);
/*80460714 0045D514*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c8, context->r3));
/*80460718 0045D518*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8046071C 0045D51C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61d0, context->r3));
/*80460720 0045D520*/ PPC::Runtime::ASM::b(.L_80460728);
RUNTIME_PPC_JUMP_LABEL(.L_80460724, 0x80460724) //this is a jump label
/*80460724 0045D524*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61d0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80460728, 0x80460728) //this is a jump label
/*80460728 0045D528*/ PPC::Runtime::ASM::srw(context->r8, context->r8, context->r10);
/*8046072C 0045D52C*/ PPC::Runtime::ASM::subi(context->r10, context->r10, 0x1);
/*80460730 0045D530*/ PPC::Runtime::ASM::clrlslwi(context->r9, context->r8, 31, 11);
/*80460734 0045D534*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61d4, context->r3));
/*80460738 0045D538*/ PPC::Runtime::ASM::slwi(context->r8, context->r11, 2);
/*8046073C 0045D53C*/ PPC::Runtime::ASM::add(context->r8, context->r9, context->r8);
/*80460740 0045D540*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80460744 0045D544*/ PPC::Runtime::ASM::lwzx(context->r11, context->r12, context->r8);
RUNTIME_PPC_JUMP_LABEL(.L_80460748, 0x80460748) //this is a jump label
/*80460748 0045D548*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x100);
/*8046074C 0045D54C*/ PPC::Runtime::ASM::bge(.L_804606FC);
/*80460750 0045D550*/ PPC::Runtime::ASM::slwi(context->r8, context->r11, 2);
/*80460754 0045D554*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80460758 0045D558*/ PPC::Runtime::ASM::lwzx(context->r31, context->r12, context->r8);
RUNTIME_PPC_JUMP_LABEL(.L_8046075C, 0x8046075C) //this is a jump label
/*8046075C 0045D55C*/ PPC::Runtime::ASM::clrlwi(context->r9, context->r30, 28);
/*80460760 0045D560*/ PPC::Runtime::ASM::extrwi(context->r8, context->r30, 4, 24);
/*80460764 0045D564*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*80460768 0045D568*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*8046076C 0045D56C*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*80460770 0045D570*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x2);
/*80460774 0045D574*/ PPC::Runtime::ASM::b(.L_80460790);
RUNTIME_PPC_JUMP_LABEL(.L_80460778, 0x80460778) //this is a jump label
/*80460778 0045D578*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8046077C 0045D57C*/ PPC::Runtime::ASM::subi(context->r31, context->r31, 0x1);
/*80460780 0045D580*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*80460784 0045D584*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*80460788 0045D588*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*8046078C 0045D58C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80460790, 0x80460790) //this is a jump label
/*80460790 0045D590*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x1);
/*80460794 0045D594*/ PPC::Runtime::ASM::bdnz(.L_80460674);
RUNTIME_PPC_JUMP_LABEL(.L_80460798, 0x80460798) //this is a jump label
/*80460798 0045D598*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8046079C 0045D59C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4);
/*804607A0 0045D5A0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804607A4, 0x804607A4) //this is a jump label
/*804607A4 0045D5A4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*804607A8 0045D5A8*/ PPC::Runtime::ASM::bgt(.L_80460664);
/*804607AC 0045D5AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804607B0 0045D5B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804607B4 0045D5B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804607B8 0045D5B8*/ PPC::Runtime::ASM::blr();
}