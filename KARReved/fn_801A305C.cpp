//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80247FAC.hpp"
#include "fn_800D1F3C.hpp"
#include "fn_801A3388.hpp"
#include "fn_calcDistanceFromOOB.hpp"
#include "fn_801A3388.hpp"



void fn_801A305C(PPC::Runtime::GCContext* context)
{
/*801A305C 0019FE5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A3060 0019FE60*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A3064 0019FE64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A3068 0019FE68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A306C 0019FE6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A3070 0019FE70*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A3074 0019FE74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r3));
/* 801A3078 0019FE78  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*801A307C 0019FE7C*/ PPC::Runtime::ASM::bne(.L_801A30DC);
/*801A3080 0019FE80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x670, context->r30));
/*801A3084 0019FE84*/ PPC::Runtime::ASM::bl(fn_80247FAC);
/*801A3088 0019FE88*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A308C 0019FE8C*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801A3090 0019FE90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A3094 0019FE94*/ PPC::Runtime::ASM::bne(.L_801A30B0);
/*801A3098 0019FE98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A309C 0019FE9C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A30A0 0019FEA0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x474);
/*801A30A4 0019FEA4*/ PPC::Runtime::ASM::bl(fn_801A3388);
/*801A30A8 0019FEA8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A30AC 0019FEAC*/ PPC::Runtime::ASM::b(.L_801A30E0);
RUNTIME_PPC_JUMP_LABEL(.L_801A30B0, 0x801A30B0) //this is a jump label
/*801A30B0 0019FEB0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x300);
/*801A30B4 0019FEB4*/ PPC::Runtime::ASM::bl(fn_calcDistanceFromOOB);
/*801A30B8 0019FEB8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1290 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A30BC 0019FEBC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801A30C0 0019FEC0*/ PPC::Runtime::ASM::bge(.L_801A30DC);
/*801A30C4 0019FEC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A30C8 0019FEC8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A30CC 0019FECC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x474);
/*801A30D0 0019FED0*/ PPC::Runtime::ASM::bl(fn_801A3388);
/*801A30D4 0019FED4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A30D8 0019FED8*/ PPC::Runtime::ASM::b(.L_801A30E0);
RUNTIME_PPC_JUMP_LABEL(.L_801A30DC, 0x801A30DC) //this is a jump label
/*801A30DC 0019FEDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A30E0, 0x801A30E0) //this is a jump label
/*801A30E0 0019FEE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A30E4 0019FEE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A30E8 0019FEE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A30EC 0019FEEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A30F0 0019FEF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A30F4 0019FEF4*/ PPC::Runtime::ASM::blr();
}