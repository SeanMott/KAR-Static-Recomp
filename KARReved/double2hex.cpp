//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___num2dec.hpp"
#include "fn_strcpy.hpp"
#include "fn_strcpy.hpp"
#include "fn_strcpy.hpp"
#include "fn_strcpy.hpp"
#include "fn_strcpy.hpp"
#include "fn_strcpy.hpp"
#include "fn_strcpy.hpp"
#include "fn_strcpy.hpp"
#include "long2str_803B652C.hpp"



void double2hex(PPC::Runtime::GCContext* context)
{
/*803B5EE0 003B2CE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*803B5EE4 003B2CE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803B5EE8 003B2CE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803B5EEC 003B2CEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803B5EF0 003B2CF0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*803B5EF4 003B2CF4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803B5EF8 003B2CF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1fd);
/*803B5EFC 003B2CFC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803B5F00 003B2D00*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803B5F04 003B2D04*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B5F08 003B2D08*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803B5F0C 003B2D0C*/ PPC::Runtime::ASM::ble(.L_803B5F18);
/*803B5F10 003B2D10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B5F14 003B2D14*/ PPC::Runtime::ASM::b(.L_803B6200);
RUNTIME_PPC_JUMP_LABEL(.L_803B5F18, 0x803B5F18) //this is a jump label
/*803B5F18 003B2D18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B5F1C 003B2D1C*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*803B5F20 003B2D20*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803B5F24 003B2D24*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803B5F28 003B2D28*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x40);
/*803B5F2C 003B2D2C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
/*803B5F30 003B2D30*/ PPC::Runtime::ASM::bl(fn___num2dec);
/*803B5F34 003B2D34*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r1));
/*803B5F38 003B2D38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x49);
/*803B5F3C 003B2D3C*/ PPC::Runtime::ASM::bne(.L_803B5FD0);
/*803B5F40 003B2D40*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803B5F44 003B2D44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 16, 16);
/*803B5F48 003B2D48*/ PPC::Runtime::ASM::beq(.L_803B5F8C);
/*803B5F4C 003B2D4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803B5F50 003B2D50*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x5);
/*803B5F54 003B2D54*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x41);
/*803B5F58 003B2D58*/ PPC::Runtime::ASM::bne(.L_803B5F74);
/*803B5F5C 003B2D5C*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B5F60 003B2D60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B5F64 003B2D64*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B5F68 003B2D68*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*803B5F6C 003B2D6C*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*803B5F70 003B2D70*/ PPC::Runtime::ASM::b(.L_803B5FC8);
RUNTIME_PPC_JUMP_LABEL(.L_803B5F74, 0x803B5F74) //this is a jump label
/*803B5F74 003B2D74*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B5F78 003B2D78*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B5F7C 003B2D7C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B5F80 003B2D80*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x6);
/*803B5F84 003B2D84*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*803B5F88 003B2D88*/ PPC::Runtime::ASM::b(.L_803B5FC8);
RUNTIME_PPC_JUMP_LABEL(.L_803B5F8C, 0x803B5F8C) //this is a jump label
/*803B5F8C 003B2D8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803B5F90 003B2D90*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x4);
/*803B5F94 003B2D94*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x41);
/*803B5F98 003B2D98*/ PPC::Runtime::ASM::bne(.L_803B5FB4);
/*803B5F9C 003B2D9C*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B5FA0 003B2DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B5FA4 003B2DA4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B5FA8 003B2DA8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xb);
/*803B5FAC 003B2DAC*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*803B5FB0 003B2DB0*/ PPC::Runtime::ASM::b(.L_803B5FC8);
RUNTIME_PPC_JUMP_LABEL(.L_803B5FB4, 0x803B5FB4) //this is a jump label
/*803B5FB4 003B2DB4*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B5FB8 003B2DB8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B5FBC 003B2DBC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B5FC0 003B2DC0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xf);
/*803B5FC4 003B2DC4*/ PPC::Runtime::ASM::bl(fn_strcpy);
RUNTIME_PPC_JUMP_LABEL(.L_803B5FC8, 0x803B5FC8) //this is a jump label
/*803B5FC8 003B2DC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B5FCC 003B2DCC*/ PPC::Runtime::ASM::b(.L_803B6200);
RUNTIME_PPC_JUMP_LABEL(.L_803B5FD0, 0x803B5FD0) //this is a jump label
/*803B5FD0 003B2DD0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4e);
/*803B5FD4 003B2DD4*/ PPC::Runtime::ASM::bne(.L_803B6068);
/*803B5FD8 003B2DD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803B5FDC 003B2DDC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 24, 24);
/*803B5FE0 003B2DE0*/ PPC::Runtime::ASM::beq(.L_803B6024);
/*803B5FE4 003B2DE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803B5FE8 003B2DE8*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x5);
/*803B5FEC 003B2DEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x41);
/*803B5FF0 003B2DF0*/ PPC::Runtime::ASM::bne(.L_803B600C);
/*803B5FF4 003B2DF4*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B5FF8 003B2DF8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B5FFC 003B2DFC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B6000 003B2E00*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x13);
/*803B6004 003B2E04*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*803B6008 003B2E08*/ PPC::Runtime::ASM::b(.L_803B6060);
RUNTIME_PPC_JUMP_LABEL(.L_803B600C, 0x803B600C) //this is a jump label
/*803B600C 003B2E0C*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B6010 003B2E10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B6014 003B2E14*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B6018 003B2E18*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x18);
/*803B601C 003B2E1C*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*803B6020 003B2E20*/ PPC::Runtime::ASM::b(.L_803B6060);
RUNTIME_PPC_JUMP_LABEL(.L_803B6024, 0x803B6024) //this is a jump label
/*803B6024 003B2E24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803B6028 003B2E28*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x4);
/*803B602C 003B2E2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x41);
/*803B6030 003B2E30*/ PPC::Runtime::ASM::bne(.L_803B604C);
/*803B6034 003B2E34*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B6038 003B2E38*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B603C 003B2E3C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B6040 003B2E40*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1d);
/*803B6044 003B2E44*/ PPC::Runtime::ASM::bl(fn_strcpy);
/*803B6048 003B2E48*/ PPC::Runtime::ASM::b(.L_803B6060);
RUNTIME_PPC_JUMP_LABEL(.L_803B604C, 0x803B604C) //this is a jump label
/*803B604C 003B2E4C*/ PPC::Runtime::ASM::lis(context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_HighBit);
/*803B6050 003B2E50*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B6054 003B2E54*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AT_stringBase0_8048B830 @ Get_MemoryOffset_LowBit);
/*803B6058 003B2E58*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x21);
/*803B605C 003B2E5C*/ PPC::Runtime::ASM::bl(fn_strcpy);
RUNTIME_PPC_JUMP_LABEL(.L_803B6060, 0x803B6060) //this is a jump label
/*803B6060 003B2E60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803B6064 003B2E64*/ PPC::Runtime::ASM::b(.L_803B6200);
RUNTIME_PPC_JUMP_LABEL(.L_803B6068, 0x803B6068) //this is a jump label
/*803B6068 003B2E68*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803B606C 003B2E6C*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*803B6070 003B2E70*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803B6074 003B2E74*/ PPC::Runtime::ASM::li(context->r7, 0x64);
/*803B6078 003B2E78*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803B607C 003B2E7C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803B6080 003B2E80*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 11, 17);
/*803B6084 003B2E84*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*803B6088 003B2E88*/ PPC::Runtime::ASM::extsh(context->r3, context->r0);
/*803B608C 003B2E8C*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31, context->r1));
/*803B6090 003B2E90*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x3ff);
/*803B6094 003B2E94*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32, context->r1));
/*803B6098 003B2E98*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33, context->r1));
/*803B609C 003B2E9C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803B60A0 003B2EA0*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803B60A4 003B2EA4*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35, context->r1));
/*803B60A8 003B2EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803B60AC 003B2EAC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803B60B0 003B2EB0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803B60B4 003B2EB4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803B60B8 003B2EB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803B60BC 003B2EBC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803B60C0 003B2EC0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803B60C4 003B2EC4*/ PPC::Runtime::ASM::bl(long2str_803B652C);
/*803B60C8 003B2EC8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803B60CC 003B2ECC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x61);
/*803B60D0 003B2ED0*/ PPC::Runtime::ASM::bne(.L_803B60E4);
/*803B60D4 003B2ED4*/ PPC::Runtime::ASM::li(context->r0, 0x70);
/*803B60D8 003B2ED8*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x1);
/*803B60DC 003B2EDC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r3));
/*803B60E0 003B2EE0*/ PPC::Runtime::ASM::b(.L_803B60F0);
RUNTIME_PPC_JUMP_LABEL(.L_803B60E4, 0x803B60E4) //this is a jump label
/*803B60E4 003B2EE4*/ PPC::Runtime::ASM::li(context->r0, 0x50);
/*803B60E8 003B2EE8*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x1);
/*803B60EC 003B2EEC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803B60F0, 0x803B60F0) //this is a jump label
/*803B60F0 003B2EF0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803B60F4 003B2EF4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*803B60F8 003B2EF8*/ PPC::Runtime::ASM::mtctr(context->r8);
/*803B60FC 003B2EFC*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x1);
/*803B6100 003B2F00*/ PPC::Runtime::ASM::blt(.L_803B616C);
RUNTIME_PPC_JUMP_LABEL(.L_803B6104, 0x803B6104) //this is a jump label
/*803B6104 003B2F04*/ PPC::Runtime::ASM::srwi(context->r5, context->r8, 31);
/*803B6108 003B2F08*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r8, 31);
/*803B610C 003B2F0C*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r8);
/*803B6110 003B2F10*/ PPC::Runtime::ASM::srawi(context->r3, context->r3, 1);
/*803B6114 003B2F14*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r5);
/*803B6118 003B2F18*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*803B611C 003B2F1C*/ PPC::Runtime::ASM::lbzx(context->r7, context->r6, context->r3);
/*803B6120 003B2F20*/ PPC::Runtime::ASM::subf.(context->r0, context->r5, context->r0);
/*803B6124 003B2F24*/ PPC::Runtime::ASM::extrwi(context->r0, context->r7, 4, 24);
/*803B6128 003B2F28*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*803B612C 003B2F2C*/ PPC::Runtime::ASM::beq(.L_803B6134);
/*803B6130 003B2F30*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r7, 28);
RUNTIME_PPC_JUMP_LABEL(.L_803B6134, 0x803B6134) //this is a jump label
/*803B6134 003B2F34*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*803B6138 003B2F38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*803B613C 003B2F3C*/ PPC::Runtime::ASM::bge(.L_803B6148);
/*803B6140 003B2F40*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x30);
/*803B6144 003B2F44*/ PPC::Runtime::ASM::b(.L_803B6160);
RUNTIME_PPC_JUMP_LABEL(.L_803B6148, 0x803B6148) //this is a jump label
/*803B6148 003B2F48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803B614C 003B2F4C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x61);
/*803B6150 003B2F50*/ PPC::Runtime::ASM::bne(.L_803B615C);
/*803B6154 003B2F54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x57);
/*803B6158 003B2F58*/ PPC::Runtime::ASM::b(.L_803B6160);
RUNTIME_PPC_JUMP_LABEL(.L_803B615C, 0x803B615C) //this is a jump label
/*803B615C 003B2F5C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x37);
RUNTIME_PPC_JUMP_LABEL(.L_803B6160, 0x803B6160) //this is a jump label
/*803B6160 003B2F60*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r4));
/*803B6164 003B2F64*/ PPC::Runtime::ASM::subi(context->r8, context->r8, 0x1);
/*803B6168 003B2F68*/ PPC::Runtime::ASM::bdnz(.L_803B6104);
RUNTIME_PPC_JUMP_LABEL(.L_803B616C, 0x803B616C) //this is a jump label
/*803B616C 003B2F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803B6170 003B2F70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803B6174 003B2F74*/ PPC::Runtime::ASM::bne(.L_803B6184);
/*803B6178 003B2F78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*803B617C 003B2F7C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803B6180 003B2F80*/ PPC::Runtime::ASM::beq(.L_803B618C);
RUNTIME_PPC_JUMP_LABEL(.L_803B6184, 0x803B6184) //this is a jump label
/*803B6184 003B2F84*/ PPC::Runtime::ASM::li(context->r0, 0x2e);
/*803B6188 003B2F88*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803B618C, 0x803B618C) //this is a jump label
/*803B618C 003B2F8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*803B6190 003B2F90*/ PPC::Runtime::ASM::li(context->r3, 0x31);
/*803B6194 003B2F94*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r4));
/*803B6198 003B2F98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x61);
/*803B619C 003B2F9C*/ PPC::Runtime::ASM::bne(.L_803B61AC);
/*803B61A0 003B2FA0*/ PPC::Runtime::ASM::li(context->r0, 0x78);
/*803B61A4 003B2FA4*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2, context->r4));
/*803B61A8 003B2FA8*/ PPC::Runtime::ASM::b(.L_803B61B4);
RUNTIME_PPC_JUMP_LABEL(.L_803B61AC, 0x803B61AC) //this is a jump label
/*803B61AC 003B2FAC*/ PPC::Runtime::ASM::li(context->r0, 0x58);
/*803B61B0 003B2FB0*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803B61B4, 0x803B61B4) //this is a jump label
/*803B61B4 003B2FB4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803B61B8 003B2FB8*/ PPC::Runtime::ASM::li(context->r3, 0x30);
/*803B61BC 003B2FBC*/ PPC::Runtime::ASM::stbu(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r4));
/*803B61C0 003B2FC0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 16, 16);
/*803B61C4 003B2FC4*/ PPC::Runtime::ASM::beq(.L_803B61D4);
/*803B61C8 003B2FC8*/ PPC::Runtime::ASM::li(context->r0, 0x2d);
/*803B61CC 003B2FCC*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r4));
/*803B61D0 003B2FD0*/ PPC::Runtime::ASM::b(.L_803B61FC);
RUNTIME_PPC_JUMP_LABEL(.L_803B61D4, 0x803B61D4) //this is a jump label
/*803B61D4 003B2FD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*803B61D8 003B2FD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803B61DC 003B2FDC*/ PPC::Runtime::ASM::bne(.L_803B61EC);
/*803B61E0 003B2FE0*/ PPC::Runtime::ASM::li(context->r0, 0x2b);
/*803B61E4 003B2FE4*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r4));
/*803B61E8 003B2FE8*/ PPC::Runtime::ASM::b(.L_803B61FC);
RUNTIME_PPC_JUMP_LABEL(.L_803B61EC, 0x803B61EC) //this is a jump label
/*803B61EC 003B2FEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*803B61F0 003B2FF0*/ PPC::Runtime::ASM::bne(.L_803B61FC);
/*803B61F4 003B2FF4*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*803B61F8 003B2FF8*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803B61FC, 0x803B61FC) //this is a jump label
/*803B61FC 003B2FFC*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_803B6200, 0x803B6200) //this is a jump label
/*803B6200 003B3000*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803B6204 003B3004*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*803B6208 003B3008*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803B620C 003B300C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803B6210 003B3010*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*803B6214 003B3014*/ PPC::Runtime::ASM::blr();
}