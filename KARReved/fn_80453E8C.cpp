//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_CARDOpen.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_CARDGetStatus.hpp"
#include "fn_80457668.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"



void fn_80453E8C(PPC::Runtime::GCContext* context)
{
/*80453E8C 00450C8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80453E90 00450C90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80453E94 00450C94*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80453E98 00450C98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80453E9C 00450C9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80453EA0 00450CA0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80453EA4 00450CA4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80453EA8 00450CA8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x518);
/*80453EAC 00450CAC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80453EB0 00450CB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r30));
/*80453EB4 00450CB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80453EB8 00450CB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453EBC 00450CBC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x40);
/*80453EC0 00450CC0*/ PPC::Runtime::ASM::bl(fn_CARDOpen);
/*80453EC4 00450CC4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*80453EC8 00450CC8*/ PPC::Runtime::ASM::beq(.L_80453F50);
/*80453ECC 00450CCC*/ PPC::Runtime::ASM::bge(.L_80453EFC);
/*80453ED0 00450CD0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*80453ED4 00450CD4*/ PPC::Runtime::ASM::beq(.L_80453F68);
/*80453ED8 00450CD8*/ PPC::Runtime::ASM::bge(.L_80453EE8);
/*80453EDC 00450CDC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*80453EE0 00450CE0*/ PPC::Runtime::ASM::beq(.L_80453F50);
/*80453EE4 00450CE4*/ PPC::Runtime::ASM::b(.L_80453F68);
RUNTIME_PPC_JUMP_LABEL(.L_80453EE8, 0x80453EE8) //this is a jump label
/*80453EE8 00450CE8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*80453EEC 00450CEC*/ PPC::Runtime::ASM::bge(.L_80453F60);
/*80453EF0 00450CF0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*80453EF4 00450CF4*/ PPC::Runtime::ASM::bge(.L_80453F68);
/*80453EF8 00450CF8*/ PPC::Runtime::ASM::b(.L_80453F58);
RUNTIME_PPC_JUMP_LABEL(.L_80453EFC, 0x80453EFC) //this is a jump label
/*80453EFC 00450CFC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80453F00 00450D00*/ PPC::Runtime::ASM::beq(.L_80453F28);
/*80453F04 00450D04*/ PPC::Runtime::ASM::bge(.L_80453F18);
/*80453F08 00450D08*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*80453F0C 00450D0C*/ PPC::Runtime::ASM::beq(.L_80453F30);
/*80453F10 00450D10*/ PPC::Runtime::ASM::bge(.L_80453F38);
/*80453F14 00450D14*/ PPC::Runtime::ASM::b(.L_80453F40);
RUNTIME_PPC_JUMP_LABEL(.L_80453F18, 0x80453F18) //this is a jump label
/*80453F18 00450D18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80453F1C 00450D1C*/ PPC::Runtime::ASM::beq(.L_80453F68);
/*80453F20 00450D20*/ PPC::Runtime::ASM::bge(.L_80453F68);
/*80453F24 00450D24*/ PPC::Runtime::ASM::b(.L_80453F48);
RUNTIME_PPC_JUMP_LABEL(.L_80453F28, 0x80453F28) //this is a jump label
/*80453F28 00450D28*/ PPC::Runtime::ASM::li(context->r29, 0xb);
/*80453F2C 00450D2C*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F30, 0x80453F30) //this is a jump label
/*80453F30 00450D30*/ PPC::Runtime::ASM::li(context->r29, 0xe);
/*80453F34 00450D34*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F38, 0x80453F38) //this is a jump label
/*80453F38 00450D38*/ PPC::Runtime::ASM::li(context->r29, 0xf);
/*80453F3C 00450D3C*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F40, 0x80453F40) //this is a jump label
/*80453F40 00450D40*/ PPC::Runtime::ASM::li(context->r29, 0x6);
/*80453F44 00450D44*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F48, 0x80453F48) //this is a jump label
/*80453F48 00450D48*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80453F4C 00450D4C*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F50, 0x80453F50) //this is a jump label
/*80453F50 00450D50*/ PPC::Runtime::ASM::li(context->r29, 0xd);
/*80453F54 00450D54*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F58, 0x80453F58) //this is a jump label
/*80453F58 00450D58*/ PPC::Runtime::ASM::li(context->r29, 0x9);
/*80453F5C 00450D5C*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F60, 0x80453F60) //this is a jump label
/*80453F60 00450D60*/ PPC::Runtime::ASM::li(context->r29, 0xa);
/*80453F64 00450D64*/ PPC::Runtime::ASM::b(.L_80453F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80453F68, 0x80453F68) //this is a jump label
/*80453F68 00450D68*/ PPC::Runtime::ASM::li(context->r29, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_80453F6C, 0x80453F6C) //this is a jump label
/*80453F6C 00450D6C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*80453F70 00450D70*/ PPC::Runtime::ASM::beq(.L_80453FB0);
/*80453F74 00450D74*/ PPC::Runtime::ASM::slwi(context->r6, context->r31, 2);
/*80453F78 00450D78*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*80453F7C 00450D7C*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80453F80 00450D80*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80453F84 00450D84*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*80453F88 00450D88*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80453F8C 00450D8C*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80453F90 00450D90*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*80453F94 00450D94*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80453F98 00450D98*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80453F9C 00450D9C*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80453FA0 00450DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453FA4 00450DA4*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*80453FA8 00450DA8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80453FAC 00450DAC*/ PPC::Runtime::ASM::b(.L_8045403C);
RUNTIME_PPC_JUMP_LABEL(.L_80453FB0, 0x80453FB0) //this is a jump label
/*80453FB0 00450DB0*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80453FB4 00450DB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453FB8 00450DB8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51c, context->r30));
/*80453FBC 00450DBC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x52c);
/*80453FC0 00450DC0*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x1);
/*80453FC4 00450DC4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80453FC8 00450DC8*/ PPC::Runtime::ASM::bl(fn_CARDGetStatus);
/*80453FCC 00450DCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x564, context->r30));
/*80453FD0 00450DD0*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*80453FD4 00450DD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80453FD8 00450DD8*/ PPC::Runtime::ASM::beq(.L_80453FEC);
/*80453FDC 00450DDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55c, context->r30));
/*80453FE0 00450DE0*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*80453FE4 00450DE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80453FE8 00450DE8*/ PPC::Runtime::ASM::bne(.L_80454038);
RUNTIME_PPC_JUMP_LABEL(.L_80453FEC, 0x80453FEC) //this is a jump label
/*80453FEC 00450DEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80453FF0 00450DF0*/ PPC::Runtime::ASM::bl(fn_80457668);
/*80453FF4 00450DF4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80453FF8 00450DF8*/ PPC::Runtime::ASM::bne(.L_80454030);
/*80453FFC 00450DFC*/ PPC::Runtime::ASM::slwi(context->r6, context->r31, 2);
/*80454000 00450E00*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*80454004 00450E04*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80454008 00450E08*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*8045400C 00450E0C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*80454010 00450E10*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80454014 00450E14*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*80454018 00450E18*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*8045401C 00450E1C*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*80454020 00450E20*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80454024 00450E24*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80454028 00450E28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8045402C 00450E2C*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
RUNTIME_PPC_JUMP_LABEL(.L_80454030, 0x80454030) //this is a jump label
/*80454030 00450E30*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80454034 00450E34*/ PPC::Runtime::ASM::b(.L_8045403C);
RUNTIME_PPC_JUMP_LABEL(.L_80454038, 0x80454038) //this is a jump label
/*80454038 00450E38*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8045403C, 0x8045403C) //this is a jump label
/*8045403C 00450E3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80454040 00450E40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80454044 00450E44*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80454048 00450E48*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045404C 00450E4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80454050 00450E50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80454054 00450E54*/ PPC::Runtime::ASM::blr();
}