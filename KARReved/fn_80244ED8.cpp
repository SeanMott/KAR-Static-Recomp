//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D717C.hpp"
#include "fn_8024453C.hpp"
#include "fn_80242F94.hpp"
#include "fn_80242C7C.hpp"
#include "fn_80242C7C.hpp"



void fn_80244ED8(PPC::Runtime::GCContext* context)
{
/*80244ED8 00241CD8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb0, context->r1));
/*80244EDC 00241CDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80244EE0 00241CE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*80244EE4 00241CE4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80244EE8 00241CE8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*80244EEC 00241CEC*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80244EF0 00241CF0*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*80244EF4 00241CF4*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80244EF8 00241CF8*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*80244EFC 00241CFC*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80244F00 00241D00*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*80244F04 00241D04*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*80244F08 00241D08*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*80244F0C 00241D0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2BB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80244F10 00241D10*/ PPC::Runtime::ASM::mr(context->r27, context->r7);
/*80244F14 00241D14*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*80244F18 00241D18*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
/*80244F1C 00241D1C*/ PPC::Runtime::ASM::fmr(context->f30, context->f2);
/*80244F20 00241D20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80244F24 00241D24*/ PPC::Runtime::ASM::fmr(context->f31, context->f3);
/*80244F28 00241D28*/ PPC::Runtime::ASM::mr(context->r24, context->r4);
/*80244F2C 00241D2C*/ PPC::Runtime::ASM::mr(context->r25, context->r5);
/*80244F30 00241D30*/ PPC::Runtime::ASM::mr(context->r26, context->r6);
/*80244F34 00241D34*/ PPC::Runtime::ASM::mr(context->r28, context->r8);
/*80244F38 00241D38*/ PPC::Runtime::ASM::mr(context->r29, context->r9);
/*80244F3C 00241D3C*/ PPC::Runtime::ASM::mr(context->r30, context->r10);
/*80244F40 00241D40*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80244F44, 0x80244F44) //this is a jump label
/*80244F44 00241D44*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80244F48 00241D48*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r31);
/*80244F4C 00241D4C*/ PPC::Runtime::ASM::and.(context->r0, context->r0, context->r30);
/*80244F50 00241D50*/ PPC::Runtime::ASM::beq(.L_80245294);
/*80244F54 00241D54*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80244F58 00241D58*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80244F5C 00241D5C*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80244F60 00241D60*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x3c);
/*80244F64 00241D64*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x30);
/*80244F68 00241D68*/ PPC::Runtime::ASM::bl(fn_800D717C);
/*80244F6C 00241D6C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80244F70 00241D70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f30);
/*80244F74 00241D74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80244F78 00241D78*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80244F7C 00241D7C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80244F80 00241D80*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*80244F84 00241D84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80244F88 00241D88*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80244F8C 00241D8C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*80244F90 00241D90*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80244F94 00241D94*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80244F98 00241D98*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80244F9C 00241D9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80244FA0 00241DA0*/ PPC::Runtime::ASM::ble(.L_80244FAC);
/*80244FA4 00241DA4*/ PPC::Runtime::ASM::fmr(context->f28, context->f29);
/*80244FA8 00241DA8*/ PPC::Runtime::ASM::b(.L_80244FB0);
RUNTIME_PPC_JUMP_LABEL(.L_80244FAC, 0x80244FAC) //this is a jump label
/*80244FAC 00241DAC*/ PPC::Runtime::ASM::fmr(context->f28, context->f30);
RUNTIME_PPC_JUMP_LABEL(.L_80244FB0, 0x80244FB0) //this is a jump label
/*80244FB0 00241DB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*80244FB4 00241DB4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80244FB8 00241DB8*/ PPC::Runtime::ASM::fadds(context->f0, context->f31, context->f28);
/*80244FBC 00241DBC*/ PPC::Runtime::ASM::mr(context->r5, context->r23);
/*80244FC0 00241DC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*80244FC4 00241DC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x30);
/*80244FC8 00241DC8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0xc);
/*80244FCC 00241DCC*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x18);
/*80244FD0 00241DD0*/ PPC::Runtime::ASM::fdivs(context->f28, context->f0, context->f1);
/*80244FD4 00241DD4*/ PPC::Runtime::ASM::bl(fn_8024453C);
/*80244FD8 00241DD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80244FDC 00241DDC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80244FE0 00241DE0*/ PPC::Runtime::ASM::fadds(context->f5, context->f1, context->f28);
/*80244FE4 00241DE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*80244FE8 00241DE8*/ PPC::Runtime::ASM::bge(.L_8024501C);
/*80244FEC 00241DEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80244FF0 00241DF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80244FF4 00241DF4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80244FF8 00241DF8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80244FFC 00241DFC*/ PPC::Runtime::ASM::fmadds(context->f4, context->f1, context->f5, context->f0);
/*80245000 00241E00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80245004 00241E04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80245008 00241E08*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f5, context->f2);
/*8024500C 00241E0C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80245010 00241E10*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f5, context->f0);
/*80245014 00241E14*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80245018 00241E18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8024501C, 0x8024501C) //this is a jump label
/*8024501C 00241E1C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80245020 00241E20*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2BA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80245024 00241E24*/ PPC::Runtime::ASM::fsubs(context->f5, context->f1, context->f28);
/*80245028 00241E28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*8024502C 00241E2C*/ PPC::Runtime::ASM::ble(.L_80245060);
/*80245030 00241E30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80245034 00241E34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80245038 00241E38*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8024503C 00241E3C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80245040 00241E40*/ PPC::Runtime::ASM::fmadds(context->f4, context->f1, context->f5, context->f0);
/*80245044 00241E44*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80245048 00241E48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8024504C 00241E4C*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f5, context->f2);
/*80245050 00241E50*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80245054 00241E54*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f5, context->f0);
/*80245058 00241E58*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8024505C 00241E5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80245060, 0x80245060) //this is a jump label
/*80245060 00241E60*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80245064 00241E64*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80245068 00241E68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8024506C 00241E6C*/ PPC::Runtime::ASM::fmr(context->f2, context->f29);
/*80245070 00241E70*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80245074 00241E74*/ PPC::Runtime::ASM::fmr(context->f3, context->f30);
/*80245078 00241E78*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8024507C 00241E7C*/ PPC::Runtime::ASM::fsubs(context->f7, context->f4, context->f0);
/*80245080 00241E80*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80245084 00241E84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80245088 00241E88*/ PPC::Runtime::ASM::fsubs(context->f5, context->f6, context->f5);
/*8024508C 00241E8C*/ PPC::Runtime::ASM::mr(context->r5, context->r23);
/*80245090 00241E90*/ PPC::Runtime::ASM::mr(context->r6, context->r24);
/*80245094 00241E94*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80245098 00241E98*/ PPC::Runtime::ASM::stfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8024509C 00241E9C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*802450A0 00241EA0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*802450A4 00241EA4*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802450A8 00241EA8*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x14);
/*802450AC 00241EAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802450B0 00241EB0*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x10);
/*802450B4 00241EB4*/ PPC::Runtime::ASM::bl(fn_80242F94);
/*802450B8 00241EB8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802450BC 00241EBC*/ PPC::Runtime::ASM::beq(.L_80245188);
/*802450C0 00241EC0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2BA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802450C4 00241EC4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802450C8 00241EC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*802450CC 00241ECC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802450D0 00241ED0*/ PPC::Runtime::ASM::bne(.L_80245188);
/*802450D4 00241ED4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802450D8 00241ED8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*802450DC 00241EDC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802450E0 00241EE0*/ PPC::Runtime::ASM::bne(.L_80245188);
/*802450E4 00241EE4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802450E8 00241EE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802450EC 00241EEC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*802450F0 00241EF0*/ PPC::Runtime::ASM::bge(.L_80245294);
/*802450F4 00241EF4*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802450F8 00241EF8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802450FC 00241EFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80245100 00241F00*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*80245104 00241F04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80245108 00241F08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8024510C 00241F0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80245110 00241F10*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*80245114 00241F14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80245118 00241F18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8024511C 00241F1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80245120 00241F20*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*80245124 00241F24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80245128 00241F28*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8024512C 00241F2C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*80245130 00241F30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80245134 00241F34*/ PPC::Runtime::ASM::fmadds(context->f4, context->f1, context->f5, context->f6);
/*80245138 00241F38*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*8024513C 00241F3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*80245140 00241F40*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*80245144 00241F44*/ PPC::Runtime::ASM::fsubs(context->f7, context->f0, context->f4);
/*80245148 00241F48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*8024514C 00241F4C*/ PPC::Runtime::ASM::fmadds(context->f4, context->f2, context->f5, context->f1);
/*80245150 00241F50*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80245154 00241F54*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80245158 00241F58*/ PPC::Runtime::ASM::fmadds(context->f3, context->f3, context->f5, context->f0);
/*8024515C 00241F5C*/ PPC::Runtime::ASM::fadds(context->f0, context->f6, context->f7);
/*80245160 00241F60*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f4);
/*80245164 00241F64*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f3);
/*80245168 00241F68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8024516C 00241F6C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*80245170 00241F70*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f2);
/*80245174 00241F74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80245178 00241F78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*8024517C 00241F7C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*80245180 00241F80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80245184 00241F84*/ PPC::Runtime::ASM::b(.L_80245294);
RUNTIME_PPC_JUMP_LABEL(.L_80245188, 0x80245188) //this is a jump label
/*80245188 00241F88*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8024518C 00241F8C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*80245190 00241F90*/ PPC::Runtime::ASM::fmr(context->f2, context->f29);
/*80245194 00241F94*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80245198 00241F98*/ PPC::Runtime::ASM::fmr(context->f3, context->f30);
/*8024519C 00241F9C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x3c);
/*802451A0 00241FA0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*802451A4 00241FA4*/ PPC::Runtime::ASM::bl(fn_80242C7C);
/*802451A8 00241FA8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802451AC 00241FAC*/ PPC::Runtime::ASM::beq(.L_80245210);
/*802451B0 00241FB0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802451B4 00241FB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802451B8 00241FB8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*802451BC 00241FBC*/ PPC::Runtime::ASM::bge(.L_80245294);
/*802451C0 00241FC0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802451C4 00241FC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802451C8 00241FC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802451CC 00241FCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802451D0 00241FD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802451D4 00241FD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802451D8 00241FD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802451DC 00241FDC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*802451E0 00241FE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802451E4 00241FE4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f1, context->f2, context->f0);
/*802451E8 00241FE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802451EC 00241FEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*802451F0 00241FF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802451F4 00241FF4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f1, context->f2, context->f0);
/*802451F8 00241FF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802451FC 00241FFC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*80245200 00242000*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80245204 00242004*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f1, context->f2, context->f0);
/*80245208 00242008*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8024520C 0024200C*/ PPC::Runtime::ASM::b(.L_80245294);
RUNTIME_PPC_JUMP_LABEL(.L_80245210, 0x80245210) //this is a jump label
/*80245210 00242010*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80245214 00242014*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*80245218 00242018*/ PPC::Runtime::ASM::fmr(context->f2, context->f29);
/*8024521C 0024201C*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80245220 00242020*/ PPC::Runtime::ASM::fmr(context->f3, context->f30);
/*80245224 00242024*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x30);
/*80245228 00242028*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8024522C 0024202C*/ PPC::Runtime::ASM::bl(fn_80242C7C);
/*80245230 00242030*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80245234 00242034*/ PPC::Runtime::ASM::beq(.L_80245294);
/*80245238 00242038*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024523C 0024203C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80245240 00242040*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80245244 00242044*/ PPC::Runtime::ASM::bge(.L_80245294);
/*80245248 00242048*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8024524C 0024204C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80245250 00242050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80245254 00242054*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80245258 00242058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8024525C 0024205C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80245260 00242060*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80245264 00242064*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80245268 00242068*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8024526C 0024206C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f1, context->f2, context->f0);
/*80245270 00242070*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80245274 00242074*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*80245278 00242078*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8024527C 0024207C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f1, context->f2, context->f0);
/*80245280 00242080*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80245284 00242084*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*80245288 00242088*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8024528C 0024208C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f1, context->f2, context->f0);
/*80245290 00242090*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80245294, 0x80245294) //this is a jump label
/*80245294 00242094*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80245298 00242098*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x3);
/*8024529C 0024209C*/ PPC::Runtime::ASM::blt(.L_80244F44);
/*802452A0 002420A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2BB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802452A4 002420A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802452A8 002420A8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*802452AC 002420AC*/ PPC::Runtime::ASM::mfcr(context->r0);
/*802452B0 002420B0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 2);
/*802452B4 002420B4*/ PPC::Runtime::ASM::xori(context->r3, context->r0, 0x1);
/*802452B8 002420B8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*802452BC 002420BC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802452C0 002420C0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*802452C4 002420C4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802452C8 002420C8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*802452CC 002420CC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802452D0 002420D0*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802452D4 002420D4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*802452D8 002420D8*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802452DC 002420DC*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*802452E0 002420E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*802452E4 002420E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802452E8 002420E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xb0);
/*802452EC 002420EC*/ PPC::Runtime::ASM::blr();
}