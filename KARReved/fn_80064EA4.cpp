//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80064EA4(PPC::Runtime::GCContext* context)
{
/*80064EA4 00061CA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80064EA8 00061CA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEAF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064EAC 00061CAC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*80064EB0 00061CB0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064EB4 00061CB4*/ PPC::Runtime::ASM::ble(.L_80064F04);
/*80064EB8 00061CB8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80064EBC 00061CBC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80064EC0 00061CC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80064EC4 00061CC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064EC8 00061CC8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064ECC 00061CCC*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*80064ED0 00061CD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064ED4 00061CD4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064ED8 00061CD8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064EDC 00061CDC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064EE0 00061CE0*/ PPC::Runtime::ASM::bge(.L_80064EEC);
/*80064EE4 00061CE4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80064EE8 00061CE8*/ PPC::Runtime::ASM::b(.L_80064F4C);
RUNTIME_PPC_JUMP_LABEL(.L_80064EEC, 0x80064EEC) //this is a jump label
/*80064EEC 00061CEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064EF0 00061CF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064EF4 00061CF4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064EF8 00061CF8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064EFC 00061CFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80064F00 00061D00*/ PPC::Runtime::ASM::b(.L_80064F4C);
RUNTIME_PPC_JUMP_LABEL(.L_80064F04, 0x80064F04) //this is a jump label
/*80064F04 00061D04*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80064F08 00061D08*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80064F0C 00061D0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80064F10 00061D10*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064F14 00061D14*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064F18 00061D18*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*80064F1C 00061D1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F20 00061D20*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F24 00061D24*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064F28 00061D28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064F2C 00061D2C*/ PPC::Runtime::ASM::ble(.L_80064F38);
/*80064F30 00061D30*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80064F34 00061D34*/ PPC::Runtime::ASM::b(.L_80064F4C);
RUNTIME_PPC_JUMP_LABEL(.L_80064F38, 0x80064F38) //this is a jump label
/*80064F38 00061D38*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064F3C 00061D3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F40 00061D40*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F44 00061D44*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064F48 00061D48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80064F4C, 0x80064F4C) //this is a jump label
/*80064F4C 00061D4C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*80064F50 00061D50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEAF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064F54 00061D54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064F58 00061D58*/ PPC::Runtime::ASM::ble(.L_80064FA8);
/*80064F5C 00061D5C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r3));
/*80064F60 00061D60*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80064F64 00061D64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80064F68 00061D68*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064F6C 00061D6C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064F70 00061D70*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*80064F74 00061D74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F78 00061D78*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F7C 00061D7C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064F80 00061D80*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064F84 00061D84*/ PPC::Runtime::ASM::bge(.L_80064F90);
/*80064F88 00061D88*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80064F8C 00061D8C*/ PPC::Runtime::ASM::b(.L_80064FF0);
RUNTIME_PPC_JUMP_LABEL(.L_80064F90, 0x80064F90) //this is a jump label
/*80064F90 00061D90*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064F94 00061D94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F98 00061D98*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064F9C 00061D9C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064FA0 00061DA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80064FA4 00061DA4*/ PPC::Runtime::ASM::b(.L_80064FF0);
RUNTIME_PPC_JUMP_LABEL(.L_80064FA8, 0x80064FA8) //this is a jump label
/*80064FA8 00061DA8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r3));
/*80064FAC 00061DAC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80064FB0 00061DB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80064FB4 00061DB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064FB8 00061DB8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064FBC 00061DBC*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*80064FC0 00061DC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064FC4 00061DC4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064FC8 00061DC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064FCC 00061DCC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064FD0 00061DD0*/ PPC::Runtime::ASM::ble(.L_80064FDC);
/*80064FD4 00061DD4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80064FD8 00061DD8*/ PPC::Runtime::ASM::b(.L_80064FF0);
RUNTIME_PPC_JUMP_LABEL(.L_80064FDC, 0x80064FDC) //this is a jump label
/*80064FDC 00061DDC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80064FE0 00061DE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064FE4 00061DE4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80064FE8 00061DE8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80064FEC 00061DEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80064FF0, 0x80064FF0) //this is a jump label
/*80064FF0 00061DF0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*80064FF4 00061DF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEAF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064FF8 00061DF8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064FFC 00061DFC*/ PPC::Runtime::ASM::ble(.L_8006504C);
/*80065000 00061E00*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r3));
/*80065004 00061E04*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80065008 00061E08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8006500C 00061E0C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80065010 00061E10*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80065014 00061E14*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*80065018 00061E18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006501C 00061E1C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80065020 00061E20*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80065024 00061E24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80065028 00061E28*/ PPC::Runtime::ASM::bge(.L_80065034);
/*8006502C 00061E2C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80065030 00061E30*/ PPC::Runtime::ASM::b(.L_80065094);
RUNTIME_PPC_JUMP_LABEL(.L_80065034, 0x80065034) //this is a jump label
/*80065034 00061E34*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80065038 00061E38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006503C 00061E3C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80065040 00061E40*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80065044 00061E44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80065048 00061E48*/ PPC::Runtime::ASM::b(.L_80065094);
RUNTIME_PPC_JUMP_LABEL(.L_8006504C, 0x8006504C) //this is a jump label
/*8006504C 00061E4C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r3));
/*80065050 00061E50*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80065054 00061E54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80065058 00061E58*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006505C 00061E5C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80065060 00061E60*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*80065064 00061E64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80065068 00061E68*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006506C 00061E6C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80065070 00061E70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80065074 00061E74*/ PPC::Runtime::ASM::ble(.L_80065080);
/*80065078 00061E78*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8006507C 00061E7C*/ PPC::Runtime::ASM::b(.L_80065094);
RUNTIME_PPC_JUMP_LABEL(.L_80065080, 0x80065080) //this is a jump label
/*80065080 00061E80*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80065084 00061E84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80065088 00061E88*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006508C 00061E8C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80065090 00061E90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80065094, 0x80065094) //this is a jump label
/*80065094 00061E94*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80065098 00061E98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEAF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006509C 00061E9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800650A0 00061EA0*/ PPC::Runtime::ASM::ble(.L_800650F0);
/*800650A4 00061EA4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r3));
/*800650A8 00061EA8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*800650AC 00061EAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*800650B0 00061EB0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800650B4 00061EB4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800650B8 00061EB8*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*800650BC 00061EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800650C0 00061EC0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800650C4 00061EC4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800650C8 00061EC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800650CC 00061ECC*/ PPC::Runtime::ASM::bge(.L_800650D8);
/*800650D0 00061ED0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*800650D4 00061ED4*/ PPC::Runtime::ASM::b(.L_80065138);
RUNTIME_PPC_JUMP_LABEL(.L_800650D8, 0x800650D8) //this is a jump label
/*800650D8 00061ED8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800650DC 00061EDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800650E0 00061EE0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800650E4 00061EE4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800650E8 00061EE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*800650EC 00061EEC*/ PPC::Runtime::ASM::b(.L_80065138);
RUNTIME_PPC_JUMP_LABEL(.L_800650F0, 0x800650F0) //this is a jump label
/*800650F0 00061EF0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r3));
/*800650F4 00061EF4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*800650F8 00061EF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*800650FC 00061EFC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80065100 00061F00*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DEAF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80065104 00061F04*/ PPC::Runtime::ASM::fadds(context->f2, context->f0, context->f2);
/*80065108 00061F08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006510C 00061F0C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80065110 00061F10*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80065114 00061F14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80065118 00061F18*/ PPC::Runtime::ASM::ble(.L_80065124);
/*8006511C 00061F1C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80065120 00061F20*/ PPC::Runtime::ASM::b(.L_80065138);
RUNTIME_PPC_JUMP_LABEL(.L_80065124, 0x80065124) //this is a jump label
/*80065124 00061F24*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80065128 00061F28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006512C 00061F2C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80065130 00061F30*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80065134 00061F34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80065138, 0x80065138) //this is a jump label
/*80065138 00061F38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8006513C 00061F3C*/ PPC::Runtime::ASM::blr();
}