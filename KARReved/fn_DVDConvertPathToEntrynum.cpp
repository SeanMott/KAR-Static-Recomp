//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSPanic.hpp"
#include "fn_tolowe.hpp"
#include "fn_tolowe.hpp"



void fn_DVDConvertPathToEntrynum(PPC::Runtime::GCContext* context)
{
/*803C4ED4 003C1CD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C4ED8 003C1CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C4EDC 003C1CDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x48, context->r1));
/*803C4EE0 003C1CE0*/ PPC::Runtime::ASM::stmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C4EE4 003C1CE4*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
/*803C4EE8 003C1CE8*/ PPC::Runtime::ASM::lis(context->r3, String_ "DVDConvertEntrynumToPath()_Is_Out_Of_Dat" Get_MemoryOffset_HighBit);
/*803C4EEC 003C1CEC*/ PPC::Runtime::ASM::addi(context->r25, context->r23, 0x0);
/*803C4EF0 003C1CF0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, String_ "DVDConvertEntrynumToPath()_Is_Out_Of_Dat" Get_MemoryOffset_LowBit);
/*803C4EF4 003C1CF4*/ PPC::Runtime::ASM::lwz(context->r26, STRUCT_BYTE4_COUNT_1currentDirectory @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803C4EF8, 0x803C4EF8) //this is a jump label
/*803C4EF8 003C1CF8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*803C4EFC 003C1CFC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803C4F00 003C1D00*/ PPC::Runtime::ASM::bne(.L_803C4F0C);
/*803C4F04 003C1D04*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*803C4F08 003C1D08*/ PPC::Runtime::ASM::b(.L_803C51B4);
RUNTIME_PPC_JUMP_LABEL(.L_803C4F0C, 0x803C4F0C) //this is a jump label
/*803C4F0C 003C1D0C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*803C4F10 003C1D10*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2f);
/*803C4F14 003C1D14*/ PPC::Runtime::ASM::bne(.L_803C4F24);
/*803C4F18 003C1D18*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*803C4F1C 003C1D1C*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*803C4F20 003C1D20*/ PPC::Runtime::ASM::b(.L_803C4EF8);
RUNTIME_PPC_JUMP_LABEL(.L_803C4F24, 0x803C4F24) //this is a jump label
/*803C4F24 003C1D24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2e);
/*803C4F28 003C1D28*/ PPC::Runtime::ASM::bne(.L_803C4F9C);
/*803C4F2C 003C1D2C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r23));
/*803C4F30 003C1D30*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*803C4F34 003C1D34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2e);
/*803C4F38 003C1D38*/ PPC::Runtime::ASM::bne(.L_803C4F7C);
/*803C4F3C 003C1D3C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r23));
/*803C4F40 003C1D40*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2f);
/*803C4F44 003C1D44*/ PPC::Runtime::ASM::bne(.L_803C4F60);
/*803C4F48 003C1D48*/ PPC::Runtime::ASM::mulli(context->r3, context->r26, 0xc);
/*803C4F4C 003C1D4C*/ PPC::Runtime::ASM::lwz(context->r4, FstStart_805DDD8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4F50 003C1D50*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*803C4F54 003C1D54*/ PPC::Runtime::ASM::lwzx(context->r26, context->r4, context->r0);
/*803C4F58 003C1D58*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x3);
/*803C4F5C 003C1D5C*/ PPC::Runtime::ASM::b(.L_803C4EF8);
RUNTIME_PPC_JUMP_LABEL(.L_803C4F60, 0x803C4F60) //this is a jump label
/*803C4F60 003C1D60*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803C4F64 003C1D64*/ PPC::Runtime::ASM::bne(.L_803C4F9C);
/*803C4F68 003C1D68*/ PPC::Runtime::ASM::mulli(context->r0, context->r26, 0xc);
/*803C4F6C 003C1D6C*/ PPC::Runtime::ASM::lwz(context->r3, FstStart_805DDD8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4F70 003C1D70*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*803C4F74 003C1D74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803C4F78 003C1D78*/ PPC::Runtime::ASM::b(.L_803C51B4);
RUNTIME_PPC_JUMP_LABEL(.L_803C4F7C, 0x803C4F7C) //this is a jump label
/*803C4F7C 003C1D7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2f);
/*803C4F80 003C1D80*/ PPC::Runtime::ASM::bne(.L_803C4F8C);
/*803C4F84 003C1D84*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x2);
/*803C4F88 003C1D88*/ PPC::Runtime::ASM::b(.L_803C4EF8);
RUNTIME_PPC_JUMP_LABEL(.L_803C4F8C, 0x803C4F8C) //this is a jump label
/*803C4F8C 003C1D8C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803C4F90 003C1D90*/ PPC::Runtime::ASM::bne(.L_803C4F9C);
/*803C4F94 003C1D94*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*803C4F98 003C1D98*/ PPC::Runtime::ASM::b(.L_803C51B4);
RUNTIME_PPC_JUMP_LABEL(.L_803C4F9C, 0x803C4F9C) //this is a jump label
/*803C4F9C 003C1D9C*/ PPC::Runtime::ASM::lwz(context->r0, __DVDLongFileNameFlag @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4FA0 003C1DA0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C4FA4 003C1DA4*/ PPC::Runtime::ASM::bne(.L_803C5050);
/*803C4FA8 003C1DA8*/ PPC::Runtime::ASM::addi(context->r28, context->r23, 0x0);
/*803C4FAC 003C1DAC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803C4FB0 003C1DB0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803C4FB4 003C1DB4*/ PPC::Runtime::ASM::b(.L_803C4FFC);
RUNTIME_PPC_JUMP_LABEL(.L_803C4FB8, 0x803C4FB8) //this is a jump label
/*803C4FB8 003C1DB8*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*803C4FBC 003C1DBC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2e);
/*803C4FC0 003C1DC0*/ PPC::Runtime::ASM::bne(.L_803C4FEC);
/*803C4FC4 003C1DC4*/ PPC::Runtime::ASM::subf(context->r0, context->r23, context->r28);
/*803C4FC8 003C1DC8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*803C4FCC 003C1DCC*/ PPC::Runtime::ASM::bgt(.L_803C4FD8);
/*803C4FD0 003C1DD0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*803C4FD4 003C1DD4*/ PPC::Runtime::ASM::bne(.L_803C4FE0);
RUNTIME_PPC_JUMP_LABEL(.L_803C4FD8, 0x803C4FD8) //this is a jump label
/*803C4FD8 003C1DD8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803C4FDC 003C1DDC*/ PPC::Runtime::ASM::b(.L_803C5014);
RUNTIME_PPC_JUMP_LABEL(.L_803C4FE0, 0x803C4FE0) //this is a jump label
/*803C4FE0 003C1DE0*/ PPC::Runtime::ASM::addi(context->r24, context->r28, 0x1);
/*803C4FE4 003C1DE4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803C4FE8 003C1DE8*/ PPC::Runtime::ASM::b(.L_803C4FF8);
RUNTIME_PPC_JUMP_LABEL(.L_803C4FEC, 0x803C4FEC) //this is a jump label
/*803C4FEC 003C1DEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x20);
/*803C4FF0 003C1DF0*/ PPC::Runtime::ASM::bne(.L_803C4FF8);
/*803C4FF4 003C1DF4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C4FF8, 0x803C4FF8) //this is a jump label
/*803C4FF8 003C1DF8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C4FFC, 0x803C4FFC) //this is a jump label
/*803C4FFC 003C1DFC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C5000 003C1E00*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803C5004 003C1E04*/ PPC::Runtime::ASM::beq(.L_803C5014);
/*803C5008 003C1E08*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*803C500C 003C1E0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2f);
/*803C5010 003C1E10*/ PPC::Runtime::ASM::bne(.L_803C4FB8);
RUNTIME_PPC_JUMP_LABEL(.L_803C5014, 0x803C5014) //this is a jump label
/*803C5014 003C1E14*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*803C5018 003C1E18*/ PPC::Runtime::ASM::bne(.L_803C502C);
/*803C501C 003C1E1C*/ PPC::Runtime::ASM::subf(context->r0, context->r24, context->r28);
/*803C5020 003C1E20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*803C5024 003C1E24*/ PPC::Runtime::ASM::ble(.L_803C502C);
/*803C5028 003C1E28*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C502C, 0x803C502C) //this is a jump label
/*803C502C 003C1E2C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803C5030 003C1E30*/ PPC::Runtime::ASM::beq(.L_803C5074);
/*803C5034 003C1E34*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x0);
/*803C5038 003C1E38*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C503C 003C1E3C*/ PPC::Runtime::ASM::addi(context->r6, context->r25, 0x0);
/*803C5040 003C1E40*/ PPC::Runtime::ASM::li(context->r3, String_ "dvdfs." Get_MemoryOffset_SDA21);
/*803C5044 003C1E44*/ PPC::Runtime::ASM::li(context->r4, 0x17b);
/*803C5048 003C1E48*/ PPC::Runtime::ASM::bl(fn_OSPanic);
/*803C504C 003C1E4C*/ PPC::Runtime::ASM::b(.L_803C5074);
RUNTIME_PPC_JUMP_LABEL(.L_803C5050, 0x803C5050) //this is a jump label
/*803C5050 003C1E50*/ PPC::Runtime::ASM::mr(context->r28, context->r23);
/*803C5054 003C1E54*/ PPC::Runtime::ASM::b(.L_803C505C);
RUNTIME_PPC_JUMP_LABEL(.L_803C5058, 0x803C5058) //this is a jump label
/*803C5058 003C1E58*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C505C, 0x803C505C) //this is a jump label
/*803C505C 003C1E5C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C5060 003C1E60*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803C5064 003C1E64*/ PPC::Runtime::ASM::beq(.L_803C5074);
/*803C5068 003C1E68*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*803C506C 003C1E6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2f);
/*803C5070 003C1E70*/ PPC::Runtime::ASM::bne(.L_803C5058);
RUNTIME_PPC_JUMP_LABEL(.L_803C5074, 0x803C5074) //this is a jump label
/*803C5074 003C1E74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803C5078 003C1E78*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*803C507C 003C1E7C*/ PPC::Runtime::ASM::bne(.L_803C5088);
/*803C5080 003C1E80*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803C5084 003C1E84*/ PPC::Runtime::ASM::b(.L_803C508C);
RUNTIME_PPC_JUMP_LABEL(.L_803C5088, 0x803C5088) //this is a jump label
/*803C5088 003C1E88*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C508C, 0x803C508C) //this is a jump label
/*803C508C 003C1E8C*/ PPC::Runtime::ASM::mulli(context->r29, context->r26, 0xc);
/*803C5090 003C1E90*/ PPC::Runtime::ASM::subf(context->r27, context->r23, context->r28);
/*803C5094 003C1E94*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*803C5098 003C1E98*/ PPC::Runtime::ASM::b(.L_803C517C);
RUNTIME_PPC_JUMP_LABEL(.L_803C509C, 0x803C509C) //this is a jump label
/*803C509C 003C1E9C*/ PPC::Runtime::ASM::mulli(context->r28, context->r26, 0xc);
/*803C50A0 003C1EA0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r28);
/* 803C50A4 003C1EA4  54 80 00 0F */ clrrwi. context->r0 , context->r4 , 24
/*803C50A8 003C1EA8*/ PPC::Runtime::ASM::bne(.L_803C50B4);
/*803C50AC 003C1EAC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C50B0 003C1EB0*/ PPC::Runtime::ASM::b(.L_803C50B8);
RUNTIME_PPC_JUMP_LABEL(.L_803C50B4, 0x803C50B4) //this is a jump label
/*803C50B4 003C1EB4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C50B8, 0x803C50B8) //this is a jump label
/*803C50B8 003C1EB8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C50BC 003C1EBC*/ PPC::Runtime::ASM::bne(.L_803C50C8);
/*803C50C0 003C1EC0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*803C50C4 003C1EC4*/ PPC::Runtime::ASM::beq(.L_803C5144);
RUNTIME_PPC_JUMP_LABEL(.L_803C50C8, 0x803C50C8) //this is a jump label
/*803C50C8 003C1EC8*/ PPC::Runtime::ASM::lwz(context->r3, FstStringStart_805DDD90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C50CC 003C1ECC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 8);
/*803C50D0 003C1ED0*/ PPC::Runtime::ASM::addi(context->r21, context->r23, 0x0);
/*803C50D4 003C1ED4*/ PPC::Runtime::ASM::add(context->r20, context->r3, context->r0);
/*803C50D8 003C1ED8*/ PPC::Runtime::ASM::b(.L_803C5110);
RUNTIME_PPC_JUMP_LABEL(.L_803C50DC, 0x803C50DC) //this is a jump label
/*803C50DC 003C1EDC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*803C50E0 003C1EE0*/ PPC::Runtime::ASM::addi(context->r20, context->r20, 0x1);
/*803C50E4 003C1EE4*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*803C50E8 003C1EE8*/ PPC::Runtime::ASM::bl(fn_tolowe);
/*803C50EC 003C1EEC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*803C50F0 003C1EF0*/ PPC::Runtime::ASM::addi(context->r22, context->r3, 0x0);
/*803C50F4 003C1EF4*/ PPC::Runtime::ASM::addi(context->r21, context->r21, 0x1);
/*803C50F8 003C1EF8*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*803C50FC 003C1EFC*/ PPC::Runtime::ASM::bl(fn_tolowe);
/*803C5100 003C1F00*/ PPC::Runtime::ASM::cmpw(context->r3, context->r22);
/*803C5104 003C1F04*/ PPC::Runtime::ASM::beq(.L_803C5110);
/*803C5108 003C1F08*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C510C 003C1F0C*/ PPC::Runtime::ASM::b(.L_803C513C);
RUNTIME_PPC_JUMP_LABEL(.L_803C5110, 0x803C5110) //this is a jump label
/*803C5110 003C1F10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*803C5114 003C1F14*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*803C5118 003C1F18*/ PPC::Runtime::ASM::bne(.L_803C50DC);
/*803C511C 003C1F1C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*803C5120 003C1F20*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2f);
/*803C5124 003C1F24*/ PPC::Runtime::ASM::beq(.L_803C5130);
/*803C5128 003C1F28*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*803C512C 003C1F2C*/ PPC::Runtime::ASM::bne(.L_803C5138);
RUNTIME_PPC_JUMP_LABEL(.L_803C5130, 0x803C5130) //this is a jump label
/*803C5130 003C1F30*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C5134 003C1F34*/ PPC::Runtime::ASM::b(.L_803C513C);
RUNTIME_PPC_JUMP_LABEL(.L_803C5138, 0x803C5138) //this is a jump label
/*803C5138 003C1F38*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803C513C, 0x803C513C) //this is a jump label
/*803C513C 003C1F3C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*803C5140 003C1F40*/ PPC::Runtime::ASM::beq(.L_803C5198);
RUNTIME_PPC_JUMP_LABEL(.L_803C5144, 0x803C5144) //this is a jump label
/*803C5144 003C1F44*/ PPC::Runtime::ASM::lwz(context->r0, FstStart_805DDD8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C5148 003C1F48*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r28);
/*803C514C 003C1F4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 803C5150 003C1F50  54 00 00 0F */ clrrwi. context->r0 , context->r0 , 24
/*803C5154 003C1F54*/ PPC::Runtime::ASM::bne(.L_803C5160);
/*803C5158 003C1F58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C515C 003C1F5C*/ PPC::Runtime::ASM::b(.L_803C5164);
RUNTIME_PPC_JUMP_LABEL(.L_803C5160, 0x803C5160) //this is a jump label
/*803C5160 003C1F60*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C5164, 0x803C5164) //this is a jump label
/*803C5164 003C1F64*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C5168 003C1F68*/ PPC::Runtime::ASM::beq(.L_803C5174);
/*803C516C 003C1F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803C5170 003C1F70*/ PPC::Runtime::ASM::b(.L_803C5178);
RUNTIME_PPC_JUMP_LABEL(.L_803C5174, 0x803C5174) //this is a jump label
/*803C5174 003C1F74*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C5178, 0x803C5178) //this is a jump label
/*803C5178 003C1F78*/ PPC::Runtime::ASM::mr(context->r26, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803C517C, 0x803C517C) //this is a jump label
/*803C517C 003C1F7C*/ PPC::Runtime::ASM::lwz(context->r3, FstStart_805DDD8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C5180 003C1F80*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*803C5184 003C1F84*/ PPC::Runtime::ASM::lwzx(context->r0, context->r29, context->r0);
/*803C5188 003C1F88*/ PPC::Runtime::ASM::cmplw(context->r26, context->r0);
/*803C518C 003C1F8C*/ PPC::Runtime::ASM::blt(.L_803C509C);
/*803C5190 003C1F90*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803C5194 003C1F94*/ PPC::Runtime::ASM::b(.L_803C51B4);
RUNTIME_PPC_JUMP_LABEL(.L_803C5198, 0x803C5198) //this is a jump label
/*803C5198 003C1F98*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803C519C 003C1F9C*/ PPC::Runtime::ASM::bne(.L_803C51A8);
/*803C51A0 003C1FA0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*803C51A4 003C1FA4*/ PPC::Runtime::ASM::b(.L_803C51B4);
RUNTIME_PPC_JUMP_LABEL(.L_803C51A8, 0x803C51A8) //this is a jump label
/*803C51A8 003C1FA8*/ PPC::Runtime::ASM::add(context->r23, context->r27, context->r23);
/*803C51AC 003C1FAC*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*803C51B0 003C1FB0*/ PPC::Runtime::ASM::b(.L_803C4EF8);
RUNTIME_PPC_JUMP_LABEL(.L_803C51B4, 0x803C51B4) //this is a jump label
/*803C51B4 003C1FB4*/ PPC::Runtime::ASM::lmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C51B8 003C1FB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803C51BC 003C1FBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x48);
/*803C51C0 003C1FC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C51C4 003C1FC4*/ PPC::Runtime::ASM::blr();
}