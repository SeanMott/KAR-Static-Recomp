//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A0984.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A0984.hpp"
#include "fn_802889D0.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A0984.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802A0984.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"



void fn_802E4E60(PPC::Runtime::GCContext* context)
{
/*802E4E60 002E1C60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*802E4E64 002E1C64*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E4E68 002E1C68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802E4E6C 002E1C6C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802E4E70 002E1C70*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802E4E74 002E1C74*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802E4E78 002E1C78*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802E4E7C 002E1C7C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E4E80 002E1C80*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E4E84 002E1C84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802E4E88 002E1C88*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802E4E8C 002E1C8C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802E4E90 002E1C90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4E94 002E1C94*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*802E4E98 002E1C98*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802E4E9C 002E1C9C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802E4EA0 002E1CA0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4EA4 002E1CA4*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802E4EA8 002E1CA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4EAC 002E1CAC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4EB0 002E1CB0*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802E4EB4 002E1CB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4EB8 002E1CB8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4EBC 002E1CBC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802E4EC0 002E1CC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3894 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4EC4 002E1CC4*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E4EC8 002E1CC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E4ECC 002E1CCC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802E4ED0 002E1CD0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802E4ED4 002E1CD4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802E4ED8 002E1CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802E4EDC 002E1CDC*/ PPC::Runtime::ASM::fdivs(context->f29, context->f0, context->f1);
/*802E4EE0 002E1CE0*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E4EE4 002E1CE4*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E4EE8 002E1CE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E4EEC 002E1CEC*/ PPC::Runtime::ASM::bge(.L_802E4EFC);
/*802E4EF0 002E1CF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802E4EF4 002E1CF4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E4EF8 002E1CF8*/ PPC::Runtime::ASM::b(.L_802E4FA4);
RUNTIME_PPC_JUMP_LABEL(.L_802E4EFC, 0x802E4EFC) //this is a jump label
/*802E4EFC 002E1CFC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802E4F00 002E1D00*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E4F04 002E1D04*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802E4F08 002E1D08*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E4F0C 002E1D0C*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E4F10 002E1D10*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E4F14 002E1D14*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E4F18 002E1D18*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E4F1C 002E1D1C*/ PPC::Runtime::ASM::ble(.L_802E4F3C);
RUNTIME_PPC_JUMP_LABEL(.L_802E4F20, 0x802E4F20) //this is a jump label
/*802E4F20 002E1D20*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E4F24 002E1D24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E4F28 002E1D28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E4F2C 002E1D2C*/ PPC::Runtime::ASM::blt(.L_802E4F3C);
/*802E4F30 002E1D30*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E4F34 002E1D34*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E4F38 002E1D38*/ PPC::Runtime::ASM::bdnz(.L_802E4F20);
RUNTIME_PPC_JUMP_LABEL(.L_802E4F3C, 0x802E4F3C) //this is a jump label
/*802E4F3C 002E1D3C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E4F40 002E1D40*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E4F44 002E1D44*/ PPC::Runtime::ASM::blt(.L_802E4F88);
/*802E4F48 002E1D48*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E4F4C 002E1D4C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E4F50 002E1D50*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E4F54 002E1D54*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E4F58 002E1D58*/ PPC::Runtime::ASM::ble(.L_802E4F78);
RUNTIME_PPC_JUMP_LABEL(.L_802E4F5C, 0x802E4F5C) //this is a jump label
/*802E4F5C 002E1D5C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E4F60 002E1D60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E4F64 002E1D64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E4F68 002E1D68*/ PPC::Runtime::ASM::blt(.L_802E4F78);
/*802E4F6C 002E1D6C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E4F70 002E1D70*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E4F74 002E1D74*/ PPC::Runtime::ASM::bdnz(.L_802E4F5C);
RUNTIME_PPC_JUMP_LABEL(.L_802E4F78, 0x802E4F78) //this is a jump label
/*802E4F78 002E1D78*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E4F7C 002E1D7C*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E4F80 002E1D80*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E4F84 002E1D84*/ PPC::Runtime::ASM::b(.L_802E4FA4);
RUNTIME_PPC_JUMP_LABEL(.L_802E4F88, 0x802E4F88) //this is a jump label
/*802E4F88 002E1D88*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E4F8C 002E1D8C*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E4F90 002E1D90*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E4F94 002E1D94*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E4F98 002E1D98*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E4F9C 002E1D9C*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E4FA0 002E1DA0*/ PPC::Runtime::ASM::bl(fn_8038B880);
RUNTIME_PPC_JUMP_LABEL(.L_802E4FA4, 0x802E4FA4) //this is a jump label
/*802E4FA4 002E1DA4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E4FA8 002E1DA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4FAC 002E1DAC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4FB0 002E1DB0*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802E4FB4 002E1DB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4FB8 002E1DB8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4FBC 002E1DBC*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802E4FC0 002E1DC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4FC4 002E1DC4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E4FC8 002E1DC8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802E4FCC 002E1DCC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3894 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E4FD0 002E1DD0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x3c);
/*802E4FD4 002E1DD4*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E4FD8 002E1DD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E4FDC 002E1DDC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x30);
/*802E4FE0 002E1DE0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802E4FE4 002E1DE4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E4FE8 002E1DE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E4FEC 002E1DEC*/ PPC::Runtime::ASM::fdivs(context->f29, context->f0, context->f1);
/*802E4FF0 002E1DF0*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E4FF4 002E1DF4*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E4FF8 002E1DF8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E4FFC 002E1DFC*/ PPC::Runtime::ASM::bge(.L_802E500C);
/*802E5000 002E1E00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E5004 002E1E04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E5008 002E1E08*/ PPC::Runtime::ASM::b(.L_802E50B8);
RUNTIME_PPC_JUMP_LABEL(.L_802E500C, 0x802E500C) //this is a jump label
/*802E500C 002E1E0C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E5010 002E1E10*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E5014 002E1E14*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E5018 002E1E18*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E501C 002E1E1C*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5020 002E1E20*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E5024 002E1E24*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5028 002E1E28*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E502C 002E1E2C*/ PPC::Runtime::ASM::ble(.L_802E504C);
RUNTIME_PPC_JUMP_LABEL(.L_802E5030, 0x802E5030) //this is a jump label
/*802E5030 002E1E30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E5034 002E1E34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E5038 002E1E38*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E503C 002E1E3C*/ PPC::Runtime::ASM::blt(.L_802E504C);
/*802E5040 002E1E40*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E5044 002E1E44*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E5048 002E1E48*/ PPC::Runtime::ASM::bdnz(.L_802E5030);
RUNTIME_PPC_JUMP_LABEL(.L_802E504C, 0x802E504C) //this is a jump label
/*802E504C 002E1E4C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E5050 002E1E50*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E5054 002E1E54*/ PPC::Runtime::ASM::blt(.L_802E5098);
/*802E5058 002E1E58*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E505C 002E1E5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E5060 002E1E60*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5064 002E1E64*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5068 002E1E68*/ PPC::Runtime::ASM::ble(.L_802E5088);
RUNTIME_PPC_JUMP_LABEL(.L_802E506C, 0x802E506C) //this is a jump label
/*802E506C 002E1E6C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E5070 002E1E70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E5074 002E1E74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E5078 002E1E78*/ PPC::Runtime::ASM::blt(.L_802E5088);
/*802E507C 002E1E7C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E5080 002E1E80*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E5084 002E1E84*/ PPC::Runtime::ASM::bdnz(.L_802E506C);
RUNTIME_PPC_JUMP_LABEL(.L_802E5088, 0x802E5088) //this is a jump label
/*802E5088 002E1E88*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E508C 002E1E8C*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E5090 002E1E90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E5094 002E1E94*/ PPC::Runtime::ASM::b(.L_802E50B8);
RUNTIME_PPC_JUMP_LABEL(.L_802E5098, 0x802E5098) //this is a jump label
/*802E5098 002E1E98*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E509C 002E1E9C*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E50A0 002E1EA0*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E50A4 002E1EA4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E50A8 002E1EA8*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E50AC 002E1EAC*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E50B0 002E1EB0*/ PPC::Runtime::ASM::bl(fn_8038B880);
/*802E50B4 002E1EB4*/ PPC::Runtime::ASM::fmr(context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802E50B8, 0x802E50B8) //this is a jump label
/*802E50B8 002E1EB8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802E50BC 002E1EBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E50C0 002E1EC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802E50C4 002E1EC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*802E50C8 002E1EC8*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802E50CC 002E1ECC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E50D0 002E1ED0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E50D4 002E1ED4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E50D8 002E1ED8*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802E50DC 002E1EDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E50E0 002E1EE0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E50E4 002E1EE4*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802E50E8 002E1EE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E50EC 002E1EEC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E50F0 002E1EF0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802E50F4 002E1EF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3894 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E50F8 002E1EF8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x78);
/*802E50FC 002E1EFC*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E5100 002E1F00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E5104 002E1F04*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*802E5108 002E1F08*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802E510C 002E1F0C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E5110 002E1F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E5114 002E1F14*/ PPC::Runtime::ASM::fdivs(context->f29, context->f0, context->f1);
/*802E5118 002E1F18*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E511C 002E1F1C*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E5120 002E1F20*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E5124 002E1F24*/ PPC::Runtime::ASM::bge(.L_802E5134);
/*802E5128 002E1F28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E512C 002E1F2C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E5130 002E1F30*/ PPC::Runtime::ASM::b(.L_802E51DC);
RUNTIME_PPC_JUMP_LABEL(.L_802E5134, 0x802E5134) //this is a jump label
/*802E5134 002E1F34*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E5138 002E1F38*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E513C 002E1F3C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E5140 002E1F40*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E5144 002E1F44*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5148 002E1F48*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E514C 002E1F4C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5150 002E1F50*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5154 002E1F54*/ PPC::Runtime::ASM::ble(.L_802E5174);
RUNTIME_PPC_JUMP_LABEL(.L_802E5158, 0x802E5158) //this is a jump label
/*802E5158 002E1F58*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E515C 002E1F5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E5160 002E1F60*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E5164 002E1F64*/ PPC::Runtime::ASM::blt(.L_802E5174);
/*802E5168 002E1F68*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E516C 002E1F6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E5170 002E1F70*/ PPC::Runtime::ASM::bdnz(.L_802E5158);
RUNTIME_PPC_JUMP_LABEL(.L_802E5174, 0x802E5174) //this is a jump label
/*802E5174 002E1F74*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E5178 002E1F78*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E517C 002E1F7C*/ PPC::Runtime::ASM::blt(.L_802E51C0);
/*802E5180 002E1F80*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5184 002E1F84*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E5188 002E1F88*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E518C 002E1F8C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5190 002E1F90*/ PPC::Runtime::ASM::ble(.L_802E51B0);
RUNTIME_PPC_JUMP_LABEL(.L_802E5194, 0x802E5194) //this is a jump label
/*802E5194 002E1F94*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E5198 002E1F98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E519C 002E1F9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E51A0 002E1FA0*/ PPC::Runtime::ASM::blt(.L_802E51B0);
/*802E51A4 002E1FA4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E51A8 002E1FA8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E51AC 002E1FAC*/ PPC::Runtime::ASM::bdnz(.L_802E5194);
RUNTIME_PPC_JUMP_LABEL(.L_802E51B0, 0x802E51B0) //this is a jump label
/*802E51B0 002E1FB0*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E51B4 002E1FB4*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E51B8 002E1FB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E51BC 002E1FBC*/ PPC::Runtime::ASM::b(.L_802E51DC);
RUNTIME_PPC_JUMP_LABEL(.L_802E51C0, 0x802E51C0) //this is a jump label
/*802E51C0 002E1FC0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E51C4 002E1FC4*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E51C8 002E1FC8*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E51CC 002E1FCC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E51D0 002E1FD0*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E51D4 002E1FD4*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E51D8 002E1FD8*/ PPC::Runtime::ASM::bl(fn_8038B880);
RUNTIME_PPC_JUMP_LABEL(.L_802E51DC, 0x802E51DC) //this is a jump label
/*802E51DC 002E1FDC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E51E0 002E1FE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E51E4 002E1FE4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E51E8 002E1FE8*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802E51EC 002E1FEC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E51F0 002E1FF0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E51F4 002E1FF4*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f29);
/*802E51F8 002E1FF8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3874 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E51FC 002E1FFC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E5200 002E2000*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f29);
/*802E5204 002E2004*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3894 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E5208 002E2008*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xb4);
/*802E520C 002E200C*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802E5210 002E2010*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E5214 002E2014*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802E5218 002E2018*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802E521C 002E201C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E5220 002E2020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E5224 002E2024*/ PPC::Runtime::ASM::fdivs(context->f29, context->f0, context->f1);
/*802E5228 002E2028*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E522C 002E202C*/ PPC::Runtime::ASM::bl(fn_802A0984);
/*802E5230 002E2030*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802E5234 002E2034*/ PPC::Runtime::ASM::bge(.L_802E5244);
/*802E5238 002E2038*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E523C 002E203C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E5240 002E2040*/ PPC::Runtime::ASM::b(.L_802E52F0);
RUNTIME_PPC_JUMP_LABEL(.L_802E5244, 0x802E5244) //this is a jump label
/*802E5244 002E2044*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E5248 002E2048*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802E524C 002E204C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E5250 002E2050*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0xc);
/*802E5254 002E2054*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5258 002E2058*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*802E525C 002E205C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E5260 002E2060*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E5264 002E2064*/ PPC::Runtime::ASM::ble(.L_802E5284);
RUNTIME_PPC_JUMP_LABEL(.L_802E5268, 0x802E5268) //this is a jump label
/*802E5268 002E2068*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802E526C 002E206C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r5));
/*802E5270 002E2070*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E5274 002E2074*/ PPC::Runtime::ASM::blt(.L_802E5284);
/*802E5278 002E2078*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*802E527C 002E207C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*802E5280 002E2080*/ PPC::Runtime::ASM::bdnz(.L_802E5268);
RUNTIME_PPC_JUMP_LABEL(.L_802E5284, 0x802E5284) //this is a jump label
/*802E5284 002E2084*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*802E5288 002E2088*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*802E528C 002E208C*/ PPC::Runtime::ASM::blt(.L_802E52D0);
/*802E5290 002E2090*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x1);
/*802E5294 002E2094*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802E5298 002E2098*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802E529C 002E209C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*802E52A0 002E20A0*/ PPC::Runtime::ASM::ble(.L_802E52C0);
RUNTIME_PPC_JUMP_LABEL(.L_802E52A4, 0x802E52A4) //this is a jump label
/*802E52A4 002E20A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802E52A8 002E20A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r6));
/*802E52AC 002E20AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E52B0 002E20B0*/ PPC::Runtime::ASM::blt(.L_802E52C0);
/*802E52B4 002E20B4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xc);
/*802E52B8 002E20B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*802E52BC 002E20BC*/ PPC::Runtime::ASM::bdnz(.L_802E52A4);
RUNTIME_PPC_JUMP_LABEL(.L_802E52C0, 0x802E52C0) //this is a jump label
/*802E52C0 002E20C0*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*802E52C4 002E20C4*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r0);
/*802E52C8 002E20C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802E52CC 002E20CC*/ PPC::Runtime::ASM::b(.L_802E52F0);
RUNTIME_PPC_JUMP_LABEL(.L_802E52D0, 0x802E52D0) //this is a jump label
/*802E52D0 002E20D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E52D4 002E20D4*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*802E52D8 002E20D8*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802E52DC 002E20DC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802E52E0 002E20E0*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r3);
/*802E52E4 002E20E4*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*802E52E8 002E20E8*/ PPC::Runtime::ASM::bl(fn_8038B880);
/*802E52EC 002E20EC*/ PPC::Runtime::ASM::fmr(context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802E52F0, 0x802E52F0) //this is a jump label
/*802E52F0 002E20F0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802E52F4 002E20F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E52F8 002E20F8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*802E52FC 002E20FC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802E5300 002E2100*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802E5304 002E2104*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E5308 002E2108*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802E530C 002E210C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*802E5310 002E2110*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*802E5314 002E2114*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802E5318 002E2118*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802E531C 002E211C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802E5320 002E2120*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802E5324 002E2124*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802E5328 002E2128*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E532C 002E212C*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E5330 002E2130*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802E5334 002E2134*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802E5338 002E2138*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802E533C 002E213C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E5340 002E2140*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*802E5344 002E2144*/ PPC::Runtime::ASM::blr();
}