//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800528F0.hpp"
#include "fn_800551A8.hpp"
#include "fn_800528F0.hpp"
#include "fn_8006E130.hpp"
#include "fn_80052844.hpp"
#include "fn_80052844.hpp"
#include "fn_800550F4.hpp"
#include "fn_800550BC.hpp"
#include "fn_801D4150.hpp"



void fn_801D4F94(PPC::Runtime::GCContext* context)
{
/*801D4F94 001D1D94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*801D4F98 001D1D98*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D4F9C 001D1D9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*801D4FA0 001D1DA0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801D4FA4 001D1DA4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801D4FA8 001D1DA8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801D4FAC 001D1DAC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801D4FB0 001D1DB0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801D4FB4 001D1DB4*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*801D4FB8 001D1DB8*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*801D4FBC 001D1DBC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801D4FC0 001D1DC0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r25));
/*801D4FC4 001D1DC4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801D4FC8 001D1DC8*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*801D4FCC 001D1DCC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r25));
/*801D4FD0 001D1DD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*801D4FD4 001D1DD4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801D4FD8 001D1DD8*/ PPC::Runtime::ASM::beq(.L_801D5198);
/*801D4FDC 001D1DDC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*801D4FE0 001D1DE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*801D4FE4 001D1DE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801D4FE8 001D1DE8*/ PPC::Runtime::ASM::beq(.L_801D5198);
/*801D4FEC 001D1DEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r24));
/*801D4FF0 001D1DF0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*801D4FF4 001D1DF4*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r25));
/*801D4FF8 001D1DF8*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r25));
/*801D4FFC 001D1DFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801D5000 001D1E00*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D5004 001D1E04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r24));
/*801D5008 001D1E08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801D500C, 0x801D500C) //this is a jump label
/*801D500C 001D1E0C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801D5010 001D1E10*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*801D5014 001D1E14*/ PPC::Runtime::ASM::bl(fn_800528F0);
/*801D5018 001D1E18*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*801D501C 001D1E1C*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*801D5020 001D1E20*/ PPC::Runtime::ASM::blt(.L_801D500C);
/*801D5024 001D1E24*/ PPC::Runtime::ASM::li(context->r23, 0x20);
/*801D5028 001D1E28*/ PPC::Runtime::ASM::b(.L_801D5058);
RUNTIME_PPC_JUMP_LABEL(.L_801D502C, 0x801D502C) //this is a jump label
/*801D502C 001D1E2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r24));
/*801D5030 001D1E30*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r23);
/*801D5034 001D1E34*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 801D5038 001D1E38  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801D503C 001D1E3C*/ PPC::Runtime::ASM::bne(.L_801D5048);
/*801D5040 001D1E40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801D5044 001D1E44*/ PPC::Runtime::ASM::bl(fn_800551A8);
RUNTIME_PPC_JUMP_LABEL(.L_801D5048, 0x801D5048) //this is a jump label
/*801D5048 001D1E48*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x8);
/*801D504C 001D1E4C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801D5050 001D1E50*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*801D5054 001D1E54*/ PPC::Runtime::ASM::bl(fn_800528F0);
RUNTIME_PPC_JUMP_LABEL(.L_801D5058, 0x801D5058) //this is a jump label
/*801D5058 001D1E58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D505C 001D1E5C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*801D5060 001D1E60*/ PPC::Runtime::ASM::bne(.L_801D502C);
/*801D5064 001D1E64*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801D5068 001D1E68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D506C 001D1E6C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*801D5070 001D1E70*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801D5074 001D1E74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D5078 001D1E78*/ PPC::Runtime::ASM::beq(.L_801D5190);
/*801D507C 001D1E7C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*801D5080 001D1E80*/ PPC::Runtime::ASM::slwi(context->r27, context->r0, 3);
/*801D5084 001D1E84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*801D5088 001D1E88*/ PPC::Runtime::ASM::b(.L_801D50F8);
RUNTIME_PPC_JUMP_LABEL(.L_801D508C, 0x801D508C) //this is a jump label
/*801D508C 001D1E8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r24));
/*801D5090 001D1E90*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r27);
/*801D5094 001D1E94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801D5098 001D1E98*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 801D509C 001D1E9C  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801D50A0 001D1EA0*/ PPC::Runtime::ASM::bne(.L_801D50B4);
/*801D50A4 001D1EA4*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*801D50A8 001D1EA8*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*801D50AC 001D1EAC*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*801D50B0 001D1EB0*/ PPC::Runtime::ASM::bl(fn_8006E130);
RUNTIME_PPC_JUMP_LABEL(.L_801D50B4, 0x801D50B4) //this is a jump label
/*801D50B4 001D1EB4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D50B8 001D1EB8*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*801D50BC 001D1EBC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801D50C0 001D1EC0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D50C4 001D1EC4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnim);
/*801D50C8 001D1EC8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801D50CC 001D1ECC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x8);
/*801D50D0 001D1ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D50D4 001D1ED4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*801D50D8 001D1ED8*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*801D50DC 001D1EDC*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*801D50E0 001D1EE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801D50E4 001D1EE4*/ PPC::Runtime::ASM::add(context->r30, context->r30, context->r3);
/*801D50E8 001D1EE8*/ PPC::Runtime::ASM::beq(.L_801D50F8);
/*801D50EC 001D1EEC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801D50F0 001D1EF0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*801D50F4 001D1EF4*/ PPC::Runtime::ASM::bl(fn_80052844);
RUNTIME_PPC_JUMP_LABEL(.L_801D50F8, 0x801D50F8) //this is a jump label
/*801D50F8 001D1EF8*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801D50FC 001D1EFC*/ PPC::Runtime::ASM::extsb(context->r0, context->r6);
/*801D5100 001D1F00*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801D5104 001D1F04*/ PPC::Runtime::ASM::bne(.L_801D508C);
/*801D5108 001D1F08*/ PPC::Runtime::ASM::b(.L_801D5140);
/*801D510C 001D1F0C*/ PPC::Runtime::ASM::b(.L_801D5134);
RUNTIME_PPC_JUMP_LABEL(.L_801D5110, 0x801D5110) //this is a jump label
/*801D5110 001D1F10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r24));
/*801D5114 001D1F14*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801D5118 001D1F18*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801D511C 001D1F1C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r23);
/*801D5120 001D1F20*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnim);
/*801D5124 001D1F24*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x8);
/*801D5128 001D1F28*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801D512C 001D1F2C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*801D5130 001D1F30*/ PPC::Runtime::ASM::bl(fn_80052844);
RUNTIME_PPC_JUMP_LABEL(.L_801D5134, 0x801D5134) //this is a jump label
/*801D5134 001D1F34*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D5138 001D1F38*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801D513C 001D1F3C*/ PPC::Runtime::ASM::bne(.L_801D5110);
RUNTIME_PPC_JUMP_LABEL(.L_801D5140, 0x801D5140) //this is a jump label
/*801D5140 001D1F40*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801D5144 001D1F44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D5148 001D1F48*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801D514C 001D1F4C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAllByFlags);
/*801D5150 001D1F50*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/* 801D5154 001D1F54  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801D5158 001D1F58*/ PPC::Runtime::ASM::beq(.L_801D516C);
/*801D515C 001D1F5C*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801D5160 001D1F60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D5164 001D1F64*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*801D5168 001D1F68*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_801D516C, 0x801D516C) //this is a jump label
/*801D516C 001D1F6C*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*801D5170 001D1F70*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801D5174 001D1F74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D5178 001D1F78*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*801D517C 001D1F7C*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*801D5180 001D1F80*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*801D5184 001D1F84*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*801D5188 001D1F88*/ PPC::Runtime::ASM::bl(fn_801D4150);
/*801D518C 001D1F8C*/ PPC::Runtime::ASM::b(.L_801D5198);
RUNTIME_PPC_JUMP_LABEL(.L_801D5190, 0x801D5190) //this is a jump label
/*801D5190 001D1F90*/ PPC::Runtime::ASM::slwi(context->r23, context->r0, 3);
/*801D5194 001D1F94*/ PPC::Runtime::ASM::b(.L_801D5134);
RUNTIME_PPC_JUMP_LABEL(.L_801D5198, 0x801D5198) //this is a jump label
/*801D5198 001D1F98*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*801D519C 001D1F9C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*801D51A0 001D1FA0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801D51A4 001D1FA4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801D51A8 001D1FA8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801D51AC 001D1FAC*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*801D51B0 001D1FB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*801D51B4 001D1FB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D51B8 001D1FB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*801D51BC 001D1FBC*/ PPC::Runtime::ASM::blr();
}