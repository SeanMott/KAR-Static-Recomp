//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF900.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80304248.hpp"
#include "fn_802FF540.hpp"
#include "fn_80304248.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802889D0.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_80369CE8.hpp"
#include "fn_8037B61C.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037B33C.hpp"



void fn_80303D64(PPC::Runtime::GCContext* context)
{
/*80303D64 00300B64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*80303D68 00300B68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80303D6C 00300B6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80303D70 00300B70*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*80303D74 00300B74*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*80303D78 00300B78*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80303D7C 00300B7C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*80303D80 00300B80*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*80303D84 00300B84*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*80303D88 00300B88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*80303D8C 00300B8C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*80303D90 00300B90*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*80303D94 00300B94*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80303D98 00300B98*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80303D9C 00300B9C*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*80303DA0 00300BA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80303DA4 00300BA4*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80303DA8 00300BA8*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80303DAC 00300BAC*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80303DB0 00300BB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*80303DB4 00300BB4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*80303DB8 00300BB8*/ PPC::Runtime::ASM::bne(.L_80303DCC);
/*80303DBC 00300BBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x510, context->r3));
/*80303DC0 00300BC0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80303DC4 00300BC4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80303DC8 00300BC8*/ PPC::Runtime::ASM::bl(fn_8038D158);
RUNTIME_PPC_JUMP_LABEL(.L_80303DCC, 0x80303DCC) //this is a jump label
/*80303DCC 00300BCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80303DD0 00300BD0*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*80303DD4 00300BD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80303DD8 00300BD8*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80303DDC 00300BDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80303DE0 00300BE0*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*80303DE4 00300BE4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x10);
/*80303DE8 00300BE8*/ PPC::Runtime::ASM::bl(fn_802DF900);
/*80303DEC 00300BEC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80303DF0 00300BF0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80303DF4 00300BF4*/ PPC::Runtime::ASM::beq(.L_80304150);
/*80303DF8 00300BF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xd);
/*80303DFC 00300BFC*/ PPC::Runtime::ASM::bne(.L_80304140);
/*80303E00 00300C00*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80303E04 00300C04*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80303E08 00300C08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E0C 00300C0C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r3));
/*80303E10 00300C10*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303E14 00300C14*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80303E18 00300C18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E1C 00300C1C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303E20 00300C20*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80303E24 00300C24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E28 00300C28*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303E2C 00300C2C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f30);
/*80303E30 00300C30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3C80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E34 00300C34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E38 00300C38*/ PPC::Runtime::ASM::fmuls(context->f29, context->f0, context->f2);
/*80303E3C 00300C3C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303E40 00300C40*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80303E44 00300C44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E48 00300C48*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303E4C 00300C4C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80303E50 00300C50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E54 00300C54*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303E58 00300C58*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f30);
/*80303E5C 00300C5C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303E60 00300C60*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f29);
/*80303E64 00300C64*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*80303E68 00300C68*/ PPC::Runtime::ASM::fdivs(context->f29, context->f0, context->f1);
/*80303E6C 00300C6C*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*80303E70 00300C70*/ PPC::Runtime::ASM::bl(fn_80304248);
/*80303E74 00300C74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303E78 00300C78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80303E7C 00300C7C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f0, context->f1);
/*80303E80 00300C80*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*80303E84 00300C84*/ PPC::Runtime::ASM::bl(fn_802FF540);
/*80303E88 00300C88*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80303E8C 00300C8C*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
/*80303E90 00300C90*/ PPC::Runtime::ASM::bl(fn_80304248);
/*80303E94 00300C94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303E98 00300C98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80303E9C 00300C9C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80303EA0 00300CA0*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80303EA4 00300CA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303EA8 00300CA8*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*80303EAC 00300CAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*80303EB0 00300CB0*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80303EB4 00300CB4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303EB8 00300CB8*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80303EBC 00300CBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303EC0 00300CC0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303EC4 00300CC4*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80303EC8 00300CC8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303ECC 00300CCC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303ED0 00300CD0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*80303ED4 00300CD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303ED8 00300CD8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x44c);
/*80303EDC 00300CDC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x450);
/*80303EE0 00300CE0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80303EE4 00300CE4*/ PPC::Runtime::ASM::fdivs(context->f1, context->f29, context->f0);
/*80303EE8 00300CE8*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*80303EEC 00300CEC*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80303EF0 00300CF0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303EF4 00300CF4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303EF8 00300CF8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80303EFC 00300CFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F00 00300D00*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80303F04 00300D04*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80303F08 00300D08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3C34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F0C 00300D0C*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80303F10 00300D10*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*80303F14 00300D14*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F18 00300D18*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f0);
/*80303F1C 00300D1C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80303F20 00300D20*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80303F24 00300D24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F28 00300D28*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80303F2C 00300D2C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80303F30 00300D30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3C20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F34 00300D34*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80303F38 00300D38*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*80303F3C 00300D3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F40 00300D40*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8c);
/*80303F44 00300D44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f29);
/*80303F48 00300D48*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80303F4C 00300D4C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*80303F50 00300D50*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*80303F54 00300D54*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80303F58 00300D58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303F5C 00300D5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80303F60 00300D60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80303F64 00300D64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80303F68 00300D68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80303F6C 00300D6C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80303F70 00300D70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80303F74 00300D74*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80303F78 00300D78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x448, context->r3));
/*80303F7C 00300D7C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*80303F80 00300D80*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80303F84 00300D84*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80303F88 00300D88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F8C 00300D8C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80303F90 00300D90*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80303F94 00300D94*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80303F98 00300D98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80303F9C 00300D9C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80303FA0 00300DA0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80303FA4 00300DA4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80303FA8 00300DA8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80303FAC 00300DAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80303FB0 00300DB0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80303FB4 00300DB4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80303FB8 00300DB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r3));
/*80303FBC 00300DBC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*80303FC0 00300DC0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80303FC4 00300DC4*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80303FC8 00300DC8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80303FCC 00300DCC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80303FD0 00300DD0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80303FD4 00300DD4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80303FD8 00300DD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80303FDC 00300DDC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*80303FE0 00300DE0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80303FE4 00300DE4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80303FE8 00300DE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80303FEC 00300DEC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80303FF0 00300DF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80303FF4 00300DF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80303FF8 00300DF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80303FFC 00300DFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80304000 00300E00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*80304004 00300E04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80304008 00300E08*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*8030400C 00300E0C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80304010 00300E10*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x74);
/*80304014 00300E14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80304018 00300E18*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8030401C 00300E1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80304020 00300E20*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*80304024 00300E24*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80304028 00300E28*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8030402C 00300E2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80304030 00300E30*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*80304034 00300E34*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80304038 00300E38*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8030403C 00300E3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80304040 00300E40*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80304044 00300E44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80304048 00300E48*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8030404C 00300E4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*80304050 00300E50*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80304054 00300E54*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80304058 00300E58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030405C 00300E5C*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80304060 00300E60*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80304064 00300E64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80304068 00300E68*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8030406C 00300E6C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*80304070 00300E70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3BB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80304074 00300E74*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3BC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80304078 00300E78*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8030407C 00300E7C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80304080 00300E80*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80304084 00300E84*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*80304088 00300E88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030408C 00300E8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80304090 00300E90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80304094 00300E94*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f2);
/*80304098 00300E98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8030409C 00300E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803040A0 00300EA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803040A4 00300EA4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803040A8 00300EA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803040AC 00300EAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803040B0 00300EB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*803040B4 00300EB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803040B8 00300EB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803040BC 00300EBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803040C0 00300EC0*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*803040C4 00300EC4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803040C8 00300EC8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803040CC 00300ECC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803040D0 00300ED0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9990 @ Get_MemoryOffset_SDA21);
/*803040D4 00300ED4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803040D8 00300ED8*/ PPC::Runtime::ASM::li(context->r6, HandleSomeKind_6 @ Get_MemoryOffset_SDA21);
/*803040DC 00300EDC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803040E0 00300EE0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803040E4 00300EE4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803040E8 00300EE8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803040EC 00300EEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803040F0 00300EF0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803040F4 00300EF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803040F8 00300EF8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803040FC 00300EFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80304100 00300F00*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80304104 00300F04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*80304108 00300F08*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030410C 00300F0C*/ PPC::Runtime::ASM::bctrl();
/*80304110 00300F10*/ PPC::Runtime::ASM::mr(context->r8, context->r3);
/*80304114 00300F14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80304118 00300F18*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8030411C 00300F1C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x80);
/*80304120 00300F20*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0xc);
/*80304124 00300F24*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8c);
/*80304128 00300F28*/ PPC::Runtime::ASM::bl(fn_80369CE8);
/*8030412C 00300F2C*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80304130 00300F30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80304134 00300F34*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80304138 00300F38*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8030413C 00300F3C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80304140, 0x80304140) //this is a jump label
/*80304140 00300F40*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80304144 00300F44*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80304148 00300F48*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8030414C 00300F4C*/ PPC::Runtime::ASM::b(.L_80304190);
RUNTIME_PPC_JUMP_LABEL(.L_80304150, 0x80304150) //this is a jump label
/*80304150 00300F50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80304154 00300F54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80304158 00300F58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8030415C 00300F5C*/ PPC::Runtime::ASM::bne(.L_80304174);
/*80304160 00300F60*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*80304164 00300F64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80304168 00300F68*/ PPC::Runtime::ASM::beq(.L_80304174);
/*8030416C 00300F6C*/ PPC::Runtime::ASM::li(context->r0, 0x14);
/*80304170 00300F70*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80304174, 0x80304174) //this is a jump label
/*80304174 00300F74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80304178 00300F78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8030417C 00300F7C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80304180 00300F80*/ PPC::Runtime::ASM::beq(.L_80304190);
/*80304184 00300F84*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*80304188 00300F88*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8030418C 00300F8C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80304190, 0x80304190) //this is a jump label
/*80304190 00300F90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80304194 00300F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*80304198 00300F98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x5);
/*8030419C 00300F9C*/ PPC::Runtime::ASM::blt(.L_80304204);
/*803041A0 00300FA0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803041A4 00300FA4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803041A8 00300FA8*/ PPC::Runtime::ASM::beq(.L_803041B4);
/*803041AC 00300FAC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xc);
/*803041B0 00300FB0*/ PPC::Runtime::ASM::ble(.L_80304204);
RUNTIME_PPC_JUMP_LABEL(.L_803041B4, 0x803041B4) //this is a jump label
/*803041B4 00300FB4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*803041B8 00300FB8*/ PPC::Runtime::ASM::bl(fn_8037B61C);
/* 803041BC 00300FBC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803041C0 00300FC0*/ PPC::Runtime::ASM::bne(.L_80304210);
/*803041C4 00300FC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803041C8 00300FC8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D99E4 @ Get_MemoryOffset_SDA21);
/*803041CC 00300FCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x510, context->r3));
/*803041D0 00300FD0*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*803041D4 00300FD4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803041D8 00300FD8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*803041DC 00300FDC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803041E0 00300FE0*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*803041E4 00300FE4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*803041E8 00300FE8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*803041EC 00300FEC*/ PPC::Runtime::ASM::li(context->r4, 0x3d);
/*803041F0 00300FF0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803041F4 00300FF4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803041F8 00300FF8*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803041FC 00300FFC*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*80304200 00301000*/ PPC::Runtime::ASM::b(.L_80304210);
RUNTIME_PPC_JUMP_LABEL(.L_80304204, 0x80304204) //this is a jump label
/*80304204 00301004*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*80304208 00301008*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030420C 0030100C*/ PPC::Runtime::ASM::bl(fn_8037B33C);
RUNTIME_PPC_JUMP_LABEL(.L_80304210, 0x80304210) //this is a jump label
/*80304210 00301010*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*80304214 00301014*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*80304218 00301018*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*8030421C 0030101C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80304220 00301020*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*80304224 00301024*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*80304228 00301028*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*8030422C 0030102C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*80304230 00301030*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*80304234 00301034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80304238 00301038*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8030423C 0030103C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80304240 00301040*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*80304244 00301044*/ PPC::Runtime::ASM::blr();
}