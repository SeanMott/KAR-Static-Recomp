//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055DAC.hpp"
#include "fn_80056074.hpp"
#include "fn_80055DAC.hpp"
#include "fn_80056074.hpp"
#include "fn_80055DAC.hpp"
#include "fn_801D4938.hpp"
#include "fn_801D4888.hpp"
#include "fn_801F3484.hpp"



void fn_801F5C1C(PPC::Runtime::GCContext* context)
{
/*801F5C1C 001F2A1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801F5C20 001F2A20*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F5C24 001F2A24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F5C28 001F2A28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F5C2C 001F2A2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F5C30 001F2A30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F5C34 001F2A34*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F5C38 001F2A38*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F5C3C 001F2A3C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r3));
/* 801F5C40 001F2A40  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*801F5C44 001F2A44*/ PPC::Runtime::ASM::bne(.L_801F5F04);
/*801F5C48 001F2A48*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801F5C4C 001F2A4C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F5C50 001F2A50*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 0, 31, 31);
/*801F5C54 001F2A54*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801F5C58 001F2A58*/ PPC::Runtime::ASM::mr(context->r28, context->r29);
/*801F5C5C 001F2A5C*/ PPC::Runtime::ASM::b(.L_801F5C94);
RUNTIME_PPC_JUMP_LABEL(.L_801F5C60, 0x801F5C60) //this is a jump label
/*801F5C60 001F2A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801F5C64 001F2A64*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r28);
/*801F5C68 001F2A68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 801F5C6C 001F2A6C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801F5C70 001F2A70*/ PPC::Runtime::ASM::beq(.L_801F5C8C);
/*801F5C74 001F2A74*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801F5C78 001F2A78*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5C7C 001F2A7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*801F5C80 001F2A80*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F5C84 001F2A84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801F5C88 001F2A88*/ PPC::Runtime::ASM::bl(fn_80055DAC);
RUNTIME_PPC_JUMP_LABEL(.L_801F5C8C, 0x801F5C8C) //this is a jump label
/*801F5C8C 001F2A8C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*801F5C90 001F2A90*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F5C94, 0x801F5C94) //this is a jump label
/*801F5C94 001F2A94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801F5C98 001F2A98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801F5C9C 001F2A9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801F5CA0 001F2AA0*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F5CA4 001F2AA4*/ PPC::Runtime::ASM::blt(.L_801F5C60);
/*801F5CA8 001F2AA8*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*801F5CAC 001F2AAC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F5CB0 001F2AB0*/ PPC::Runtime::ASM::b(.L_801F5D00);
RUNTIME_PPC_JUMP_LABEL(.L_801F5CB4, 0x801F5CB4) //this is a jump label
/*801F5CB4 001F2AB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc4, context->r28));
/*801F5CB8 001F2AB8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F5CBC 001F2ABC*/ PPC::Runtime::ASM::beq(.L_801F5CF8);
/*801F5CC0 001F2AC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd3c, context->r28));
/*801F5CC4 001F2AC4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5CC8 001F2AC8*/ PPC::Runtime::ASM::beq(.L_801F5CF8);
/*801F5CCC 001F2ACC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x159d, context->r31));
/*801F5CD0 001F2AD0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5CD4 001F2AD4*/ PPC::Runtime::ASM::beq(.L_801F5CE4);
/*801F5CD8 001F2AD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11d4, context->r28));
/*801F5CDC 001F2ADC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5CE0 001F2AE0*/ PPC::Runtime::ASM::bne(.L_801F5CF8);
RUNTIME_PPC_JUMP_LABEL(.L_801F5CE4, 0x801F5CE4) //this is a jump label
/*801F5CE4 001F2AE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801F5CE8 001F2AE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5CEC 001F2AEC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F5CF0 001F2AF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc4, context->r28));
/*801F5CF4 001F2AF4*/ PPC::Runtime::ASM::bl(fn_80056074);
RUNTIME_PPC_JUMP_LABEL(.L_801F5CF8, 0x801F5CF8) //this is a jump label
/*801F5CF8 001F2AF8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*801F5CFC 001F2AFC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F5D00, 0x801F5D00) //this is a jump label
/*801F5D00 001F2B00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc58, context->r31));
/*801F5D04 001F2B04*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F5D08 001F2B08*/ PPC::Runtime::ASM::blt(.L_801F5CB4);
/*801F5D0C 001F2B0C*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*801F5D10 001F2B10*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F5D14 001F2B14*/ PPC::Runtime::ASM::b(.L_801F5D64);
RUNTIME_PPC_JUMP_LABEL(.L_801F5D18, 0x801F5D18) //this is a jump label
/*801F5D18 001F2B18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdb4, context->r28));
/*801F5D1C 001F2B1C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F5D20 001F2B20*/ PPC::Runtime::ASM::beq(.L_801F5D5C);
/*801F5D24 001F2B24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe2c, context->r28));
/*801F5D28 001F2B28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5D2C 001F2B2C*/ PPC::Runtime::ASM::beq(.L_801F5D5C);
/*801F5D30 001F2B30*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x159d, context->r31));
/*801F5D34 001F2B34*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5D38 001F2B38*/ PPC::Runtime::ASM::beq(.L_801F5D48);
/*801F5D3C 001F2B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c4, context->r28));
/*801F5D40 001F2B40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5D44 001F2B44*/ PPC::Runtime::ASM::bne(.L_801F5D5C);
RUNTIME_PPC_JUMP_LABEL(.L_801F5D48, 0x801F5D48) //this is a jump label
/*801F5D48 001F2B48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801F5D4C 001F2B4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5D50 001F2B50*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F5D54 001F2B54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdb4, context->r28));
/*801F5D58 001F2B58*/ PPC::Runtime::ASM::bl(fn_HSD_TObjAnim?);
RUNTIME_PPC_JUMP_LABEL(.L_801F5D5C, 0x801F5D5C) //this is a jump label
/*801F5D5C 001F2B5C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*801F5D60 001F2B60*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F5D64, 0x801F5D64) //this is a jump label
/*801F5D64 001F2B64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc5c, context->r31));
/*801F5D68 001F2B68*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F5D6C 001F2B6C*/ PPC::Runtime::ASM::blt(.L_801F5D18);
/*801F5D70 001F2B70*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801F5D74 001F2B74*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
/*801F5D78 001F2B78*/ PPC::Runtime::ASM::b(.L_801F5DB0);
RUNTIME_PPC_JUMP_LABEL(.L_801F5D7C, 0x801F5D7C) //this is a jump label
/*801F5D7C 001F2B7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801F5D80 001F2B80*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r28);
/*801F5D84 001F2B84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 801F5D88 001F2B88  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*801F5D8C 001F2B8C*/ PPC::Runtime::ASM::beq(.L_801F5DA8);
/*801F5D90 001F2B90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801F5D94 001F2B94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5D98 001F2B98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*801F5D9C 001F2B9C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F5DA0 001F2BA0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F5DA4 001F2BA4*/ PPC::Runtime::ASM::bl(fn_80055DAC);
RUNTIME_PPC_JUMP_LABEL(.L_801F5DA8, 0x801F5DA8) //this is a jump label
/*801F5DA8 001F2BA8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*801F5DAC 001F2BAC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F5DB0, 0x801F5DB0) //this is a jump label
/*801F5DB0 001F2BB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801F5DB4 001F2BB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801F5DB8 001F2BB8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801F5DBC 001F2BBC*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801F5DC0 001F2BC0*/ PPC::Runtime::ASM::blt(.L_801F5D7C);
/*801F5DC4 001F2BC4*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*801F5DC8 001F2BC8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F5DCC 001F2BCC*/ PPC::Runtime::ASM::b(.L_801F5E1C);
RUNTIME_PPC_JUMP_LABEL(.L_801F5DD0, 0x801F5DD0) //this is a jump label
/*801F5DD0 001F2BD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf10, context->r28));
/*801F5DD4 001F2BD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F5DD8 001F2BD8*/ PPC::Runtime::ASM::beq(.L_801F5E14);
/*801F5DDC 001F2BDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf88, context->r28));
/*801F5DE0 001F2BE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5DE4 001F2BE4*/ PPC::Runtime::ASM::beq(.L_801F5E14);
/*801F5DE8 001F2BE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x159d, context->r31));
/*801F5DEC 001F2BEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5DF0 001F2BF0*/ PPC::Runtime::ASM::beq(.L_801F5E00);
/*801F5DF4 001F2BF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11d4, context->r28));
/*801F5DF8 001F2BF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5DFC 001F2BFC*/ PPC::Runtime::ASM::bne(.L_801F5E14);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E00, 0x801F5E00) //this is a jump label
/*801F5E00 001F2C00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801F5E04 001F2C04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5E08 001F2C08*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F5E0C 001F2C0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf10, context->r28));
/*801F5E10 001F2C10*/ PPC::Runtime::ASM::bl(fn_80056074);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E14, 0x801F5E14) //this is a jump label
/*801F5E14 001F2C14*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*801F5E18 001F2C18*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E1C, 0x801F5E1C) //this is a jump label
/*801F5E1C 001F2C1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea4, context->r31));
/*801F5E20 001F2C20*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F5E24 001F2C24*/ PPC::Runtime::ASM::blt(.L_801F5DD0);
/*801F5E28 001F2C28*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*801F5E2C 001F2C2C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801F5E30 001F2C30*/ PPC::Runtime::ASM::b(.L_801F5E80);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E34, 0x801F5E34) //this is a jump label
/*801F5E34 001F2C34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1000, context->r28));
/*801F5E38 001F2C38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F5E3C 001F2C3C*/ PPC::Runtime::ASM::beq(.L_801F5E78);
/*801F5E40 001F2C40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1078, context->r28));
/*801F5E44 001F2C44*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5E48 001F2C48*/ PPC::Runtime::ASM::beq(.L_801F5E78);
/*801F5E4C 001F2C4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x159d, context->r31));
/*801F5E50 001F2C50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5E54 001F2C54*/ PPC::Runtime::ASM::beq(.L_801F5E64);
/*801F5E58 001F2C58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c4, context->r28));
/*801F5E5C 001F2C5C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F5E60 001F2C60*/ PPC::Runtime::ASM::bne(.L_801F5E78);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E64, 0x801F5E64) //this is a jump label
/*801F5E64 001F2C64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801F5E68 001F2C68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5E6C 001F2C6C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F5E70 001F2C70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1000, context->r28));
/*801F5E74 001F2C74*/ PPC::Runtime::ASM::bl(fn_HSD_TObjAnim?);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E78, 0x801F5E78) //this is a jump label
/*801F5E78 001F2C78*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*801F5E7C 001F2C7C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E80, 0x801F5E80) //this is a jump label
/*801F5E80 001F2C80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea8, context->r31));
/*801F5E84 001F2C84*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*801F5E88 001F2C88*/ PPC::Runtime::ASM::blt(.L_801F5E34);
/*801F5E8C 001F2C8C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801F5E90 001F2C90*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
/*801F5E94 001F2C94*/ PPC::Runtime::ASM::b(.L_801F5ECC);
RUNTIME_PPC_JUMP_LABEL(.L_801F5E98, 0x801F5E98) //this is a jump label
/*801F5E98 001F2C98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801F5E9C 001F2C9C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r28);
/*801F5EA0 001F2CA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 801F5EA4 001F2CA4  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*801F5EA8 001F2CA8*/ PPC::Runtime::ASM::beq(.L_801F5EC4);
/*801F5EAC 001F2CAC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801F5EB0 001F2CB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5EB4 001F2CB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*801F5EB8 001F2CB8*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F5EBC 001F2CBC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F5EC0 001F2CC0*/ PPC::Runtime::ASM::bl(fn_80055DAC);
RUNTIME_PPC_JUMP_LABEL(.L_801F5EC4, 0x801F5EC4) //this is a jump label
/*801F5EC4 001F2CC4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*801F5EC8 001F2CC8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F5ECC, 0x801F5ECC) //this is a jump label
/*801F5ECC 001F2CCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801F5ED0 001F2CD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801F5ED4 001F2CD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801F5ED8 001F2CD8*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801F5EDC 001F2CDC*/ PPC::Runtime::ASM::blt(.L_801F5E98);
/*801F5EE0 001F2CE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F5EE4 001F2CE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F5EE8 001F2CE8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10f0);
/*801F5EEC 001F2CEC*/ PPC::Runtime::ASM::bl(fn_801D4938);
/*801F5EF0 001F2CF0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F5EF4 001F2CF4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10f0);
/*801F5EF8 001F2CF8*/ PPC::Runtime::ASM::bl(fn_801D4888);
/*801F5EFC 001F2CFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F5F00 001F2D00*/ PPC::Runtime::ASM::bl(fn_801F3484);
RUNTIME_PPC_JUMP_LABEL(.L_801F5F04, 0x801F5F04) //this is a jump label
/*801F5F04 001F2D04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F5F08 001F2D08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F5F0C 001F2D0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F5F10 001F2D10*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F5F14 001F2D14*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F5F18 001F2D18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F5F1C 001F2D1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801F5F20 001F2D20*/ PPC::Runtime::ASM::blr();
}