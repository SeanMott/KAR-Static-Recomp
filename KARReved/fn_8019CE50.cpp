//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80063F8C.hpp"
#include "fn_80062CA4.hpp"
#include "fn_8019D274.hpp"
#include "fn_80253CE4.hpp"
#include "fn_8022FB58.hpp"
#include "fn_80191294.hpp"
#include "fn_giveStat.hpp"
#include "fn_80253CE4.hpp"
#include "fn_8022FB58.hpp"



void fn_8019CE50(PPC::Runtime::GCContext* context)
{
/*8019CE50 00199C50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*8019CE54 00199C54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019CE58 00199C58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8019CE5C 00199C5C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8019CE60 00199C60*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*8019CE64 00199C64*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8019CE68 00199C68*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*8019CE6C 00199C6C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8019CE70 00199C70*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8019CE74 00199C74*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8019CE78 00199C78*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8019CE7C 00199C7C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8019CE80 00199C80*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8019CE84 00199C84*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8019CE88 00199C88*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x1);
/*8019CE8C 00199C8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8019CE90 00199C90*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8019CE94 00199C94*/ PPC::Runtime::ASM::lfs(context->f28, STRUCT_FLOAT_COUNT_1805E11B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019CE98 00199C98*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*8019CE9C 00199C9C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019CEA0 00199CA0*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*8019CEA4 00199CA4*/ PPC::Runtime::ASM::fmr(context->f31, context->f28);
/*8019CEA8 00199CA8*/ PPC::Runtime::ASM::mr(context->r30, context->r8);
/*8019CEAC 00199CAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019CEB0 00199CB0*/ PPC::Runtime::ASM::fmr(context->f30, context->f28);
/*8019CEB4 00199CB4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8019CEB8 00199CB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8019CEBC 00199CBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8019CEC0 00199CC0*/ PPC::Runtime::ASM::beq(.L_8019CEE8);
/*8019CEC4 00199CC4*/ PPC::Runtime::ASM::bge(.L_8019CED4);
/*8019CEC8 00199CC8*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*8019CECC 00199CCC*/ PPC::Runtime::ASM::bge(.L_8019CEF4);
/*8019CED0 00199CD0*/ PPC::Runtime::ASM::b(.L_8019CF00);
RUNTIME_PPC_JUMP_LABEL(.L_8019CED4, 0x8019CED4) //this is a jump label
/*8019CED4 00199CD4*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x3);
/*8019CED8 00199CD8*/ PPC::Runtime::ASM::bge(.L_8019CF00);
/*8019CEDC 00199CDC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019CEE0 00199CE0*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x204);
/*8019CEE4 00199CE4*/ PPC::Runtime::ASM::b(.L_8019CF04);
RUNTIME_PPC_JUMP_LABEL(.L_8019CEE8, 0x8019CEE8) //this is a jump label
/*8019CEE8 00199CE8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019CEEC 00199CEC*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x1ec);
/*8019CEF0 00199CF0*/ PPC::Runtime::ASM::b(.L_8019CF04);
RUNTIME_PPC_JUMP_LABEL(.L_8019CEF4, 0x8019CEF4) //this is a jump label
/*8019CEF4 00199CF4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019CEF8 00199CF8*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x1d4);
/*8019CEFC 00199CFC*/ PPC::Runtime::ASM::b(.L_8019CF04);
RUNTIME_PPC_JUMP_LABEL(.L_8019CF00, 0x8019CF00) //this is a jump label
/*8019CF00 00199D00*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019CF04, 0x8019CF04) //this is a jump label
/*8019CF04 00199D04*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r28));
/*8019CF08 00199D08*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019CF0C 00199D0C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8019CF10 00199D10  57 40 07 FF */ clrlwi. context->r0 , context->r26 , 31
/*8019CF14 00199D14*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E11BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019CF18 00199D18*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3));
/*8019CF1C 00199D1C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8019CF20 00199D20*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*8019CF24 00199D24*/ PPC::Runtime::ASM::beq(.L_8019CF2C);
/*8019CF28 00199D28*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8019CF2C, 0x8019CF2C) //this is a jump label
/*8019CF2C 00199D2C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8019CF30 00199D30*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8019CF34 00199D34*/ PPC::Runtime::ASM::bl(fn_80063F8C);
/*8019CF38 00199D38*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8019CF3C 00199D3C*/ PPC::Runtime::ASM::beq(.L_8019CF84);
/*8019CF40 00199D40*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8019CF44 00199D44*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8019CF48 00199D48*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019CF4C 00199D4C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f31, context->f30);
/*8019CF50 00199D50*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E11BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019CF54 00199D54*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8019CF58 00199D58*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8019CF5C 00199D5C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f1, context->f30);
/*8019CF60 00199D60*/ PPC::Runtime::ASM::fmuls(context->f30, context->f2, context->f0);
/*8019CF64 00199D64*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019CF68 00199D68*/ PPC::Runtime::ASM::fsubs(context->f0, context->f29, context->f31);
/*8019CF6C 00199D6C*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8019CF70 00199D70*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8019CF74 00199D74*/ PPC::Runtime::ASM::fmadds(context->f31, context->f0, context->f1, context->f31);
/*8019CF78 00199D78*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8019CF7C 00199D7C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f28, context->f29);
/*8019CF80 00199D80*/ PPC::Runtime::ASM::fmadds(context->f28, context->f0, context->f1, context->f29);
RUNTIME_PPC_JUMP_LABEL(.L_8019CF84, 0x8019CF84) //this is a jump label
/*8019CF84 00199D84*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8019CF88 00199D88*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8019CF8C 00199D8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E11B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019CF90 00199D90*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8019CF94 00199D94*/ PPC::Runtime::ASM::beq(.L_8019CFEC);
/*8019CF98 00199D98*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8019CF9C 00199D9C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8019CFA0 00199DA0*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8019CFA4 00199DA4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019CFA8 00199DA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019CFAC 00199DAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019CFB0 00199DB0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f28);
/*8019CFB4 00199DB4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f28);
/*8019CFB8 00199DB8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f28);
/*8019CFBC 00199DBC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019CFC0 00199DC0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019CFC4 00199DC4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019CFC8 00199DC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8019CFCC 00199DCC*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f0);
/*8019CFD0 00199DD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019CFD4 00199DD4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*8019CFD8 00199DD8*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*8019CFDC 00199DDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019CFE0 00199DE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*8019CFE4 00199DE4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8019CFE8 00199DE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8019CFEC, 0x8019CFEC) //this is a jump label
/*8019CFEC 00199DEC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8019CFF0 00199DF0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8019CFF4 00199DF4*/ PPC::Runtime::ASM::bl(fn_8019D274);
/*8019CFF8 00199DF8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019CFFC 00199DFC*/ PPC::Runtime::ASM::beq(.L_8019D0B0);
/*8019D000 00199E00*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D004 00199E04*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AE2C8 @ Get_MemoryOffset_HighBit);
/*8019D008 00199E08*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804AE2C8 @ Get_MemoryOffset_LowBit);
/*8019D00C 00199E0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019D010 00199E10*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r8));
/*8019D014 00199E14*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8019D018 00199E18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019D01C 00199E1C*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*8019D020 00199E20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019D024 00199E24*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*8019D028 00199E28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019D02C 00199E2C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*8019D030 00199E30*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8019D034 00199E34*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019D038 00199E38*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8019D03C 00199E3C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019D040 00199E40*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8019D044 00199E44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019D048 00199E48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r8));
/*8019D04C 00199E4C*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f0);
/*8019D050 00199E50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019D054 00199E54*/ PPC::Runtime::ASM::bl(fn_80253CE4);
/*8019D058 00199E58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8019D05C 00199E5C*/ PPC::Runtime::ASM::beq(.L_8019D080);
/*8019D060 00199E60*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8019D064 00199E64*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8019D068 00199E68*/ PPC::Runtime::ASM::bl(fn_8022FB58);
/*8019D06C 00199E6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r28));
/*8019D070 00199E70*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8019D074 00199E74*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8019D078 00199E78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r28));
/*8019D07C 00199E7C*/ PPC::Runtime::ASM::b(.L_8019D084);
RUNTIME_PPC_JUMP_LABEL(.L_8019D080, 0x8019D080) //this is a jump label
/*8019D080 00199E80*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019D084, 0x8019D084) //this is a jump label
/*8019D084 00199E84*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8019D088 00199E88*/ PPC::Runtime::ASM::beq(.L_8019D238);
/*8019D08C 00199E8C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8019D090 00199E90*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8019D094 00199E94*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8019D098 00199E98*/ PPC::Runtime::ASM::bl(fn_80191294);
/*8019D09C 00199E9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r28));
/*8019D0A0 00199EA0*/ PPC::Runtime::ASM::ori(context->r31, context->r31, 0x1);
/*8019D0A4 00199EA4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x9);
/*8019D0A8 00199EA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8019D0AC 00199EAC*/ PPC::Runtime::ASM::b(.L_8019D238);
RUNTIME_PPC_JUMP_LABEL(.L_8019D0B0, 0x8019D0B0) //this is a jump label
/*8019D0B0 00199EB0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8019D0B4 00199EB4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8019D0B8 00199EB8*/ PPC::Runtime::ASM::slwi(context->r3, context->r7, 2);
/*8019D0BC 00199EBC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x38);
/*8019D0C0 00199EC0*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8019D0C4 00199EC4*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8019D0C8 00199EC8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8019D0CC 00199ECC*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r3);
/*8019D0D0 00199ED0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E11B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D0D4 00199ED4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8019D0D8 00199ED8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8019D0DC 00199EDC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8019D0E0 00199EE0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8019D0E4 00199EE4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8019D0E8 00199EE8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8019D0EC 00199EEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8019D0F0 00199EF0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8019D0F4 00199EF4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8019D0F8 00199EF8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8019D0FC, 0x8019D0FC) //this is a jump label
/*8019D0FC 00199EFC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8019D100 00199F00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8019D104 00199F04*/ PPC::Runtime::ASM::ble(.L_8019D114);
/*8019D108 00199F08*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8019D10C 00199F0C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8019D110 00199F10*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D114, 0x8019D114) //this is a jump label
/*8019D114 00199F14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8019D118 00199F18*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8019D11C 00199F1C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8019D120 00199F20*/ PPC::Runtime::ASM::ble(.L_8019D130);
/*8019D124 00199F24*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8019D128 00199F28*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8019D12C 00199F2C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D130, 0x8019D130) //this is a jump label
/*8019D130 00199F30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8019D134 00199F34*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8019D138 00199F38*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8019D13C 00199F3C*/ PPC::Runtime::ASM::ble(.L_8019D14C);
/*8019D140 00199F40*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8019D144 00199F44*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8019D148 00199F48*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D14C, 0x8019D14C) //this is a jump label
/*8019D14C 00199F4C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*8019D150 00199F50*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8019D154 00199F54*/ PPC::Runtime::ASM::bdnz(.L_8019D0FC);
/*8019D158 00199F58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019D15C 00199F5C*/ PPC::Runtime::ASM::beq(.L_8019D184);
/*8019D160 00199F60*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8019D164 00199F64*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*8019D168 00199F68*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8019D16C 00199F6C*/ PPC::Runtime::ASM::lwzx(context->r26, context->r3, context->r0);
/*8019D170 00199F70*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8019D174 00199F74*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8019D178 00199F78*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8019D17C 00199F7C*/ PPC::Runtime::ASM::bl(fn_giveStat);
/*8019D180 00199F80*/ PPC::Runtime::ASM::b(.L_8019D188);
RUNTIME_PPC_JUMP_LABEL(.L_8019D184, 0x8019D184) //this is a jump label
/*8019D184 00199F84*/ PPC::Runtime::ASM::li(context->r26, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8019D188, 0x8019D188) //this is a jump label
/*8019D188 00199F88*/ PPC::Runtime::ASM::cmpwi(context->r26, -0x1);
/*8019D18C 00199F8C*/ PPC::Runtime::ASM::beq(.L_8019D21C);
/*8019D190 00199F90*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019D194 00199F94*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AE2C8 @ Get_MemoryOffset_HighBit);
/*8019D198 00199F98*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804AE2C8 @ Get_MemoryOffset_LowBit);
/*8019D19C 00199F9C*/ PPC::Runtime::ASM::slwi(context->r6, context->r26, 2);
/*8019D1A0 00199FA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8019D1A4 00199FA4*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8019D1A8 00199FA8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r8));
/*8019D1AC 00199FAC*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*8019D1B0 00199FB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019D1B4 00199FB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019D1B8 00199FB8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019D1BC 00199FBC*/ PPC::Runtime::ASM::lwzx(context->r26, context->r5, context->r6);
/*8019D1C0 00199FC0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8019D1C4 00199FC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019D1C8 00199FC8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*8019D1CC 00199FCC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019D1D0 00199FD0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8019D1D4 00199FD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019D1D8 00199FD8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8019D1DC 00199FDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r8));
/*8019D1E0 00199FE0*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f0);
/*8019D1E4 00199FE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019D1E8 00199FE8*/ PPC::Runtime::ASM::bl(fn_80253CE4);
/*8019D1EC 00199FEC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8019D1F0 00199FF0*/ PPC::Runtime::ASM::beq(.L_8019D214);
/*8019D1F4 00199FF4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8019D1F8 00199FF8*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8019D1FC 00199FFC*/ PPC::Runtime::ASM::bl(fn_8022FB58);
/*8019D200 0019A000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r28));
/*8019D204 0019A004*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8019D208 0019A008*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8019D20C 0019A00C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r28));
/*8019D210 0019A010*/ PPC::Runtime::ASM::b(.L_8019D220);
RUNTIME_PPC_JUMP_LABEL(.L_8019D214, 0x8019D214) //this is a jump label
/*8019D214 0019A014*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8019D218 0019A018*/ PPC::Runtime::ASM::b(.L_8019D220);
RUNTIME_PPC_JUMP_LABEL(.L_8019D21C, 0x8019D21C) //this is a jump label
/*8019D21C 0019A01C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019D220, 0x8019D220) //this is a jump label
/*8019D220 0019A020*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8019D224 0019A024*/ PPC::Runtime::ASM::beq(.L_8019D238);
/*8019D228 0019A028*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r28));
/*8019D22C 0019A02C*/ PPC::Runtime::ASM::ori(context->r31, context->r31, 0x1);
/*8019D230 0019A030*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8019D234 0019A034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8019D238, 0x8019D238) //this is a jump label
/*8019D238 0019A038*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019D23C 0019A03C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*8019D240 0019A040*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8019D244 0019A044*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*8019D248 0019A048*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8019D24C 0019A04C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8019D250 0019A050*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8019D254 0019A054*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*8019D258 0019A058*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8019D25C 0019A05C*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8019D260 0019A060*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8019D264 0019A064*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8019D268 0019A068*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019D26C 0019A06C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*8019D270 0019A070*/ PPC::Runtime::ASM::blr();
}