//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138AB0.hpp"



void fn_80177110(PPC::Runtime::GCContext* context)
{
/*80177110 00173F10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80177114 00173F14*/ PPC::Runtime::ASM::mflr(context->r0);
/*80177118 00173F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017711C 00173F1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80177120 00173F20*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80177124 00173F24*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80177128 00173F28*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8017712C 00173F2C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xd04);
/*80177130 00173F30*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80177134 00173F34*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*80177138 00173F38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8017713C 00173F3C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80177140 00173F40*/ PPC::Runtime::ASM::beq(.L_80177164);
/*80177144 00173F44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80177148 00173F48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8017714C 00173F4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80177150 00173F50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80177154 00173F54*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0C70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80177158 00173F58*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8017715C 00173F5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80177160 00173F60*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80177164, 0x80177164) //this is a jump label
/*80177164 00173F64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80177168 00173F68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017716C 00173F6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80177170 00173F70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80177174 00173F74*/ PPC::Runtime::ASM::blr();
}