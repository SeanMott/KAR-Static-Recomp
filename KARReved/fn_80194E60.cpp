//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_getMinStatsValue.hpp"
#include "fn_getMaxStatsValue.hpp"



void fn_80194E60(PPC::Runtime::GCContext* context)
{
/*80194E60 00191C60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80194E64 00191C64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80194E68 00191C68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80194E6C 00191C6C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80194E70 00191C70*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80194E74 00191C74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80194E78 00191C78*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80194E7C 00191C7C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80194E80 00191C80*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80194E84 00191C84*/ PPC::Runtime::ASM::lfd(context->f31, STRUCT_DOUBLE_COUNT_1805E10C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80194E88 00191C88*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80194E8C 00191C8C*/ PPC::Runtime::ASM::xoris(context->r31, context->r4, 0x8000);
/*80194E90 00191C90*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80194E94 00191C94*/ PPC::Runtime::ASM::lis(context->r30, 0x4330);
RUNTIME_PPC_JUMP_LABEL(.L_80194E98, 0x80194E98) //this is a jump label
/*80194E98 00191C98*/ PPC::Runtime::ASM::bl(fn_getMinStatsValue);
/*80194E9C 00191C9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80194EA0 00191CA0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80194EA4 00191CA4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80194EA8 00191CA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80194EAC 00191CAC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194EB0 00191CB0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194EB4 00191CB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80194EB8 00191CB8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*80194EBC 00191CBC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194EC0 00191CC0*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194EC4 00191CC4*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*80194EC8 00191CC8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f31);
/*80194ECC 00191CCC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80194ED0 00191CD0*/ PPC::Runtime::ASM::bge(.L_80194EDC);
/*80194ED4 00191CD4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80194ED8 00191CD8*/ PPC::Runtime::ASM::b(.L_80194F2C);
RUNTIME_PPC_JUMP_LABEL(.L_80194EDC, 0x80194EDC) //this is a jump label
/*80194EDC 00191CDC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80194EE0 00191CE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80194EE4 00191CE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194EE8 00191CE8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194EEC 00191CEC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f31);
/*80194EF0 00191CF0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80194EF4 00191CF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80194EF8 00191CF8*/ PPC::Runtime::ASM::bl(fn_getMaxStatsValue);
/*80194EFC 00191CFC*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80194F00 00191D00*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80194F04 00191D04*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80194F08 00191D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194F0C 00191D0C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E10C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80194F10 00191D10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80194F14 00191D14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80194F18 00191D18*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194F1C 00191D1C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80194F20 00191D20*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80194F24 00191D24*/ PPC::Runtime::ASM::ble(.L_80194F2C);
/*80194F28 00191D28*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80194F2C, 0x80194F2C) //this is a jump label
/*80194F2C 00191D2C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80194F30 00191D30*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80194F34 00191D34*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x9);
/*80194F38 00191D38*/ PPC::Runtime::ASM::blt(.L_80194E98);
/*80194F3C 00191D3C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80194F40 00191D40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80194F44 00191D44*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80194F48 00191D48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80194F4C 00191D4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80194F50 00191D50*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80194F54 00191D54*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80194F58 00191D58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80194F5C 00191D5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80194F60 00191D60*/ PPC::Runtime::ASM::blr();
}