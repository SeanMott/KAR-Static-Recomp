//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "memset.hpp"
#include "fn_8042810C.hpp"
#include "fn_804251A0.hpp"
#include "fn_80425650.hpp"
#include "fn_TExpAssignReg.hpp"
#include "fn___assert.hpp"
#include "fn_8042819C.hpp"
#include "fn_804251A0.hpp"
#include "fn_80425650.hpp"
#include "fn_hsdAllocMemPiece.hpp"
#include "fn_TExp2TevDesc.hpp"
#include "fn_HSD_TExpFreeList.hpp"
#include "fn_HSD_TExpFreeList.hpp"



void fn_HSD_TExpCompile(PPC::Runtime::GCContext* context)
{
/*80424690 00421490*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x5e0, context->r1));
/*80424694 00421494*/ PPC::Runtime::ASM::mflr(context->r0);
/*80424698 00421498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e4, context->r1));
/*8042469C 0042149C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x5e0);
/*804246A0 004214A0*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*804246A4 004214A4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/* 804246A8 004214A8  7C 9E 23 79 */ mr. context->r30 , context->r4
/*804246AC 004214AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804246B0 004214B0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*804246B4 004214B4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*804246B8 004214B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804246BC 004214BC*/ PPC::Runtime::ASM::bne(.L_804246D0);
/*804246C0 004214C0*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*804246C4 004214C4*/ PPC::Runtime::ASM::li(context->r4, 0x65d);
/*804246C8 004214C8*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_476 @ Get_MemoryOffset_SDA21);
/*804246CC 004214CC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804246D0, 0x804246D0) //this is a jump label
/*804246D0 004214D0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*804246D4 004214D4*/ PPC::Runtime::ASM::bne(.L_804246EC);
/*804246D8 004214D8*/ PPC::Runtime::ASM::lis(context->r4, lbl_80504950 @ Get_MemoryOffset_HighBit);
/*804246DC 004214DC*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*804246E0 004214E0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80504950 @ Get_MemoryOffset_LowBit);
/*804246E4 004214E4*/ PPC::Runtime::ASM::li(context->r4, 0x65e);
/*804246E8 004214E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804246EC, 0x804246EC) //this is a jump label
/*804246EC 004214EC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*804246F0 004214F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*804246F4 004214F4*/ PPC::Runtime::ASM::li(context->r5, 0x2c);
/*804246F8 004214F8*/ PPC::Runtime::ASM::bl(memset);
/*804246FC 004214FC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80424700 00421500*/ PPC::Runtime::ASM::bne(.L_8042470C);
/*80424704 00421504*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80424708 00421508*/ PPC::Runtime::ASM::b(.L_80424734);
RUNTIME_PPC_JUMP_LABEL(.L_8042470C, 0x8042470C) //this is a jump label
/*8042470C 0042150C*/ PPC::Runtime::ASM::addis(context->r0, context->r29, 0x1);
/*80424710 00421510*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80424714 00421514*/ PPC::Runtime::ASM::bne(.L_80424720);
/*80424718 00421518*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8042471C 0042151C*/ PPC::Runtime::ASM::b(.L_80424734);
RUNTIME_PPC_JUMP_LABEL(.L_80424720, 0x80424720) //this is a jump label
/*80424720 00421520*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80424724 00421524*/ PPC::Runtime::ASM::bne(.L_80424730);
/*80424728 00421528*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8042472C 0042152C*/ PPC::Runtime::ASM::b(.L_80424734);
RUNTIME_PPC_JUMP_LABEL(.L_80424730, 0x80424730) //this is a jump label
/*80424730 00421530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80424734, 0x80424734) //this is a jump label
/*80424734 00421534*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80424738 00421538*/ PPC::Runtime::ASM::beq(.L_8042475C);
/*8042473C 0042153C*/ PPC::Runtime::ASM::bge(.L_80424768);
/*80424740 00421540*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80424744 00421544*/ PPC::Runtime::ASM::beq(.L_8042474C);
/*80424748 00421548*/ PPC::Runtime::ASM::b(.L_80424768);
RUNTIME_PPC_JUMP_LABEL(.L_8042474C, 0x8042474C) //this is a jump label
/*8042474C 0042154C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80424750 00421550*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80424754 00421554*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80424758 00421558*/ PPC::Runtime::ASM::b(.L_80424768);
RUNTIME_PPC_JUMP_LABEL(.L_8042475C, 0x8042475C) //this is a jump label
/*8042475C 0042155C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80424760 00421560*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80424764 00421564*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80424768, 0x80424768) //this is a jump label
/*80424768 00421568*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8042476C 0042156C*/ PPC::Runtime::ASM::bne(.L_80424778);
/*80424770 00421570*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80424774 00421574*/ PPC::Runtime::ASM::b(.L_804247A0);
RUNTIME_PPC_JUMP_LABEL(.L_80424778, 0x80424778) //this is a jump label
/*80424778 00421578*/ PPC::Runtime::ASM::addis(context->r0, context->r29, 0x1);
/*8042477C 0042157C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80424780 00421580*/ PPC::Runtime::ASM::bne(.L_8042478C);
/*80424784 00421584*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80424788 00421588*/ PPC::Runtime::ASM::b(.L_804247A0);
RUNTIME_PPC_JUMP_LABEL(.L_8042478C, 0x8042478C) //this is a jump label
/*8042478C 0042158C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80424790 00421590*/ PPC::Runtime::ASM::bne(.L_8042479C);
/*80424794 00421594*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80424798 00421598*/ PPC::Runtime::ASM::b(.L_804247A0);
RUNTIME_PPC_JUMP_LABEL(.L_8042479C, 0x8042479C) //this is a jump label
/*8042479C 0042159C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_804247A0, 0x804247A0) //this is a jump label
/*804247A0 004215A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*804247A4 004215A4*/ PPC::Runtime::ASM::beq(.L_804247C8);
/*804247A8 004215A8*/ PPC::Runtime::ASM::bge(.L_804247D4);
/*804247AC 004215AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804247B0 004215B0*/ PPC::Runtime::ASM::beq(.L_804247B8);
/*804247B4 004215B4*/ PPC::Runtime::ASM::b(.L_804247D4);
RUNTIME_PPC_JUMP_LABEL(.L_804247B8, 0x804247B8) //this is a jump label
/*804247B8 004215B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*804247BC 004215BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*804247C0 004215C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*804247C4 004215C4*/ PPC::Runtime::ASM::b(.L_804247D4);
RUNTIME_PPC_JUMP_LABEL(.L_804247C8, 0x804247C8) //this is a jump label
/*804247C8 004215C8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*804247CC 004215CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*804247D0 004215D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_804247D4, 0x804247D4) //this is a jump label
/*804247D4 004215D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*804247D8 004215D8*/ PPC::Runtime::ASM::bl(fn_8042810C);
/*804247DC 004215DC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*804247E0 004215E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xbc);
/*804247E4 004215E4*/ PPC::Runtime::ASM::bl(fn_804251A0);
/*804247E8 004215E8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*804247EC 004215EC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xbc);
/*804247F0 004215F0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x3c);
/*804247F4 004215F4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*804247F8 004215F8*/ PPC::Runtime::ASM::bl(fn_80425650);
/*804247FC 004215FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504C2C @ Get_MemoryOffset_HighBit);
/*80424800 00421600*/ PPC::Runtime::ASM::addi(context->r26, context->r1, 0x3c);
/*80424804 00421604*/ PPC::Runtime::ASM::addi(context->r27, context->r3, lbl_80504C2C @ Get_MemoryOffset_LowBit);
/*80424808 00421608*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*8042480C 0042160C*/ PPC::Runtime::ASM::b(.L_8042483C);
RUNTIME_PPC_JUMP_LABEL(.L_80424810, 0x80424810) //this is a jump label
/*80424810 00421610*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80424814 00421614*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*80424818 00421618*/ PPC::Runtime::ASM::bl(fn_TExpAssignReg);
/*8042481C 0042161C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80424820 00421620*/ PPC::Runtime::ASM::bge(.L_80424834);
/*80424824 00421624*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80424828 00421628*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*8042482C 0042162C*/ PPC::Runtime::ASM::li(context->r4, 0x67e);
/*80424830 00421630*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80424834, 0x80424834) //this is a jump label
/*80424834 00421634*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*80424838 00421638*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8042483C, 0x8042483C) //this is a jump label
/*8042483C 0042163C*/ PPC::Runtime::ASM::cmpw(context->r25, context->r28);
/*80424840 00421640*/ PPC::Runtime::ASM::blt(.L_80424810);
/*80424844 00421644*/ PPC::Runtime::ASM::subi(context->r25, context->r28, 0x1);
/*80424848 00421648*/ PPC::Runtime::ASM::addi(context->r26, context->r1, 0x3c);
/*8042484C 0042164C*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 2);
/*80424850 00421650*/ PPC::Runtime::ASM::add(context->r26, context->r26, context->r0);
/*80424854 00421654*/ PPC::Runtime::ASM::b(.L_80424868);
RUNTIME_PPC_JUMP_LABEL(.L_80424858, 0x80424858) //this is a jump label
/*80424858 00421658*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8042485C 0042165C*/ PPC::Runtime::ASM::bl(fn_8042819C);
/*80424860 00421660*/ PPC::Runtime::ASM::subi(context->r26, context->r26, 0x4);
/*80424864 00421664*/ PPC::Runtime::ASM::subi(context->r25, context->r25, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80424868, 0x80424868) //this is a jump label
/*80424868 00421668*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*8042486C 0042166C*/ PPC::Runtime::ASM::bge(.L_80424858);
/*80424870 00421670*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80424874 00421674*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xbc);
/*80424878 00421678*/ PPC::Runtime::ASM::bl(fn_804251A0);
/*8042487C 0042167C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xbc);
/*80424880 00421680*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*80424884 00421684*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x3c);
/*80424888 00421688*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*8042488C 0042168C*/ PPC::Runtime::ASM::bl(fn_80425650);
/*80424890 00421690*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*80424894 00421694*/ PPC::Runtime::ASM::lis(context->r3, lbl_805028E8 @ Get_MemoryOffset_HighBit);
/*80424898 00421698*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8042489C 0042169C*/ PPC::Runtime::ASM::mr(context->r29, context->r25);
/*804248A0 004216A0*/ PPC::Runtime::ASM::addi(context->r27, context->r3, lbl_805028E8 @ Get_MemoryOffset_LowBit);
/*804248A4 004216A4*/ PPC::Runtime::ASM::addi(context->r28, context->r1, 0x3c);
/*804248A8 004216A8*/ PPC::Runtime::ASM::b(.L_804248F4);
RUNTIME_PPC_JUMP_LABEL(.L_804248AC, 0x804248AC) //this is a jump label
/*804248AC 004216AC*/ PPC::Runtime::ASM::li(context->r3, 0x78);
/*804248B0 004216B0*/ PPC::Runtime::ASM::bl(fn_hsdAllocMemPiece);
/*804248B4 004216B4*/ PPC::Runtime::ASM::lwzx(context->r4, context->r27, context->r29);
/*804248B8 004216B8*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*804248BC 004216BC*/ PPC::Runtime::ASM::subf(context->r0, context->r25, context->r26);
/*804248C0 004216C0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*804248C4 004216C4*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*804248C8 004216C8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*804248CC 004216CC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x4);
/*804248D0 004216D0*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*804248D4 004216D4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r28, context->r0);
/*804248D8 004216D8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*804248DC 004216DC*/ PPC::Runtime::ASM::bl(fn_TExp2TevDesc);
/*804248E0 004216E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804248E4 004216E4*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*804248E8 004216E8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*804248EC 004216EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*804248F0 004216F0*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_804248F4, 0x804248F4) //this is a jump label
/*804248F4 004216F4*/ PPC::Runtime::ASM::cmpw(context->r25, context->r26);
/*804248F8 004216F8*/ PPC::Runtime::ASM::blt(.L_804248AC);
/*804248FC 004216FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80424900 00421700*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80424904 00421704*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80424908 00421708*/ PPC::Runtime::ASM::bl(fn_HSD_TExpFreeList);
/*8042490C 0042170C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80424910 00421710*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80424914 00421714*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80424918 00421718*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042491C 0042171C*/ PPC::Runtime::ASM::bl(fn_HSD_TExpFreeList);
/*80424920 00421720*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80424924 00421724*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80424928 00421728*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x5e0);
/*8042492C 0042172C*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*80424930 00421730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e4, context->r1));
/*80424934 00421734*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80424938 00421738*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x5e0);
/*8042493C 0042173C*/ PPC::Runtime::ASM::blr();
}