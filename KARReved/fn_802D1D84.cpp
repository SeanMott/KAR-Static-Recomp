//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802DE0E4.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C3C.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802DE0E4.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C3C.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_802DE0E4.hpp"



void fn_802D1D84(PPC::Runtime::GCContext* context)
{
/*802D1D84 002CEB84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*802D1D88 002CEB88*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D1D8C 002CEB8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802D1D90 002CEB90*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802D1D94 002CEB94*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802D1D98 002CEB98*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802D1D9C 002CEB9C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802D1DA0 002CEBA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802D1DA4 002CEBA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802D1DA8 002CEBA8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D1DAC 002CEBAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1DB0 002CEBB0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1DB4 002CEBB4*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802D1DB8 002CEBB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1DBC 002CEBBC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1DC0 002CEBC0*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802D1DC4 002CEBC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1DC8 002CEBC8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802D1DCC 002CEBCC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*802D1DD0 002CEBD0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1DD4 002CEBD4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*802D1DD8 002CEBD8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802D1DDC 002CEBDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D1DE0 002CEBE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D1DE4 002CEBE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D1DE8 002CEBE8*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802D1DEC 002CEBEC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2100, context->r3));
/*802D1DF0 002CEBF0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1DF4 002CEBF4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1DF8 002CEBF8*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802D1DFC 002CEBFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E00 002CEC00*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802D1E04 002CEC04*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802D1E08 002CEC08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E0C 002CEC0C*/ PPC::Runtime::ASM::bl(fn_802D4C3C);
/*802D1E10 002CEC10*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f30);
/*802D1E14 002CEC14*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E18 002CEC18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D1E1C 002CEC1C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*802D1E20 002CEC20*/ PPC::Runtime::ASM::fmuls(context->f2, context->f31, context->f2);
/*802D1E24 002CEC24*/ PPC::Runtime::ASM::fmuls(context->f31, context->f2, context->f0);
/*802D1E28 002CEC28*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1E2C 002CEC2C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802D1E30 002CEC30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E34 002CEC34*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802D1E38 002CEC38*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802D1E3C 002CEC3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E40 002CEC40*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802D1E44 002CEC44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f30);
/*802D1E48 002CEC48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E4C 002CEC4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802D1E50 002CEC50*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802D1E54 002CEC54*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*802D1E58 002CEC58*/ PPC::Runtime::ASM::fdivs(context->f0, context->f31, context->f0);
/*802D1E5C 002CEC5C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802D1E60 002CEC60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*802D1E64 002CEC64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r4));
/*802D1E68 002CEC68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r4));
/*802D1E6C 002CEC6C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*802D1E70 002CEC70*/ PPC::Runtime::ASM::ble(.L_802D1FA8);
/*802D1E74 002CEC74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*802D1E78 002CEC78*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802D1E7C 002CEC7C*/ PPC::Runtime::ASM::beq(.L_802D1FA8);
/*802D1E80 002CEC80*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1E84 002CEC84*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802D1E88 002CEC88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E8C 002CEC8C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1E90 002CEC90*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802D1E94 002CEC94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1E98 002CEC98*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802D1E9C 002CEC9C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*802D1EA0 002CECA0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1EA4 002CECA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802D1EA8 002CECA8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*802D1EAC 002CECAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D1EB0 002CECB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D1EB4 002CECB4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802D1EB8 002CECB8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r12));
/*802D1EBC 002CECBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D1EC0 002CECC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D1EC4 002CECC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D1EC8 002CECC8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D1ECC 002CECCC*/ PPC::Runtime::ASM::bctrl();
/*802D1ED0 002CECD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802D1ED4 002CECD4*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802D1ED8 002CECD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D1EDC 002CECDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D1EE0 002CECE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r12));
/*802D1EE4 002CECE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D1EE8 002CECE8*/ PPC::Runtime::ASM::bctrl();
/*802D1EEC 002CECEC*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802D1EF0 002CECF0*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802D1EF4 002CECF4*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802D1EF8 002CECF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D1EFC 002CECFC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xf0);
/*802D1F00 002CED00*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xf4);
/*802D1F04 002CED04*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802D1F08 002CED08*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D1F0C 002CED0C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802D1F10 002CED10*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xf8);
/*802D1F14 002CED14*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802D1F18 002CED18*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802D1F1C 002CED1C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D1F20 002CED20*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802D1F24 002CED24*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802D1F28 002CED28*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802D1F2C 002CED2C*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802D1F30 002CED30*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802D1F34 002CED34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1F38 002CED38*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1F3C 002CED3C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802D1F40 002CED40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1F44 002CED44*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802D1F48 002CED48*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802D1F4C 002CED4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1F50 002CED50*/ PPC::Runtime::ASM::bl(fn_802D4C3C);
/*802D1F54 002CED54*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*802D1F58 002CED58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1F5C 002CED5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D1F60 002CED60*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*802D1F64 002CED64*/ PPC::Runtime::ASM::fmuls(context->f2, context->f30, context->f2);
/*802D1F68 002CED68*/ PPC::Runtime::ASM::fmuls(context->f30, context->f2, context->f0);
/*802D1F6C 002CED6C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D1F70 002CED70*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802D1F74 002CED74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1F78 002CED78*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802D1F7C 002CED7C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802D1F80 002CED80*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1F84 002CED84*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802D1F88 002CED88*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*802D1F8C 002CED8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D1F90 002CED90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802D1F94 002CED94*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802D1F98 002CED98*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802D1F9C 002CED9C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f30, context->f0);
/*802D1FA0 002CEDA0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802D1FA4 002CEDA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802D1FA8, 0x802D1FA8) //this is a jump label
/*802D1FA8 002CEDA8*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802D1FAC 002CEDAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802D1FB0 002CEDB0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2104, context->r3));
/*802D1FB4 002CEDB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*802D1FB8 002CEDB8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802D1FBC 002CEDBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*802D1FC0 002CEDC0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802D1FC4 002CEDC4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802D1FC8 002CEDC8*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802D1FCC 002CEDCC*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802D1FD0 002CEDD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802D1FD4 002CEDD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802D1FD8 002CEDD8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802D1FDC 002CEDDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D1FE0 002CEDE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*802D1FE4 002CEDE4*/ PPC::Runtime::ASM::blr();
}