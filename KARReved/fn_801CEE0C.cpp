//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80064C18.hpp"



void fn_801CEE0C(PPC::Runtime::GCContext* context)
{
/*801CEE0C 001CBC0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801CEE10 001CBC10*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CEE14 001CBC14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CEE18 001CBC18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CEE1C 001CBC1C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CEE20 001CBC20*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801CEE24 001CBC24*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801CEE28 001CBC28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801CEE2C 001CBC2C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CEE30 001CBC30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CEE34 001CBC34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801CEE38 001CBC38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CEE3C 001CBC3C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801CEE40 001CBC40*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CEE44 001CBC44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CEE48 001CBC48*/ PPC::Runtime::ASM::ble(.L_801CEE84);
/*801CEE4C 001CBC4C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x738);
/*801CEE50 001CBC50*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801CEE54 001CBC54*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801CEE58 001CBC58*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801CEE5C 001CBC5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CEE60 001CBC60*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CEE64 001CBC64*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801CEE68 001CBC68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801CEE6C 001CBC6C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CEE70 001CBC70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801CEE74 001CBC74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801CEE78 001CBC78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CEE7C 001CBC7C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801CEE80 001CBC80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CEE84, 0x801CEE84) //this is a jump label
/*801CEE84 001CBC84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CEE88 001CBC88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CEE8C 001CBC8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CEE90 001CBC90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801CEE94 001CBC94*/ PPC::Runtime::ASM::blr();
}