//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8015FA5C(PPC::Runtime::GCContext* context)
{
/*8015FA5C 0015C85C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015FA60 0015C860*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015FA64 0015C864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015FA68 0015C868*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015FA6C 0015C86C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8015FA70 0015C870*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015FA74 0015C874*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8015FA78 0015C878*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015FA7C 0015C87C*/ PPC::Runtime::ASM::extsb(context->r4, context->r30);
/*8015FA80 0015C880*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8015FA84 0015C884*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 3);
/*8015FA88 0015C888*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*8015FA8C 0015C88C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015FA90 0015C890*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*8015FA94 0015C894*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*8015FA98 0015C898*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015FA9C 0015C89C*/ PPC::Runtime::ASM::beq(.L_8015FAAC);
/*8015FAA0 0015C8A0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8015FAA4 0015C8A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8015FAA8 0015C8A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8015FAAC, 0x8015FAAC) //this is a jump label
/*8015FAAC 0015C8AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015FAB0 0015C8B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015FAB4 0015C8B4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015FAB8 0015C8B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015FABC 0015C8BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015FAC0 0015C8C0*/ PPC::Runtime::ASM::blr();
}