//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_8037B33C.hpp"



void fn_802978F4(PPC::Runtime::GCContext* context)
{
/*802978F4 002946F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802978F8 002946F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802978FC 002946FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80297900 00294700*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80297904 00294704*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80297908 00294708*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8029790C 0029470C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80297910 00294710*/ PPC::Runtime::ASM::beq(.L_80297B70);
/*80297914 00294714*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F05E0 @ Get_MemoryOffset_HighBit);
/*80297918 00294718*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x160);
/*8029791C 0029471C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804F05E0 @ Get_MemoryOffset_LowBit);
/*80297920 00294720*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80297924 00294724*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x28);
/*80297928 00294728*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x68);
/*8029792C 0029472C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80297930 00294730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80297934 00294734*/ PPC::Runtime::ASM::beq(.L_8029796C);
/*80297938 00294738*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*8029793C 0029473C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x160);
/*80297940 00294740*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*80297944 00294744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r30));
/*80297948 00294748*/ PPC::Runtime::ASM::beq(.L_8029796C);
/*8029794C 0029474C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*80297950 00294750*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x160);
/*80297954 00294754*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*80297958 00294758*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r30));
/*8029795C 0029475C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r30));
/*80297960 00294760*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80297964 00294764*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80297968 00294768*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8029796C, 0x8029796C) //this is a jump label
/*8029796C 0029476C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x118);
/*80297970 00294770*/ PPC::Runtime::ASM::beq(.L_802979D8);
/*80297974 00294774*/ PPC::Runtime::ASM::lis(context->r3, Struct_FuncPtrs_Offset_2 @ Get_MemoryOffset_HighBit);
/*80297978 00294778*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x13c);
/*8029797C 0029477C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_FuncPtrs_Offset_2 @ Get_MemoryOffset_LowBit);
/*80297980 00294780*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r30));
/*80297984 00294784*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x38);
/*80297988 00294788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r30));
/*8029798C 0029478C*/ PPC::Runtime::ASM::beq(.L_8029799C);
/*80297990 00294790*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*80297994 00294794*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*80297998 00294798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8029799C, 0x8029799C) //this is a jump label
/*8029799C 0029479C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x118);
/*802979A0 002947A0*/ PPC::Runtime::ASM::beq(.L_802979D8);
/*802979A4 002947A4*/ PPC::Runtime::ASM::lis(context->r3, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*802979A8 002947A8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x118);
/*802979AC 002947AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*802979B0 002947B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r30));
/*802979B4 002947B4*/ PPC::Runtime::ASM::beq(.L_802979D8);
/*802979B8 002947B8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*802979BC 002947BC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*802979C0 002947C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*802979C4 002947C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r30));
/*802979C8 002947C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r30));
/*802979CC 002947CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802979D0 002947D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802979D4 002947D4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802979D8, 0x802979D8) //this is a jump label
/*802979D8 002947D8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xdc);
/*802979DC 002947DC*/ PPC::Runtime::ASM::beq(.L_80297A28);
/*802979E0 002947E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802979E4 002947E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802979E8 002947E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r30));
/*802979EC 002947EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r30));
/*802979F0 002947F0*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802979F4 002947F4*/ PPC::Runtime::ASM::beq(.L_80297A00);
/*802979F8 002947F8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802979FC 002947FC*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_80297A00, 0x80297A00) //this is a jump label
/*80297A00 00294800*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xdc);
/*80297A04 00294804*/ PPC::Runtime::ASM::beq(.L_80297A28);
/*80297A08 00294808*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*80297A0C 0029480C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xdc);
/*80297A10 00294810*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*80297A14 00294814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r30));
/*80297A18 00294818*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r30));
/*80297A1C 0029481C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80297A20 00294820*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80297A24 00294824*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80297A28, 0x80297A28) //this is a jump label
/*80297A28 00294828*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xc8);
/*80297A2C 0029482C*/ PPC::Runtime::ASM::beq(.L_80297A74);
/*80297A30 00294830*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDDD8 @ Get_MemoryOffset_HighBit);
/*80297A34 00294834*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDDD8 @ Get_MemoryOffset_LowBit);
/*80297A38 00294838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
/*80297A3C 0029483C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r30));
/*80297A40 00294840*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*80297A44 00294844*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80297A48 00294848*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xc8);
/*80297A4C 0029484C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r30));
/*80297A50 00294850*/ PPC::Runtime::ASM::beq(.L_80297A74);
/*80297A54 00294854*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD98 @ Get_MemoryOffset_HighBit);
/*80297A58 00294858*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc8);
/*80297A5C 0029485C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD98 @ Get_MemoryOffset_LowBit);
/*80297A60 00294860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
/*80297A64 00294864*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r30));
/*80297A68 00294868*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80297A6C 0029486C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80297A70 00294870*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80297A74, 0x80297A74) //this is a jump label
/*80297A74 00294874*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x7c);
/*80297A78 00294878*/ PPC::Runtime::ASM::beq(.L_80297ABC);
/*80297A7C 0029487C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80297A80 00294880*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c);
/*80297A84 00294884*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80297A88 00294888*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80297A8C 0029488C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80297A90 00294890*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80297A94 00294894*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x7c);
/*80297A98 00294898*/ PPC::Runtime::ASM::beq(.L_80297ABC);
/*80297A9C 0029489C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80297AA0 002948A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c);
/*80297AA4 002948A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*80297AA8 002948A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80297AAC 002948AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80297AB0 002948B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80297AB4 002948B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80297AB8 002948B8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80297ABC, 0x80297ABC) //this is a jump label
/*80297ABC 002948BC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x64);
/*80297AC0 002948C0*/ PPC::Runtime::ASM::beq(.L_80297AE0);
/*80297AC4 002948C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*80297AC8 002948C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*80297ACC 002948CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*80297AD0 002948D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*80297AD4 002948D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80297AD8 002948D8*/ PPC::Runtime::ASM::beq(.L_80297AE0);
/*80297ADC 002948DC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_80297AE0, 0x80297AE0) //this is a jump label
/*80297AE0 002948E0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x54);
/*80297AE4 002948E4*/ PPC::Runtime::ASM::beq(.L_80297B08);
/*80297AE8 002948E8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF2B4 @ Get_MemoryOffset_HighBit);
/*80297AEC 002948EC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x54);
/*80297AF0 002948F0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF2B4 @ Get_MemoryOffset_LowBit);
/*80297AF4 002948F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80297AF8 002948F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80297AFC 002948FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80297B00 00294900*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80297B04 00294904*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80297B08, 0x80297B08) //this is a jump label
/*80297B08 00294908*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80297B0C 0029490C*/ PPC::Runtime::ASM::beq(.L_80297B60);
/*80297B10 00294910*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDBE8 @ Get_MemoryOffset_HighBit);
/*80297B14 00294914*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x14);
/*80297B18 00294918*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDBE8 @ Get_MemoryOffset_LowBit);
/*80297B1C 0029491C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80297B20 00294920*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x28);
/*80297B24 00294924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80297B28 00294928*/ PPC::Runtime::ASM::beq(.L_80297B4C);
/*80297B2C 0029492C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDBC0 @ Get_MemoryOffset_HighBit);
/*80297B30 00294930*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14);
/*80297B34 00294934*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDBC0 @ Get_MemoryOffset_LowBit);
/*80297B38 00294938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80297B3C 0029493C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80297B40 00294940*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80297B44 00294944*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80297B48 00294948*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80297B4C, 0x80297B4C) //this is a jump label
/*80297B4C 0029494C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80297B50 00294950*/ PPC::Runtime::ASM::beq(.L_80297B60);
/*80297B54 00294954*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*80297B58 00294958*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*80297B5C 0029495C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80297B60, 0x80297B60) //this is a jump label
/*80297B60 00294960*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80297B64 00294964*/ PPC::Runtime::ASM::ble(.L_80297B70);
/*80297B68 00294968*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80297B6C 0029496C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80297B70, 0x80297B70) //this is a jump label
/*80297B70 00294970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80297B74 00294974*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80297B78 00294978*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80297B7C 0029497C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80297B80 00294980*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80297B84 00294984*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80297B88 00294988*/ PPC::Runtime::ASM::blr();
}