//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D0424.hpp"



void fn_801D0498(PPC::Runtime::GCContext* context)
{
/*801D0498 001CD298*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D049C 001CD29C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D04A0 001CD2A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D04A4 001CD2A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801D04A8 001CD2A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x710, context->r3));
/*801D04AC 001CD2AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r3));
/*801D04B0 001CD2B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*801D04B4 001CD2B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r4));
/*801D04B8 001CD2B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801D04BC 001CD2BC*/ PPC::Runtime::ASM::beq(.L_801D04C8);
/*801D04C0 001CD2C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb80, context->r3));
/*801D04C4 001CD2C4*/ PPC::Runtime::ASM::bl(fn_801D0424);
RUNTIME_PPC_JUMP_LABEL(.L_801D04C8, 0x801D04C8) //this is a jump label
/*801D04C8 001CD2C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D04CC 001CD2CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D04D0 001CD2D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D04D4 001CD2D4*/ PPC::Runtime::ASM::blr();
}