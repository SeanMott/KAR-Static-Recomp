//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80063F8C.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037B574.hpp"
#include "fn_8037B418.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"



void fn_8037BE50(PPC::Runtime::GCContext* context)
{
/*8037BE50 00378C50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*8037BE54 00378C54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037BE58 00378C58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8037BE5C 00378C5C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8037BE60 00378C60*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8037BE64 00378C64*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037BE68 00378C68*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8037BE6C 00378C6C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*8037BE70 00378C70*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8037BE74 00378C74*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/* 8037BE78 00378C78  55 00 06 3F */ clrlwi. context->r0 , context->r8 , 24
/*8037BE7C 00378C7C*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8037BE80 00378C80*/ PPC::Runtime::ASM::mr(context->r31, context->r8);
/*8037BE84 00378C84*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8037BE88 00378C88*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8037BE8C 00378C8C*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*8037BE90 00378C90*/ PPC::Runtime::ASM::mr(context->r30, context->r7);
/*8037BE94 00378C94*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037BE98 00378C98*/ PPC::Runtime::ASM::beq(.L_8037BEA4);
/*8037BE9C 00378C9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4B70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BEA0 00378CA0*/ PPC::Runtime::ASM::b(.L_8037BEBC);
RUNTIME_PPC_JUMP_LABEL(.L_8037BEA4, 0x8037BEA4) //this is a jump label
/*8037BEA4 00378CA4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4B74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BEA8 00378CA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BEAC 00378CAC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f2);
/*8037BEB0 00378CB0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8037BEB4 00378CB4*/ PPC::Runtime::ASM::ble(.L_8037BEBC);
/*8037BEB8 00378CB8*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8037BEBC, 0x8037BEBC) //this is a jump label
/*8037BEBC 00378CBC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8037BEC0 00378CC0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BEC4 00378CC4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*8037BEC8 00378CC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8037BECC 00378CCC*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E4B64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BED0 00378CD0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*8037BED4 00378CD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8037BED8 00378CD8*/ PPC::Runtime::ASM::b(.L_8037C0C0);
RUNTIME_PPC_JUMP_LABEL(.L_8037BEDC, 0x8037BEDC) //this is a jump label
/*8037BEDC 00378CDC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8037BEE0 00378CE0*/ PPC::Runtime::ASM::beq(.L_8037C068);
/*8037BEE4 00378CE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4B80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BEE8 00378CE8*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8037BEEC 00378CEC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BEF0 00378CF0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037BEF4 00378CF4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037BEF8 00378CF8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037BEFC 00378CFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037BF00 00378D00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037BF04 00378D04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8037BF08 00378D08*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8037BF0C 00378D0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8037BF10 00378D10*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8037BF14 00378D14*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8037BF18 00378D18*/ PPC::Runtime::ASM::blt(.L_8037BF20);
/*8037BF1C 00378D1C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8037BF20, 0x8037BF20) //this is a jump label
/*8037BF20 00378D20*/ PPC::Runtime::ASM::xoris(context->r3, context->r5, 0x8000);
/*8037BF24 00378D24*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8037BF28 00378D28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037BF2C 00378D2C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8037BF30 00378D30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8037BF34 00378D34*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8037BF38 00378D38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037BF3C 00378D3C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4B68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BF40 00378D40*/ PPC::Runtime::ASM::fneg(context->f6, context->f0);
/*8037BF44 00378D44*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8037BF48 00378D48*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4B60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BF4C 00378D4C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8037BF50 00378D50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8037BF54 00378D54*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8037BF58 00378D58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4B84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BF5C 00378D5C*/ PPC::Runtime::ASM::fneg(context->f5, context->f1);
/*8037BF60 00378D60*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*8037BF64 00378D64*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8037BF68 00378D68*/ PPC::Runtime::ASM::fneg(context->f3, context->f4);
/*8037BF6C 00378D6C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037BF70 00378D70*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8037BF74 00378D74*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037BF78 00378D78*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037BF7C 00378D7C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8037BF80 00378D80*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037BF84 00378D84*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8037BF88 00378D88*/ PPC::Runtime::ASM::bl(fn_80063F8C);
/*8037BF8C 00378D8C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8037BF90 00378D90*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8037BF94 00378D94*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8037BF98 00378D98*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f31);
/*8037BF9C 00378D9C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*8037BFA0 00378DA0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8037BFA4 00378DA4*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8037BFA8 00378DA8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8037BFAC 00378DAC*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*8037BFB0 00378DB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8037BFB4 00378DB4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x4c);
/*8037BFB8 00378DB8*/ PPC::Runtime::ASM::add(context->r6, context->r26, context->r0);
/*8037BFBC 00378DBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*8037BFC0 00378DC0*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8037BFC4 00378DC4*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/* 8037BFC8 00378DC8  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*8037BFCC 00378DCC*/ PPC::Runtime::ASM::bne(.L_8037C0A0);
/*8037BFD0 00378DD0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037BFD4 00378DD4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8037BFD8 00378DD8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037BFDC 00378DDC*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x14);
/*8037BFE0 00378DE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037BFE4 00378DE4*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*8037BFE8 00378DE8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037BFEC 00378DEC*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8037BFF0 00378DF0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037BFF4 00378DF4*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037BFF8 00378DF8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037BFFC 00378DFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037C000 00378E00*/ PPC::Runtime::ASM::bl(fn_8037B028);
/* 8037C004 00378E04  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8037C008 00378E08*/ PPC::Runtime::ASM::beq(.L_8037C0A0);
/*8037C00C 00378E0C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8037C010 00378E10*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8037C014 00378E14*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8037C018 00378E18*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/* 8037C01C 00378E1C  57 E0 06 3F */ clrlwi. context->r0 , context->r31 , 24
/*8037C020 00378E20*/ PPC::Runtime::ASM::beq(.L_8037C034);
/*8037C024 00378E24*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8037C028 00378E28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4B8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037C02C 00378E2C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8037C030 00378E30*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
RUNTIME_PPC_JUMP_LABEL(.L_8037C034, 0x8037C034) //this is a jump label
/*8037C034 00378E34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8037C038 00378E38*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8037C03C 00378E3C*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x4c);
/*8037C040 00378E40*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*8037C044 00378E44*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r3);
/*8037C048 00378E48*/ PPC::Runtime::ASM::bl(fn_8037B574);
/*8037C04C 00378E4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8037C050 00378E50*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1c);
/*8037C054 00378E54*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x4c);
/*8037C058 00378E58*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*8037C05C 00378E5C*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r3);
/*8037C060 00378E60*/ PPC::Runtime::ASM::bl(fn_8037B418);
/*8037C064 00378E64*/ PPC::Runtime::ASM::b(.L_8037C0A0);
RUNTIME_PPC_JUMP_LABEL(.L_8037C068, 0x8037C068) //this is a jump label
/*8037C068 00378E68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8037C06C 00378E6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037C070 00378E70*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x4c);
/*8037C074 00378E74*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x14);
/*8037C078 00378E78*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r25);
/*8037C07C 00378E7C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8037C080 00378E80*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8037C084 00378E84*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8037C088 00378E88*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8037C08C 00378E8C*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*8037C090 00378E90*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8037C094 00378E94*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037C098 00378E98*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8037C09C 00378E9C*/ PPC::Runtime::ASM::bl(fn_8037B028);
RUNTIME_PPC_JUMP_LABEL(.L_8037C0A0, 0x8037C0A0) //this is a jump label
/*8037C0A0 00378EA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8037C0A4 00378EA4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8037C0A8 00378EA8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*8037C0AC 00378EAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8037C0B0 00378EB0*/ PPC::Runtime::ASM::blt(.L_8037C0BC);
/*8037C0B4 00378EB4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037C0B8 00378EB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8037C0BC, 0x8037C0BC) //this is a jump label
/*8037C0BC 00378EBC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8037C0C0, 0x8037C0C0) //this is a jump label
/*8037C0C0 00378EC0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8037C0C4 00378EC4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*8037C0C8 00378EC8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8037C0CC 00378ECC*/ PPC::Runtime::ASM::bne(.L_8037C0E0);
/*8037C0D0 00378ED0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f30);
/*8037C0D4 00378ED4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8037C0D8 00378ED8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8037C0DC 00378EDC*/ PPC::Runtime::ASM::b(.L_8037C0F8);
RUNTIME_PPC_JUMP_LABEL(.L_8037C0E0, 0x8037C0E0) //this is a jump label
/*8037C0E0 00378EE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037C0E4 00378EE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8037C0E8 00378EE8*/ PPC::Runtime::ASM::bge(.L_8037C0F4);
/*8037C0EC 00378EEC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037C0F0 00378EF0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8037C0F4, 0x8037C0F4) //this is a jump label
/*8037C0F4 00378EF4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8037C0F8, 0x8037C0F8) //this is a jump label
/* 8037C0F8 00378EF8  54 00 06 3F */ clrlwi. context->r0 , context->r0 , 24
/*8037C0FC 00378EFC*/ PPC::Runtime::ASM::bne(.L_8037BEDC);
/*8037C100 00378F00*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8037C104 00378F04*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8037C108 00378F08*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8037C10C 00378F0C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*8037C110 00378F10*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037C114 00378F14*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8037C118 00378F18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8037C11C 00378F1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037C120 00378F20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*8037C124 00378F24*/ PPC::Runtime::ASM::blr();
}