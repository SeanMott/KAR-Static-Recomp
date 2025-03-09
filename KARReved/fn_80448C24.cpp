//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSReport.hpp"
#include "fn___assert.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80448C24(PPC::Runtime::GCContext* context)
{
/*80448C24 00445A24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80448C28 00445A28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80448C2C 00445A2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80448C30 00445A30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80448C34 00445A34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80448C38 00445A38*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80448C3C 00445A3C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80448C40 00445A40*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80448C44 00445A44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80448C48 00445A48*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A060 @ Get_MemoryOffset_HighBit);
/*80448C4C 00445A4C*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*80448C50 00445A50*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80448C54 00445A54*/ PPC::Runtime::ASM::mulli(context->r6, context->r0, 0x98);
/*80448C58 00445A58*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18059A060 @ Get_MemoryOffset_LowBit);
/*80448C5C 00445A5C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*80448C60 00445A60*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE4E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80448C64 00445A64*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r6);
/*80448C68 00445A68*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80448C6C 00445A6C*/ PPC::Runtime::ASM::mtctr(context->r5);
/*80448C70 00445A70*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*80448C74 00445A74*/ PPC::Runtime::ASM::ble(.L_80448CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80448C78, 0x80448C78) //this is a jump label
/*80448C78 00445A78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80448C7C 00445A7C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r29);
/*80448C80 00445A80*/ PPC::Runtime::ASM::bne(.L_80448C9C);
/*80448C84 00445A84*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A060 @ Get_MemoryOffset_HighBit);
/*80448C88 00445A88*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*80448C8C 00445A8C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A060 @ Get_MemoryOffset_LowBit);
/*80448C90 00445A90*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80448C94 00445A94*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
/*80448C98 00445A98*/ PPC::Runtime::ASM::b(.L_80448CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80448C9C, 0x80448C9C) //this is a jump label
/*80448C9C 00445A9C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80448CA0 00445AA0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80448CA4 00445AA4*/ PPC::Runtime::ASM::bdnz(.L_80448C78);
RUNTIME_PPC_JUMP_LABEL(.L_80448CA8, 0x80448CA8) //this is a jump label
/*80448CA8 00445AA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80448CAC 00445AAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80448CB0 00445AB0*/ PPC::Runtime::ASM::bne(.L_80448CC0);
/*80448CB4 00445AB4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80448CB8 00445AB8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80448CBC 00445ABC*/ PPC::Runtime::ASM::b(.L_80448EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80448CC0, 0x80448CC0) //this is a jump label
/*80448CC0 00445AC0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80448CC4 00445AC4*/ PPC::Runtime::ASM::bne(.L_80448CE0);
/*80448CC8 00445AC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80448CCC 00445ACC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*80448CD0 00445AD0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*80448CD4 00445AD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80448CD8 00445AD8*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x98);
/*80448CDC 00445ADC*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80448CE0, 0x80448CE0) //this is a jump label
/*80448CE0 00445AE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80448CE4 00445AE4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80448CE8 00445AE8*/ PPC::Runtime::ASM::bge(.L_80448D10);
/*80448CEC 00445AEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80448CF0 00445AF0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*80448CF4 00445AF4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*80448CF8 00445AF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80448CFC 00445AFC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*80448D00 00445B00*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*80448D04 00445B04*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80448D08 00445B08*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*80448D0C 00445B0C*/ PPC::Runtime::ASM::add(context->r31, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80448D10, 0x80448D10) //this is a jump label
/*80448D10 00445B10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80448D14 00445B14*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80448D18 00445B18*/ PPC::Runtime::ASM::beq(.L_80448D3C);
/*80448D1C 00445B1C*/ PPC::Runtime::ASM::lis(context->r3, String_ "Program_streaming_droppe" Get_MemoryOffset_HighBit);
/*80448D20 00445B20*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "Program_streaming_droppe" Get_MemoryOffset_LowBit);
/*80448D24 00445B24*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80448D28 00445B28*/ PPC::Runtime::ASM::bl(OSReport);
/*80448D2C 00445B2C*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*80448D30 00445B30*/ PPC::Runtime::ASM::li(context->r4, 0x636);
/*80448D34 00445B34*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_344 @ Get_MemoryOffset_SDA21);
/*80448D38 00445B38*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80448D3C, 0x80448D3C) //this is a jump label
/*80448D3C 00445B3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/* 80448D40 00445B40  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80448D44 00445B44*/ PPC::Runtime::ASM::bne(.L_80448D6C);
/*80448D48 00445B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80448D4C 00445B4C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80448D50 00445B50*/ PPC::Runtime::ASM::bne(.L_80448D6C);
/*80448D54 00445B54*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE4F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80448D58 00445B58*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80448D5C 00445B5C*/ PPC::Runtime::ASM::beq(.L_80448D6C);
/*80448D60 00445B60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80448D64 00445B64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80448D68 00445B68*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80448D6C, 0x80448D6C) //this is a jump label
/*80448D6C 00445B6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r31));
/*80448D70 00445B70*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80448D74 00445B74*/ PPC::Runtime::ASM::beq(.L_80448DAC);
/*80448D78 00445B78*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DE504 @ Get_MemoryOffset_SDA21);
/*80448D7C 00445B7C*/ PPC::Runtime::ASM::b(.L_80448DA0);
RUNTIME_PPC_JUMP_LABEL(.L_80448D80, 0x80448D80) //this is a jump label
/*80448D80 00445B80*/ PPC::Runtime::ASM::cmplw(context->r4, context->r31);
/*80448D84 00445B84*/ PPC::Runtime::ASM::bne(.L_80448D9C);
/*80448D88 00445B88*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80448D8C 00445B8C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r31));
/*80448D90 00445B90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80448D94 00445B94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80448D98 00445B98*/ PPC::Runtime::ASM::b(.L_80448DAC);
RUNTIME_PPC_JUMP_LABEL(.L_80448D9C, 0x80448D9C) //this is a jump label
/*80448D9C 00445B9C*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x24);
RUNTIME_PPC_JUMP_LABEL(.L_80448DA0, 0x80448DA0) //this is a jump label
/*80448DA0 00445BA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80448DA4 00445BA4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80448DA8 00445BA8*/ PPC::Runtime::ASM::bne(.L_80448D80);
RUNTIME_PPC_JUMP_LABEL(.L_80448DAC, 0x80448DAC) //this is a jump label
/*80448DAC 00445BAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r31));
/*80448DB0 00445BB0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80448DB4 00445BB4*/ PPC::Runtime::ASM::beq(.L_80448DEC);
/*80448DB8 00445BB8*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805DE508 @ Get_MemoryOffset_SDA21);
/*80448DBC 00445BBC*/ PPC::Runtime::ASM::b(.L_80448DE0);
RUNTIME_PPC_JUMP_LABEL(.L_80448DC0, 0x80448DC0) //this is a jump label
/*80448DC0 00445BC0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*80448DC4 00445BC4*/ PPC::Runtime::ASM::bne(.L_80448DDC);
/*80448DC8 00445BC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80448DCC 00445BCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r31));
/*80448DD0 00445BD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80448DD4 00445BD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80448DD8 00445BD8*/ PPC::Runtime::ASM::b(.L_80448DEC);
RUNTIME_PPC_JUMP_LABEL(.L_80448DDC, 0x80448DDC) //this is a jump label
/*80448DDC 00445BDC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x28);
RUNTIME_PPC_JUMP_LABEL(.L_80448DE0, 0x80448DE0) //this is a jump label
/*80448DE0 00445BE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80448DE4 00445BE4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80448DE8 00445BE8*/ PPC::Runtime::ASM::bne(.L_80448DC0);
RUNTIME_PPC_JUMP_LABEL(.L_80448DEC, 0x80448DEC) //this is a jump label
/*80448DEC 00445BEC*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80448DF0 00445BF0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80448DF4 00445BF4*/ PPC::Runtime::ASM::beq(.L_80448E34);
/*80448DF8 00445BF8*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x98);
/*80448DFC 00445BFC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*80448E00 00445C00*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1805DE50C @ Get_MemoryOffset_SDA21);
/*80448E04 00445C04*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*80448E08 00445C08*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*80448E0C 00445C0C*/ PPC::Runtime::ASM::b(.L_80448E28);
RUNTIME_PPC_JUMP_LABEL(.L_80448E10, 0x80448E10) //this is a jump label
/*80448E10 00445C10*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*80448E14 00445C14*/ PPC::Runtime::ASM::bne(.L_80448E24);
/*80448E18 00445C18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80448E1C 00445C1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80448E20 00445C20*/ PPC::Runtime::ASM::b(.L_80448E34);
RUNTIME_PPC_JUMP_LABEL(.L_80448E24, 0x80448E24) //this is a jump label
/*80448E24 00445C24*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x30);
RUNTIME_PPC_JUMP_LABEL(.L_80448E28, 0x80448E28) //this is a jump label
/*80448E28 00445C28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80448E2C 00445C2C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80448E30 00445C30*/ PPC::Runtime::ASM::bne(.L_80448E10);
RUNTIME_PPC_JUMP_LABEL(.L_80448E34, 0x80448E34) //this is a jump label
/*80448E34 00445C34*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A060 @ Get_MemoryOffset_HighBit);
/*80448E38 00445C38*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*80448E3C 00445C3C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, STRUCT_BYTE4_COUNT_18059A060 @ Get_MemoryOffset_LowBit);
/*80448E40 00445C40*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*80448E44 00445C44*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*80448E48 00445C48*/ PPC::Runtime::ASM::b(.L_80448EC4);
RUNTIME_PPC_JUMP_LABEL(.L_80448E4C, 0x80448E4C) //this is a jump label
/*80448E4C 00445C4C*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x0);
/*80448E50 00445C50*/ PPC::Runtime::ASM::bne(.L_80448E5C);
/*80448E54 00445C54*/ PPC::Runtime::ASM::mr(context->r0, context->r31);
/*80448E58 00445C58*/ PPC::Runtime::ASM::b(.L_80448E6C);
RUNTIME_PPC_JUMP_LABEL(.L_80448E5C, 0x80448E5C) //this is a jump label
/*80448E5C 00445C5C*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0x98);
/*80448E60 00445C60*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*80448E64 00445C64*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*80448E68 00445C68*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80448E6C, 0x80448E6C) //this is a jump label
/*80448E6C 00445C6C*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*80448E70 00445C70*/ PPC::Runtime::ASM::mr(context->r8, context->r0);
/*80448E74 00445C74*/ PPC::Runtime::ASM::mr(context->r5, context->r10);
/*80448E78 00445C78*/ PPC::Runtime::ASM::b(.L_80448EB4);
RUNTIME_PPC_JUMP_LABEL(.L_80448E7C, 0x80448E7C) //this is a jump label
/*80448E7C 00445C7C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80448E80 00445C80*/ PPC::Runtime::ASM::cmplw(context->r9, context->r29);
/*80448E84 00445C84*/ PPC::Runtime::ASM::beq(.L_80448E9C);
/*80448E88 00445C88*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DE4E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80448E8C 00445C8C*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x1);
/*80448E90 00445C90*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*80448E94 00445C94*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE4E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80448E98 00445C98*/ PPC::Runtime::ASM::stwx(context->r9, context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80448E9C, 0x80448E9C) //this is a jump label
/*80448E9C 00445C9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80448EA0 00445CA0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*80448EA4 00445CA4*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*80448EA8 00445CA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80448EAC 00445CAC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*80448EB0 00445CB0*/ PPC::Runtime::ASM::stwx(context->r5, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80448EB4, 0x80448EB4) //this is a jump label
/*80448EB4 00445CB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*80448EB8 00445CB8*/ PPC::Runtime::ASM::cmpw(context->r10, context->r0);
/*80448EBC 00445CBC*/ PPC::Runtime::ASM::blt(.L_80448E7C);
/*80448EC0 00445CC0*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80448EC4, 0x80448EC4) //this is a jump label
/*80448EC4 00445CC4*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80448EC8 00445CC8*/ PPC::Runtime::ASM::subfic(context->r3, context->r5, -0x1);
/*80448ECC 00445CCC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*80448ED0 00445CD0*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*80448ED4 00445CD4*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80448ED8 00445CD8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80448EDC 00445CDC*/ PPC::Runtime::ASM::cmpw(context->r11, context->r0);
/*80448EE0 00445CE0*/ PPC::Runtime::ASM::blt(.L_80448E4C);
/*80448EE4 00445CE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80448EE8 00445CE8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_80448EEC, 0x80448EEC) //this is a jump label
/*80448EEC 00445CEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80448EF0 00445CF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80448EF4 00445CF4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80448EF8 00445CF8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80448EFC 00445CFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80448F00 00445D00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80448F04 00445D04*/ PPC::Runtime::ASM::blr();
}