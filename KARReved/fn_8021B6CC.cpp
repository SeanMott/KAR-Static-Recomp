//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE764.hpp"
#include "fn_8021BA14.hpp"



void fn_8021B6CC(PPC::Runtime::GCContext* context)
{
/*8021B6CC 002184CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021B6D0 002184D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021B6D4 002184D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2700 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021B6D8 002184D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021B6DC 002184DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021B6E0 002184E0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021B6E4 002184E4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x334);
/*8021B6E8 002184E8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8021B6EC 002184EC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2f8);
/*8021B6F0 002184F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8021B6F4 002184F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8021B6F8 002184F8*/ PPC::Runtime::ASM::bl(fn_801FE764);
/*8021B6FC 002184FC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8021B700 00218500*/ PPC::Runtime::ASM::beq(.L_8021B70C);
/*8021B704 00218504*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021B708 00218508*/ PPC::Runtime::ASM::bl(fn_8021BA14);
RUNTIME_PPC_JUMP_LABEL(.L_8021B70C, 0x8021B70C) //this is a jump label
/*8021B70C 0021850C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021B710 00218510*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021B714 00218514*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021B718 00218518*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021B71C 0021851C*/ PPC::Runtime::ASM::blr();
}