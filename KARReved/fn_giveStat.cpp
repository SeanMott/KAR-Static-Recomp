//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_getMinStatsValue.hpp"
#include "fn_getMaxStatsValue.hpp"



void fn_giveStat(PPC::Runtime::GCContext* context)
{
/*80194D80 00191B80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80194D84 00191B84*/ PPC::Runtime::ASM::mflr(context->r0);
/*80194D88 00191B88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80194D8C 00191B8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80194D90 00191B90*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80194D94 00191B94*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80194D98 00191B98*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80194D9C 00191B9C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80194DA0 00191BA0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80194DA4 00191BA4*/ PPC::Runtime::ASM::bl(fn_getMinStatsValue);
/*80194DA8 00191BA8*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*80194DAC 00191BAC*/ PPC::Runtime::ASM::xoris(context->r0, context->r31, 0x8000);
/*80194DB0 00191BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80194DB4 00191BB4*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80194DB8 00191BB8*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80194DBC 00191BBC*/ PPC::Runtime::ASM::slwi(context->r31, context->r30, 2);
/*80194DC0 00191BC0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194DC4 00191BC4*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E10C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80194DC8 00191BC8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194DCC 00191BCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80194DD0 00191BD0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80194DD4 00191BD4*/ PPC::Runtime::ASM::lfsx(context->f1, context->r29, context->r31);
/*80194DD8 00191BD8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194DDC 00191BDC*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194DE0 00191BE0*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*80194DE4 00191BE4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*80194DE8 00191BE8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80194DEC 00191BEC*/ PPC::Runtime::ASM::bge(.L_80194DF8);
/*80194DF0 00191BF0*/ PPC::Runtime::ASM::stfsx(context->f2, context->r29, context->r31);
/*80194DF4 00191BF4*/ PPC::Runtime::ASM::b(.L_80194E44);
RUNTIME_PPC_JUMP_LABEL(.L_80194DF8, 0x80194DF8) //this is a jump label
/*80194DF8 00191BF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80194DFC 00191BFC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194E00 00191C00*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80194E04 00191C04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80194E08 00191C08*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80194E0C 00191C0C*/ PPC::Runtime::ASM::stfsx(context->f0, context->r29, context->r31);
/*80194E10 00191C10*/ PPC::Runtime::ASM::bl(fn_getMaxStatsValue);
/*80194E14 00191C14*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80194E18 00191C18*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80194E1C 00191C1C*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80194E20 00191C20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194E24 00191C24*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E10C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80194E28 00191C28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80194E2C 00191C2C*/ PPC::Runtime::ASM::lfsx(context->f0, context->r29, context->r31);
/*80194E30 00191C30*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80194E34 00191C34*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80194E38 00191C38*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80194E3C 00191C3C*/ PPC::Runtime::ASM::ble(.L_80194E44);
/*80194E40 00191C40*/ PPC::Runtime::ASM::stfsx(context->f1, context->r29, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80194E44, 0x80194E44) //this is a jump label
/*80194E44 00191C44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80194E48 00191C48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80194E4C 00191C4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80194E50 00191C50*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80194E54 00191C54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80194E58 00191C58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80194E5C 00191C5C*/ PPC::Runtime::ASM::blr();
}