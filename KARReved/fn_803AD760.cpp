//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "lbl_804F8730.hpp"
#include "lbl_804F874C.hpp"
#include "lbl_804F8730.hpp"
#include "lbl_804F874C.hpp"
#include "MemoryOffset_68.hpp"
#include "MemoryOffset_68.hpp"
#include "fn_803AE550.hpp"



void fn_803AD760(PPC::Runtime::GCContext* context)
{
/*803AD760 003AA560*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803AD764 003AA564*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AD768 003AA568*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803AD76C 003AA56C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803AD770 003AA570*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803AD774 003AA574*/ PPC::Runtime::ASM::bne(.L_803AD780);
/*803AD778 003AA578*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803AD77C 003AA57C*/ PPC::Runtime::ASM::b(.L_803AD9B0);
RUNTIME_PPC_JUMP_LABEL(.L_803AD780, 0x803AD780) //this is a jump label
/*803AD780 003AA580*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r4);
/*803AD784 003AA584*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803AD788 003AA588*/ PPC::Runtime::ASM::cmplwi(context->r11, 0x0);
/*803AD78C 003AA58C*/ PPC::Runtime::ASM::beq(.L_803AD974);
/*803AD790 003AA590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803AD794 003AA594*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803AD798 003AA598*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*803AD79C 003AA59C*/ PPC::Runtime::ASM::beq(.L_803AD9B0);
/*803AD7A0 003AA5A0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803AD7A4 003AA5A4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*803AD7A8 003AA5A8*/ PPC::Runtime::ASM::mr(context->r10, context->r4);
/*803AD7AC 003AA5AC*/ PPC::Runtime::ASM::b(.L_803AD7C8);
RUNTIME_PPC_JUMP_LABEL(.L_803AD7B0, 0x803AD7B0) //this is a jump label
/*803AD7B0 003AA5B0*/ PPC::Runtime::ASM::extsb.(context->r5, context->r12);
/*803AD7B4 003AA5B4*/ PPC::Runtime::ASM::bne(.L_803AD7C0);
/*803AD7B8 003AA5B8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803AD7BC 003AA5BC*/ PPC::Runtime::ASM::b(.L_803AD7EC);
RUNTIME_PPC_JUMP_LABEL(.L_803AD7C0, 0x803AD7C0) //this is a jump label
/*803AD7C0 003AA5C0*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*803AD7C4 003AA5C4*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AD7C8, 0x803AD7C8) //this is a jump label
/*803AD7C8 003AA5C8*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803AD7CC 003AA5CC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803AD7D0 003AA5D0*/ PPC::Runtime::ASM::extsb(context->r8, context->r12);
/*803AD7D4 003AA5D4*/ PPC::Runtime::ASM::extsb(context->r5, context->r5);
/*803AD7D8 003AA5D8*/ PPC::Runtime::ASM::cmpw(context->r8, context->r5);
/*803AD7DC 003AA5DC*/ PPC::Runtime::ASM::beq(.L_803AD7B0);
/*803AD7E0 003AA5E0*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803AD7E4 003AA5E4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803AD7E8 003AA5E8*/ PPC::Runtime::ASM::subf(context->r5, context->r8, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_803AD7EC, 0x803AD7EC) //this is a jump label
/*803AD7EC 003AA5EC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803AD7F0 003AA5F0*/ PPC::Runtime::ASM::bne(.L_803AD7F8);
/*803AD7F4 003AA5F4*/ PPC::Runtime::ASM::b(.L_803AD9B0);
RUNTIME_PPC_JUMP_LABEL(.L_803AD7F8, 0x803AD7F8) //this is a jump label
/*803AD7F8 003AA5F8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r11));
/*803AD7FC 003AA5FC*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803AD800 003AA600*/ PPC::Runtime::ASM::beq(.L_803AD974);
/*803AD804 003AA604*/ PPC::Runtime::ASM::b(.L_803AD968);
RUNTIME_PPC_JUMP_LABEL(.L_803AD808, 0x803AD808) //this is a jump label
/*803AD808 003AA608*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/* 803AD80C 003AA60C  55 88 00 01 */ clrrwi. context->r8 , context->r12 , 31
/*803AD810 003AA610*/ PPC::Runtime::ASM::beq(.L_803AD90C);
/*803AD814 003AA614*/ PPC::Runtime::ASM::clrlwi(context->r8, context->r12, 1);
/*803AD818 003AA618*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803AD81C 003AA61C*/ PPC::Runtime::ASM::add.(context->r8, context->r0, context->r8);
/*803AD820 003AA620*/ PPC::Runtime::ASM::bne(.L_803AD8F8);
/*803AD824 003AA624*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803AD828 003AA628*/ PPC::Runtime::ASM::mr(context->r11, context->r4);
/*803AD82C 003AA62C*/ PPC::Runtime::ASM::b(.L_803AD848);
RUNTIME_PPC_JUMP_LABEL(.L_803AD830, 0x803AD830) //this is a jump label
/*803AD830 003AA630*/ PPC::Runtime::ASM::extsb.(context->r8, context->r12);
/*803AD834 003AA634*/ PPC::Runtime::ASM::bne(.L_803AD840);
/*803AD838 003AA638*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803AD83C 003AA63C*/ PPC::Runtime::ASM::b(.L_803AD86C);
RUNTIME_PPC_JUMP_LABEL(.L_803AD840, 0x803AD840) //this is a jump label
/*803AD840 003AA640*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*803AD844 003AA644*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AD848, 0x803AD848) //this is a jump label
/*803AD848 003AA648*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803AD84C 003AA64C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*803AD850 003AA650*/ PPC::Runtime::ASM::extsb(context->r9, context->r12);
/*803AD854 003AA654*/ PPC::Runtime::ASM::extsb(context->r8, context->r8);
/*803AD858 003AA658*/ PPC::Runtime::ASM::cmpw(context->r9, context->r8);
/*803AD85C 003AA65C*/ PPC::Runtime::ASM::beq(.L_803AD830);
/*803AD860 003AA660*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*803AD864 003AA664*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803AD868 003AA668*/ PPC::Runtime::ASM::subf(context->r8, context->r9, context->r8);
RUNTIME_PPC_JUMP_LABEL(.L_803AD86C, 0x803AD86C) //this is a jump label
/*803AD86C 003AA66C*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x0);
/*803AD870 003AA670*/ PPC::Runtime::ASM::bne(.L_803AD8F8);
/*803AD874 003AA674*/ PPC::Runtime::ASM::addi(context->r12, context->r5, 0xc);
/*803AD878 003AA678*/ PPC::Runtime::ASM::mtctr(context->r31);
/*803AD87C 003AA67C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803AD880 003AA680*/ PPC::Runtime::ASM::ble(.L_803AD974);
RUNTIME_PPC_JUMP_LABEL(.L_803AD884, 0x803AD884) //this is a jump label
/*803AD884 003AA684*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r12));
/*803AD888 003AA688*/ PPC::Runtime::ASM::add.(context->r4, context->r0, context->r11);
/*803AD88C 003AA68C*/ PPC::Runtime::ASM::bne(.L_803AD8EC);
/*803AD890 003AA690*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r12));
/*803AD894 003AA694*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803AD898 003AA698*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803AD89C 003AA69C*/ PPC::Runtime::ASM::b(.L_803AD8B8);
RUNTIME_PPC_JUMP_LABEL(.L_803AD8A0, 0x803AD8A0) //this is a jump label
/*803AD8A0 003AA6A0*/ PPC::Runtime::ASM::extsb.(context->r4, context->r10);
/*803AD8A4 003AA6A4*/ PPC::Runtime::ASM::bne(.L_803AD8B0);
/*803AD8A8 003AA6A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803AD8AC 003AA6AC*/ PPC::Runtime::ASM::b(.L_803AD8DC);
RUNTIME_PPC_JUMP_LABEL(.L_803AD8B0, 0x803AD8B0) //this is a jump label
/*803AD8B0 003AA6B0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*803AD8B4 003AA6B4*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AD8B8, 0x803AD8B8) //this is a jump label
/*803AD8B8 003AA6B8*/ PPC::Runtime::ASM::lbz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803AD8BC 003AA6BC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803AD8C0 003AA6C0*/ PPC::Runtime::ASM::extsb(context->r5, context->r10);
/*803AD8C4 003AA6C4*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*803AD8C8 003AA6C8*/ PPC::Runtime::ASM::cmpw(context->r5, context->r4);
/*803AD8CC 003AA6CC*/ PPC::Runtime::ASM::beq(.L_803AD8A0);
/*803AD8D0 003AA6D0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803AD8D4 003AA6D4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803AD8D8 003AA6D8*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_803AD8DC, 0x803AD8DC) //this is a jump label
/*803AD8DC 003AA6DC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803AD8E0 003AA6E0*/ PPC::Runtime::ASM::bne(.L_803AD8EC);
/*803AD8E4 003AA6E4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r11);
/*803AD8E8 003AA6E8*/ PPC::Runtime::ASM::b(.L_803AD9B0);
RUNTIME_PPC_JUMP_LABEL(.L_803AD8EC, 0x803AD8EC) //this is a jump label
/*803AD8EC 003AA6EC*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x8);
/*803AD8F0 003AA6F0*/ PPC::Runtime::ASM::bdnz(.L_803AD884);
/*803AD8F4 003AA6F4*/ PPC::Runtime::ASM::b(.L_803AD974);
RUNTIME_PPC_JUMP_LABEL(.L_803AD8F8, 0x803AD8F8) //this is a jump label
/*803AD8F8 003AA6F8*/ PPC::Runtime::ASM::subi(context->r8, context->r31, 0x1);
/*803AD8FC 003AA6FC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*803AD900 003AA700*/ PPC::Runtime::ASM::slwi(context->r8, context->r8, 3);
/*803AD904 003AA704*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r8);
/*803AD908 003AA708*/ PPC::Runtime::ASM::b(.L_803AD964);
RUNTIME_PPC_JUMP_LABEL(.L_803AD90C, 0x803AD90C) //this is a jump label
/*803AD90C 003AA70C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803AD910 003AA710*/ PPC::Runtime::ASM::mr(context->r11, context->r4);
/*803AD914 003AA714*/ PPC::Runtime::ASM::b(.L_803AD930);
RUNTIME_PPC_JUMP_LABEL(.L_803AD918, 0x803AD918) //this is a jump label
/*803AD918 003AA718*/ PPC::Runtime::ASM::extsb.(context->r8, context->r31);
/*803AD91C 003AA71C*/ PPC::Runtime::ASM::bne(.L_803AD928);
/*803AD920 003AA720*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803AD924 003AA724*/ PPC::Runtime::ASM::b(.L_803AD954);
RUNTIME_PPC_JUMP_LABEL(.L_803AD928, 0x803AD928) //this is a jump label
/*803AD928 003AA728*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*803AD92C 003AA72C*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803AD930, 0x803AD930) //this is a jump label
/*803AD930 003AA730*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803AD934 003AA734*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*803AD938 003AA738*/ PPC::Runtime::ASM::extsb(context->r9, context->r31);
/*803AD93C 003AA73C*/ PPC::Runtime::ASM::extsb(context->r8, context->r8);
/*803AD940 003AA740*/ PPC::Runtime::ASM::cmpw(context->r9, context->r8);
/*803AD944 003AA744*/ PPC::Runtime::ASM::beq(.L_803AD918);
/*803AD948 003AA748*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r11));
/*803AD94C 003AA74C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803AD950 003AA750*/ PPC::Runtime::ASM::subf(context->r8, context->r9, context->r8);
RUNTIME_PPC_JUMP_LABEL(.L_803AD954, 0x803AD954) //this is a jump label
/*803AD954 003AA754*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x0);
/*803AD958 003AA758*/ PPC::Runtime::ASM::bne(.L_803AD964);
/*803AD95C 003AA75C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r12);
/*803AD960 003AA760*/ PPC::Runtime::ASM::b(.L_803AD9B0);
RUNTIME_PPC_JUMP_LABEL(.L_803AD964, 0x803AD964) //this is a jump label
/*803AD964 003AA764*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803AD968, 0x803AD968) //this is a jump label
/*803AD968 003AA768*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803AD96C 003AA76C*/ PPC::Runtime::ASM::cmplwi(context->r9, 0x0);
/*803AD970 003AA770*/ PPC::Runtime::ASM::bne(.L_803AD808);
RUNTIME_PPC_JUMP_LABEL(.L_803AD974, 0x803AD974) //this is a jump label
/*803AD974 003AA774*/ PPC::Runtime::ASM::extsh.(context->r0, context->r7);
/*803AD978 003AA778*/ PPC::Runtime::ASM::beq(.L_803AD9AC);
/*803AD97C 003AA77C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8730 @ Get_MemoryOffset_HighBit);
/*803AD980 003AA780*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F874C @ Get_MemoryOffset_HighBit);
/*803AD984 003AA784*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F8730 @ Get_MemoryOffset_LowBit);
/*803AD988 003AA788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803AD98C 003AA78C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F874C @ Get_MemoryOffset_LowBit);
/*803AD990 003AA790*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_68 @ Get_MemoryOffset_HighBit);
/*803AD994 003AA794*/ PPC::Runtime::ASM::lis(context->r4, fn_803AD9C4 @ Get_MemoryOffset_HighBit);
/*803AD998 003AA798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803AD99C 003AA79C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_803AD9C4 @ Get_MemoryOffset_LowBit);
/*803AD9A0 003AA7A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_68 @ Get_MemoryOffset_LowBit);
/*803AD9A4 003AA7A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803AD9A8 003AA7A8*/ PPC::Runtime::ASM::bl(fn_803AE550);
RUNTIME_PPC_JUMP_LABEL(.L_803AD9AC, 0x803AD9AC) //this is a jump label
/*803AD9AC 003AA7AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803AD9B0, 0x803AD9B0) //this is a jump label
/*803AD9B0 003AA7B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803AD9B4 003AA7B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803AD9B8 003AA7B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AD9BC 003AA7BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803AD9C0 003AA7C0*/ PPC::Runtime::ASM::blr();
}