//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803D6044.hpp"



void fn_803D6F00(PPC::Runtime::GCContext* context)
{
/*803D6F00 003D3D00*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D6F04 003D3D04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D6F08 003D3D08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*803D6F0C 003D3D0C*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D6F10 003D3D10*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803D6F14 003D3D14*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*803D6F18 003D3D18*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x0);
/*803D6F1C 003D3D1C*/ PPC::Runtime::ASM::addi(context->r30, context->r6, 0x0);
/*803D6F20 003D3D20*/ PPC::Runtime::ASM::addi(context->r31, context->r7, 0x0);
/*803D6F24 003D3D24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803D6F28 003D3D28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D6F2C 003D3D2C*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*803D6F30 003D3D30*/ PPC::Runtime::ASM::bne(.L_803D6F44);
/*803D6F34 003D3D34*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D6F38 003D3D38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803D6F3C 003D3D3C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803D6F40 003D3D40*/ PPC::Runtime::ASM::b(.L_803D7094);
RUNTIME_PPC_JUMP_LABEL(.L_803D6F44, 0x803D6F44) //this is a jump label
/*803D6F44 003D3D44*/ PPC::Runtime::ASM::lhz(context->r0, StructValues_Byte2_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D6F48 003D3D48*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*803D6F4C 003D3D4C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803D6F50 003D3D50*/ PPC::Runtime::ASM::bgt(.L_803D6F58);
/*803D6F54 003D3D54*/ PPC::Runtime::ASM::b(.L_803D6FA0);
RUNTIME_PPC_JUMP_LABEL(.L_803D6F58, 0x803D6F58) //this is a jump label
/*803D6F58 003D3D58*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803D6F5C 003D3D5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r4));
/*803D6F60 003D3D60*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803D6F64 003D3D64*/ PPC::Runtime::ASM::beq(.L_803D6F70);
/*803D6F68 003D3D68*/ PPC::Runtime::ASM::blt(.L_803D6F94);
/*803D6F6C 003D3D6C*/ PPC::Runtime::ASM::b(.L_803D6F94);
RUNTIME_PPC_JUMP_LABEL(.L_803D6F70, 0x803D6F70) //this is a jump label
/*803D6F70 003D3D70*/ PPC::Runtime::ASM::lis(context->r4, 0xcc00);
/*803D6F74 003D3D74*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x206e, context->r4));
/*803D6F78 003D3D78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*803D6F7C 003D3D7C*/ PPC::Runtime::ASM::beq(.L_803D6F88);
/*803D6F80 003D3D80*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803D6F84 003D3D84*/ PPC::Runtime::ASM::b(.L_803D6F8C);
RUNTIME_PPC_JUMP_LABEL(.L_803D6F88, 0x803D6F88) //this is a jump label
/*803D6F88 003D3D88*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803D6F8C, 0x803D6F8C) //this is a jump label
/*803D6F8C 003D3D8C*/ PPC::Runtime::ASM::sth(context->r0, StructValues_Byte2_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D6F90 003D3D90*/ PPC::Runtime::ASM::b(.L_803D6F9C);
RUNTIME_PPC_JUMP_LABEL(.L_803D6F94, 0x803D6F94) //this is a jump label
/*803D6F94 003D3D94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D6F98 003D3D98*/ PPC::Runtime::ASM::sth(context->r0, StructValues_Byte2_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803D6F9C, 0x803D6F9C) //this is a jump label
/*803D6F9C 003D3D9C*/ PPC::Runtime::ASM::lhz(context->r0, StructValues_Byte2_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803D6FA0, 0x803D6FA0) //this is a jump label
/*803D6FA0 003D3DA0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*803D6FA4 003D3DA4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803D6FA8 003D3DA8*/ PPC::Runtime::ASM::bne(.L_803D701C);
/*803D6FAC 003D3DAC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*803D6FB0 003D3DB0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x81);
/*803D6FB4 003D3DB4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D6FB8 003D3DB8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803D6FBC 003D3DBC*/ PPC::Runtime::ASM::blt(.L_803D6FCC);
/*803D6FC0 003D3DC0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9f);
/*803D6FC4 003D3DC4*/ PPC::Runtime::ASM::bgt(.L_803D6FCC);
/*803D6FC8 003D3DC8*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_803D6FCC, 0x803D6FCC) //this is a jump label
/*803D6FCC 003D3DCC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803D6FD0 003D3DD0*/ PPC::Runtime::ASM::bne(.L_803D6FFC);
/*803D6FD4 003D3DD4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*803D6FD8 003D3DD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xe0);
/*803D6FDC 003D3DDC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803D6FE0 003D3DE0*/ PPC::Runtime::ASM::blt(.L_803D6FF0);
/*803D6FE4 003D3DE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfc);
/*803D6FE8 003D3DE8*/ PPC::Runtime::ASM::bgt(.L_803D6FF0);
/*803D6FEC 003D3DEC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803D6FF0, 0x803D6FF0) //this is a jump label
/*803D6FF0 003D3DF0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803D6FF4 003D3DF4*/ PPC::Runtime::ASM::bne(.L_803D6FFC);
/*803D6FF8 003D3DF8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803D6FFC, 0x803D6FFC) //this is a jump label
/*803D6FFC 003D3DFC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803D7000 003D3E00*/ PPC::Runtime::ASM::beq(.L_803D701C);
/*803D7004 003D3E04*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803D7008 003D3E08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*803D700C 003D3E0C*/ PPC::Runtime::ASM::beq(.L_803D701C);
/*803D7010 003D3E10*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r3, 16, 8);
/*803D7014 003D3E14*/ PPC::Runtime::ASM::or(context->r3, context->r0, context->r4);
/*803D7018 003D3E18*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803D701C, 0x803D701C) //this is a jump label
/*803D701C 003D3E1C*/ PPC::Runtime::ASM::bl(fn_803D6044);
/*803D7020 003D3E20*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDED4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D7024 003D3E24*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803D7028 003D3E28*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDEC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D702C 003D3E2C*/ PPC::Runtime::ASM::divw(context->r6, context->r3, context->r0);
/*803D7030 003D3E30*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDECC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D7034 003D3E34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803D7038 003D3E38*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r6);
/*803D703C 003D3E3C*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*803D7040 003D3E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803D7044 003D3E44*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDED4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D7048 003D3E48*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDEC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D704C 003D3E4C*/ PPC::Runtime::ASM::mullw(context->r4, context->r6, context->r0);
/*803D7050 003D3E50*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r5));
/*803D7054 003D3E54*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*803D7058 003D3E58*/ PPC::Runtime::ASM::subf(context->r5, context->r4, context->r3);
/*803D705C 003D3E5C*/ PPC::Runtime::ASM::divw(context->r7, context->r5, context->r6);
/*803D7060 003D3E60*/ PPC::Runtime::ASM::mullw(context->r4, context->r7, context->r6);
/*803D7064 003D3E64*/ PPC::Runtime::ASM::subf(context->r4, context->r4, context->r5);
/*803D7068 003D3E68*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r0);
/*803D706C 003D3E6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803D7070 003D3E70*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDEC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D7074 003D3E74*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r4));
/*803D7078 003D3E78*/ PPC::Runtime::ASM::mullw(context->r0, context->r7, context->r0);
/*803D707C 003D3E7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803D7080 003D3E80*/ PPC::Runtime::ASM::beq(.L_803D7090);
/*803D7084 003D3E84*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDED0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D7088 003D3E88*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r3);
/*803D708C 003D3E8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803D7090, 0x803D7090) //this is a jump label
/*803D7090 003D3E90*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_803D7094, 0x803D7094) //this is a jump label
/*803D7094 003D3E94*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D7098 003D3E98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803D709C 003D3E9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*803D70A0 003D3EA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D70A4 003D3EA4*/ PPC::Runtime::ASM::blr();
}