//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D1CD0.hpp"
#include "fn_8000A2A0.hpp"
#include "fn_801CF1B8.hpp"
#include "fn_801C9B7C.hpp"
#include "fn_801CA00C.hpp"
#include "fn_801E9188.hpp"



void fn_801E7F3C(PPC::Runtime::GCContext* context)
{
/*801E7F3C 001E4D3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801E7F40 001E4D40*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E7F44 001E4D44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E7F48 001E4D48*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E7F4C 001E4D4C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801E7F50 001E4D50*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E7F54 001E4D54*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E7F58 001E4D58*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801E7F5C 001E4D5C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r3));
/*801E7F60 001E4D60*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E7F64 001E4D64*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r6));
/*801E7F68 001E4D68*/ PPC::Runtime::ASM::bl(fn_801D1CD0);
/*801E7F6C 001E4D6C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x384, context->r31));
/*801E7F70 001E4D70*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801E7F74 001E4D74*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E7F78 001E4D78*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x388, context->r31));
/*801E7F7C 001E4D7C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r31));
/*801E7F80 001E4D80*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6ec, context->r31));
/*801E7F84 001E4D84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b0, context->r31));
/*801E7F88 001E4D88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f0, context->r31));
/*801E7F8C 001E4D8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3f, context->r31));
/*801E7F90 001E4D90*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801E7F94 001E4D94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3f, context->r31));
/*801E7F98 001E4D98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801E7F9C 001E4D9C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3f, context->r31));
/*801E7FA0 001E4DA0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801E7FA4 001E4DA4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3f, context->r31));
/*801E7FA8 001E4DA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc5c, context->r31));
/*801E7FAC 001E4DAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc70, context->r31));
/*801E7FB0 001E4DB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc54, context->r31));
/*801E7FB4 001E4DB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc58, context->r31));
/*801E7FB8 001E4DB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc64, context->r31));
/*801E7FBC 001E4DBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a40, context->r31));
/*801E7FC0 001E4DC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a44, context->r31));
/*801E7FC4 001E4DC4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4c, context->r31));
/*801E7FC8 001E4DC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a48, context->r31));
/*801E7FCC 001E4DCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a54, context->r31));
/*801E7FD0 001E4DD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a50, context->r31));
/*801E7FD4 001E4DD4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a5c, context->r31));
/*801E7FD8 001E4DD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a58, context->r31));
/*801E7FDC 001E4DDC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a64, context->r31));
/*801E7FE0 001E4DE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a60, context->r31));
/*801E7FE4 001E4DE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a6c, context->r31));
/*801E7FE8 001E4DE8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a68, context->r31));
/*801E7FEC 001E4DEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a74, context->r31));
/*801E7FF0 001E4DF0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a70, context->r31));
/*801E7FF4 001E4DF4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a7c, context->r31));
/*801E7FF8 001E4DF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a78, context->r31));
/*801E7FFC 001E4DFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a84, context->r31));
/*801E8000 001E4E00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a80, context->r31));
/*801E8004 001E4E04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8c, context->r31));
/*801E8008 001E4E08*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a88, context->r31));
/*801E800C 001E4E0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a94, context->r31));
/*801E8010 001E4E10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a90, context->r31));
/*801E8014 001E4E14*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a9c, context->r31));
/*801E8018 001E4E18*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a98, context->r31));
/*801E801C 001E4E1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1aa4, context->r31));
/*801E8020 001E4E20*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1aa0, context->r31));
/*801E8024 001E4E24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1aac, context->r31));
/*801E8028 001E4E28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1aa8, context->r31));
/*801E802C 001E4E2C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ab4, context->r31));
/*801E8030 001E4E30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ab0, context->r31));
/*801E8034 001E4E34*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1abc, context->r31));
/*801E8038 001E4E38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ab8, context->r31));
/*801E803C 001E4E3C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3c, context->r31));
/*801E8040 001E4E40*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3d, context->r31));
/*801E8044 001E4E44*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3e, context->r31));
/*801E8048 001E4E48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3f, context->r31));
/*801E804C 001E4E4C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*801E8050 001E4E50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3f, context->r31));
/*801E8054 001E4E54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3b, context->r31));
/* 801E8058 001E4E58  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*801E805C 001E4E5C*/ PPC::Runtime::ASM::beq(.L_801E80C0);
/*801E8060 001E4E60*/ PPC::Runtime::ASM::bl(fn_8000A2A0);
/*801E8064 001E4E64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E8068 001E4E68*/ PPC::Runtime::ASM::bne(.L_801E80C0);
/*801E806C 001E4E6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1E4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E8070 001E4E70*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E8074 001E4E74*/ PPC::Runtime::ASM::bl(fn_801CF1B8);
/*801E8078 001E4E78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r31));
/*801E807C 001E4E7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E8080 001E4E80*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x428, context->r31));
/*801E8084 001E4E84*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f31);
/*801E8088 001E4E88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5c, context->r31));
/*801E808C 001E4E8C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42c, context->r31));
/*801E8090 001E4E90*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f31);
/*801E8094 001E4E94*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801E8098 001E4E98*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f31);
/*801E809C 001E4E9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r31));
/*801E80A0 001E4EA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r31));
/*801E80A4 001E4EA4*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f3);
/*801E80A8 001E4EA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*801E80AC 001E4EAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb64, context->r31));
/*801E80B0 001E4EB0*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*801E80B4 001E4EB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801E80B8 001E4EB8*/ PPC::Runtime::ASM::bl(fn_801C9B7C);
/*801E80BC 001E4EBC*/ PPC::Runtime::ASM::b(.L_801E80D0);
RUNTIME_PPC_JUMP_LABEL(.L_801E80C0, 0x801E80C0) //this is a jump label
/*801E80C0 001E4EC0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801E80C4 001E4EC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E80C8 001E4EC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*801E80CC 001E4ECC*/ PPC::Runtime::ASM::bl(fn_801CA00C);
RUNTIME_PPC_JUMP_LABEL(.L_801E80D0, 0x801E80D0) //this is a jump label
/*801E80D0 001E4ED0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E80D4 001E4ED4*/ PPC::Runtime::ASM::bl(fn_801E9188);
/*801E80D8 001E4ED8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801E80DC 001E4EDC*/ PPC::Runtime::ASM::lis(context->r3, StructStuffWithOffsetsAndFuncs_3 @ Get_MemoryOffset_HighBit);
/*801E80E0 001E4EE0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructStuffWithOffsetsAndFuncs_3 @ Get_MemoryOffset_LowBit);
/*801E80E4 001E4EE4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801E80E8 001E4EE8*/ PPC::Runtime::ASM::lwzx(context->r12, context->r3, context->r0);
/*801E80EC 001E4EEC*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801E80F0 001E4EF0*/ PPC::Runtime::ASM::beq(.L_801E8100);
/*801E80F4 001E4EF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E80F8 001E4EF8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801E80FC 001E4EFC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801E8100, 0x801E8100) //this is a jump label
/*801E8100 001E4F00*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801E8104 001E4F04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E8108 001E4F08*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E810C 001E4F0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E8110 001E4F10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E8114 001E4F14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801E8118 001E4F18*/ PPC::Runtime::ASM::blr();
}