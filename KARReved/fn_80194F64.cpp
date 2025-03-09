//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_getMinStatsValue.hpp"
#include "fn_getMaxStatsValue.hpp"



void fn_80194F64(PPC::Runtime::GCContext* context)
{
/*80194F64 00191D64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80194F68 00191D68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80194F6C 00191D6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80194F70 00191D70*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80194F74 00191D74*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80194F78 00191D78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80194F7C 00191D7C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80194F80 00191D80*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80194F84 00191D84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80194F88 00191D88*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80194F8C 00191D8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80194F90 00191D90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80194F94 00191D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80194F98 00191D98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80194F9C 00191D9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80194FA0 00191DA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80194FA4 00191DA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80194FA8 00191DA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80194FAC 00191DAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80194FB0 00191DB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*80194FB4 00191DB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80194FB8 00191DB8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80194FBC 00191DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80194FC0 00191DC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*80194FC4 00191DC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80194FC8 00191DC8*/ PPC::Runtime::ASM::bl(fn_getMinStatsValue);
/*80194FCC 00191DCC*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80194FD0 00191DD0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80194FD4 00191DD4*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80194FD8 00191DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194FDC 00191DDC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E10C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80194FE0 00191DE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80194FE4 00191DE4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194FE8 00191DE8*/ PPC::Runtime::ASM::fsubs(context->f31, context->f0, context->f1);
/*80194FEC 00191DEC*/ PPC::Runtime::ASM::bl(fn_getMaxStatsValue);
/*80194FF0 00191DF0*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80194FF4 00191DF4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80194FF8 00191DF8*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80194FFC 00191DFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80195000 00191E00*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E10C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80195004 00191E04*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80195008 00191E08*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019500C 00191E0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80195010 00191E10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80195014 00191E14*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80195018 00191E18*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*8019501C 00191E1C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80195020, 0x80195020) //this is a jump label
/*80195020 00191E20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80195024 00191E24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80195028 00191E28*/ PPC::Runtime::ASM::ble(.L_80195034);
/*8019502C 00191E2C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80195030 00191E30*/ PPC::Runtime::ASM::b(.L_80195040);
RUNTIME_PPC_JUMP_LABEL(.L_80195034, 0x80195034) //this is a jump label
/*80195034 00191E34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*80195038 00191E38*/ PPC::Runtime::ASM::bge(.L_80195040);
/*8019503C 00191E3C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80195040, 0x80195040) //this is a jump label
/*80195040 00191E40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80195044 00191E44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80195048 00191E48*/ PPC::Runtime::ASM::ble(.L_80195054);
/*8019504C 00191E4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80195050 00191E50*/ PPC::Runtime::ASM::b(.L_80195060);
RUNTIME_PPC_JUMP_LABEL(.L_80195054, 0x80195054) //this is a jump label
/*80195054 00191E54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*80195058 00191E58*/ PPC::Runtime::ASM::bge(.L_80195060);
/*8019505C 00191E5C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80195060, 0x80195060) //this is a jump label
/*80195060 00191E60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80195064 00191E64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80195068 00191E68*/ PPC::Runtime::ASM::ble(.L_80195074);
/*8019506C 00191E6C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80195070 00191E70*/ PPC::Runtime::ASM::b(.L_80195080);
RUNTIME_PPC_JUMP_LABEL(.L_80195074, 0x80195074) //this is a jump label
/*80195074 00191E74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*80195078 00191E78*/ PPC::Runtime::ASM::bge(.L_80195080);
/*8019507C 00191E7C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80195080, 0x80195080) //this is a jump label
/*80195080 00191E80*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80195084 00191E84*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*80195088 00191E88*/ PPC::Runtime::ASM::bdnz(.L_80195020);
/*8019508C 00191E8C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80195090 00191E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80195094 00191E94*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80195098 00191E98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019509C 00191E9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801950A0 00191EA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801950A4 00191EA4*/ PPC::Runtime::ASM::blr();
}