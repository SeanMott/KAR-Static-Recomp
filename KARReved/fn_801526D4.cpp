//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_801526D4(PPC::Runtime::GCContext* context)
{
/*801526D4 0014F4D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801526D8 0014F4D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801526DC 0014F4DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801526E0 0014F4E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801526E4 0014F4E4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801526E8 0014F4E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801526EC 0014F4EC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801526F0 0014F4F0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801526F4 0014F4F4*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*801526F8 0014F4F8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801526FC 0014F4FC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80152700 0014F500*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r3));
/*80152704 0014F504*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80152708 0014F508*/ PPC::Runtime::ASM::beq(.L_80152724);
/*8015270C 0014F50C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80152710 0014F510*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*80152714 0014F514*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0718 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152718 0014F518*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8015271C 0014F51C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80152720 0014F520*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80152724, 0x80152724) //this is a jump label
/*80152724 0014F524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80152728 0014F528*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015272C 0014F52C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80152730 0014F530*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80152734 0014F534*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80152738 0014F538*/ PPC::Runtime::ASM::blr();
}