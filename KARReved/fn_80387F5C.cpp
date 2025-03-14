//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80387F5C(PPC::Runtime::GCContext* context)
{
/*80387F5C 00384D5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80387F60 00384D60*/ PPC::Runtime::ASM::mflr(context->r0);
/*80387F64 00384D64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80387F68 00384D68*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80387F6C 00384D6C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80387F70 00384D70*/ PPC::Runtime::ASM::lis(context->r6, 0x9249);
/*80387F74 00384D74*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80387F78 00384D78*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80387F7C 00384D7C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80387F80 00384D80*/ PPC::Runtime::ASM::subf(context->r5, context->r30, context->r31);
/*80387F84 00384D84*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x2493);
/* 80387F88 00384D88  7C C0 28 96 */ mulhw context->r6 , context->r0 , context->r5
/*80387F8C 00384D8C*/ PPC::Runtime::ASM::lis(context->r3, 0x249);
/*80387F90 00384D90*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80387F94 00384D94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2492);
/*80387F98 00384D98*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*80387F9C 00384D9C*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*80387FA0 00384DA0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*80387FA4 00384DA4*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80387FA8 00384DA8*/ PPC::Runtime::ASM::add(context->r27, context->r0, context->r3);
/*80387FAC 00384DAC*/ PPC::Runtime::ASM::ble(.L_80387FD0);
/*80387FB0 00384DB0*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*80387FB4 00384DB4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4C3C @ Get_MemoryOffset_HighBit);
/*80387FB8 00384DB8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*80387FBC 00384DBC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804F4C3C @ Get_MemoryOffset_LowBit);
/*80387FC0 00384DC0*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*80387FC4 00384DC4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80387FC8 00384DC8*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*80387FCC 00384DCC*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_80387FD0, 0x80387FD0) //this is a jump label
/*80387FD0 00384DD0*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80387FD4 00384DD4*/ PPC::Runtime::ASM::beq(.L_80388134);
/*80387FD8 00384DD8*/ PPC::Runtime::ASM::mulli(context->r3, context->r27, 0x70);
/*80387FDC 00384DDC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 80387FE0 00384DE0  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80387FE4 00384DE4*/ PPC::Runtime::ASM::bne(.L_80388008);
/*80387FE8 00384DE8*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*80387FEC 00384DEC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4C00 @ Get_MemoryOffset_HighBit);
/*80387FF0 00384DF0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*80387FF4 00384DF4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804F4C00 @ Get_MemoryOffset_LowBit);
/*80387FF8 00384DF8*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*80387FFC 00384DFC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80388000 00384E00*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*80388004 00384E04*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_80388008, 0x80388008) //this is a jump label
/*80388008 00384E08*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8038800C 00384E0C*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80388010 00384E10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80388014 00384E14*/ PPC::Runtime::ASM::b(.L_8038812C);
RUNTIME_PPC_JUMP_LABEL(.L_80388018, 0x80388018) //this is a jump label
/*80388018 00384E18*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8038801C 00384E1C*/ PPC::Runtime::ASM::beq(.L_80388118);
/*80388020 00384E20*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80388024 00384E24*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80388028 00384E28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8038802C 00384E2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80388030 00384E30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80388034 00384E34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80388038 00384E38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8038803C 00384E3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80388040 00384E40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80388044 00384E44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80388048 00384E48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8038804C 00384E4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80388050 00384E50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80388054 00384E54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80388058 00384E58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8038805C 00384E5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80388060 00384E60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80388064 00384E64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*80388068 00384E68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8038806C 00384E6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*80388070 00384E70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80388074 00384E74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*80388078 00384E78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8038807C 00384E7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80388080 00384E80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80388084 00384E84*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*80388088 00384E88*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31, context->r30));
/*8038808C 00384E8C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31, context->r4));
/*80388090 00384E90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*80388094 00384E94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*80388098 00384E98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8038809C 00384E9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*803880A0 00384EA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*803880A4 00384EA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*803880A8 00384EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*803880AC 00384EAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r4));
/*803880B0 00384EB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*803880B4 00384EB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*803880B8 00384EB8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*803880BC 00384EBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r4));
/*803880C0 00384EC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r30));
/*803880C4 00384EC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r4));
/*803880C8 00384EC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*803880CC 00384ECC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*803880D0 00384ED0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*803880D4 00384ED4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*803880D8 00384ED8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*803880DC 00384EDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r4));
/*803880E0 00384EE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*803880E4 00384EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r4));
/*803880E8 00384EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*803880EC 00384EEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r4));
/*803880F0 00384EF0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*803880F4 00384EF4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r4));
/*803880F8 00384EF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61, context->r30));
/*803880FC 00384EFC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61, context->r4));
/*80388100 00384F00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*80388104 00384F04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r4));
/*80388108 00384F08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8038810C 00384F0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r4));
/*80388110 00384F10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*80388114 00384F14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80388118, 0x80388118) //this is a jump label
/*80388118 00384F18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8038811C 00384F1C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x70);
/*80388120 00384F20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x70);
/*80388124 00384F24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80388128 00384F28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8038812C, 0x8038812C) //this is a jump label
/*8038812C 00384F2C*/ PPC::Runtime::ASM::cmplw(context->r30, context->r31);
/*80388130 00384F30*/ PPC::Runtime::ASM::bne(.L_80388018);
RUNTIME_PPC_JUMP_LABEL(.L_80388134, 0x80388134) //this is a jump label
/*80388134 00384F34*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80388138 00384F38*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8038813C 00384F3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80388140 00384F40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80388144 00384F44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80388148 00384F48*/ PPC::Runtime::ASM::blr();
}