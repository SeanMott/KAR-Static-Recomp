//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80054798.hpp"
#include "fn_hwGetSampleExtraData.hpp"
#include "fn_80055DA0.hpp"
#include "fn_800551A8.hpp"
#include "fn_hwGetSampleExtraData.hpp"
#include "fn_80055DA0.hpp"
#include "fn_800551A8.hpp"



void fn_801DBE5C(PPC::Runtime::GCContext* context)
{
/*801DBE5C 001D8C5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801DBE60 001D8C60*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DBE64 001D8C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801DBE68 001D8C68*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801DBE6C 001D8C6C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801DBE70 001D8C70*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801DBE74 001D8C74*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801DBE78 001D8C78*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DBE7C 001D8C7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r3));
/*801DBE80 001D8C80*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/* 801DBE84 001D8C84  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801DBE88 001D8C88*/ PPC::Runtime::ASM::beq(.L_801DC0DC);
/*801DBE8C 001D8C8C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x734, context->r31));
/*801DBE90 001D8C90*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1d);
/*801DBE94 001D8C94*/ PPC::Runtime::ASM::bne(.L_801DBFA8);
/*801DBE98 001D8C98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DBE9C 001D8C9C*/ PPC::Runtime::ASM::bl(fn_80054798);
/*801DBEA0 001D8CA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801DBEA4 001D8CA4*/ PPC::Runtime::ASM::bne(.L_801DC0DC);
/*801DBEA8 001D8CA8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBEAC 001D8CAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBEB0 001D8CB0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*801DBEB4 001D8CB4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801DBEB8 001D8CB8*/ PPC::Runtime::ASM::ble(.L_801DC0DC);
/*801DBEBC 001D8CBC*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f1);
/*801DBEC0 001D8CC0*/ PPC::Runtime::ASM::li(context->r3, 0x64);
/*801DBEC4 001D8CC4*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801DBEC8 001D8CC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801DBECC 001D8CCC*/ PPC::Runtime::ASM::bl(fn_hwGetSampleExtraData);
/*801DBED0 001D8CD0*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBED4 001D8CD4*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x34);
/*801DBED8 001D8CD8*/ PPC::Runtime::ASM::li(context->r3, 0x64);
/*801DBEDC 001D8CDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801DBEE0 001D8CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*801DBEE4 001D8CE4*/ PPC::Runtime::ASM::add(context->r29, context->r0, context->r5);
/*801DBEE8 001D8CE8*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801DBEEC 001D8CEC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801DBEF0 001D8CF0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801DBEF4 001D8CF4*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 2);
/*801DBEF8 001D8CF8*/ PPC::Runtime::ASM::subfic(context->r0, context->r30, 0xa);
/*801DBEFC 001D8CFC*/ PPC::Runtime::ASM::add(context->r4, context->r29, context->r4);
/*801DBF00 001D8D00*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801DBF04 001D8D04*/ PPC::Runtime::ASM::cmpwi(context->r30, 0xa);
/*801DBF08 001D8D08*/ PPC::Runtime::ASM::bge(.L_801DBF28);
RUNTIME_PPC_JUMP_LABEL(.L_801DBF0C, 0x801DBF0C) //this is a jump label
/*801DBF0C 001D8D0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801DBF10 001D8D10*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*801DBF14 001D8D14*/ PPC::Runtime::ASM::cmpw(context->r3, context->r5);
/*801DBF18 001D8D18*/ PPC::Runtime::ASM::blt(.L_801DBF28);
/*801DBF1C 001D8D1C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*801DBF20 001D8D20*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801DBF24 001D8D24*/ PPC::Runtime::ASM::bdnz(.L_801DBF0C);
RUNTIME_PPC_JUMP_LABEL(.L_801DBF28, 0x801DBF28) //this is a jump label
/*801DBF28 001D8D28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*801DBF2C 001D8D2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801DBF30 001D8D30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DBF34 001D8D34*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnim);
/*801DBF38 001D8D38*/ PPC::Runtime::ASM::bl(fn_80055DA0);
/*801DBF3C 001D8D3C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801DBF40 001D8D40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DBF44 001D8D44*/ PPC::Runtime::ASM::bl(fn_800551A8);
/*801DBF48 001D8D48*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x9);
/*801DBF4C 001D8D4C*/ PPC::Runtime::ASM::beq(.L_801DBF9C);
/*801DBF50 001D8D50*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBF54 001D8D54*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*801DBF58 001D8D58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DBF5C 001D8D5C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801DBF60 001D8D60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801DBF64 001D8D64*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801DBF68 001D8D68*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801DBF6C 001D8D6C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnim);
/*801DBF70 001D8D70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DBF74 001D8D74*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801DBF78 001D8D78*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1C2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBF7C 001D8D7C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimByFlags);
/*801DBF80 001D8D80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DBF84 001D8D84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*801DBF88 001D8D88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801DBF8C 001D8D8C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801DBF90 001D8D90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*801DBF94 001D8D94*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f0);
/*801DBF98 001D8D98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801DBF9C, 0x801DBF9C) //this is a jump label
/*801DBF9C 001D8D9C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBFA0 001D8DA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r31));
/*801DBFA4 001D8DA4*/ PPC::Runtime::ASM::b(.L_801DC0DC);
RUNTIME_PPC_JUMP_LABEL(.L_801DBFA8, 0x801DBFA8) //this is a jump label
/*801DBFA8 001D8DA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801DBFAC 001D8DAC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801DBFB0 001D8DB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DBFB4 001D8DB4*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*801DBFB8 001D8DB8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E1C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBFBC 001D8DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DBFC0 001D8DC0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r31));
/*801DBFC4 001D8DC4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DBFC8 001D8DC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801DBFCC 001D8DCC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801DBFD0 001D8DD0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801DBFD4 001D8DD4*/ PPC::Runtime::ASM::bne(.L_801DC0DC);
/*801DBFD8 001D8DD8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x36c);
/*801DBFDC 001D8DDC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801DBFE0 001D8DE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBFE4 001D8DE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801DBFE8 001D8DE8*/ PPC::Runtime::ASM::ble(.L_801DC0DC);
/*801DBFEC 001D8DEC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DBFF0 001D8DF0*/ PPC::Runtime::ASM::li(context->r3, 0x64);
/*801DBFF4 001D8DF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*801DBFF8 001D8DF8*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f0);
/*801DBFFC 001D8DFC*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801DC000 001D8E00*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801DC004 001D8E04*/ PPC::Runtime::ASM::bl(fn_hwGetSampleExtraData);
/*801DC008 001D8E08*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DC00C 001D8E0C*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0x34);
/*801DC010 001D8E10*/ PPC::Runtime::ASM::li(context->r3, 0x64);
/*801DC014 001D8E14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801DC018 001D8E18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*801DC01C 001D8E1C*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r5);
/*801DC020 001D8E20*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801DC024 001D8E24*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801DC028 001D8E28*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801DC02C 001D8E2C*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 2);
/*801DC030 001D8E30*/ PPC::Runtime::ASM::subfic(context->r0, context->r29, 0xa);
/*801DC034 001D8E34*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r4);
/*801DC038 001D8E38*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801DC03C 001D8E3C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0xa);
/*801DC040 001D8E40*/ PPC::Runtime::ASM::bge(.L_801DC060);
RUNTIME_PPC_JUMP_LABEL(.L_801DC044, 0x801DC044) //this is a jump label
/*801DC044 001D8E44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801DC048 001D8E48*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*801DC04C 001D8E4C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r5);
/*801DC050 001D8E50*/ PPC::Runtime::ASM::blt(.L_801DC060);
/*801DC054 001D8E54*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*801DC058 001D8E58*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*801DC05C 001D8E5C*/ PPC::Runtime::ASM::bdnz(.L_801DC044);
RUNTIME_PPC_JUMP_LABEL(.L_801DC060, 0x801DC060) //this is a jump label
/*801DC060 001D8E60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*801DC064 001D8E64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801DC068 001D8E68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DC06C 001D8E6C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnim);
/*801DC070 001D8E70*/ PPC::Runtime::ASM::bl(fn_80055DA0);
/*801DC074 001D8E74*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801DC078 001D8E78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DC07C 001D8E7C*/ PPC::Runtime::ASM::bl(fn_800551A8);
/*801DC080 001D8E80*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x9);
/*801DC084 001D8E84*/ PPC::Runtime::ASM::beq(.L_801DC0D4);
/*801DC088 001D8E88*/ PPC::Runtime::ASM::lwz(context->r4, SKIP_ADDRESS_OFFSET_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DC08C 001D8E8C*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*801DC090 001D8E90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DC094 001D8E94*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801DC098 001D8E98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801DC09C 001D8E9C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801DC0A0 001D8EA0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801DC0A4 001D8EA4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnim);
/*801DC0A8 001D8EA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DC0AC 001D8EAC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801DC0B0 001D8EB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1C2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DC0B4 001D8EB4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimByFlags);
/*801DC0B8 001D8EB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f0, context->r31));
/*801DC0BC 001D8EBC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*801DC0C0 001D8EC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801DC0C4 001D8EC4*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801DC0C8 001D8EC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*801DC0CC 001D8ECC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f0);
/*801DC0D0 001D8ED0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801DC0D4, 0x801DC0D4) //this is a jump label
/*801DC0D4 001D8ED4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DC0D8 001D8ED8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801DC0DC, 0x801DC0DC) //this is a jump label
/*801DC0DC 001D8EDC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801DC0E0 001D8EE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801DC0E4 001D8EE4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801DC0E8 001D8EE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801DC0EC 001D8EEC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801DC0F0 001D8EF0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DC0F4 001D8EF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DC0F8 001D8EF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801DC0FC 001D8EFC*/ PPC::Runtime::ASM::blr();
}