//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ParseTags.hpp"
#include "memmove.hpp"
#include "fn_8047FCFC.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_memcmp.hpp"
#include "fn_ParseTags.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047F3DC.hpp"
#include "fn_8047F4C8.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_memcmp.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047F578.hpp"
#include "fn_80480210.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "memmove.hpp"
#include "fn_memcmp.hpp"
#include "fn_OutPADT.hpp"
#include "fn_memcmp.hpp"
#include "fn_8047F2D8.hpp"



void fn_80480454(PPC::Runtime::GCContext* context)
{
/*80480454 0047D254*/ PPC::Runtime::ASM::mflr(context->r0);
/*80480458 0047D258*/ PPC::Runtime::ASM::lis(context->r7, lbl_80534558 @ Get_MemoryOffset_HighBit);
/*8048045C 0047D25C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80480460 0047D260*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x14);
/*80480464 0047D264*/ PPC::Runtime::ASM::addi(context->r0, context->r7, lbl_80534558 @ Get_MemoryOffset_LowBit);
/*80480468 0047D268*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8048046C 0047D26C*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80480470 0047D270*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*80480474 0047D274*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*80480478 0047D278*/ PPC::Runtime::ASM::addi(context->r26, context->r6, 0x0);
/*8048047C 0047D27C*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*80480480 0047D280*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0xe);
/*80480484 0047D284*/ PPC::Runtime::ASM::blt(.L_80480798);
/*80480488 0047D288*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8048048C 0047D28C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x14);
/*80480490 0047D290*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*80480494 0047D294*/ PPC::Runtime::ASM::bge(.L_8048049C);
/*80480498 0047D298*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_8048049C, 0x8048049C) //this is a jump label
/*8048049C 0047D29C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804804A0 0047D2A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x11);
/*804804A4 0047D2A4*/ PPC::Runtime::ASM::bne(.L_80480798);
/*804804A8 0047D2A8*/ PPC::Runtime::ASM::lis(context->r27, 0x1);
/*804804AC 0047D2AC*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*804804B0 0047D2B0*/ PPC::Runtime::ASM::subi(context->r0, context->r27, 0x779c);
/*804804B4 0047D2B4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*804804B8 0047D2B8*/ PPC::Runtime::ASM::beq(.L_80480738);
/*804804BC 0047D2BC*/ PPC::Runtime::ASM::bge(.L_80480798);
/*804804C0 0047D2C0*/ PPC::Runtime::ASM::subi(context->r0, context->r27, 0x779d);
/*804804C4 0047D2C4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*804804C8 0047D2C8*/ PPC::Runtime::ASM::bge(.L_804804D0);
/*804804CC 0047D2CC*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_804804D0, 0x804804D0) //this is a jump label
/*804804D0 0047D2D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*804804D4 0047D2D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x65);
/*804804D8 0047D2D8*/ PPC::Runtime::ASM::beq(.L_80480580);
/*804804DC 0047D2DC*/ PPC::Runtime::ASM::bge(.L_804804EC);
/*804804E0 0047D2E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*804804E4 0047D2E4*/ PPC::Runtime::ASM::beq(.L_804804F8);
/*804804E8 0047D2E8*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_804804EC, 0x804804EC) //this is a jump label
/*804804EC 0047D2EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa7);
/*804804F0 0047D2F0*/ PPC::Runtime::ASM::beq(.L_80480628);
/*804804F4 0047D2F4*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_804804F8, 0x804804F8) //this is a jump label
/*804804F8 0047D2F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*804804FC 0047D2FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*80480500 0047D300*/ PPC::Runtime::ASM::bne(.L_80480798);
/*80480504 0047D304*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*80480508 0047D308*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8048050C 0047D30C*/ PPC::Runtime::ASM::bne(.L_80480798);
/*80480510 0047D310*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80480514 0047D314*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*80480518 0047D318*/ PPC::Runtime::ASM::bl(fn_ParseTags);
/* 8048051C 0047D31C  7C 64 1B 79 */ mr. context->r4 , context->r3
/*80480520 0047D320*/ PPC::Runtime::ASM::bne(.L_8048054C);
/*80480524 0047D324*/ PPC::Runtime::ASM::li(context->r0, 0x19);
/*80480528 0047D328*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8048052C 0047D32C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x38);
/*80480530 0047D330*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x6);
/*80480534 0047D334*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80480538 0047D338*/ PPC::Runtime::ASM::bl(memmove);
/*8048053C 0047D33C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80480540 0047D340*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80480544 0047D344*/ PPC::Runtime::ASM::bl(fn_8047FCFC);
/*80480548 0047D348*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_8048054C, 0x8048054C) //this is a jump label
/*8048054C 0047D34C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*80480550 0047D350*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*80480554 0047D354*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*80480558 0047D358*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8048055C 0047D35C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80480560 0047D360*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80480564 0047D364*/ PPC::Runtime::ASM::subi(context->r3, context->r27, 0x1);
/*80480568 0047D368*/ PPC::Runtime::ASM::li(context->r0, 0x5dc);
/*8048056C 0047D36C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80480570 0047D370*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80480574 0047D374*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*80480578 0047D378*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8048057C 0047D37C*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_80480580, 0x80480580) //this is a jump label
/*80480580 0047D380*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80480584 0047D384*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x19);
/*80480588 0047D388*/ PPC::Runtime::ASM::bne(.L_80480798);
/*8048058C 0047D38C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x38);
/*80480590 0047D390*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x6);
/*80480594 0047D394*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80480598 0047D398*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8048059C 0047D39C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804805A0 0047D3A0*/ PPC::Runtime::ASM::bne(.L_80480798);
/*804805A4 0047D3A4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*804805A8 0047D3A8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*804805AC 0047D3AC*/ PPC::Runtime::ASM::bl(fn_ParseTags);
/* 804805B0 0047D3B0  7C 64 1B 79 */ mr. context->r4 , context->r3
/*804805B4 0047D3B4*/ PPC::Runtime::ASM::bne(.L_804805F0);
/*804805B8 0047D3B8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*804805BC 0047D3BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*804805C0 0047D3C0*/ PPC::Runtime::ASM::beq(.L_804805F0);
/*804805C4 0047D3C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804805C8 0047D3C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*804805CC 0047D3CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*804805D0 0047D3D0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*804805D4 0047D3D4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*804805D8 0047D3D8*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*804805DC 0047D3DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*804805E0 0047D3E0*/ PPC::Runtime::ASM::bl(fn_8047F3DC);
/*804805E4 0047D3E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*804805E8 0047D3E8*/ PPC::Runtime::ASM::bl(fn_8047F4C8);
/*804805EC 0047D3EC*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_804805F0, 0x804805F0) //this is a jump label
/*804805F0 0047D3F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*804805F4 0047D3F4*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*804805F8 0047D3F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*804805FC 0047D3FC*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*80480600 0047D400*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80480604 0047D404*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80480608 0047D408*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8048060C 0047D40C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80480610 0047D410*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80480614 0047D414*/ PPC::Runtime::ASM::li(context->r0, 0x5dc);
/*80480618 0047D418*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8048061C 0047D41C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*80480620 0047D420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*80480624 0047D424*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_80480628, 0x80480628) //this is a jump label
/*80480628 0047D428*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8048062C 0047D42C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xffff);
/*80480630 0047D430*/ PPC::Runtime::ASM::beq(.L_80480798);
/*80480634 0047D434*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80480638 0047D438*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8048063C 0047D43C*/ PPC::Runtime::ASM::bne(.L_804806FC);
/*80480640 0047D440*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x38);
/*80480644 0047D444*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x6);
/*80480648 0047D448*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8048064C 0047D44C*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*80480650 0047D450*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80480654 0047D454*/ PPC::Runtime::ASM::bne(.L_804806FC);
/*80480658 0047D458*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8048065C 0047D45C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa7);
/*80480660 0047D460*/ PPC::Runtime::ASM::bne(.L_80480690);
/*80480664 0047D464*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*80480668 0047D468*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8048066C 0047D46C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80480670 0047D470*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80480674 0047D474*/ PPC::Runtime::ASM::subi(context->r3, context->r27, 0x1);
/*80480678 0047D478*/ PPC::Runtime::ASM::li(context->r0, 0x5dc);
/*8048067C 0047D47C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80480680 0047D480*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80480684 0047D484*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*80480688 0047D488*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8048068C 0047D48C*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_80480690, 0x80480690) //this is a jump label
/*80480690 0047D490*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80480694 0047D494*/ PPC::Runtime::ASM::bne(.L_804806FC);
/*80480698 0047D498*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*8048069C 0047D49C*/ PPC::Runtime::ASM::bl(fn_8047F578);
/*804806A0 0047D4A0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*804806A4 0047D4A4*/ PPC::Runtime::ASM::bl(fn_80480210);
/*804806A8 0047D4A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*804806AC 0047D4AC*/ PPC::Runtime::ASM::li(context->r4, -0x6e);
/*804806B0 0047D4B0*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*804806B4 0047D4B4*/ PPC::Runtime::ASM::lhz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*804806B8 0047D4B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*804806BC 0047D4BC*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*804806C0 0047D4C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804806C4 0047D4C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*804806C8 0047D4C8*/ PPC::Runtime::ASM::subi(context->r0, context->r27, 0x1);
/*804806CC 0047D4CC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0xffff);
/*804806D0 0047D4D0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*804806D4 0047D4D4*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804806D8 0047D4D8*/ PPC::Runtime::ASM::beq(.L_804806EC);
/*804806DC 0047D4DC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6);
/*804806E0 0047D4E0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x38);
/*804806E4 0047D4E4*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*804806E8 0047D4E8*/ PPC::Runtime::ASM::bl(memmove);
RUNTIME_PPC_JUMP_LABEL(.L_804806EC, 0x804806EC) //this is a jump label
/*804806EC 0047D4EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*804806F0 0047D4F0*/ PPC::Runtime::ASM::li(context->r0, 0x5dc);
/*804806F4 0047D4F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*804806F8 0047D4F8*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_804806FC, 0x804806FC) //this is a jump label
/*804806FC 0047D4FC*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*80480700 0047D500*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80480704 0047D504*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80480708 0047D508*/ PPC::Runtime::ASM::bne(.L_80480798);
/*8048070C 0047D50C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6);
/*80480710 0047D510*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x6);
/*80480714 0047D514*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80480718 0047D518*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8048071C 0047D51C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80480720 0047D520*/ PPC::Runtime::ASM::bne(.L_80480798);
/*80480724 0047D524*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*80480728 0047D528*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*8048072C 0047D52C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x6);
/*80480730 0047D530*/ PPC::Runtime::ASM::bl(fn_OutPADT);
/*80480734 0047D534*/ PPC::Runtime::ASM::b(.L_80480798);
RUNTIME_PPC_JUMP_LABEL(.L_80480738, 0x80480738) //this is a jump label
/*80480738 0047D538*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8048073C 0047D53C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80480740 0047D540*/ PPC::Runtime::ASM::beq(.L_80480798);
/*80480744 0047D544*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80480748 0047D548*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8048074C 0047D54C*/ PPC::Runtime::ASM::bne(.L_80480798);
/*80480750 0047D550*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80480754 0047D554*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80480758 0047D558*/ PPC::Runtime::ASM::bne(.L_80480798);
/*8048075C 0047D55C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x38);
/*80480760 0047D560*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x6);
/*80480764 0047D564*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80480768 0047D568*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8048076C 0047D56C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80480770 0047D570*/ PPC::Runtime::ASM::bne(.L_80480798);
/*80480774 0047D574*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*80480778 0047D578*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8048077C 0047D57C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80480780 0047D580*/ PPC::Runtime::ASM::bne(.L_80480798);
/*80480784 0047D584*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80480788 0047D588*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*8048078C 0047D58C*/ PPC::Runtime::ASM::addi(context->r6, context->r26, 0x0);
/*80480790 0047D590*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x6);
/*80480794 0047D594*/ PPC::Runtime::ASM::bl(fn_8047F2D8);
RUNTIME_PPC_JUMP_LABEL(.L_80480798, 0x80480798) //this is a jump label
/*80480798 0047D598*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8048079C 0047D59C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*804807A0 0047D5A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*804807A4 0047D5A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804807A8 0047D5A8*/ PPC::Runtime::ASM::blr();
}