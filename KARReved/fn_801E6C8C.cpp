//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C8E50.hpp"



void fn_801E6C8C(PPC::Runtime::GCContext* context)
{
/*801E6C8C 001E3A8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E6C90 001E3A90*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E6C94 001E3A94*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801E6C98 001E3A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E6C9C 001E3A9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E6CA0 001E3AA0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801E6CA4 001E3AA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E6CA8 001E3AA8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E6CAC 001E3AAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc31, context->r3));
/*801E6CB0 001E3AB0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*801E6CB4 001E3AB4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc31, context->r3));
/*801E6CB8 001E3AB8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r3));
/*801E6CBC 001E3ABC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r4, 2, 24);
/*801E6CC0 001E3AC0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*801E6CC4 001E3AC4*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 6, 24, 25);
/*801E6CC8 001E3AC8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r3));
/*801E6CCC 001E3ACC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r3));
/*801E6CD0 001E3AD0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 29, 29);
/*801E6CD4 001E3AD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r3));
/*801E6CD8 001E3AD8*/ PPC::Runtime::ASM::bl(fn_801C8E50);
/*801E6CDC 001E3ADC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc37, context->r30));
/*801E6CE0 001E3AE0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E6CE4 001E3AE4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801E6CE8 001E3AE8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc37, context->r30));
/*801E6CEC 001E3AEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*801E6CF0 001E3AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r30));
/*801E6CF4 001E3AF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*801E6CF8 001E3AF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*801E6CFC 001E3AFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r30));
/*801E6D00 001E3B00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b50, context->r30));
/*801E6D04 001E3B04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*801E6D08 001E3B08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b54, context->r30));
/*801E6D0C 001E3B0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E6D10 001E3B10*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E6D14 001E3B14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E6D18 001E3B18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E6D1C 001E3B1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E6D20 001E3B20*/ PPC::Runtime::ASM::blr();
}