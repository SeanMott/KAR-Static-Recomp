//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B2C6C.hpp"
#include "fn_800B297C.hpp"
#include "fn_800B2A1C.hpp"
#include "fn_800B61F4.hpp"
#include "fn_800B2540.hpp"
#include "fn_800B1DC0.hpp"
#include "fn_800B297C.hpp"
#include "fn_800B0A6C.hpp"
#include "fn_800B317C.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B317C.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B5690.hpp"
#include "fn_800B61F4.hpp"
#include "fn_800B2540.hpp"
#include "fn_800B0CDC.hpp"
#include "fn_800B297C.hpp"
#include "fn_800B0A6C.hpp"
#include "fn_800B317C.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B317C.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B5690.hpp"



void fn_800B2C6C(PPC::Runtime::GCContext* context)
{
/*800B2C6C 000AFA6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*800B2C70 000AFA70*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B2C74 000AFA74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800B2C78 000AFA78*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*800B2C7C 000AFA7C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 800B2C80 000AFA80  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*800B2C84 000AFA84*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800B2C88 000AFA88*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800B2C8C 000AFA8C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B2C90 000AFA90*/ PPC::Runtime::ASM::beq(.L_800B313C);
/*800B2C94 000AFA94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B2C98 000AFA98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800B2C9C 000AFA9C*/ PPC::Runtime::ASM::beq(.L_800B2F40);
/*800B2CA0 000AFAA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800B2CA4 000AFAA4*/ PPC::Runtime::ASM::beq(.L_800B2F40);
/*800B2CA8 000AFAA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*800B2CAC 000AFAAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B2CB0 000AFAB0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800B2CB4 000AFAB4*/ PPC::Runtime::ASM::beq(.L_800B2F40);
/*800B2CB8 000AFAB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B2CBC 000AFABC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800B2CC0 000AFAC0*/ PPC::Runtime::ASM::beq(.L_800B2D44);
/*800B2CC4 000AFAC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800B2CC8 000AFAC8*/ PPC::Runtime::ASM::beq(.L_800B2D44);
/*800B2CCC 000AFACC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800B2CD0 000AFAD0*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*800B2CD4 000AFAD4*/ PPC::Runtime::ASM::beq(.L_800B2D44);
/*800B2CD8 000AFAD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800B2CDC 000AFADC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800B2CE0 000AFAE0*/ PPC::Runtime::ASM::beq(.L_800B2CF8);
/*800B2CE4 000AFAE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800B2CE8 000AFAE8*/ PPC::Runtime::ASM::beq(.L_800B2CF8);
/*800B2CEC 000AFAEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*800B2CF0 000AFAF0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x3);
/*800B2CF4 000AFAF4*/ PPC::Runtime::ASM::bl(fn_800B2C6C);
RUNTIME_PPC_JUMP_LABEL(.L_800B2CF8, 0x800B2CF8) //this is a jump label
/*800B2CF8 000AFAF8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800B2CFC 000AFAFC*/ PPC::Runtime::ASM::bne(.L_800B2D14);
/*800B2D00 000AFB00*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800B2D04 000AFB04*/ PPC::Runtime::ASM::bne(.L_800B2D14);
/*800B2D08 000AFB08*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r27));
/* 800B2D0C 000AFB0C  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*800B2D10 000AFB10*/ PPC::Runtime::ASM::beq(.L_800B2D20);
RUNTIME_PPC_JUMP_LABEL(.L_800B2D14, 0x800B2D14) //this is a jump label
/*800B2D14 000AFB14*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800B2D18 000AFB18*/ PPC::Runtime::ASM::bl(fn_800B297C);
/*800B2D1C 000AFB1C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800B2D20, 0x800B2D20) //this is a jump label
/*800B2D20 000AFB20*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x2);
/*800B2D24 000AFB24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*800B2D28 000AFB28*/ PPC::Runtime::ASM::blt(.L_800B2D44);
/*800B2D2C 000AFB2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800B2D30 000AFB30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800B2D34 000AFB34*/ PPC::Runtime::ASM::beq(.L_800B2D40);
/*800B2D38 000AFB38*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800B2D3C 000AFB3C*/ PPC::Runtime::ASM::bl(fn_800B2A1C);
RUNTIME_PPC_JUMP_LABEL(.L_800B2D40, 0x800B2D40) //this is a jump label
/*800B2D40 000AFB40*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800B2D44, 0x800B2D44) //this is a jump label
/*800B2D44 000AFB44*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800B2D48 000AFB48*/ PPC::Runtime::ASM::bne(.L_800B2D60);
/*800B2D4C 000AFB4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800B2D50 000AFB50*/ PPC::Runtime::ASM::bne(.L_800B2D60);
/*800B2D54 000AFB54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/* 800B2D58 000AFB58  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*800B2D5C 000AFB5C*/ PPC::Runtime::ASM::beq(.L_800B2DDC);
RUNTIME_PPC_JUMP_LABEL(.L_800B2D60, 0x800B2D60) //this is a jump label
/*800B2D60 000AFB60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B2D64 000AFB64*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_HighBit);
/*800B2D68 000AFB68*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B2D6C 000AFB6C*/ PPC::Runtime::ASM::addi(context->r5, context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_LowBit);
/*800B2D70 000AFB70*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*800B2D74 000AFB74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B2D78 000AFB78*/ PPC::Runtime::ASM::extrwi(context->r4, context->r4, 1, 27);
/*800B2D7C 000AFB7C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*800B2D80 000AFB80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800B2D84 000AFB84*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800B2D88 000AFB88*/ PPC::Runtime::ASM::bctrl();
/*800B2D8C 000AFB8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B2D90 000AFB90*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_HighBit);
/*800B2D94 000AFB94*/ PPC::Runtime::ASM::addi(context->r4, context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_LowBit);
/*800B2D98 000AFB98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B2D9C 000AFB9C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*800B2DA0 000AFBA0*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*800B2DA4 000AFBA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800B2DA8 000AFBA8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800B2DAC 000AFBAC*/ PPC::Runtime::ASM::bctrl();
/*800B2DB0 000AFBB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B2DB4 000AFBB4*/ PPC::Runtime::ASM::bl(fn_800B61F4);
/*800B2DB8 000AFBB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B2DBC 000AFBBC*/ PPC::Runtime::ASM::bl(fn_800B2540);
/*800B2DC0 000AFBC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B2DC4 000AFBC4*/ PPC::Runtime::ASM::bl(fn_800B1DC0);
/*800B2DC8 000AFBC8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*800B2DCC 000AFBCC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B2DD0 000AFBD0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*800B2DD4 000AFBD4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800B2DD8 000AFBD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800B2DDC, 0x800B2DDC) //this is a jump label
/*800B2DDC 000AFBDC*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x1);
/*800B2DE0 000AFBE0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*800B2DE4 000AFBE4*/ PPC::Runtime::ASM::blt(.L_800B2F40);
/*800B2DE8 000AFBE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B2DEC 000AFBEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800B2DF0 000AFBF0*/ PPC::Runtime::ASM::beq(.L_800B2F3C);
/*800B2DF4 000AFBF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B2DF8 000AFBF8*/ PPC::Runtime::ASM::bl(fn_800B297C);
/*800B2DFC 000AFBFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*800B2E00 000AFC00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B2E04 000AFC04*/ PPC::Runtime::ASM::beq(.L_800B2EC4);
/*800B2E08 000AFC08*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*800B2E0C 000AFC0C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x44);
/*800B2E10 000AFC10*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x50);
/*800B2E14 000AFC14*/ PPC::Runtime::ASM::bl(fn_800B0A6C);
/*800B2E18 000AFC18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*800B2E1C 000AFC1C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*800B2E20 000AFC20*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x5c);
/*800B2E24 000AFC24*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*800B2E28 000AFC28*/ PPC::Runtime::ASM::bl(fn_800B317C);
/*800B2E2C 000AFC2C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*800B2E30 000AFC30*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*800B2E34 000AFC34*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B2E38 000AFC38*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*800B2E3C 000AFC3C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*800B2E40 000AFC40*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*800B2E44 000AFC44*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B2E48 000AFC48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*800B2E4C 000AFC4C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*800B2E50 000AFC50*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x50);
/*800B2E54 000AFC54*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B2E58 000AFC58*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*800B2E5C 000AFC5C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x14);
/*800B2E60 000AFC60*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x5c);
/*800B2E64 000AFC64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*800B2E68 000AFC68*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*800B2E6C 000AFC6C*/ PPC::Runtime::ASM::bl(fn_800B317C);
/*800B2E70 000AFC70*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*800B2E74 000AFC74*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*800B2E78 000AFC78*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B2E7C 000AFC7C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*800B2E80 000AFC80*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*800B2E84 000AFC84*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*800B2E88 000AFC88*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B2E8C 000AFC8C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*800B2E90 000AFC90*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*800B2E94 000AFC94*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x50);
/*800B2E98 000AFC98*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B2E9C 000AFC9C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*800B2EA0 000AFCA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800B2EA4 000AFCA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800B2EA8 000AFCA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*800B2EAC 000AFCAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*800B2EB0 000AFCB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*800B2EB4 000AFCB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*800B2EB8 000AFCB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800B2EBC 000AFCBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*800B2EC0 000AFCC0*/ PPC::Runtime::ASM::b(.L_800B2F14);
RUNTIME_PPC_JUMP_LABEL(.L_800B2EC4, 0x800B2EC4) //this is a jump label
/*800B2EC4 000AFCC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B2EC8 000AFCC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800B2ECC 000AFCCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*800B2ED0 000AFCD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*800B2ED4 000AFCD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800B2ED8 000AFCD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*800B2EDC 000AFCDC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*800B2EE0 000AFCE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*800B2EE4 000AFCE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800B2EE8 000AFCE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800B2EEC 000AFCEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*800B2EF0 000AFCF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*800B2EF4 000AFCF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800B2EF8 000AFCF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800B2EFC 000AFCFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*800B2F00 000AFD00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*800B2F04 000AFD04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*800B2F08 000AFD08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800B2F0C 000AFD0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*800B2F10 000AFD10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800B2F14, 0x800B2F14) //this is a jump label
/*800B2F14 000AFD14*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*800B2F18 000AFD18*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B2F1C 000AFD1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B2F20 000AFD20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B2F24 000AFD24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800B2F28 000AFD28*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B2F2C 000AFD2C*/ PPC::Runtime::ASM::beq(.L_800B2F3C);
/*800B2F30 000AFD30*/ PPC::Runtime::ASM::bl(fn_800B5690);
/*800B2F34 000AFD34*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B2F38 000AFD38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800B2F3C, 0x800B2F3C) //this is a jump label
/*800B2F3C 000AFD3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800B2F40, 0x800B2F40) //this is a jump label
/*800B2F40 000AFD40*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800B2F44 000AFD44*/ PPC::Runtime::ASM::bne(.L_800B2F5C);
/*800B2F48 000AFD48*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800B2F4C 000AFD4C*/ PPC::Runtime::ASM::bne(.L_800B2F5C);
/*800B2F50 000AFD50*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/* 800B2F54 000AFD54  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*800B2F58 000AFD58*/ PPC::Runtime::ASM::beq(.L_800B2FDC);
RUNTIME_PPC_JUMP_LABEL(.L_800B2F5C, 0x800B2F5C) //this is a jump label
/*800B2F5C 000AFD5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800B2F60 000AFD60*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_HighBit);
/*800B2F64 000AFD64*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/*800B2F68 000AFD68*/ PPC::Runtime::ASM::addi(context->r5, context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_LowBit);
/*800B2F6C 000AFD6C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*800B2F70 000AFD70*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B2F74 000AFD74*/ PPC::Runtime::ASM::extrwi(context->r4, context->r4, 1, 27);
/*800B2F78 000AFD78*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*800B2F7C 000AFD7C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800B2F80 000AFD80*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800B2F84 000AFD84*/ PPC::Runtime::ASM::bctrl();
/*800B2F88 000AFD88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800B2F8C 000AFD8C*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_HighBit);
/*800B2F90 000AFD90*/ PPC::Runtime::ASM::addi(context->r4, context->r3, StructWithFuncPtrs_40_DoesCameraStuffAndLoadingImages @ Get_MemoryOffset_LowBit);
/*800B2F94 000AFD94*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B2F98 000AFD98*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*800B2F9C 000AFD9C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*800B2FA0 000AFDA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800B2FA4 000AFDA4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800B2FA8 000AFDA8*/ PPC::Runtime::ASM::bctrl();
/*800B2FAC 000AFDAC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B2FB0 000AFDB0*/ PPC::Runtime::ASM::bl(fn_800B61F4);
/*800B2FB4 000AFDB4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B2FB8 000AFDB8*/ PPC::Runtime::ASM::bl(fn_800B2540);
/*800B2FBC 000AFDBC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B2FC0 000AFDC0*/ PPC::Runtime::ASM::bl(fn_800B0CDC);
/*800B2FC4 000AFDC4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*800B2FC8 000AFDC8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800B2FCC 000AFDCC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800B2FD0 000AFDD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/*800B2FD4 000AFDD4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*800B2FD8 000AFDD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800B2FDC, 0x800B2FDC) //this is a jump label
/*800B2FDC 000AFDDC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*800B2FE0 000AFDE0*/ PPC::Runtime::ASM::blt(.L_800B313C);
/*800B2FE4 000AFDE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B2FE8 000AFDE8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800B2FEC 000AFDEC*/ PPC::Runtime::ASM::beq(.L_800B3138);
/*800B2FF0 000AFDF0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B2FF4 000AFDF4*/ PPC::Runtime::ASM::bl(fn_800B297C);
/*800B2FF8 000AFDF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r28));
/*800B2FFC 000AFDFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B3000 000AFE00*/ PPC::Runtime::ASM::beq(.L_800B30C0);
/*800B3004 000AFE04*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800B3008 000AFE08*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*800B300C 000AFE0C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*800B3010 000AFE10*/ PPC::Runtime::ASM::bl(fn_800B0A6C);
/*800B3014 000AFE14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r28));
/*800B3018 000AFE18*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x20);
/*800B301C 000AFE1C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*800B3020 000AFE20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*800B3024 000AFE24*/ PPC::Runtime::ASM::bl(fn_800B317C);
/*800B3028 000AFE28*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B302C 000AFE2C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800B3030 000AFE30*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B3034 000AFE34*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r28));
/*800B3038 000AFE38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B303C 000AFE3C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*800B3040 000AFE40*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B3044 000AFE44*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*800B3048 000AFE48*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B304C 000AFE4C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800B3050 000AFE50*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B3054 000AFE54*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r28));
/*800B3058 000AFE58*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x14);
/*800B305C 000AFE5C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*800B3060 000AFE60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r28));
/*800B3064 000AFE64*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*800B3068 000AFE68*/ PPC::Runtime::ASM::bl(fn_800B317C);
/*800B306C 000AFE6C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B3070 000AFE70*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800B3074 000AFE74*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B3078 000AFE78*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r28));
/*800B307C 000AFE7C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B3080 000AFE80*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*800B3084 000AFE84*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B3088 000AFE88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r28));
/*800B308C 000AFE8C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B3090 000AFE90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800B3094 000AFE94*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B3098 000AFE98*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*800B309C 000AFE9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800B30A0 000AFEA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*800B30A4 000AFEA4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r28));
/*800B30A8 000AFEA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*800B30AC 000AFEAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*800B30B0 000AFEB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r28));
/*800B30B4 000AFEB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*800B30B8 000AFEB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
/*800B30BC 000AFEBC*/ PPC::Runtime::ASM::b(.L_800B3110);
RUNTIME_PPC_JUMP_LABEL(.L_800B30C0, 0x800B30C0) //this is a jump label
/*800B30C0 000AFEC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*800B30C4 000AFEC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*800B30C8 000AFEC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r28));
/*800B30CC 000AFECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r28));
/*800B30D0 000AFED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*800B30D4 000AFED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800B30D8 000AFED8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r28));
/*800B30DC 000AFEDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r28));
/*800B30E0 000AFEE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*800B30E4 000AFEE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800B30E8 000AFEE8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*800B30EC 000AFEEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*800B30F0 000AFEF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800B30F4 000AFEF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*800B30F8 000AFEF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r28));
/*800B30FC 000AFEFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*800B3100 000AFF00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*800B3104 000AFF04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*800B3108 000AFF08*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r28));
/*800B310C 000AFF0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800B3110, 0x800B3110) //this is a jump label
/*800B3110 000AFF10*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*800B3114 000AFF14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B3118 000AFF18*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*800B311C 000AFF1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*800B3120 000AFF20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*800B3124 000AFF24*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B3128 000AFF28*/ PPC::Runtime::ASM::beq(.L_800B3138);
/*800B312C 000AFF2C*/ PPC::Runtime::ASM::bl(fn_800B5690);
/*800B3130 000AFF30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B3134 000AFF34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800B3138, 0x800B3138) //this is a jump label
/*800B3138 000AFF38*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800B313C, 0x800B313C) //this is a jump label
/*800B313C 000AFF3C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*800B3140 000AFF40*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800B3144 000AFF44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800B3148 000AFF48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B314C 000AFF4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*800B3150 000AFF50*/ PPC::Runtime::ASM::blr();
}