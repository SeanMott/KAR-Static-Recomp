//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FCC8.hpp"
#include "fn_801C2C14.hpp"
#include "fn_801C2E2C.hpp"
#include "fn_80195588.hpp"



void fn_801C2A28(PPC::Runtime::GCContext* context)
{
/*801C2A28 001BF828*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C2A2C 001BF82C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C2A30 001BF830*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2A34 001BF834*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C2A38 001BF838*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C2A3C 001BF83C*/ PPC::Runtime::ASM::bl(fn_8019FCC8);
/*801C2A40 001BF840*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C2A44 001BF844*/ PPC::Runtime::ASM::bl(fn_801C2C14);
/*801C2A48 001BF848*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C2A4C 001BF84C*/ PPC::Runtime::ASM::bne(.L_801C2AF4);
/*801C2A50 001BF850*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C2A54 001BF854*/ PPC::Runtime::ASM::bl(fn_801C2E2C);
/*801C2A58 001BF858*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C2A5C 001BF85C*/ PPC::Runtime::ASM::bne(.L_801C2AF4);
/*801C2A60 001BF860*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r31));
/*801C2A64 001BF864*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1940 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C2A68 001BF868*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801C2A6C 001BF86C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801C2A70 001BF870*/ PPC::Runtime::ASM::bge(.L_801C2A78);
/*801C2A74 001BF874*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_801C2A78, 0x801C2A78) //this is a jump label
/*801C2A78 001BF878*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801C2A7C 001BF87C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801C2A80 001BF880*/ PPC::Runtime::ASM::bge(.L_801C2AF4);
/*801C2A84 001BF884*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r31));
/*801C2A88 001BF888*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C2A8C 001BF88C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801C2A90 001BF890*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801C2A94 001BF894*/ PPC::Runtime::ASM::bne(.L_801C2AB0);
/*801C2A98 001BF898*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E194C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C2A9C 001BF89C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801C2AA0 001BF8A0*/ PPC::Runtime::ASM::bge(.L_801C2AB0);
/*801C2AA4 001BF8A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/* 801C2AA8 001BF8A8  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801C2AAC 001BF8AC*/ PPC::Runtime::ASM::beq(.L_801C2ACC);
RUNTIME_PPC_JUMP_LABEL(.L_801C2AB0, 0x801C2AB0) //this is a jump label
/*801C2AB0 001BF8B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E194C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C2AB4 001BF8B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801C2AB8 001BF8B8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801C2ABC 001BF8BC*/ PPC::Runtime::ASM::bne(.L_801C2AF4);
/*801C2AC0 001BF8C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/* 801C2AC4 001BF8C4  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801C2AC8 001BF8C8*/ PPC::Runtime::ASM::beq(.L_801C2AF4);
RUNTIME_PPC_JUMP_LABEL(.L_801C2ACC, 0x801C2ACC) //this is a jump label
/*801C2ACC 001BF8CC*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*801C2AD0 001BF8D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C2AD4 001BF8D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C2AD8 001BF8D8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x74);
/*801C2ADC 001BF8DC*/ PPC::Runtime::ASM::bl(fn_80195588);
/*801C2AE0 001BF8E0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*801C2AE4 001BF8E4*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 1, 24);
/*801C2AE8 001BF8E8*/ PPC::Runtime::ASM::xori(context->r0, context->r0, 0x1);
/*801C2AEC 001BF8EC*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*801C2AF0 001BF8F0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801C2AF4, 0x801C2AF4) //this is a jump label
/*801C2AF4 001BF8F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2AF8 001BF8F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C2AFC 001BF8FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C2B00 001BF900*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C2B04 001BF904*/ PPC::Runtime::ASM::blr();
}