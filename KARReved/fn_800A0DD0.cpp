//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8009A3A8.hpp"



void fn_800A0DD0(PPC::Runtime::GCContext* context)
{
/*800A0DD0 0009DBD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*800A0DD4 0009DBD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A0DD8 0009DBD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*800A0DDC 0009DBDC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*800A0DE0 0009DBE0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*800A0DE4 0009DBE4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800A0DE8 0009DBE8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*800A0DEC 0009DBEC*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800A0DF0 0009DBF0*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800A0DF4 0009DBF4*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800A0DF8 0009DBF8*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*800A0DFC 0009DBFC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800A0E00 0009DC00*/ PPC::Runtime::ASM::bl(_savegpr_26);
/* 800A0E04 0009DC04  7C BB 2B 79 */ mr. context->r27 , context->r5
/*800A0E08 0009DC08*/ PPC::Runtime::ASM::fmr(context->f28, context->f1);
/*800A0E0C 0009DC0C*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_640 @ Get_MemoryOffset_HighBit);
/*800A0E10 0009DC10*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*800A0E14 0009DC14*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800A0E18 0009DC18*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800A0E1C 0009DC1C*/ PPC::Runtime::ASM::mr(context->r26, context->r6);
/*800A0E20 0009DC20*/ PPC::Runtime::ASM::addi(context->r30, context->r5, MemoryOffset_640 @ Get_MemoryOffset_LowBit);
/*800A0E24 0009DC24*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A0E28 0009DC28*/ PPC::Runtime::ASM::blt(.L_800A0E38);
/*800A0E2C 0009DC2C*/ PPC::Runtime::ASM::cmpwi(context->r27, 0xbb8);
/*800A0E30 0009DC30*/ PPC::Runtime::ASM::bge(.L_800A0E38);
/*800A0E34 0009DC34*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A0E38, 0x800A0E38) //this is a jump label
/*800A0E38 0009DC38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A0E3C 0009DC3C*/ PPC::Runtime::ASM::bne(.L_800A0E50);
/*800A0E40 0009DC40*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xd8);
/*800A0E44 0009DC44*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe8);
/*800A0E48 0009DC48*/ PPC::Runtime::ASM::li(context->r4, 0x116);
/*800A0E4C 0009DC4C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A0E50, 0x800A0E50) //this is a jump label
/*800A0E50 0009DC50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A0E54 0009DC54*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A0E58 0009DC58*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f28);
/*800A0E5C 0009DC5C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800A0E60 0009DC60*/ PPC::Runtime::ASM::bne(.L_800A0E84);
/*800A0E64 0009DC64*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF084 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A0E68 0009DC68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800A0E6C 0009DC6C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800A0E70 0009DC70*/ PPC::Runtime::ASM::bne(.L_800A0E84);
/*800A0E74 0009DC74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f28, context->f31);
/*800A0E78 0009DC78*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800A0E7C 0009DC7C*/ PPC::Runtime::ASM::bne(.L_800A0E84);
/*800A0E80 0009DC80*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A0E84, 0x800A0E84) //this is a jump label
/*800A0E84 0009DC84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A0E88 0009DC88*/ PPC::Runtime::ASM::bne(.L_800A0EB0);
/*800A0E8C 0009DC8C*/ PPC::Runtime::ASM::fmr(context->f1, context->f28);
/*800A0E90 0009DC90*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*800A0E94 0009DC94*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/* 800A0E98 0009DC98  4C C6 32 42 */ crset context->cr1eq
/*800A0E9C 0009DC9C*/ PPC::Runtime::ASM::bl(OSReport);
/*800A0EA0 0009DCA0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xd8);
/*800A0EA4 0009DCA4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x13c);
/*800A0EA8 0009DCA8*/ PPC::Runtime::ASM::li(context->r4, 0x117);
/*800A0EAC 0009DCAC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A0EB0, 0x800A0EB0) //this is a jump label
/*800A0EB0 0009DCB0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800A0EB4 0009DCB4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800A0EB8 0009DCB8*/ PPC::Runtime::ASM::bl(fn_8009A3A8);
/*800A0EBC 0009DCBC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800A0EC0 0009DCC0*/ PPC::Runtime::ASM::beq(.L_800A12B8);
/*800A0EC4 0009DCC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800A0EC8 0009DCC8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800A0ECC 0009DCCC*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*800A0ED0 0009DCD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800A0ED4 0009DCD4*/ PPC::Runtime::ASM::bl(fn_GXSetChanMatColor);
/*800A0ED8 0009DCD8*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*800A0EDC 0009DCDC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A0EE0 0009DCE0*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*800A0EE4 0009DCE4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A0EE8 0009DCE8*/ PPC::Runtime::ASM::slwi(context->r0, context->r27, 2);
/*800A0EEC 0009DCEC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A0EF0 0009DCF0*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*800A0EF4 0009DCF4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800A0EF8 0009DCF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A0EFC 0009DCFC*/ PPC::Runtime::ASM::bne(.L_800A0FB0);
/*800A0F00 0009DD00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800A0F04 0009DD04*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A0F08 0009DD08*/ PPC::Runtime::ASM::bne(.L_800A0F5C);
/*800A0F0C 0009DD0C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*800A0F10 0009DD10*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0xc);
/*800A0F14 0009DD14*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800A0F18 0009DD18*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800A0F1C 0009DD1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800A0F20 0009DD20*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
/*800A0F24 0009DD24*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800A0F28 0009DD28*/ PPC::Runtime::ASM::b(.L_800A0F4C);
RUNTIME_PPC_JUMP_LABEL(.L_800A0F2C, 0x800A0F2C) //this is a jump label
/*800A0F2C 0009DD2C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800A0F30 0009DD30*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800A0F34 0009DD34*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800A0F38 0009DD38*/ PPC::Runtime::ASM::lfsx(context->f1, context->r5, context->r28);
/*800A0F3C 0009DD3C*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*800A0F40 0009DD40*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*800A0F44 0009DD44*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0xc);
/*800A0F48 0009DD48*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A0F4C, 0x800A0F4C) //this is a jump label
/*800A0F4C 0009DD4C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*800A0F50 0009DD50*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*800A0F54 0009DD54*/ PPC::Runtime::ASM::blt(.L_800A0F2C);
/*800A0F58 0009DD58*/ PPC::Runtime::ASM::b(.L_800A0FB0);
RUNTIME_PPC_JUMP_LABEL(.L_800A0F5C, 0x800A0F5C) //this is a jump label
/*800A0F5C 0009DD5C*/ PPC::Runtime::ASM::li(context->r3, 0xc00);
/*800A0F60 0009DD60*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800A0F64 0009DD64*/ PPC::Runtime::ASM::lfd(context->f29, STRUCT_DOUBLE_COUNT_1805DF090 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A0F68 0009DD68*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800A0F6C 0009DD6C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800A0F70 0009DD70*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800A0F74 0009DD74*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805DF088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A0F78 0009DD78*/ PPC::Runtime::ASM::lis(context->r30, 0x4330);
RUNTIME_PPC_JUMP_LABEL(.L_800A0F7C, 0x800A0F7C) //this is a jump label
/*800A0F7C 0009DD7C*/ PPC::Runtime::ASM::xoris(context->r0, context->r28, 0x8000);
/*800A0F80 0009DD80*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800A0F84 0009DD84*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800A0F88 0009DD88*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800A0F8C 0009DD8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800A0F90 0009DD90*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800A0F94 0009DD94*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f29);
/*800A0F98 0009DD98*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f30);
/*800A0F9C 0009DD9C*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*800A0FA0 0009DDA0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*800A0FA4 0009DDA4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0xc);
/*800A0FA8 0009DDA8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x100);
/*800A0FAC 0009DDAC*/ PPC::Runtime::ASM::blt(.L_800A0F7C);
RUNTIME_PPC_JUMP_LABEL(.L_800A0FB0, 0x800A0FB0) //this is a jump label
/*800A0FB0 0009DDB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800A0FB4 0009DDB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800A0FB8 0009DDB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A0FBC 0009DDBC*/ PPC::Runtime::ASM::bne(.L_800A0FC8);
/*800A0FC0 0009DDC0*/ PPC::Runtime::ASM::lha(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*800A0FC4 0009DDC4*/ PPC::Runtime::ASM::b(.L_800A0FCC);
RUNTIME_PPC_JUMP_LABEL(.L_800A0FC8, 0x800A0FC8) //this is a jump label
/*800A0FC8 0009DDC8*/ PPC::Runtime::ASM::li(context->r27, 0x100);
RUNTIME_PPC_JUMP_LABEL(.L_800A0FCC, 0x800A0FCC) //this is a jump label
/*800A0FCC 0009DDCC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A0FD0 0009DDD0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f28);
/*800A0FD4 0009DDD4*/ PPC::Runtime::ASM::bne(.L_800A0FF8);
/*800A0FD8 0009DDD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800A0FDC 0009DDDC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800A0FE0 0009DDE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800A0FE4 0009DDE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A0FE8 0009DDE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A0FEC 0009DDEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800A0FF0 0009DDF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800A0FF4 0009DDF4*/ PPC::Runtime::ASM::b(.L_800A1068);
RUNTIME_PPC_JUMP_LABEL(.L_800A0FF8, 0x800A0FF8) //this is a jump label
/*800A0FF8 0009DDF8*/ PPC::Runtime::ASM::fmr(context->f1, context->f28);
/*800A0FFC 0009DDFC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800A1000 0009DE00*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*800A1004 0009DE04*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*800A1008 0009DE08*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800A100C 0009DE0C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800A1010 0009DE10*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DF090 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A1014 0009DE14*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A1018 0009DE18*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A101C 0009DE1C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
RUNTIME_PPC_JUMP_LABEL(.L_800A1020, 0x800A1020) //this is a jump label
/*800A1020 0009DE20*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800A1024 0009DE24*/ PPC::Runtime::ASM::bne(.L_800A1034);
/*800A1028 0009DE28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800A102C 0009DE2C*/ PPC::Runtime::ASM::lfsx(context->f1, context->r3, context->r4);
/*800A1030 0009DE30*/ PPC::Runtime::ASM::b(.L_800A104C);
RUNTIME_PPC_JUMP_LABEL(.L_800A1034, 0x800A1034) //this is a jump label
/*800A1034 0009DE34*/ PPC::Runtime::ASM::xoris(context->r3, context->r6, 0x8000);
/*800A1038 0009DE38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800A103C 0009DE3C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800A1040 0009DE40*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800A1044 0009DE44*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800A1048 0009DE48*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800A104C, 0x800A104C) //this is a jump label
/*800A104C 0009DE4C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f28);
/*800A1050 0009DE50*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800A1054 0009DE54*/ PPC::Runtime::ASM::beq(.L_800A1064);
/*800A1058 0009DE58*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800A105C 0009DE5C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800A1060 0009DE60*/ PPC::Runtime::ASM::b(.L_800A1020);
RUNTIME_PPC_JUMP_LABEL(.L_800A1064, 0x800A1064) //this is a jump label
/*800A1064 0009DE64*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_800A1068, 0x800A1068) //this is a jump label
/*800A1068 0009DE68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF084 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A106C 0009DE6C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f31);
/*800A1070 0009DE70*/ PPC::Runtime::ASM::bne(.L_800A109C);
/*800A1074 0009DE74*/ PPC::Runtime::ASM::mulli(context->r0, context->r27, 0xc);
/*800A1078 0009DE78*/ PPC::Runtime::ASM::subi(context->r26, context->r27, 0x1);
/*800A107C 0009DE7C*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*800A1080 0009DE80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r4));
/*800A1084 0009DE84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r4));
/*800A1088 0009DE88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800A108C 0009DE8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A1090 0009DE90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r4));
/*800A1094 0009DE94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A1098 0009DE98*/ PPC::Runtime::ASM::b(.L_800A110C);
RUNTIME_PPC_JUMP_LABEL(.L_800A109C, 0x800A109C) //this is a jump label
/*800A109C 0009DE9C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800A10A0 0009DEA0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800A10A4 0009DEA4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*800A10A8 0009DEA8*/ PPC::Runtime::ASM::bl(fn_splArcLengthPoint);
/*800A10AC 0009DEAC*/ PPC::Runtime::ASM::subi(context->r6, context->r27, 0x1);
/*800A10B0 0009DEB0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800A10B4 0009DEB4*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DF090 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A10B8 0009DEB8*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 2);
/*800A10BC 0009DEBC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A10C0 0009DEC0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
RUNTIME_PPC_JUMP_LABEL(.L_800A10C4, 0x800A10C4) //this is a jump label
/*800A10C4 0009DEC4*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800A10C8 0009DEC8*/ PPC::Runtime::ASM::bne(.L_800A10D8);
/*800A10CC 0009DECC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800A10D0 0009DED0*/ PPC::Runtime::ASM::lfsx(context->f1, context->r3, context->r4);
/*800A10D4 0009DED4*/ PPC::Runtime::ASM::b(.L_800A10F0);
RUNTIME_PPC_JUMP_LABEL(.L_800A10D8, 0x800A10D8) //this is a jump label
/*800A10D8 0009DED8*/ PPC::Runtime::ASM::xoris(context->r3, context->r6, 0x8000);
/*800A10DC 0009DEDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800A10E0 0009DEE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800A10E4 0009DEE4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800A10E8 0009DEE8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800A10EC 0009DEEC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800A10F0, 0x800A10F0) //this is a jump label
/*800A10F0 0009DEF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*800A10F4 0009DEF4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800A10F8 0009DEF8*/ PPC::Runtime::ASM::beq(.L_800A1108);
/*800A10FC 0009DEFC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x4);
/*800A1100 0009DF00*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x1);
/*800A1104 0009DF04*/ PPC::Runtime::ASM::b(.L_800A10C4);
RUNTIME_PPC_JUMP_LABEL(.L_800A1108, 0x800A1108) //this is a jump label
/*800A1108 0009DF08*/ PPC::Runtime::ASM::mr(context->r26, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_800A110C, 0x800A110C) //this is a jump label
/*800A110C 0009DF0C*/ PPC::Runtime::ASM::li(context->r3, 0x40);
/*800A1110 0009DF10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A1114 0009DF14*/ PPC::Runtime::ASM::bl(fn_GXSetPointSize);
/*800A1118 0009DF18*/ PPC::Runtime::ASM::li(context->r3, 0xb8);
/*800A111C 0009DF1C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A1120 0009DF20*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800A1124 0009DF24*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*800A1128 0009DF28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A112C 0009DF2C*/ PPC::Runtime::ASM::lis(context->r5, 0xcc01);
/*800A1130 0009DF30*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*800A1134 0009DF34*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A1138 0009DF38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*800A113C 0009DF3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A1140 0009DF40*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*800A1144 0009DF44*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800A1148 0009DF48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*800A114C 0009DF4C*/ PPC::Runtime::ASM::bl(fn_GXSetPointSize);
/*800A1150 0009DF50*/ PPC::Runtime::ASM::li(context->r3, 0xb8);
/*800A1154 0009DF54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A1158 0009DF58*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800A115C 0009DF5C*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*800A1160 0009DF60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800A1164 0009DF64*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*800A1168 0009DF68*/ PPC::Runtime::ASM::cmpw(context->r30, context->r26);
/*800A116C 0009DF6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A1170 0009DF70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A1174 0009DF74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A1178 0009DF78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A117C 0009DF7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A1180 0009DF80*/ PPC::Runtime::ASM::ble(.L_800A11CC);
/*800A1184 0009DF84*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*800A1188 0009DF88*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A118C 0009DF8C*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800A1190 0009DF90*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*800A1194 0009DF94*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A1198 0009DF98*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*800A119C 0009DF9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A11A0 0009DFA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A11A4 0009DFA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A11A8 0009DFA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800A11AC 0009DFAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A11B0 0009DFB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800A11B4 0009DFB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A11B8 0009DFB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A11BC 0009DFBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A11C0 0009DFC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A11C4 0009DFC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A11C8 0009DFC8*/ PPC::Runtime::ASM::b(.L_800A12B8);
RUNTIME_PPC_JUMP_LABEL(.L_800A11CC, 0x800A11CC) //this is a jump label
/*800A11CC 0009DFCC*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*800A11D0 0009DFD0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A11D4 0009DFD4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800A11D8 0009DFD8*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*800A11DC 0009DFDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A11E0 0009DFE0*/ PPC::Runtime::ASM::lis(context->r29, 0xcc01);
/*800A11E4 0009DFE4*/ PPC::Runtime::ASM::mulli(context->r0, context->r30, 0xc);
/*800A11E8 0009DFE8*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
/*800A11EC 0009DFEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A11F0 0009DFF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A11F4 0009DFF4*/ PPC::Runtime::ASM::add(context->r27, context->r31, context->r0);
/*800A11F8 0009DFF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A11FC 0009DFFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800A1200 0009E000*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A1204 0009E004*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800A1208 0009E008*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*800A120C 0009E00C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*800A1210 0009E010*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A1214 0009E014*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A1218 0009E018*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A121C 0009E01C*/ PPC::Runtime::ASM::b(.L_800A1264);
RUNTIME_PPC_JUMP_LABEL(.L_800A1220, 0x800A1220) //this is a jump label
/*800A1220 0009E020*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*800A1224 0009E024*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A1228 0009E028*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800A122C 0009E02C*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*800A1230 0009E030*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800A1234 0009E034*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*800A1238 0009E038*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*800A123C 0009E03C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*800A1240 0009E040*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A1244 0009E044*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A1248 0009E048*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A124C 0009E04C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*800A1250 0009E050*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*800A1254 0009E054*/ PPC::Runtime::ASM::lfsu(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800A1258 0009E058*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A125C 0009E05C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
/*800A1260 0009E060*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800A1264, 0x800A1264) //this is a jump label
/*800A1264 0009E064*/ PPC::Runtime::ASM::cmpw(context->r28, context->r26);
/*800A1268 0009E068*/ PPC::Runtime::ASM::blt(.L_800A1220);
/*800A126C 0009E06C*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*800A1270 0009E070*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A1274 0009E074*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800A1278 0009E078*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*800A127C 0009E07C*/ PPC::Runtime::ASM::mulli(context->r0, context->r26, 0xc);
/*800A1280 0009E080*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*800A1284 0009E084*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*800A1288 0009E088*/ PPC::Runtime::ASM::lfsx(context->f0, context->r31, context->r0);
/*800A128C 0009E08C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800A1290 0009E090*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800A1294 0009E094*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A1298 0009E098*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A129C 0009E09C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A12A0 0009E0A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800A12A4 0009E0A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A12A8 0009E0A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A12AC 0009E0AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*800A12B0 0009E0B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A12B4 0009E0B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800A12B8, 0x800A12B8) //this is a jump label
/*800A12B8 0009E0B8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1)0, context->qr0);
/*800A12BC 0009E0BC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*800A12C0 0009E0C0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*800A12C4 0009E0C4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*800A12C8 0009E0C8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*800A12CC 0009E0CC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800A12D0 0009E0D0*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*800A12D4 0009E0D4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*800A12D8 0009E0D8*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800A12DC 0009E0DC*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800A12E0 0009E0E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*800A12E4 0009E0E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A12E8 0009E0E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*800A12EC 0009E0EC*/ PPC::Runtime::ASM::blr();
}