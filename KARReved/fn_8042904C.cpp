//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_804287DC.hpp"
#include "fn_80428684.hpp"



void fn_8042904C(PPC::Runtime::GCContext* context)
{
/*8042904C 00425E4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80429050 00425E50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80429054 00425E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80429058 00425E58*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8042905C 00425E5C*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80429060 00425E60*/ PPC::Runtime::ASM::lis(context->r8, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_HighBit);
/*80429064 00425E64*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*80429068 00425E68*/ PPC::Runtime::ASM::lbz(context->r0, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_LowBit ( context->r8 ));
/*8042906C 00425E6C*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*80429070 00425E70*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r28, 24);
/*80429074 00425E74*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*80429078 00425E78*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8042907C 00425E7C*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*80429080 00425E80*/ PPC::Runtime::ASM::mr(context->r30, context->r7);
/*80429084 00425E84*/ PPC::Runtime::ASM::ble(.L_804290A0);
/*80429088 00425E88*/ PPC::Runtime::ASM::lis(context->r3, String_ "gobjplink." Get_MemoryOffset_HighBit);
/*8042908C 00425E8C*/ PPC::Runtime::ASM::lis(context->r5, lbl_80504DE4 @ Get_MemoryOffset_HighBit);
/*80429090 00425E90*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "gobjplink." Get_MemoryOffset_LowBit);
/*80429094 00425E94*/ PPC::Runtime::ASM::li(context->r4, 0x19f);
/*80429098 00425E98*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80504DE4 @ Get_MemoryOffset_LowBit);
/*8042909C 00425E9C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804290A0, 0x804290A0) //this is a jump label
/*804290A0 00425EA0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_HighBit);
/*804290A4 00425EA4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_LowBit);
/*804290A8 00425EA8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/* 804290AC 00425EAC  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*804290B0 00425EB0*/ PPC::Runtime::ASM::bne(.L_804290E0);
/*804290B4 00425EB4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE324 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804290B8 00425EB8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r0);
/*804290BC 00425EBC*/ PPC::Runtime::ASM::bne(.L_804290E0);
/*804290C0 00425EC0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*804290C4 00425EC4*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*804290C8 00425EC8*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 4, 27, 27);
/*804290CC 00425ECC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804290D0 00425ED0*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*804290D4 00425ED4*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r4));
/*804290D8 00425ED8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*804290DC 00425EDC*/ PPC::Runtime::ASM::b(.L_804293DC);
RUNTIME_PPC_JUMP_LABEL(.L_804290E0, 0x804290E0) //this is a jump label
/*804290E0 00425EE0*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*804290E4 00425EE4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*804290E8 00425EE8*/ PPC::Runtime::ASM::b(.L_80429104);
RUNTIME_PPC_JUMP_LABEL(.L_804290EC, 0x804290EC) //this is a jump label
/*804290EC 00425EEC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*804290F0 00425EF0*/ PPC::Runtime::ASM::bl(fn_804287DC);
/*804290F4 00425EF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*804290F8 00425EF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*804290FC 00425EFC*/ PPC::Runtime::ASM::mr(context->r31, context->r25);
/*80429100 00425F00*/ PPC::Runtime::ASM::mr(context->r25, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80429104, 0x80429104) //this is a jump label
/*80429104 00425F04*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80429108 00425F08*/ PPC::Runtime::ASM::bne(.L_804290EC);
/*8042910C 00425F0C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80429110 00425F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80429114 00425F14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80429118 00425F18*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8042911C 00425F1C*/ PPC::Runtime::ASM::beq(.L_8042912C);
/*80429120 00425F20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429124 00425F24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80429128 00425F28*/ PPC::Runtime::ASM::b(.L_80429140);
RUNTIME_PPC_JUMP_LABEL(.L_8042912C, 0x8042912C) //this is a jump label
/*8042912C 00425F2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80429130 00425F30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429134 00425F34*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429138 00425F38*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8042913C 00425F3C*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80429140, 0x80429140) //this is a jump label
/*80429140 00425F40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429144 00425F44*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80429148 00425F48*/ PPC::Runtime::ASM::beq(.L_80429158);
/*8042914C 00425F4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80429150 00425F50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80429154 00425F54*/ PPC::Runtime::ASM::b(.L_8042916C);
RUNTIME_PPC_JUMP_LABEL(.L_80429158, 0x80429158) //this is a jump label
/*80429158 00425F58*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*8042915C 00425F5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80429160 00425F60*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429164 00425F64*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80429168 00425F68*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8042916C, 0x8042916C) //this is a jump label
/*8042916C 00425F6C*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80429170 00425F70*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x2);
/*80429174 00425F74*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80429178 00425F78*/ PPC::Runtime::ASM::beq(.L_804292C4);
/*8042917C 00425F7C*/ PPC::Runtime::ASM::bge(.L_80429190);
/*80429180 00425F80*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*80429184 00425F84*/ PPC::Runtime::ASM::beq(.L_8042919C);
/*80429188 00425F88*/ PPC::Runtime::ASM::bge(.L_80429224);
/*8042918C 00425F8C*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_80429190, 0x80429190) //this is a jump label
/*80429190 00425F90*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x4);
/*80429194 00425F94*/ PPC::Runtime::ASM::bge(.L_8042937C);
/*80429198 00425F98*/ PPC::Runtime::ASM::b(.L_80429320);
RUNTIME_PPC_JUMP_LABEL(.L_8042919C, 0x8042919C) //this is a jump label
/*8042919C 00425F9C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*804291A0 00425FA0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804291A4 00425FA4*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r5, 24, 2);
/*804291A8 00425FA8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*804291AC 00425FAC*/ PPC::Runtime::ASM::b(.L_804291B4);
RUNTIME_PPC_JUMP_LABEL(.L_804291B0, 0x804291B0) //this is a jump label
/*804291B0 00425FB0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_804291B4, 0x804291B4) //this is a jump label
/*804291B4 00425FB4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*804291B8 00425FB8*/ PPC::Runtime::ASM::beq(.L_804291CC);
/*804291BC 00425FBC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*804291C0 00425FC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*804291C4 00425FC4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*804291C8 00425FC8*/ PPC::Runtime::ASM::bgt(.L_804291B0);
RUNTIME_PPC_JUMP_LABEL(.L_804291CC, 0x804291CC) //this is a jump label
/*804291CC 00425FCC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*804291D0 00425FD0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*804291D4 00425FD4*/ PPC::Runtime::ASM::beq(.L_804291E8);
/*804291D8 00425FD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*804291DC 00425FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*804291E0 00425FE0*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*804291E4 00425FE4*/ PPC::Runtime::ASM::b(.L_80429200);
RUNTIME_PPC_JUMP_LABEL(.L_804291E8, 0x804291E8) //this is a jump label
/*804291E8 00425FE8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804291EC 00425FEC*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 2);
/*804291F0 00425FF0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r4);
/*804291F4 00425FF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*804291F8 00425FF8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804291FC 00425FFC*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80429200, 0x80429200) //this is a jump label
/*80429200 00426000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429204 00426004*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80429208 00426008*/ PPC::Runtime::ASM::beq(.L_80429214);
/*8042920C 0042600C*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80429210 00426010*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_80429214, 0x80429214) //this is a jump label
/*80429214 00426014*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429218 00426018*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*8042921C 0042601C*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r0);
/*80429220 00426020*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_80429224, 0x80429224) //this is a jump label
/*80429224 00426024*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80429228 00426028*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042922C 0042602C*/ PPC::Runtime::ASM::clrlslwi(context->r5, context->r6, 24, 2);
/*80429230 00426030*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r5);
/*80429234 00426034*/ PPC::Runtime::ASM::b(.L_8042923C);
RUNTIME_PPC_JUMP_LABEL(.L_80429238, 0x80429238) //this is a jump label
/*80429238 00426038*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8042923C, 0x8042923C) //this is a jump label
/*8042923C 0042603C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80429240 00426040*/ PPC::Runtime::ASM::beq(.L_80429254);
/*80429244 00426044*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80429248 00426048*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8042924C 0042604C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80429250 00426050*/ PPC::Runtime::ASM::blt(.L_80429238);
RUNTIME_PPC_JUMP_LABEL(.L_80429254, 0x80429254) //this is a jump label
/*80429254 00426054*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80429258 00426058*/ PPC::Runtime::ASM::beq(.L_80429264);
/*8042925C 0042605C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80429260 00426060*/ PPC::Runtime::ASM::b(.L_8042926C);
RUNTIME_PPC_JUMP_LABEL(.L_80429264, 0x80429264) //this is a jump label
/*80429264 00426064*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429268 00426068*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8042926C, 0x8042926C) //this is a jump label
/*8042926C 0042606C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80429270 00426070*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80429274 00426074*/ PPC::Runtime::ASM::beq(.L_80429288);
/*80429278 00426078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8042927C 0042607C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429280 00426080*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80429284 00426084*/ PPC::Runtime::ASM::b(.L_804292A0);
RUNTIME_PPC_JUMP_LABEL(.L_80429288, 0x80429288) //this is a jump label
/*80429288 00426088*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042928C 0042608C*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 2);
/*80429290 00426090*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r4);
/*80429294 00426094*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429298 00426098*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042929C 0042609C*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_804292A0, 0x804292A0) //this is a jump label
/*804292A0 004260A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*804292A4 004260A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804292A8 004260A8*/ PPC::Runtime::ASM::beq(.L_804292B4);
/*804292AC 004260AC*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*804292B0 004260B0*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_804292B4, 0x804292B4) //this is a jump label
/*804292B4 004260B4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804292B8 004260B8*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*804292BC 004260BC*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r0);
/*804292C0 004260C0*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_804292C4, 0x804292C4) //this is a jump label
/*804292C4 004260C4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*804292C8 004260C8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*804292CC 004260CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*804292D0 004260D0*/ PPC::Runtime::ASM::beq(.L_804292E4);
/*804292D4 004260D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804292D8 004260D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*804292DC 004260DC*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804292E0 004260E0*/ PPC::Runtime::ASM::b(.L_804292FC);
RUNTIME_PPC_JUMP_LABEL(.L_804292E4, 0x804292E4) //this is a jump label
/*804292E4 004260E4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804292E8 004260E8*/ PPC::Runtime::ASM::slwi(context->r5, context->r4, 2);
/*804292EC 004260EC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r5);
/*804292F0 004260F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*804292F4 004260F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804292F8 004260F8*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_804292FC, 0x804292FC) //this is a jump label
/*804292FC 004260FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429300 00426100*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80429304 00426104*/ PPC::Runtime::ASM::beq(.L_80429310);
/*80429308 00426108*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8042930C 0042610C*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_80429310, 0x80429310) //this is a jump label
/*80429310 00426110*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429314 00426114*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*80429318 00426118*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r0);
/*8042931C 0042611C*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_80429320, 0x80429320) //this is a jump label
/*80429320 00426120*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80429324 00426124*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r27));
/*80429328 00426128*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8042932C 0042612C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80429330 00426130*/ PPC::Runtime::ASM::beq(.L_80429344);
/*80429334 00426134*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80429338 00426138*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8042933C 0042613C*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80429340 00426140*/ PPC::Runtime::ASM::b(.L_8042935C);
RUNTIME_PPC_JUMP_LABEL(.L_80429344, 0x80429344) //this is a jump label
/*80429344 00426144*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429348 00426148*/ PPC::Runtime::ASM::slwi(context->r5, context->r4, 2);
/*8042934C 0042614C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r5);
/*80429350 00426150*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429354 00426154*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429358 00426158*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8042935C, 0x8042935C) //this is a jump label
/*8042935C 0042615C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80429360 00426160*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80429364 00426164*/ PPC::Runtime::ASM::beq(.L_80429370);
/*80429368 00426168*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8042936C 0042616C*/ PPC::Runtime::ASM::b(.L_8042937C);
RUNTIME_PPC_JUMP_LABEL(.L_80429370, 0x80429370) //this is a jump label
/*80429370 00426170*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429374 00426174*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*80429378 00426178*/ PPC::Runtime::ASM::stwx(context->r27, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8042937C, 0x8042937C) //this is a jump label
/*8042937C 0042617C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE344 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429380 00426180*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80429384 00426184*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80429388 00426188*/ PPC::Runtime::ASM::beq(.L_80429390);
/*8042938C 0042618C*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80429390, 0x80429390) //this is a jump label
/*80429390 00426190*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80429394 00426194*/ PPC::Runtime::ASM::li(context->r27, 0x2);
/*80429398 00426198*/ PPC::Runtime::ASM::beq(.L_804293A0);
/*8042939C 0042619C*/ PPC::Runtime::ASM::subi(context->r27, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804293A0, 0x804293A0) //this is a jump label
/*804293A0 004261A0*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*804293A4 004261A4*/ PPC::Runtime::ASM::clrlwi(context->r26, context->r3, 24);
/*804293A8 004261A8*/ PPC::Runtime::ASM::b(.L_804293D4);
RUNTIME_PPC_JUMP_LABEL(.L_804293AC, 0x804293AC) //this is a jump label
/*804293AC 004261AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*804293B0 004261B0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*804293B4 004261B4*/ PPC::Runtime::ASM::bl(fn_80428684);
/*804293B8 004261B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r28));
/*804293BC 004261BC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 2, 26);
/*804293C0 004261C0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*804293C4 004261C4*/ PPC::Runtime::ASM::bne(.L_804293D0);
/*804293C8 004261C8*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r26, 4, 26, 27);
/*804293CC 004261CC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_804293D0, 0x804293D0) //this is a jump label
/*804293D0 004261D0*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_804293D4, 0x804293D4) //this is a jump label
/*804293D4 004261D4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*804293D8 004261D8*/ PPC::Runtime::ASM::bne(.L_804293AC);
RUNTIME_PPC_JUMP_LABEL(.L_804293DC, 0x804293DC) //this is a jump label
/*804293DC 004261DC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*804293E0 004261E0*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*804293E4 004261E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*804293E8 004261E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804293EC 004261EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*804293F0 004261F0*/ PPC::Runtime::ASM::blr();
}