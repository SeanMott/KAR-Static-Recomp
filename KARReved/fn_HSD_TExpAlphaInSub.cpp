//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn_HSD_TExpUnref.hpp"



void fn_HSD_TExpAlphaInSub(PPC::Runtime::GCContext* context)
{
/*80422B90 0041F990*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80422B94 0041F994*/ PPC::Runtime::ASM::mflr(context->r0);
/*80422B98 0041F998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80422B9C 0041F99C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80422BA0 0041F9A0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80422BA4 0041F9A4*/ PPC::Runtime::ASM::slwi(context->r7, context->r6, 3);
/*80422BA8 0041F9A8*/ PPC::Runtime::ASM::mr(context->r27, context->r6);
/*80422BAC 0041F9AC*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r7);
/* 80422BB0 0041F9B0  7C BD 2B 79 */ mr. context->r29 , context->r5
/*80422BB4 0041F9B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*80422BB8 0041F9B8*/ PPC::Runtime::ASM::lis(context->r6, lbl_80504950 @ Get_MemoryOffset_HighBit);
/*80422BBC 0041F9BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80422BC0 0041F9C0*/ PPC::Runtime::ASM::addi(context->r31, context->r6, lbl_80504950 @ Get_MemoryOffset_LowBit);
/*80422BC4 0041F9C4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80422BC8 0041F9C8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80422BCC 0041F9CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80422BD0 0041F9D0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80422BD4 0041F9D4*/ PPC::Runtime::ASM::bne(.L_80422BE0);
/*80422BD8 0041F9D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80422BDC 0041F9DC*/ PPC::Runtime::ASM::b(.L_80422C08);
RUNTIME_PPC_JUMP_LABEL(.L_80422BE0, 0x80422BE0) //this is a jump label
/*80422BE0 0041F9E0*/ PPC::Runtime::ASM::addis(context->r0, context->r29, 0x1);
/*80422BE4 0041F9E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80422BE8 0041F9E8*/ PPC::Runtime::ASM::bne(.L_80422BF4);
/*80422BEC 0041F9EC*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80422BF0 0041F9F0*/ PPC::Runtime::ASM::b(.L_80422C08);
RUNTIME_PPC_JUMP_LABEL(.L_80422BF4, 0x80422BF4) //this is a jump label
/*80422BF4 0041F9F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80422BF8 0041F9F8*/ PPC::Runtime::ASM::bne(.L_80422C04);
/*80422BFC 0041F9FC*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80422C00 0041FA00*/ PPC::Runtime::ASM::b(.L_80422C08);
RUNTIME_PPC_JUMP_LABEL(.L_80422C04, 0x80422C04) //this is a jump label
/*80422C04 0041FA04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80422C08, 0x80422C08) //this is a jump label
/*80422C08 0041FA08*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*80422C0C 0041FA0C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x7);
/*80422C10 0041FA10*/ PPC::Runtime::ASM::add(context->r28, context->r3, context->r7);
/*80422C14 0041FA14*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80422C18 0041FA18*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r28));
/*80422C1C 0041FA1C*/ PPC::Runtime::ASM::beq(.L_80422C30);
/*80422C20 0041FA20*/ PPC::Runtime::ASM::blt(.L_80422CF4);
/*80422C24 0041FA24*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x10);
/*80422C28 0041FA28*/ PPC::Runtime::ASM::bge(.L_80422CF4);
/*80422C2C 0041FA2C*/ PPC::Runtime::ASM::b(.L_80422C48);
RUNTIME_PPC_JUMP_LABEL(.L_80422C30, 0x80422C30) //this is a jump label
/*80422C30 0041FA30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80422C34 0041FA34*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*80422C38 0041FA38*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*80422C3C 0041FA3C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r28));
/*80422C40 0041FA40*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80422C44 0041FA44*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422C48, 0x80422C48) //this is a jump label
/*80422C48 0041FA48*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80422C4C 0041FA4C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x9);
/*80422C50 0041FA50*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80422C54 0041FA54*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80422C58 0041FA58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*80422C5C 0041FA5C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r28));
/*80422C60 0041FA60*/ PPC::Runtime::ASM::bgt(.L_80422CB4);
/*80422C64 0041FA64*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80504B50 @ Get_MemoryOffset_HighBit);
/*80422C68 0041FA68*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80422C6C 0041FA6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80504B50 @ Get_MemoryOffset_LowBit);
/*80422C70 0041FA70*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80422C74 0041FA74*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80422C78 0041FA78*/ PPC::Runtime::ASM::bctr();
/*80422C7C 0041FA7C*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*80422C80 0041FA80*/ PPC::Runtime::ASM::b(.L_80422CB8);
/*80422C84 0041FA84*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*80422C88 0041FA88*/ PPC::Runtime::ASM::b(.L_80422CB8);
/*80422C8C 0041FA8C*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80422C90 0041FA90*/ PPC::Runtime::ASM::b(.L_80422CB8);
/*80422C94 0041FA94*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80422C98 0041FA98*/ PPC::Runtime::ASM::b(.L_80422CB8);
/*80422C9C 0041FA9C*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80422CA0 0041FAA0*/ PPC::Runtime::ASM::b(.L_80422CB8);
/*80422CA4 0041FAA4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80422CA8 0041FAA8*/ PPC::Runtime::ASM::b(.L_80422CB8);
/*80422CAC 0041FAAC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80422CB0 0041FAB0*/ PPC::Runtime::ASM::b(.L_80422CB8);
RUNTIME_PPC_JUMP_LABEL(.L_80422CB4, 0x80422CB4) //this is a jump label
/*80422CB4 0041FAB4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80422CB8, 0x80422CB8) //this is a jump label
/*80422CB8 0041FAB8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r3));
/*80422CBC 0041FABC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0xff);
/*80422CC0 0041FAC0*/ PPC::Runtime::ASM::bne(.L_80422CCC);
/*80422CC4 0041FAC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r3));
/*80422CC8 0041FAC8*/ PPC::Runtime::ASM::b(.L_80422CE8);
RUNTIME_PPC_JUMP_LABEL(.L_80422CCC, 0x80422CCC) //this is a jump label
/*80422CCC 0041FACC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*80422CD0 0041FAD0*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*80422CD4 0041FAD4*/ PPC::Runtime::ASM::beq(.L_80422CE8);
/*80422CD8 0041FAD8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x17c);
/*80422CDC 0041FADC*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422CE0 0041FAE0*/ PPC::Runtime::ASM::li(context->r4, 0x2ee);
/*80422CE4 0041FAE4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422CE8, 0x80422CE8) //this is a jump label
/*80422CE8 0041FAE8*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*80422CEC 0041FAEC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*80422CF0 0041FAF0*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422CF4, 0x80422CF4) //this is a jump label
/*80422CF4 0041FAF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*80422CF8 0041FAF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80422CFC 0041FAFC*/ PPC::Runtime::ASM::beq(.L_80422F0C);
/*80422D00 0041FB00*/ PPC::Runtime::ASM::bge(.L_80422D14);
/*80422D04 0041FB04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80422D08 0041FB08*/ PPC::Runtime::ASM::beq(.L_80422D24);
/*80422D0C 0041FB0C*/ PPC::Runtime::ASM::bge(.L_80422D40);
/*80422D10 0041FB10*/ PPC::Runtime::ASM::b(.L_80422F54);
RUNTIME_PPC_JUMP_LABEL(.L_80422D14, 0x80422D14) //this is a jump label
/*80422D14 0041FB14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80422D18 0041FB18*/ PPC::Runtime::ASM::beq(.L_80422E1C);
/*80422D1C 0041FB1C*/ PPC::Runtime::ASM::bge(.L_80422F54);
/*80422D20 0041FB20*/ PPC::Runtime::ASM::b(.L_80422F30);
RUNTIME_PPC_JUMP_LABEL(.L_80422D24, 0x80422D24) //this is a jump label
/*80422D24 0041FB24*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80422D28 0041FB28*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*80422D2C 0041FB2C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80422D30 0041FB30*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*80422D34 0041FB34*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80422D38 0041FB38*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r28));
/*80422D3C 0041FB3C*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422D40, 0x80422D40) //this is a jump label
/*80422D40 0041FB40*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x5);
/*80422D44 0041FB44*/ PPC::Runtime::ASM::beq(.L_80422D58);
/*80422D48 0041FB48*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x190);
/*80422D4C 0041FB4C*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422D50 0041FB50*/ PPC::Runtime::ASM::li(context->r4, 0x305);
/*80422D54 0041FB54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422D58, 0x80422D58) //this is a jump label
/*80422D58 0041FB58*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x3);
/*80422D5C 0041FB5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80422D60 0041FB60*/ PPC::Runtime::ASM::beq(.L_80422D70);
/*80422D64 0041FB64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r29));
/*80422D68 0041FB68*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80422D6C 0041FB6C*/ PPC::Runtime::ASM::beq(.L_80422D74);
RUNTIME_PPC_JUMP_LABEL(.L_80422D70, 0x80422D70) //this is a jump label
/*80422D70 0041FB70*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80422D74, 0x80422D74) //this is a jump label
/*80422D74 0041FB74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80422D78 0041FB78*/ PPC::Runtime::ASM::bne(.L_80422D8C);
/*80422D7C 0041FB7C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1a0);
/*80422D80 0041FB80*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422D84 0041FB84*/ PPC::Runtime::ASM::li(context->r4, 0x306);
/*80422D88 0041FB88*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422D8C, 0x80422D8C) //this is a jump label
/*80422D8C 0041FB8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80422D90 0041FB90*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80422D94 0041FB94*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80422D98 0041FB98*/ PPC::Runtime::ASM::bne(.L_80422DA4);
/*80422D9C 0041FB9C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80422DA0 0041FBA0*/ PPC::Runtime::ASM::b(.L_80422DCC);
RUNTIME_PPC_JUMP_LABEL(.L_80422DA4, 0x80422DA4) //this is a jump label
/*80422DA4 0041FBA4*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x1);
/*80422DA8 0041FBA8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80422DAC 0041FBAC*/ PPC::Runtime::ASM::bne(.L_80422DB8);
/*80422DB0 0041FBB0*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80422DB4 0041FBB4*/ PPC::Runtime::ASM::b(.L_80422DCC);
RUNTIME_PPC_JUMP_LABEL(.L_80422DB8, 0x80422DB8) //this is a jump label
/*80422DB8 0041FBB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80422DBC 0041FBBC*/ PPC::Runtime::ASM::bne(.L_80422DC8);
/*80422DC0 0041FBC0*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80422DC4 0041FBC4*/ PPC::Runtime::ASM::b(.L_80422DCC);
RUNTIME_PPC_JUMP_LABEL(.L_80422DC8, 0x80422DC8) //this is a jump label
/*80422DC8 0041FBC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80422DCC, 0x80422DCC) //this is a jump label
/*80422DCC 0041FBCC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80422DD0 0041FBD0*/ PPC::Runtime::ASM::beq(.L_80422E0C);
/*80422DD4 0041FBD4*/ PPC::Runtime::ASM::bge(.L_80422F64);
/*80422DD8 0041FBD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80422DDC 0041FBDC*/ PPC::Runtime::ASM::beq(.L_80422DE4);
/*80422DE0 0041FBE0*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422DE4, 0x80422DE4) //this is a jump label
/*80422DE4 0041FBE4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*80422DE8 0041FBE8*/ PPC::Runtime::ASM::bne(.L_80422DFC);
/*80422DEC 0041FBEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80422DF0 0041FBF0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80422DF4 0041FBF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80422DF8 0041FBF8*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422DFC, 0x80422DFC) //this is a jump label
/*80422DFC 0041FBFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80422E00 0041FC00*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80422E04 0041FC04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80422E08 0041FC08*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422E0C, 0x80422E0C) //this is a jump label
/*80422E0C 0041FC0C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80422E10 0041FC10*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80422E14 0041FC14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80422E18 0041FC18*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422E1C, 0x80422E1C) //this is a jump label
/*80422E1C 0041FC1C*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x5);
/*80422E20 0041FC20*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80422E24 0041FC24*/ PPC::Runtime::ASM::subfic(context->r0, context->r3, 0x1);
/*80422E28 0041FC28*/ PPC::Runtime::ASM::orc(context->r3, context->r4, context->r3);
/*80422E2C 0041FC2C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 1);
/*80422E30 0041FC30*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 80422E34 0041FC34  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*80422E38 0041FC38*/ PPC::Runtime::ASM::bne(.L_80422E40);
/*80422E3C 0041FC3C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80422E40, 0x80422E40) //this is a jump label
/*80422E40 0041FC40*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80422E44 0041FC44*/ PPC::Runtime::ASM::bne(.L_80422E58);
/*80422E48 0041FC48*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1c0);
/*80422E4C 0041FC4C*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422E50 0041FC50*/ PPC::Runtime::ASM::li(context->r4, 0x30a);
/*80422E54 0041FC54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422E58, 0x80422E58) //this is a jump label
/*80422E58 0041FC58*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80422E5C 0041FC5C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*80422E60 0041FC60*/ PPC::Runtime::ASM::beq(.L_80422E74);
/*80422E64 0041FC64*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1e4);
/*80422E68 0041FC68*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422E6C 0041FC6C*/ PPC::Runtime::ASM::li(context->r4, 0x30b);
/*80422E70 0041FC70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422E74, 0x80422E74) //this is a jump label
/*80422E74 0041FC74*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*80422E78 0041FC78*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80422E7C 0041FC7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80422E80 0041FC80*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80422E84 0041FC84*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80422E88 0041FC88*/ PPC::Runtime::ASM::bne(.L_80422E94);
/*80422E8C 0041FC8C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80422E90 0041FC90*/ PPC::Runtime::ASM::b(.L_80422EBC);
RUNTIME_PPC_JUMP_LABEL(.L_80422E94, 0x80422E94) //this is a jump label
/*80422E94 0041FC94*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x1);
/*80422E98 0041FC98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80422E9C 0041FC9C*/ PPC::Runtime::ASM::bne(.L_80422EA8);
/*80422EA0 0041FCA0*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80422EA4 0041FCA4*/ PPC::Runtime::ASM::b(.L_80422EBC);
RUNTIME_PPC_JUMP_LABEL(.L_80422EA8, 0x80422EA8) //this is a jump label
/*80422EA8 0041FCA8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80422EAC 0041FCAC*/ PPC::Runtime::ASM::bne(.L_80422EB8);
/*80422EB0 0041FCB0*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80422EB4 0041FCB4*/ PPC::Runtime::ASM::b(.L_80422EBC);
RUNTIME_PPC_JUMP_LABEL(.L_80422EB8, 0x80422EB8) //this is a jump label
/*80422EB8 0041FCB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80422EBC, 0x80422EBC) //this is a jump label
/*80422EBC 0041FCBC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80422EC0 0041FCC0*/ PPC::Runtime::ASM::beq(.L_80422EFC);
/*80422EC4 0041FCC4*/ PPC::Runtime::ASM::bge(.L_80422F64);
/*80422EC8 0041FCC8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80422ECC 0041FCCC*/ PPC::Runtime::ASM::beq(.L_80422ED4);
/*80422ED0 0041FCD0*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422ED4, 0x80422ED4) //this is a jump label
/*80422ED4 0041FCD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*80422ED8 0041FCD8*/ PPC::Runtime::ASM::bne(.L_80422EEC);
/*80422EDC 0041FCDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80422EE0 0041FCE0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80422EE4 0041FCE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80422EE8 0041FCE8*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422EEC, 0x80422EEC) //this is a jump label
/*80422EEC 0041FCEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80422EF0 0041FCF0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80422EF4 0041FCF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80422EF8 0041FCF8*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422EFC, 0x80422EFC) //this is a jump label
/*80422EFC 0041FCFC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80422F00 0041FD00*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80422F04 0041FD04*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80422F08 0041FD08*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422F0C, 0x80422F0C) //this is a jump label
/*80422F0C 0041FD0C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x5);
/*80422F10 0041FD10*/ PPC::Runtime::ASM::beq(.L_80422F24);
/*80422F14 0041FD14*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x190);
/*80422F18 0041FD18*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422F1C 0041FD1C*/ PPC::Runtime::ASM::li(context->r4, 0x310);
/*80422F20 0041FD20*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422F24, 0x80422F24) //this is a jump label
/*80422F24 0041FD24*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80422F28 0041FD28*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r28));
/*80422F2C 0041FD2C*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422F30, 0x80422F30) //this is a jump label
/*80422F30 0041FD30*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x5);
/*80422F34 0041FD34*/ PPC::Runtime::ASM::beq(.L_80422F48);
/*80422F38 0041FD38*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x190);
/*80422F3C 0041FD3C*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422F40 0041FD40*/ PPC::Runtime::ASM::li(context->r4, 0x314);
/*80422F44 0041FD44*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422F48, 0x80422F48) //this is a jump label
/*80422F48 0041FD48*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80422F4C 0041FD4C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r28));
/*80422F50 0041FD50*/ PPC::Runtime::ASM::b(.L_80422F64);
RUNTIME_PPC_JUMP_LABEL(.L_80422F54, 0x80422F54) //this is a jump label
/*80422F54 0041FD54*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80422F58 0041FD58*/ PPC::Runtime::ASM::li(context->r4, 0x318);
/*80422F5C 0041FD5C*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_478 @ Get_MemoryOffset_SDA21);
/*80422F60 0041FD60*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80422F64, 0x80422F64) //this is a jump label
/*80422F64 0041FD64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80422F68 0041FD68*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80422F6C 0041FD6C*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80422F70 0041FD70*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80422F74 0041FD74*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80422F78 0041FD78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80422F7C 0041FD7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80422F80 0041FD80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80422F84 0041FD84*/ PPC::Runtime::ASM::blr();
}