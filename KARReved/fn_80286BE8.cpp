//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80284298.hpp"
#include "fn_80289138.hpp"



void fn_80286BE8(PPC::Runtime::GCContext* context)
{
/*80286BE8 002839E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80286BEC 002839EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80286BF0 002839F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286BF4 002839F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80286BF8 002839F8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80286BFC 002839FC*/ PPC::Runtime::ASM::lis(context->r3, 0x50);
/*80286C00 00283A00*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*80286C04 00283A04*/ PPC::Runtime::ASM::lis(context->r4, 0x50);
/*80286C08 00283A08*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C0C 00283A0C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80286C10 00283A10*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*80286C14 00283A14*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80286C18 00283A18*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80286C1C 00283A1C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80286C20 00283A20*/ PPC::Runtime::ASM::ble(.L_80286C8C);
RUNTIME_PPC_JUMP_LABEL(.L_80286C24, 0x80286C24) //this is a jump label
/*80286C24 00283A24*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C28 00283A28*/ PPC::Runtime::ASM::li(context->r10, 0xff);
/*80286C2C 00283A2C*/ PPC::Runtime::ASM::addi(context->r8, context->r11, 0x1);
/*80286C30 00283A30*/ PPC::Runtime::ASM::addi(context->r7, context->r11, 0x2);
/*80286C34 00283A34*/ PPC::Runtime::ASM::stbx(context->r10, context->r3, context->r11);
/*80286C38 00283A38*/ PPC::Runtime::ASM::addi(context->r6, context->r11, 0x3);
/*80286C3C 00283A3C*/ PPC::Runtime::ASM::addi(context->r5, context->r11, 0x4);
/*80286C40 00283A40*/ PPC::Runtime::ASM::addi(context->r4, context->r11, 0x5);
/*80286C44 00283A44*/ PPC::Runtime::ASM::lwz(context->r9, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C48 00283A48*/ PPC::Runtime::ASM::addi(context->r3, context->r11, 0x6);
/*80286C4C 00283A4C*/ PPC::Runtime::ASM::addi(context->r0, context->r11, 0x7);
/*80286C50 00283A50*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x8);
/*80286C54 00283A54*/ PPC::Runtime::ASM::stbx(context->r10, context->r9, context->r8);
/*80286C58 00283A58*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C5C 00283A5C*/ PPC::Runtime::ASM::stbx(context->r10, context->r8, context->r7);
/*80286C60 00283A60*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C64 00283A64*/ PPC::Runtime::ASM::stbx(context->r10, context->r7, context->r6);
/*80286C68 00283A68*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C6C 00283A6C*/ PPC::Runtime::ASM::stbx(context->r10, context->r6, context->r5);
/*80286C70 00283A70*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C74 00283A74*/ PPC::Runtime::ASM::stbx(context->r10, context->r5, context->r4);
/*80286C78 00283A78*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C7C 00283A7C*/ PPC::Runtime::ASM::stbx(context->r10, context->r4, context->r3);
/*80286C80 00283A80*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C84 00283A84*/ PPC::Runtime::ASM::stbx(context->r10, context->r3, context->r0);
/*80286C88 00283A88*/ PPC::Runtime::ASM::bdnz(.L_80286C24);
RUNTIME_PPC_JUMP_LABEL(.L_80286C8C, 0x80286C8C) //this is a jump label
/*80286C8C 00283A8C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F7C0 @ Get_MemoryOffset_HighBit);
/*80286C90 00283A90*/ PPC::Runtime::ASM::addic.(context->r3, context->r3, lbl_8055F7C0 @ Get_MemoryOffset_LowBit);
/*80286C94 00283A94*/ PPC::Runtime::ASM::beq(.L_80286CA8);
/*80286C98 00283A98*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286C9C 00283A9C*/ PPC::Runtime::ASM::addis(context->r5, context->r4, 0x50);
/*80286CA0 00283AA0*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x1);
/*80286CA4 00283AA4*/ PPC::Runtime::ASM::bl(fn_8038C47C);
RUNTIME_PPC_JUMP_LABEL(.L_80286CA8, 0x80286CA8) //this is a jump label
/*80286CA8 00283AA8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD934 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286CAC 00283AAC*/ PPC::Runtime::ASM::li(context->r3, 0x24);
/*80286CB0 00283AB0*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 80286CB4 00283AB4  7C 60 1B 79 */ mr. context->r0 , context->r3
/*80286CB8 00283AB8*/ PPC::Runtime::ASM::beq(.L_80286CC8);
/*80286CBC 00283ABC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80286CC0 00283AC0*/ PPC::Runtime::ASM::bl(fn_80284298);
/*80286CC4 00283AC4*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80286CC8, 0x80286CC8) //this is a jump label
/*80286CC8 00283AC8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80286CCC 00283ACC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80286CD0 00283AD0*/ PPC::Runtime::ASM::bne(.L_80286D44);
/*80286CD4 00283AD4*/ PPC::Runtime::ASM::bl(fn_80289138);
/*80286CD8 00283AD8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BB710 @ Get_MemoryOffset_HighBit);
/*80286CDC 00283ADC*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80286CE0 00283AE0*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804BB710 @ Get_MemoryOffset_LowBit);
/*80286CE4 00283AE4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x34);
/*80286CE8 00283AE8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80286CEC 00283AEC*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x34);
/*80286CF0 00283AF0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80286CF4 00283AF4*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80286CF8 00283AF8*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80286CFC 00283AFC*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*80286D00 00283B00*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80286D04 00283B04*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80286D08 00283B08*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80286D0C 00283B0C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*80286D10 00283B10*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*80286D14 00283B14*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80286D18 00283B18*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80286D1C 00283B1C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r6));
/*80286D20 00283B20*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80286D24 00283B24*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80286D28, 0x80286D28) //this is a jump label
/*80286D28 00283B28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80286D2C 00283B2C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80286D30 00283B30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80286D34 00283B34*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80286D38 00283B38*/ PPC::Runtime::ASM::bdnz(.L_80286D28);
/*80286D3C 00283B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80286D40 00283B40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80286D44, 0x80286D44) //this is a jump label
/*80286D44 00283B44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80286D48 00283B48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80286D4C 00283B4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80286D50 00283B50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80286D54 00283B54*/ PPC::Runtime::ASM::blr();
}