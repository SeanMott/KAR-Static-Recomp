//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80175F48(PPC::Runtime::GCContext* context)
{
/*80175F48 00172D48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80175F4C 00172D4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80175F50 00172D50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80175F54 00172D54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80175F58 00172D58*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80175F5C 00172D5C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80175F60 00172D60*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80175F64 00172D64*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80175F68 00172D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd8, context->r3));
/*80175F6C 00172D6C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80175F70 00172D70*/ PPC::Runtime::ASM::beq(.L_80175F9C);
/*80175F74 00172D74*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80175F78 00172D78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80175F7C 00172D7C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x78);
/*80175F80 00172D80*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80175F84 00172D84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*80175F88 00172D88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*80175F8C 00172D8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80175F90 00172D90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80175F94 00172D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r4));
/*80175F98 00172D98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80175F9C, 0x80175F9C) //this is a jump label
/*80175F9C 00172D9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80175FA0 00172DA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80175FA4 00172DA4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80175FA8 00172DA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80175FAC 00172DAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80175FB0 00172DB0*/ PPC::Runtime::ASM::blr();
}