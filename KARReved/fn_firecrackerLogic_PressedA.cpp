//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_801C7568.hpp"
#include "fn_80064C18.hpp"
#include "fn_spawnCrackerBullet.hpp"
#include "fn_80236C40.hpp"
#include "fn_80195548.hpp"
#include "fn_8005EA20.hpp"
#include "fn_8005D64C.hpp"
#include "fn_801A7E48.hpp"
#include "fn_sndAuxCallbackPrepareDelay.hpp"
#include "fn_AS_LoseCopyAbility.hpp"



void fn_firecrackerLogic_PressedA(PPC::Runtime::GCContext* context)
{
/*801B5F24 001B2D24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801B5F28 001B2D28*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B5F2C 001B2D2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1674 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B5F30 001B2D30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801B5F34 001B2D34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801B5F38 001B2D38*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B5F3C 001B2D3C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801B5F40 001B2D40*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B5F44 001B2D44*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801B5F48 001B2D48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B5F4C 001B2D4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801B5F50 001B2D50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B5F54 001B2D54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r4));
/*801B5F58 001B2D58*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801B5F5C 001B2D5C*/ PPC::Runtime::ASM::bne(.L_801B6040);
/*801B5F60 001B2D60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x790, context->r31));
/*801B5F64 001B2D64*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2fc);
/*801B5F68 001B2D68*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*801B5F6C 001B2D6C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801B5F70 001B2D70*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B5F74 001B2D74*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801B5F78 001B2D78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801B5F7C 001B2D7C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801B5F80 001B2D80*/ PPC::Runtime::ASM::beq(.L_801B5FB8);
/*801B5F84 001B2D84*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801B5F88 001B2D88*/ PPC::Runtime::ASM::bl(fn_801C7568);
/*801B5F8C 001B2D8C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801B5F90 001B2D90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801B5F94 001B2D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801B5F98 001B2D98*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*801B5F9C 001B2D9C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x484);
/*801B5FA0 001B2DA0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B5FA4 001B2DA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B5FA8 001B2DA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801B5FAC 001B2DAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B5FB0 001B2DB0*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801B5FB4 001B2DB4*/ PPC::Runtime::ASM::b(.L_801B5FE8);
RUNTIME_PPC_JUMP_LABEL(.L_801B5FB8, 0x801B5FB8) //this is a jump label
/*801B5FB8 001B2DB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x330, context->r31));
/*801B5FBC 001B2DBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*801B5FC0 001B2DC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B5FC4 001B2DC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801B5FC8 001B2DC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*801B5FCC 001B2DCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B5FD0 001B2DD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801B5FD4 001B2DD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801B5FD8 001B2DD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B5FDC 001B2DDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B5FE0 001B2DE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801B5FE4 001B2DE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801B5FE8, 0x801B5FE8) //this is a jump label
/*801B5FE8 001B2DE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B5FEC 001B2DEC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801B5FF0 001B2DF0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801B5FF4 001B2DF4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*801B5FF8 001B2DF8*/ PPC::Runtime::ASM::bl(fn_spawnCrackerBullet);
/*801B5FFC 001B2DFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801B6000 001B2E00*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*801B6004 001B2E04*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r31));
/*801B6008 001B2E08*/ PPC::Runtime::ASM::li(context->r4, 0x27ae);
/*801B600C 001B2E0C*/ PPC::Runtime::ASM::li(context->r6, 0xcd);
/*801B6010 001B2E10*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801B6014 001B2E14*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*801B6018 001B2E18*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa28, context->r31));
/*801B601C 001B2E1C*/ PPC::Runtime::ASM::lis(context->r4, 0x13);
/*801B6020 001B2E20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1674 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B6024 001B2E24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B6028 001B2E28*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*801B602C 001B2E2C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0xe);
/*801B6030 001B2E30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa28, context->r31));
/*801B6034 001B2E34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa2c, context->r31));
/*801B6038 001B2E38*/ PPC::Runtime::ASM::bl(fn_80195548);
/*801B603C 001B2E3C*/ PPC::Runtime::ASM::b(.L_801B6098);
RUNTIME_PPC_JUMP_LABEL(.L_801B6040, 0x801B6040) //this is a jump label
/*801B6040 001B2E40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e8, context->r4));
/*801B6044 001B2E44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801B6048 001B2E48*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801B604C 001B2E4C*/ PPC::Runtime::ASM::bne(.L_801B6098);
/*801B6050 001B2E50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B6054 001B2E54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r31));
/*801B6058 001B2E58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa28, context->r31));
/*801B605C 001B2E5C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801B6060 001B2E60*/ PPC::Runtime::ASM::bgt(.L_801B6098);
/*801B6064 001B2E64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa2c, context->r31));
/*801B6068 001B2E68*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801B606C 001B2E6C*/ PPC::Runtime::ASM::bl(fn_8005EA20);
/*801B6070 001B2E70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa2c, context->r31));
/*801B6074 001B2E74*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*801B6078 001B2E78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B607C 001B2E7C*/ PPC::Runtime::ASM::bl(fn_801A7E48);
/*801B6080 001B2E80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B6084 001B2E84*/ PPC::Runtime::ASM::bl(fn_sndAuxCallbackPrepareDelay);
/*801B6088 001B2E88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B608C 001B2E8C*/ PPC::Runtime::ASM::bl(fn_AS_LoseCopyAbility);
/*801B6090 001B2E90*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B6094 001B2E94*/ PPC::Runtime::ASM::b(.L_801B609C);
RUNTIME_PPC_JUMP_LABEL(.L_801B6098, 0x801B6098) //this is a jump label
/*801B6098 001B2E98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801B609C, 0x801B609C) //this is a jump label
/*801B609C 001B2E9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801B60A0 001B2EA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801B60A4 001B2EA4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801B60A8 001B2EA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B60AC 001B2EAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801B60B0 001B2EB0*/ PPC::Runtime::ASM::blr();
}