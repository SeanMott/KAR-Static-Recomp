//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80187D2C(PPC::Runtime::GCContext* context)
{
/*80187D2C 00184B2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80187D30 00184B30*/ PPC::Runtime::ASM::mflr(context->r0);
/*80187D34 00184B34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80187D38 00184B38*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80187D3C 00184B3C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80187D40 00184B40*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80187D44 00184B44*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80187D48 00184B48*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80187D4C 00184B4C*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80187D50 00184B50*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80187D54 00184B54*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80187D58 00184B58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80187D5C 00184B5C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80187D60 00184B60*/ PPC::Runtime::ASM::beq(.L_8018805C);
/*80187D64 00184B64*/ PPC::Runtime::ASM::bge(.L_80188278);
/*80187D68 00184B68*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80187D6C 00184B6C*/ PPC::Runtime::ASM::bge(.L_80187D74);
/*80187D70 00184B70*/ PPC::Runtime::ASM::b(.L_80188278);
RUNTIME_PPC_JUMP_LABEL(.L_80187D74, 0x80187D74) //this is a jump label
/*80187D74 00184B74*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187D78 00184B78*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187D7C 00184B7C*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f2);
/*80187D80 00184B80*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80187D84 00184B84*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80187D88 00184B88*/ PPC::Runtime::ASM::bne(.L_80187DA8);
/*80187D8C 00184B8C*/ PPC::Runtime::ASM::li(context->r25, 0x9);
/*80187D90 00184B90*/ PPC::Runtime::ASM::li(context->r26, 0x9);
/*80187D94 00184B94*/ PPC::Runtime::ASM::li(context->r29, 0x9);
/*80187D98 00184B98*/ PPC::Runtime::ASM::li(context->r28, 0x9);
/*80187D9C 00184B9C*/ PPC::Runtime::ASM::li(context->r27, 0x9);
/*80187DA0 00184BA0*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*80187DA4 00184BA4*/ PPC::Runtime::ASM::b(.L_80187E98);
RUNTIME_PPC_JUMP_LABEL(.L_80187DA8, 0x80187DA8) //this is a jump label
/*80187DA8 00184BA8*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f31);
/*80187DAC 00184BAC*/ PPC::Runtime::ASM::lis(context->r5, 0x1062);
/*80187DB0 00184BB0*/ PPC::Runtime::ASM::lis(context->r3, 0x51ec);
/*80187DB4 00184BB4*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*80187DB8 00184BB8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0F3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187DBC 00184BBC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4dd3);
/*80187DC0 00184BC0*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80187DC4 00184BC4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f31);
/*80187DC8 00184BC8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187DCC 00184BCC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7ae1);
/*80187DD0 00184BD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80187DD4 00184BD4*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x6667);
/*80187DD8 00184BD8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/* 80187DDC 00184BDC  7C 85 18 96 */ mulhw context->r4 , context->r5 , context->r3
/*80187DE0 00184BE0*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*80187DE4 00184BE4*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80187DE8 00184BE8*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80187DEC 00184BEC*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 6);
/*80187DF0 00184BF0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 80187DF4 00184BF4  7C 00 18 96 */ mulhw context->r0 , context->r0 , context->r3
/*80187DF8 00184BF8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80187DFC 00184BFC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80187E00 00184C00*/ PPC::Runtime::ASM::srwi(context->r5, context->r4, 31);
/*80187E04 00184C04*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r5);
/*80187E08 00184C08*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*80187E0C 00184C0C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*80187E10 00184C10*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/* 80187E14 00184C14  7C 9C 00 96 */ mulhw context->r4 , context->r28 , context->r0
/*80187E18 00184C18*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 2);
/* 80187E1C 00184C1C  7D 1C 18 96 */ mulhw context->r8 , context->r28 , context->r3
/*80187E20 00184C20*/ PPC::Runtime::ASM::srwi(context->r6, context->r4, 31);
/*80187E24 00184C24*/ PPC::Runtime::ASM::add(context->r29, context->r4, context->r6);
/*80187E28 00184C28*/ PPC::Runtime::ASM::srawi(context->r4, context->r8, 2);
/*80187E2C 00184C2C*/ PPC::Runtime::ASM::srwi(context->r6, context->r4, 31);
/*80187E30 00184C30*/ PPC::Runtime::ASM::add(context->r12, context->r4, context->r6);
/* 80187E34 00184C34  7C 9C 60 96 */ mulhw context->r4 , context->r28 , context->r12
/*80187E38 00184C38*/ PPC::Runtime::ASM::srawi(context->r10, context->r4, 2);
/*80187E3C 00184C3C*/ PPC::Runtime::ASM::srawi(context->r6, context->r8, 2);
/* 80187E40 00184C40  7C 9C 48 96 */ mulhw context->r4 , context->r28 , context->r9
/*80187E44 00184C44*/ PPC::Runtime::ASM::srwi(context->r11, context->r10, 31);
/*80187E48 00184C48*/ PPC::Runtime::ASM::srwi(context->r8, context->r6, 31);
/*80187E4C 00184C4C*/ PPC::Runtime::ASM::add(context->r11, context->r10, context->r11);
/*80187E50 00184C50*/ PPC::Runtime::ASM::add(context->r10, context->r6, context->r8);
/*80187E54 00184C54*/ PPC::Runtime::ASM::srawi(context->r6, context->r4, 2);
/* 80187E58 00184C58  7C 9C 38 96 */ mulhw context->r4 , context->r28 , context->r7
/*80187E5C 00184C5C*/ PPC::Runtime::ASM::srwi(context->r8, context->r6, 31);
/*80187E60 00184C60*/ PPC::Runtime::ASM::add(context->r8, context->r6, context->r8);
/*80187E64 00184C64*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 2);
/*80187E68 00184C68*/ PPC::Runtime::ASM::srwi(context->r6, context->r4, 31);
/*80187E6C 00184C6C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r6);
/*80187E70 00184C70*/ PPC::Runtime::ASM::mulli(context->r29, context->r29, 0xa);
/*80187E74 00184C74*/ PPC::Runtime::ASM::mulli(context->r6, context->r11, 0xa);
/*80187E78 00184C78*/ PPC::Runtime::ASM::subf(context->r27, context->r29, context->r0);
/*80187E7C 00184C7C*/ PPC::Runtime::ASM::mulli(context->r0, context->r10, 0xa);
/*80187E80 00184C80*/ PPC::Runtime::ASM::subf(context->r28, context->r6, context->r12);
/*80187E84 00184C84*/ PPC::Runtime::ASM::mulli(context->r6, context->r8, 0xa);
/*80187E88 00184C88*/ PPC::Runtime::ASM::subf(context->r29, context->r0, context->r3);
/*80187E8C 00184C8C*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0xa);
/*80187E90 00184C90*/ PPC::Runtime::ASM::subf(context->r26, context->r6, context->r9);
/*80187E94 00184C94*/ PPC::Runtime::ASM::subf(context->r25, context->r0, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_80187E98, 0x80187E98) //this is a jump label
/*80187E98 00184C98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187E9C 00184C9C*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187EA0 00184CA0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80187EA4 00184CA4*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80187EA8 00184CA8*/ PPC::Runtime::ASM::bne(.L_80187EC8);
/*80187EAC 00184CAC*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*80187EB0 00184CB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187EB4 00184CB4*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*80187EB8 00184CB8*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/* 80187EBC 00184CBC  4C C6 32 42 */ crset context->cr1eq
/*80187EC0 00184CC0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187EC4 00184CC4*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80187EC8, 0x80187EC8) //this is a jump label
/*80187EC8 00184CC8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187ECC 00184CCC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187ED0 00184CD0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80187ED4 00184CD4*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f1);
/*80187ED8 00184CD8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80187EDC 00184CDC*/ PPC::Runtime::ASM::bne(.L_80187F00);
/*80187EE0 00184CE0*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*80187EE4 00184CE4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187EE8 00184CE8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187EEC 00184CEC*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80187EF0 00184CF0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/* 80187EF4 00184CF4  4C C6 32 42 */ crset context->cr1eq
/*80187EF8 00184CF8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187EFC 00184CFC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80187F00, 0x80187F00) //this is a jump label
/*80187F00 00184D00*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0F3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F04 00184D04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F08 00184D08*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80187F0C 00184D0C*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f1);
/*80187F10 00184D10*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80187F14 00184D14*/ PPC::Runtime::ASM::bne(.L_80187F38);
/*80187F18 00184D18*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*80187F1C 00184D1C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F20 00184D20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187F24 00184D24*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*80187F28 00184D28*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/* 80187F2C 00184D2C  4C C6 32 42 */ crset context->cr1eq
/*80187F30 00184D30*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187F34 00184D34*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80187F38, 0x80187F38) //this is a jump label
/*80187F38 00184D38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F3C 00184D3C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187F40 00184D40*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F44 00184D44*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80187F48 00184D48*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80187F4C 00184D4C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/*80187F50 00184D50*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 80187F54 00184D54  4C C6 32 42 */ crset context->cr1eq
/*80187F58 00184D58*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187F5C 00184D5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F60 00184D60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187F64 00184D64*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F68 00184D68*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EBC @ Get_MemoryOffset_SDA21);
/*80187F6C 00184D6C*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80187F70 00184D70*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 80187F74 00184D74  4C C6 32 42 */ crset context->cr1eq
/*80187F78 00184D78*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187F7C 00184D7C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F80 00184D80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187F84 00184D84*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187F88 00184D88*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*80187F8C 00184D8C*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80187F90 00184D90*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/*80187F94 00184D94*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 80187F98 00184D98  4C C6 32 42 */ crset context->cr1eq
/*80187F9C 00184D9C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187FA0 00184DA0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187FA4 00184DA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187FA8 00184DA8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187FAC 00184DAC*/ PPC::Runtime::ASM::mr(context->r5, context->r25);
/*80187FB0 00184DB0*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80187FB4 00184DB4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/*80187FB8 00184DB8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 80187FBC 00184DBC  4C C6 32 42 */ crset context->cr1eq
/*80187FC0 00184DC0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187FC4 00184DC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0F3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187FC8 00184DC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187FCC 00184DCC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187FD0 00184DD0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6ECC @ Get_MemoryOffset_SDA21);
/*80187FD4 00184DD4*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80187FD8 00184DD8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 80187FDC 00184DDC  4C C6 32 42 */ crset context->cr1eq
/*80187FE0 00184DE0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80187FE4 00184DE4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0F98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187FE8 00184DE8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80187FEC 00184DEC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80187FF0 00184DF0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EB4 @ Get_MemoryOffset_SDA21);
/*80187FF4 00184DF4*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80187FF8 00184DF8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 80187FFC 00184DFC  4C C6 32 42 */ crset context->cr1eq
/*80188000 00184E00*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80188004 00184E04*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*80188008 00184E08*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*8018800C 00184E0C*/ PPC::Runtime::ASM::b(.L_80188028);
RUNTIME_PPC_JUMP_LABEL(.L_80188010, 0x80188010) //this is a jump label
/*80188010 00184E10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0F8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188014 00184E14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80188018 00184E18*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018801C 00184E1C*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*80188020 00184E20*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80188024 00184E24*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80188028, 0x80188028) //this is a jump label
/*80188028 00184E28*/ PPC::Runtime::ASM::cmpw(context->r25, context->r31);
/*8018802C 00184E2C*/ PPC::Runtime::ASM::blt(.L_80188010);
/*80188030 00184E30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188034 00184E34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80188038 00184E38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018803C 00184E3C*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*80188040 00184E40*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80188044 00184E44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188048 00184E48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8018804C 00184E4C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188050 00184E50*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x1);
/*80188054 00184E54*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80188058 00184E58*/ PPC::Runtime::ASM::b(.L_80188278);
RUNTIME_PPC_JUMP_LABEL(.L_8018805C, 0x8018805C) //this is a jump label
/*8018805C 00184E5C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188060 00184E60*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188064 00184E64*/ PPC::Runtime::ASM::fdivs(context->f31, context->f1, context->f2);
/*80188068 00184E68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8018806C 00184E6C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80188070 00184E70*/ PPC::Runtime::ASM::bne(.L_80188088);
/*80188074 00184E74*/ PPC::Runtime::ASM::li(context->r29, 0x9);
/*80188078 00184E78*/ PPC::Runtime::ASM::li(context->r28, 0x9);
/*8018807C 00184E7C*/ PPC::Runtime::ASM::mr(context->r27, context->r29);
/*80188080 00184E80*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80188084 00184E84*/ PPC::Runtime::ASM::b(.L_80188120);
RUNTIME_PPC_JUMP_LABEL(.L_80188088, 0x80188088) //this is a jump label
/*80188088 00184E88*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f31);
/*8018808C 00184E8C*/ PPC::Runtime::ASM::lis(context->r5, 0x1062);
/*80188090 00184E90*/ PPC::Runtime::ASM::lis(context->r4, 0x51ec);
/*80188094 00184E94*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80188098 00184E98*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4dd3);
/*8018809C 00184E9C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801880A0 00184EA0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x7ae1);
/*801880A4 00184EA4*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x6667);
/*801880A8 00184EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 801880AC 00184EAC  7C 65 00 96 */ mulhw context->r3 , context->r5 , context->r0
/*801880B0 00184EB0*/ PPC::Runtime::ASM::srawi(context->r5, context->r3, 6);
/* 801880B4 00184EB4  7C 64 00 96 */ mulhw context->r3 , context->r4 , context->r0
/*801880B8 00184EB8*/ PPC::Runtime::ASM::srwi(context->r4, context->r5, 31);
/*801880BC 00184EBC*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r4);
/*801880C0 00184EC0*/ PPC::Runtime::ASM::srawi(context->r3, context->r3, 5);
/*801880C4 00184EC4*/ PPC::Runtime::ASM::srwi(context->r4, context->r3, 31);
/*801880C8 00184EC8*/ PPC::Runtime::ASM::add(context->r10, context->r3, context->r4);
/* 801880CC 00184ECC  7C 66 50 96 */ mulhw context->r3 , context->r6 , context->r10
/*801880D0 00184ED0*/ PPC::Runtime::ASM::srawi(context->r3, context->r3, 2);
/* 801880D4 00184ED4  7C E6 00 96 */ mulhw context->r7 , context->r6 , context->r0
/*801880D8 00184ED8*/ PPC::Runtime::ASM::srwi(context->r4, context->r3, 31);
/*801880DC 00184EDC*/ PPC::Runtime::ASM::add(context->r9, context->r3, context->r4);
/*801880E0 00184EE0*/ PPC::Runtime::ASM::srawi(context->r3, context->r7, 2);
/*801880E4 00184EE4*/ PPC::Runtime::ASM::srwi(context->r4, context->r3, 31);
/*801880E8 00184EE8*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r4);
/* 801880EC 00184EEC  7C 66 40 96 */ mulhw context->r3 , context->r6 , context->r8
/*801880F0 00184EF0*/ PPC::Runtime::ASM::srawi(context->r6, context->r3, 2);
/*801880F4 00184EF4*/ PPC::Runtime::ASM::srawi(context->r3, context->r7, 2);
/*801880F8 00184EF8*/ PPC::Runtime::ASM::srwi(context->r7, context->r6, 31);
/*801880FC 00184EFC*/ PPC::Runtime::ASM::srwi(context->r4, context->r3, 31);
/*80188100 00184F00*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r7);
/*80188104 00184F04*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*80188108 00184F08*/ PPC::Runtime::ASM::mulli(context->r7, context->r9, 0xa);
/*8018810C 00184F0C*/ PPC::Runtime::ASM::mulli(context->r4, context->r6, 0xa);
/*80188110 00184F10*/ PPC::Runtime::ASM::subf(context->r27, context->r7, context->r10);
/*80188114 00184F14*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xa);
/*80188118 00184F18*/ PPC::Runtime::ASM::subf(context->r29, context->r4, context->r8);
/*8018811C 00184F1C*/ PPC::Runtime::ASM::subf(context->r28, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80188120, 0x80188120) //this is a jump label
/*80188120 00184F20*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188124 00184F24*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E0F3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188128 00184F28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8018812C 00184F2C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80188130 00184F30*/ PPC::Runtime::ASM::bne(.L_80188150);
/*80188134 00184F34*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*80188138 00184F38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018813C 00184F3C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80188140 00184F40*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/* 80188144 00184F44  4C C6 32 42 */ crset context->cr1eq
/*80188148 00184F48*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8018814C 00184F4C*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80188150, 0x80188150) //this is a jump label
/*80188150 00184F50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188154 00184F54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0F94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188158 00184F58*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8018815C 00184F5C*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f1);
/*80188160 00184F60*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80188164 00184F64*/ PPC::Runtime::ASM::bne(.L_80188188);
/*80188168 00184F68*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*8018816C 00184F6C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188170 00184F70*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80188174 00184F74*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80188178 00184F78*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/* 8018817C 00184F7C  4C C6 32 42 */ crset context->cr1eq
/*80188180 00184F80*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80188184 00184F84*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80188188, 0x80188188) //this is a jump label
/*80188188 00184F88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0F3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018818C 00184F8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0F94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188190 00184F90*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80188194 00184F94*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f1);
/*80188198 00184F98*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8018819C 00184F9C*/ PPC::Runtime::ASM::bne(.L_801881C0);
/*801881A0 00184FA0*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*801881A4 00184FA4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801881A8 00184FA8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801881AC 00184FAC*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*801881B0 00184FB0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/* 801881B4 00184FB4  4C C6 32 42 */ crset context->cr1eq
/*801881B8 00184FB8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801881BC 00184FBC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801881C0, 0x801881C0) //this is a jump label
/*801881C0 00184FC0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0F94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801881C4 00184FC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801881C8 00184FC8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801881CC 00184FCC*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*801881D0 00184FD0*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*801881D4 00184FD4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EA8 @ Get_MemoryOffset_SDA21);
/*801881D8 00184FD8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 801881DC 00184FDC  4C C6 32 42 */ crset context->cr1eq
/*801881E0 00184FE0*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801881E4 00184FE4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0FD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801881E8 00184FE8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801881EC 00184FEC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801881F0 00184FF0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6ECC @ Get_MemoryOffset_SDA21);
/*801881F4 00184FF4*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*801881F8 00184FF8*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 801881FC 00184FFC  4C C6 32 42 */ crset context->cr1eq
/*80188200 00185000*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80188204 00185004*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0F98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188208 00185008*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8018820C 0018500C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0F6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188210 00185010*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6EB4 @ Get_MemoryOffset_SDA21);
/*80188214 00185014*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
/*80188218 00185018*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/* 8018821C 0018501C  4C C6 32 42 */ crset context->cr1eq
/*80188220 00185020*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80188224 00185024*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80188228 00185028*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*8018822C 0018502C*/ PPC::Runtime::ASM::b(.L_80188248);
RUNTIME_PPC_JUMP_LABEL(.L_80188230, 0x80188230) //this is a jump label
/*80188230 00185030*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188234 00185034*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80188238 00185038*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018823C 0018503C*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*80188240 00185040*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80188244 00185044*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80188248, 0x80188248) //this is a jump label
/*80188248 00185048*/ PPC::Runtime::ASM::cmpw(context->r25, context->r31);
/*8018824C 0018504C*/ PPC::Runtime::ASM::blt(.L_80188230);
/*80188250 00185050*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188254 00185054*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80188258 00185058*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018825C 0018505C*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*80188260 00185060*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80188264 00185064*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188268 00185068*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8018826C 0018506C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188270 00185070*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x1);
/*80188274 00185074*/ PPC::Runtime::ASM::bl(fn_80450774);
RUNTIME_PPC_JUMP_LABEL(.L_80188278, 0x80188278) //this is a jump label
/*80188278 00185078*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8018827C 0018507C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80188280 00185080*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80188284 00185084*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80188288 00185088*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8018828C 0018508C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80188290 00185090*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80188294 00185094*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80188298 00185098*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8018829C 0018509C*/ PPC::Runtime::ASM::blr();
}