//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005E7D8.hpp"
#include "fn_801DD17C.hpp"
#include "fn_8005F6A8.hpp"
#include "fn_801DD264.hpp"



void fn_801DCB18(PPC::Runtime::GCContext* context)
{
/*801DCB18 001D9918*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801DCB1C 001D991C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DCB20 001D9920*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DCB24 001D9924*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801DCB28 001D9928*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801DCB2C 001D992C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801DCB30 001D9930*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r3));
/* 801DCB34 001D9934  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801DCB38 001D9938*/ PPC::Runtime::ASM::beq(.L_801DCB60);
/*801DCB3C 001D993C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*801DCB40 001D9940*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801DCB44 001D9944*/ PPC::Runtime::ASM::beq(.L_801DCCD4);
/*801DCB48 001D9948*/ PPC::Runtime::ASM::bl(fn_8005E7D8);
/*801DCB4C 001D994C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801DCB50 001D9950*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DCB54 001D9954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*801DCB58 001D9958*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r31));
/*801DCB5C 001D995C*/ PPC::Runtime::ASM::b(.L_801DCCD4);
RUNTIME_PPC_JUMP_LABEL(.L_801DCB60, 0x801DCB60) //this is a jump label
/*801DCB60 001D9960*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801DCB64 001D9964*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801DCB68 001D9968*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*801DCB6C 001D996C*/ PPC::Runtime::ASM::slwi(context->r5, context->r5, 2);
/*801DCB70 001D9970*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD844 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DCB74 001D9974*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x94);
/*801DCB78 001D9978*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801DCB7C 001D997C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r6, context->r5);
/*801DCB80 001D9980*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r4);
/*801DCB84 001D9984*/ PPC::Runtime::ASM::bne(.L_801DCB98);
/*801DCB88 001D9988*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801DCB8C 001D998C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DCB90 001D9990*/ PPC::Runtime::ASM::bl(fn_801DD17C);
/*801DCB94 001D9994*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801DCB98, 0x801DCB98) //this is a jump label
/*801DCB98 001D9998*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x870, context->r31));
/*801DCB9C 001D999C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r30));
/*801DCBA0 001D99A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DCBA4 001D99A4*/ PPC::Runtime::ASM::fmuls(context->f5, context->f2, context->f1);
/*801DCBA8 001D99A8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*801DCBAC 001D99AC*/ PPC::Runtime::ASM::ble(.L_801DCBB4);
/*801DCBB0 001D99B0*/ PPC::Runtime::ASM::fmr(context->f5, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DCBB4, 0x801DCBB4) //this is a jump label
/*801DCBB4 001D99B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x880, context->r31));
/*801DCBB8 001D99B8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801DCBBC 001D99BC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*801DCBC0 001D99C0*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*801DCBC4 001D99C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*801DCBC8 001D99C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DCBCC 001D99CC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f3);
/*801DCBD0 001D99D0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E1C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DCBD4 001D99D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DCBD8 001D99D8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*801DCBDC 001D99DC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DCBE0 001D99E0*/ PPC::Runtime::ASM::fmadds(context->f2, context->f5, context->f2, context->f3);
/*801DCBE4 001D99E4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801DCBE8 001D99E8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f0);
/*801DCBEC 001D99EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f4);
/*801DCBF0 001D99F0*/ PPC::Runtime::ASM::ble(.L_801DCBFC);
/*801DCBF4 001D99F4*/ PPC::Runtime::ASM::fmr(context->f1, context->f4);
/*801DCBF8 001D99F8*/ PPC::Runtime::ASM::b(.L_801DCC0C);
RUNTIME_PPC_JUMP_LABEL(.L_801DCBFC, 0x801DCBFC) //this is a jump label
/*801DCBFC 001D99FC*/ PPC::Runtime::ASM::fneg(context->f0, context->f4);
/*801DCC00 001D9A00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801DCC04 001D9A04*/ PPC::Runtime::ASM::bge(.L_801DCC0C);
/*801DCC08 001D9A08*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DCC0C, 0x801DCC0C) //this is a jump label
/*801DCC0C 001D9A0C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f1);
/*801DCC10 001D9A10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x880, context->r31));
/*801DCC14 001D9A14*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DCC18 001D9A18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DCC1C 001D9A1C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*801DCC20 001D9A20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x880, context->r31));
/*801DCC24 001D9A24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x880, context->r31));
/*801DCC28 001D9A28*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x960);
/*801DCC2C 001D9A2C*/ PPC::Runtime::ASM::ble(.L_801DCC38);
/*801DCC30 001D9A30*/ PPC::Runtime::ASM::li(context->r0, 0x960);
/*801DCC34 001D9A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x880, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801DCC38, 0x801DCC38) //this is a jump label
/*801DCC38 001D9A38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*801DCC3C 001D9A3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x880, context->r31));
/*801DCC40 001D9A40*/ PPC::Runtime::ASM::bl(fn_8005F6A8);
/*801DCC44 001D9A44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x754, context->r31));
/*801DCC48 001D9A48*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x870, context->r31));
/*801DCC4C 001D9A4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*801DCC50 001D9A50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801DCC54 001D9A54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*801DCC58 001D9A58*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f1, context->f0);
/*801DCC5C 001D9A5C*/ PPC::Runtime::ASM::bne(.L_801DCC68);
/*801DCC60 001D9A60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*801DCC64 001D9A64*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DCC68, 0x801DCC68) //this is a jump label
/*801DCC68 001D9A68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/* 801DCC6C 001D9A6C  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*801DCC70 001D9A70*/ PPC::Runtime::ASM::beq(.L_801DCC7C);
/*801DCC74 001D9A74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*801DCC78 001D9A78*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DCC7C, 0x801DCC7C) //this is a jump label
/*801DCC7C 001D9A7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r31));
/*801DCC80 001D9A80*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*801DCC84 001D9A84*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f0);
/*801DCC88 001D9A88*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*801DCC8C 001D9A8C*/ PPC::Runtime::ASM::ble(.L_801DCC98);
/*801DCC90 001D9A90*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801DCC94 001D9A94*/ PPC::Runtime::ASM::b(.L_801DCCA8);
RUNTIME_PPC_JUMP_LABEL(.L_801DCC98, 0x801DCC98) //this is a jump label
/*801DCC98 001D9A98*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*801DCC9C 001D9A9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801DCCA0 001D9AA0*/ PPC::Runtime::ASM::bge(.L_801DCCA8);
/*801DCCA4 001D9AA4*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801DCCA8, 0x801DCCA8) //this is a jump label
/*801DCCA8 001D9AA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r31));
/*801DCCAC 001D9AAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DCCB0 001D9AB0*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f2);
/*801DCCB4 001D9AB4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r31));
/*801DCCB8 001D9AB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r31));
/*801DCCBC 001D9ABC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801DCCC0 001D9AC0*/ PPC::Runtime::ASM::ble(.L_801DCCC8);
/*801DCCC4 001D9AC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801DCCC8, 0x801DCCC8) //this is a jump label
/*801DCCC8 001D9AC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*801DCCCC 001D9ACC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x884, context->r31));
/*801DCCD0 001D9AD0*/ PPC::Runtime::ASM::bl(fn_801DD264);
RUNTIME_PPC_JUMP_LABEL(.L_801DCCD4, 0x801DCCD4) //this is a jump label
/*801DCCD4 001D9AD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801DCCD8 001D9AD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801DCCDC 001D9ADC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801DCCE0 001D9AE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DCCE4 001D9AE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801DCCE8 001D9AE8*/ PPC::Runtime::ASM::blr();
}