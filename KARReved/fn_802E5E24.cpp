//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A0984.hpp"
#include "fn_802A0984.hpp"
#include "fn_802A0984.hpp"
#include "fn_802A0984.hpp"



void fn_802E5E24(PPC::Runtime::GCContext* context)
{
/*802E5E24 002E2C24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*802E5E28 002E2C28*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E5E2C 002E2C2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802E5E30 002E2C30*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802E5E34 002E2C34*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*802E5E38 002E2C38*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802E5E3C 002E2C3C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802E5E40 002E2C40*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802E5E44 002E2C44*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802E5E48 002E2C48*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E5E4C 002E2C4C*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E5E50 002E2C50*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E5E54 002E2C54*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E5E58 002E2C58*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E5E5C 002E2C5C*/ PPC::Runtime::ASM::psq_st(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802E5E60 002E2C60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E5E64 002E2C64*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E5E68 002E2C68*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802E5E6C 002E2C6C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802E5E70 002E2C70*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802E5E74 002E2C74*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3c);
/*802E5E78 002E2C78*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E5E7C 002E2C7C*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E5E80 002E2C80*/ PPC::Runtime::ASM::fmr(context->f28, context->f1);
/*802E5E84 002E2C84*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E5E88 002E2C88*/ PPC::Runtime::ASM::fdivs(context->f30, context->f3, context->f0);
/*802E5E8C 002E2C8C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802E5E90 002E2C90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E5E94 002E2C94*/ PPC::Runtime::ASM::fmr(context->f29, context->f2);
/*802E5E98 002E2C98*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802E5E9C 002E2C9C*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E5EA0 002E2CA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E5EA4 002E2CA4*/ PPC::Runtime::ASM::bge(.L_802E5EB4);
/*802E5EA8 002E2CA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E5EAC 002E2CAC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E5EB0 002E2CB0*/ PPC::Runtime::ASM::b(.L_802E5F60);
RUNTIME_PPC_JUMP_LABEL(.L_802E5EB4, 0x802E5EB4) //this is a jump label
/*802E5EB4 002E2CB4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E5EB8 002E2CB8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E5EBC 002E2CBC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E5EC0 002E2CC0*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E5EC4 002E2CC4*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5EC8 002E2CC8*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E5ECC 002E2CCC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5ED0 002E2CD0*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5ED4 002E2CD4*/ PPC::Runtime::ASM::ble(.L_802E5EF4);
RUNTIME_PPC_JUMP_LABEL(.L_802E5ED8, 0x802E5ED8) //this is a jump label
/*802E5ED8 002E2CD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E5EDC 002E2CDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E5EE0 002E2CE0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E5EE4 002E2CE4*/ PPC::Runtime::ASM::blt(.L_802E5EF4);
/*802E5EE8 002E2CE8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E5EEC 002E2CEC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E5EF0 002E2CF0*/ PPC::Runtime::ASM::bdnz(.L_802E5ED8);
RUNTIME_PPC_JUMP_LABEL(.L_802E5EF4, 0x802E5EF4) //this is a jump label
/*802E5EF4 002E2CF4*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E5EF8 002E2CF8*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E5EFC 002E2CFC*/ PPC::Runtime::ASM::blt(.L_802E5F40);
/*802E5F00 002E2D00*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5F04 002E2D04*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E5F08 002E2D08*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5F0C 002E2D0C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5F10 002E2D10*/ PPC::Runtime::ASM::ble(.L_802E5F30);
RUNTIME_PPC_JUMP_LABEL(.L_802E5F14, 0x802E5F14) //this is a jump label
/*802E5F14 002E2D14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E5F18 002E2D18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E5F1C 002E2D1C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E5F20 002E2D20*/ PPC::Runtime::ASM::blt(.L_802E5F30);
/*802E5F24 002E2D24*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E5F28 002E2D28*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E5F2C 002E2D2C*/ PPC::Runtime::ASM::bdnz(.L_802E5F14);
RUNTIME_PPC_JUMP_LABEL(.L_802E5F30, 0x802E5F30) //this is a jump label
/*802E5F30 002E2D30*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E5F34 002E2D34*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E5F38 002E2D38*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E5F3C 002E2D3C*/ PPC::Runtime::ASM::b(.L_802E5F60);
RUNTIME_PPC_JUMP_LABEL(.L_802E5F40, 0x802E5F40) //this is a jump label
/*802E5F40 002E2D40*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E5F44 002E2D44*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802E5F48 002E2D48*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E5F4C 002E2D4C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E5F50 002E2D50*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E5F54 002E2D54*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E5F58 002E2D58*/ PPC::Runtime::ASM::bl(fn_8038B880);
/*802E5F5C 002E2D5C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802E5F60, 0x802E5F60) //this is a jump label
/*802E5F60 002E2D60*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E5F64 002E2D64*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E5F68 002E2D68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E5F6C 002E2D6C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*802E5F70 002E2D70*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E5F74 002E2D74*/ PPC::Runtime::ASM::fdivs(context->f30, context->f1, context->f0);
/*802E5F78 002E2D78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E5F7C 002E2D7C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802E5F80 002E2D80*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E5F84 002E2D84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E5F88 002E2D88*/ PPC::Runtime::ASM::bge(.L_802E5F98);
/*802E5F8C 002E2D8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E5F90 002E2D90*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E5F94 002E2D94*/ PPC::Runtime::ASM::b(.L_802E6044);
RUNTIME_PPC_JUMP_LABEL(.L_802E5F98, 0x802E5F98) //this is a jump label
/*802E5F98 002E2D98*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E5F9C 002E2D9C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E5FA0 002E2DA0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E5FA4 002E2DA4*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E5FA8 002E2DA8*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5FAC 002E2DAC*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E5FB0 002E2DB0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5FB4 002E2DB4*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5FB8 002E2DB8*/ PPC::Runtime::ASM::ble(.L_802E5FD8);
RUNTIME_PPC_JUMP_LABEL(.L_802E5FBC, 0x802E5FBC) //this is a jump label
/*802E5FBC 002E2DBC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E5FC0 002E2DC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E5FC4 002E2DC4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E5FC8 002E2DC8*/ PPC::Runtime::ASM::blt(.L_802E5FD8);
/*802E5FCC 002E2DCC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E5FD0 002E2DD0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E5FD4 002E2DD4*/ PPC::Runtime::ASM::bdnz(.L_802E5FBC);
RUNTIME_PPC_JUMP_LABEL(.L_802E5FD8, 0x802E5FD8) //this is a jump label
/*802E5FD8 002E2DD8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E5FDC 002E2DDC*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E5FE0 002E2DE0*/ PPC::Runtime::ASM::blt(.L_802E6024);
/*802E5FE4 002E2DE4*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5FE8 002E2DE8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E5FEC 002E2DEC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5FF0 002E2DF0*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5FF4 002E2DF4*/ PPC::Runtime::ASM::ble(.L_802E6014);
RUNTIME_PPC_JUMP_LABEL(.L_802E5FF8, 0x802E5FF8) //this is a jump label
/*802E5FF8 002E2DF8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E5FFC 002E2DFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E6000 002E2E00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E6004 002E2E04*/ PPC::Runtime::ASM::blt(.L_802E6014);
/*802E6008 002E2E08*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E600C 002E2E0C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E6010 002E2E10*/ PPC::Runtime::ASM::bdnz(.L_802E5FF8);
RUNTIME_PPC_JUMP_LABEL(.L_802E6014, 0x802E6014) //this is a jump label
/*802E6014 002E2E14*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E6018 002E2E18*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E601C 002E2E1C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E6020 002E2E20*/ PPC::Runtime::ASM::b(.L_802E6044);
RUNTIME_PPC_JUMP_LABEL(.L_802E6024, 0x802E6024) //this is a jump label
/*802E6024 002E2E24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E6028 002E2E28*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802E602C 002E2E2C*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E6030 002E2E30*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E6034 002E2E34*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E6038 002E2E38*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E603C 002E2E3C*/ PPC::Runtime::ASM::bl(fn_8038B880);
/*802E6040 002E2E40*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802E6044, 0x802E6044) //this is a jump label
/*802E6044 002E2E44*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E6048 002E2E48*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xb4);
/*802E604C 002E2E4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E6050 002E2E50*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E6054 002E2E54*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E6058 002E2E58*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*802E605C 002E2E5C*/ PPC::Runtime::ASM::fdivs(context->f27, context->f1, context->f0);
/*802E6060 002E2E60*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E6064 002E2E64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E6068 002E2E68*/ PPC::Runtime::ASM::fsubs(context->f30, context->f2, context->f29);
/*802E606C 002E2E6C*/ PPC::Runtime::ASM::fmr(context->f1, context->f27);
/*802E6070 002E2E70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f30);
/*802E6074 002E2E74*/ PPC::Runtime::ASM::fmadds(context->f31, context->f31, context->f29, context->f0);
/*802E6078 002E2E78*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E607C 002E2E7C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E6080 002E2E80*/ PPC::Runtime::ASM::bge(.L_802E6090);
/*802E6084 002E2E84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E6088 002E2E88*/ PPC::Runtime::ASM::lfs(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E608C 002E2E8C*/ PPC::Runtime::ASM::b(.L_802E613C);
RUNTIME_PPC_JUMP_LABEL(.L_802E6090, 0x802E6090) //this is a jump label
/*802E6090 002E2E90*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E6094 002E2E94*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E6098 002E2E98*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E609C 002E2E9C*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E60A0 002E2EA0*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E60A4 002E2EA4*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E60A8 002E2EA8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E60AC 002E2EAC*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E60B0 002E2EB0*/ PPC::Runtime::ASM::ble(.L_802E60D0);
RUNTIME_PPC_JUMP_LABEL(.L_802E60B4, 0x802E60B4) //this is a jump label
/*802E60B4 002E2EB4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E60B8 002E2EB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E60BC 002E2EBC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E60C0 002E2EC0*/ PPC::Runtime::ASM::blt(.L_802E60D0);
/*802E60C4 002E2EC4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E60C8 002E2EC8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E60CC 002E2ECC*/ PPC::Runtime::ASM::bdnz(.L_802E60B4);
RUNTIME_PPC_JUMP_LABEL(.L_802E60D0, 0x802E60D0) //this is a jump label
/*802E60D0 002E2ED0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E60D4 002E2ED4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E60D8 002E2ED8*/ PPC::Runtime::ASM::blt(.L_802E611C);
/*802E60DC 002E2EDC*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E60E0 002E2EE0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E60E4 002E2EE4*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E60E8 002E2EE8*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E60EC 002E2EEC*/ PPC::Runtime::ASM::ble(.L_802E610C);
RUNTIME_PPC_JUMP_LABEL(.L_802E60F0, 0x802E60F0) //this is a jump label
/*802E60F0 002E2EF0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E60F4 002E2EF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E60F8 002E2EF8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E60FC 002E2EFC*/ PPC::Runtime::ASM::blt(.L_802E610C);
/*802E6100 002E2F00*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E6104 002E2F04*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E6108 002E2F08*/ PPC::Runtime::ASM::bdnz(.L_802E60F0);
RUNTIME_PPC_JUMP_LABEL(.L_802E610C, 0x802E610C) //this is a jump label
/*802E610C 002E2F0C*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E6110 002E2F10*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E6114 002E2F14*/ PPC::Runtime::ASM::lfs(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E6118 002E2F18*/ PPC::Runtime::ASM::b(.L_802E613C);
RUNTIME_PPC_JUMP_LABEL(.L_802E611C, 0x802E611C) //this is a jump label
/*802E611C 002E2F1C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E6120 002E2F20*/ PPC::Runtime::ASM::fmr(context->f1, context->f27);
/*802E6124 002E2F24*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E6128 002E2F28*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E612C 002E2F2C*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E6130 002E2F30*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E6134 002E2F34*/ PPC::Runtime::ASM::bl(fn_8038B880);
/*802E6138 002E2F38*/ PPC::Runtime::ASM::fmr(context->f26, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802E613C, 0x802E613C) //this is a jump label
/*802E613C 002E2F3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E6140 002E2F40*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x78);
/*802E6144 002E2F44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E6148 002E2F48*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E614C 002E2F4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E6150 002E2F50*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802E6154 002E2F54*/ PPC::Runtime::ASM::fdivs(context->f27, context->f1, context->f0);
/*802E6158 002E2F58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E615C 002E2F5C*/ PPC::Runtime::ASM::fmr(context->f1, context->f27);
/*802E6160 002E2F60*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E6164 002E2F64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E6168 002E2F68*/ PPC::Runtime::ASM::bge(.L_802E6178);
/*802E616C 002E2F6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E6170 002E2F70*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E6174 002E2F74*/ PPC::Runtime::ASM::b(.L_802E6220);
RUNTIME_PPC_JUMP_LABEL(.L_802E6178, 0x802E6178) //this is a jump label
/*802E6178 002E2F78*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E617C 002E2F7C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E6180 002E2F80*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E6184 002E2F84*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E6188 002E2F88*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E618C 002E2F8C*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E6190 002E2F90*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E6194 002E2F94*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E6198 002E2F98*/ PPC::Runtime::ASM::ble(.L_802E61B8);
RUNTIME_PPC_JUMP_LABEL(.L_802E619C, 0x802E619C) //this is a jump label
/*802E619C 002E2F9C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E61A0 002E2FA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E61A4 002E2FA4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E61A8 002E2FA8*/ PPC::Runtime::ASM::blt(.L_802E61B8);
/*802E61AC 002E2FAC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E61B0 002E2FB0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E61B4 002E2FB4*/ PPC::Runtime::ASM::bdnz(.L_802E619C);
RUNTIME_PPC_JUMP_LABEL(.L_802E61B8, 0x802E61B8) //this is a jump label
/*802E61B8 002E2FB8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E61BC 002E2FBC*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E61C0 002E2FC0*/ PPC::Runtime::ASM::blt(.L_802E6204);
/*802E61C4 002E2FC4*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E61C8 002E2FC8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E61CC 002E2FCC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E61D0 002E2FD0*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E61D4 002E2FD4*/ PPC::Runtime::ASM::ble(.L_802E61F4);
RUNTIME_PPC_JUMP_LABEL(.L_802E61D8, 0x802E61D8) //this is a jump label
/*802E61D8 002E2FD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E61DC 002E2FDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E61E0 002E2FE0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E61E4 002E2FE4*/ PPC::Runtime::ASM::blt(.L_802E61F4);
/*802E61E8 002E2FE8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E61EC 002E2FEC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E61F0 002E2FF0*/ PPC::Runtime::ASM::bdnz(.L_802E61D8);
RUNTIME_PPC_JUMP_LABEL(.L_802E61F4, 0x802E61F4) //this is a jump label
/*802E61F4 002E2FF4*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E61F8 002E2FF8*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E61FC 002E2FFC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E6200 002E3000*/ PPC::Runtime::ASM::b(.L_802E6220);
RUNTIME_PPC_JUMP_LABEL(.L_802E6204, 0x802E6204) //this is a jump label
/*802E6204 002E3004*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E6208 002E3008*/ PPC::Runtime::ASM::fmr(context->f1, context->f27);
/*802E620C 002E300C*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E6210 002E3010*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E6214 002E3014*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E6218 002E3018*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E621C 002E301C*/ PPC::Runtime::ASM::bl(fn_8038B880);
RUNTIME_PPC_JUMP_LABEL(.L_802E6220, 0x802E6220) //this is a jump label
/*802E6220 002E3020*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E6224 002E3024*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*802E6228 002E3028*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f28);
/*802E622C 002E302C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f26, context->f29, context->f1);
/*802E6230 002E3030*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f0);
/*802E6234 002E3034*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f28, context->f0);
/*802E6238 002E3038*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*802E623C 002E303C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802E6240 002E3040*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802E6244 002E3044*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802E6248 002E3048*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802E624C 002E304C*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802E6250 002E3050*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E6254 002E3054*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E6258 002E3058*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E625C 002E305C*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E6260 002E3060*/ PPC::Runtime::ASM::psq_l(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802E6264 002E3064*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E6268 002E3068*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E626C 002E306C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802E6270 002E3070*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E6274 002E3074*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E6278 002E3078*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*802E627C 002E307C*/ PPC::Runtime::ASM::blr();
}