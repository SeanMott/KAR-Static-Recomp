//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016D918.hpp"
#include "fn_80142EBC.hpp"
#include "fn_8016E6C0.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016D918.hpp"
#include "fn_80142EBC.hpp"
#include "fn_8016E6C0.hpp"



void fn_8016CB54(PPC::Runtime::GCContext* context)
{
/*8016CB54 00169954*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016CB58 00169958*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016CB5C 0016995C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016CB60 00169960*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016CB64 00169964*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016CB68 00169968*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016CB6C 0016996C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016CB70 00169970*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8016CB74 00169974*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8016CB78 00169978*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8016CB7C 0016997C*/ PPC::Runtime::ASM::bge(.L_8016CC24);
/*8016CB80 00169980*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016CB84 00169984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r3));
/*8016CB88 00169988*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016CB8C 0016998C*/ PPC::Runtime::ASM::beq(.L_8016CCD8);
/*8016CB90 00169990*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8016CB94 00169994*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016CB98 00169998*/ PPC::Runtime::ASM::mulli(context->r29, context->r0, 0x50);
/*8016CB9C 0016999C*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r29);
/*8016CBA0 001699A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r31));
/*8016CBA4 001699A4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016CBA8 001699A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016CBAC 001699AC*/ PPC::Runtime::ASM::beq(.L_8016CC18);
/*8016CBB0 001699B0*/ PPC::Runtime::ASM::bge(.L_8016CCD8);
/*8016CBB4 001699B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016CBB8 001699B8*/ PPC::Runtime::ASM::bge(.L_8016CBC4);
/*8016CBBC 001699BC*/ PPC::Runtime::ASM::b(.L_8016CCD8);
/*8016CBC0 001699C0*/ PPC::Runtime::ASM::b(.L_8016CCD8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CBC4, 0x8016CBC4) //this is a jump label
/*8016CBC4 001699C4*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8016CBC8 001699C8*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8016CBCC 001699CC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016CBD0 001699D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016CBD4 001699D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016CBD8 001699D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CBDC 001699DC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016CBE0 001699E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CBE4 001699E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016CBE8 001699E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016CBEC 001699EC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016CBF0 001699F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CBF4 001699F4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016CBF8 001699F8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016CBFC 001699FC*/ PPC::Runtime::ASM::bl(fn_8016D918);
/*8016CC00 00169A00*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016CC04 00169A04*/ PPC::Runtime::ASM::bl(fn_80142EBC);
/*8016CC08 00169A08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8016CC0C 00169A0C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016CC10 00169A10*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8016CC14 00169A14*/ PPC::Runtime::ASM::b(.L_8016CCD8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CC18, 0x8016CC18) //this is a jump label
/*8016CC18 00169A18*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016CC1C 00169A1C*/ PPC::Runtime::ASM::bl(fn_8016E6C0);
/*8016CC20 00169A20*/ PPC::Runtime::ASM::b(.L_8016CCD8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CC24, 0x8016CC24) //this is a jump label
/*8016CC24 00169A24*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016CC28 00169A28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb20, context->r3));
/*8016CC2C 00169A2C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8016CC30 00169A30*/ PPC::Runtime::ASM::beq(.L_8016CCD8);
/*8016CC34 00169A34*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CC38 00169A38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8016CC3C 00169A3C*/ PPC::Runtime::ASM::subi(context->r28, context->r3, 0x2);
/*8016CC40 00169A40*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CC44 00169A44*/ PPC::Runtime::ASM::mulli(context->r29, context->r3, 0x50);
/*8016CC48 00169A48*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r29);
/*8016CC4C 00169A4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r31));
/*8016CC50 00169A50*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016CC54 00169A54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016CC58 00169A58*/ PPC::Runtime::ASM::beq(.L_8016CCCC);
/*8016CC5C 00169A5C*/ PPC::Runtime::ASM::bge(.L_8016CCD8);
/*8016CC60 00169A60*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016CC64 00169A64*/ PPC::Runtime::ASM::bge(.L_8016CC70);
/*8016CC68 00169A68*/ PPC::Runtime::ASM::b(.L_8016CCD8);
/*8016CC6C 00169A6C*/ PPC::Runtime::ASM::b(.L_8016CCD8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CC70, 0x8016CC70) //this is a jump label
/*8016CC70 00169A70*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8016CC74 00169A74*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8016CC78 00169A78*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016CC7C 00169A7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016CC80 00169A80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016CC84 00169A84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CC88 00169A88*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016CC8C 00169A8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CC90 00169A90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016CC94 00169A94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016CC98 00169A98*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016CC9C 00169A9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CCA0 00169AA0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016CCA4 00169AA4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CCA8 00169AA8*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x2);
/*8016CCAC 00169AAC*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CCB0 00169AB0*/ PPC::Runtime::ASM::bl(fn_8016D918);
/*8016CCB4 00169AB4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CCB8 00169AB8*/ PPC::Runtime::ASM::bl(fn_80142EBC);
/*8016CCBC 00169ABC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8016CCC0 00169AC0*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016CCC4 00169AC4*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8016CCC8 00169AC8*/ PPC::Runtime::ASM::b(.L_8016CCD8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CCCC, 0x8016CCCC) //this is a jump label
/*8016CCCC 00169ACC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*8016CCD0 00169AD0*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8016CCD4 00169AD4*/ PPC::Runtime::ASM::bl(fn_8016E6C0);
RUNTIME_PPC_JUMP_LABEL(.L_8016CCD8, 0x8016CCD8) //this is a jump label
/*8016CCD8 00169AD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016CCDC 00169ADC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016CCE0 00169AE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016CCE4 00169AE4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016CCE8 00169AE8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016CCEC 00169AEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016CCF0 00169AF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016CCF4 00169AF4*/ PPC::Runtime::ASM::blr();
}