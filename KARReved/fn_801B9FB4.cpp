//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2818.hpp"



void fn_801B9FB4(PPC::Runtime::GCContext* context)
{
/*801B9FB4 001B6DB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B9FB8 001B6DB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B9FBC 001B6DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B9FC0 001B6DC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r3));
/*801B9FC4 001B6DC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801B9FC8 001B6DC8*/ PPC::Runtime::ASM::bne(.L_801B9FD0);
/*801B9FCC 001B6DCC*/ PPC::Runtime::ASM::bl(fn_801A2818);
RUNTIME_PPC_JUMP_LABEL(.L_801B9FD0, 0x801B9FD0) //this is a jump label
/*801B9FD0 001B6DD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B9FD4 001B6DD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B9FD8 001B6DD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B9FDC 001B6DDC*/ PPC::Runtime::ASM::blr();
}